#!/usr/bin/env python3
"""Decompile one PE module (exe/dll) with Ghidra into decomp/<module>/.

Prework for porting: every function, including ones reached only through
pointers (vtables, initterm, callbacks), which plain auto-analysis misses.

  * function starts are seeded from every .rdata/.data dword that points
    into .text, plus `push imm32` operands that point into .text;
  * the MSVC _alloca_probe/__chkstk helper is found by its byte pattern and
    given Ghidra's "alloca_probe" call fixup, so big-frame functions
    decompile without garbage in_stack_ parameters;
  * output: decomp/<module>/funcs/<addr>.c, meta/<addr>.json (signature,
    calling convention, thunk flag, callees, callers, called imports as
    DLL!name, raw bytes), index.tsv
    (addr, size, name, seeded?), callgraph.json, exports.tsv, imports.tsv.

The Ghidra project lives in ghidra_mods/<module> (gitignored) so a later
session can re-open it. Never touches game/ or ghidra_proj/.

usage: venv/bin/python -I tools/decomp/decomp_module.py [--meta-only] game/EXE/foo.dll
       (needs GHIDRA_INSTALL_DIR)
       --meta-only re-opens the existing ghidra_mods/<module> project and only
       (re)writes meta/, without re-running prework or the decompiler.
"""
import json
import os
import struct
import sys

import pyghidra

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
ALLOCA_PROBE = bytes.fromhex("513d001000008d4c2408")   # push ecx; cmp eax,0x1000; lea ecx,[esp+8]


def _external_name(prog, addr):
    """"DLL!name" for an external address, else None."""
    if not addr.isExternalAddress():
        return None
    sym = prog.getSymbolTable().getPrimarySymbol(addr)
    if sym is None:
        return None
    return "%s!%s" % (sym.getParentNamespace().getName(), sym.getName())


def write_meta(api, f, mon, out, seeded=None):
    """meta/<addr>.json. `imports` lists every external the function reaches:
    called externals (through thunks too) and direct `call/jmp [IAT]`
    references; `callees` holds code addresses only."""
    prog = api.getCurrentProgram()
    refman = prog.getReferenceManager()
    name = "%08x" % f.getEntryPoint().getOffset()
    addr = f.getEntryPoint()
    size = int(f.getBody().getMaxAddress().getOffset() - addr.getOffset() + 1)
    callees, imports = set(), set()
    for c in f.getCalledFunctions(mon):
        t = c.getThunkedFunction(True) if c.isThunk() else c
        if c.isExternal() or (t is not None and t.isExternal()):
            ext = t if t is not None else c
            imports.add("%s!%s" % (ext.getParentNamespace().getName(), ext.getName()))
            if not c.isExternal():
                callees.add("%08x" % c.getEntryPoint().getOffset())
        else:
            callees.add("%08x" % c.getEntryPoint().getOffset())
    for a in f.getBody().getAddresses(True):
        for ref in refman.getReferencesFrom(a):
            to = ref.getToAddress()
            n = _external_name(prog, to)
            if n is None and to.isMemoryAddress():
                for ref2 in refman.getReferencesFrom(to):     # IAT slot -> external
                    n = _external_name(prog, ref2.getToAddress()) or n
            if n is not None:
                imports.add(n)
    meta = {"addr": name, "name": f.getName(), "size": size,
            "signature": f.getPrototypeString(True, False),
            "calling_convention": f.getCallingConventionName(),
            "is_thunk": f.isThunk(),
            "callees": sorted(callees),
            "callers": sorted("%08x" % c.getEntryPoint().getOffset()
                              for c in f.getCallingFunctions(mon)),
            "imports": sorted(imports),
            "bytes": bytes(b & 0xff for b in api.getBytes(addr, size)).hex()}
    if seeded is not None:
        meta["seeded"] = seeded
    with open(os.path.join(out, "meta", name + ".json"), "w") as fh:
        json.dump(meta, fh, indent=1)
    return meta


def main():
    meta_only = "--meta-only" in sys.argv[1:]
    path = os.path.abspath([a for a in sys.argv[1:] if a != "--meta-only"][0])
    mod = os.path.basename(path).lower()
    out = os.path.join(ROOT, "decomp", mod)
    proj = os.path.join(ROOT, "ghidra_mods", mod)
    os.makedirs(os.path.join(out, "funcs"), exist_ok=True)
    os.makedirs(os.path.join(out, "meta"), exist_ok=True)
    os.makedirs(proj, exist_ok=True)

    pyghidra.start()
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.app.decompiler import DecompInterface
    from ghidra.app.plugin.core.analysis import AutoAnalysisManager
    from ghidra.program.model.symbol import SourceType
    from ghidra.util.task import TaskMonitor

    with pyghidra.open_program(path, project_location=proj, project_name=mod,
                               analyze=not meta_only) as api:
        prog = api.getCurrentProgram()
        mon = TaskMonitor.DUMMY
        if meta_only:
            n = 0
            seeded = set()
            idx = os.path.join(out, "index.tsv")
            if os.path.exists(idx):
                for line in open(idx).read().splitlines()[1:]:
                    cols = line.split("\t")
                    if len(cols) > 3 and cols[3] == "seed":
                        seeded.add(cols[0])
            for f in prog.getFunctionManager().getFunctions(True):
                if not f.isExternal():
                    a = "%08x" % f.getEntryPoint().getOffset()
                    write_meta(api, f, mon, out, a in seeded)
                    n += 1
            print(mod, n, "meta files")
            return
        mem, fm, listing = prog.getMemory(), prog.getFunctionManager(), prog.getListing()
        text = mem.getBlock(".text")
        lo, hi = text.getStart().getOffset(), text.getEnd().getOffset()

        def block_bytes(b):
            n = int(b.getSize())
            buf = bytearray(n)
            for i in range(n):
                try:
                    buf[i] = mem.getByte(b.getStart().add(i)) & 0xff
                except Exception:
                    pass
            return buf

        tx = prog.startTransaction("prework")
        # 1. _alloca_probe call fixup
        tbytes = block_bytes(text)
        probes = []
        i = tbytes.find(ALLOCA_PROBE)
        while i >= 0:
            a = api.toAddr(lo + i)
            f = fm.getFunctionAt(a)
            if f is None:
                api.disassemble(a)
                CreateFunctionCmd(a).applyTo(prog, mon)
                f = fm.getFunctionAt(a)
            if f is not None:
                f.setName("_alloca_probe", SourceType.USER_DEFINED)
                f.setCallFixup("alloca_probe")
                probes.append("%08x" % (lo + i))
            i = tbytes.find(ALLOCA_PROBE, i + 1)

        # 2. seed function starts from data pointers and push-imm operands
        seeds = set()
        for bn in (".rdata", ".data"):
            b = mem.getBlock(bn)
            if b is None:
                continue
            buf = block_bytes(b)
            for j in range(0, len(buf) - 3, 4):
                v = struct.unpack_from("<I", buf, j)[0]
                if lo <= v <= hi:
                    seeds.add(v)
        for j in range(len(tbytes) - 5):
            if tbytes[j] == 0x68:                      # push imm32
                v = struct.unpack_from("<I", tbytes, j + 1)[0]
                if lo <= v <= hi:
                    seeds.add(v)
        for v in sorted(seeds):
            a = api.toAddr(v)
            if fm.getFunctionContaining(a) is not None:
                continue
            ins = listing.getInstructionAt(a)
            if ins is None:
                api.disassemble(a)
                ins = listing.getInstructionAt(a)
            if ins is not None:
                CreateFunctionCmd(a).applyTo(prog, mon)
        AutoAnalysisManager.getAnalysisManager(prog).startAnalysis(mon)
        prog.endTransaction(tx, True)

        # 3. decompile everything
        ifc = DecompInterface()
        ifc.openProgram(prog)
        index, callgraph = [], {}
        for f in fm.getFunctions(True):
            if f.isExternal():
                continue
            ea = f.getEntryPoint().getOffset()
            name = "%08x" % ea
            r = ifc.decompileFunction(f, 120, mon)
            code = (r.getDecompiledFunction().getC() if r.decompileCompleted()
                    else "/* decompile failed: %s */\n" % r.getErrorMessage())
            with open(os.path.join(out, "funcs", name + ".c"), "w") as fh:
                fh.write(code)
            meta = write_meta(api, f, mon, out, ea in seeds)
            callgraph[name] = meta["callees"]
            index.append("%s\t%d\t%s\t%s" % (name, f.getBody().getNumAddresses(),
                                             f.getName(), "seed" if ea in seeds else ""))
        with open(os.path.join(out, "index.tsv"), "w") as fh:
            fh.write("addr\tsize\tname\tseeded\n" + "\n".join(index) + "\n")
        with open(os.path.join(out, "callgraph.json"), "w") as fh:
            json.dump(callgraph, fh)

        st = prog.getSymbolTable()
        with open(os.path.join(out, "exports.tsv"), "w") as fh:
            for a in st.getExternalEntryPointIterator():
                s = st.getPrimarySymbol(a)
                fh.write("%08x\t%s\n" % (a.getOffset(), s.getName() if s else ""))
        with open(os.path.join(out, "imports.tsv"), "w") as fh:
            for s in st.getExternalSymbols():
                fh.write("%s\t%s\n" % (s.getParentNamespace().getName(), s.getName()))
        with open(os.path.join(out, "README.txt"), "w") as fh:
            fh.write("Generated by tools/decomp/decomp_module.py from %s\n"
                     "functions: %d, seeded starts: %d, alloca probes: %s\n"
                     % (os.path.relpath(path, ROOT), len(index), len(seeds),
                        ", ".join(probes) or "none"))
        print(mod, len(index), "functions", len(seeds), "seeds", "probes", probes)


if __name__ == "__main__":
    main()
