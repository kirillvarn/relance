import os, sys, json
import pyghidra

exe, outdir = sys.argv[1], sys.argv[2]
proj_dir = os.path.expanduser("~/port/ghidra_proj")
os.makedirs(proj_dir, exist_ok=True)
for sub in ("funcs", "meta"):
    os.makedirs(os.path.join(outdir, sub), exist_ok=True)

pyghidra.start()   # must run before importing any ghidra.* modules

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import TaskMonitor

with pyghidra.open_program(exe, project_location=proj_dir,
                           project_name="game", analyze=True) as api:
    prog = api.getCurrentProgram()
    mon = TaskMonitor.DUMMY
    ifc = DecompInterface()
    ifc.openProgram(prog)

    callgraph, count = {}, 0
    for f in prog.getFunctionManager().getFunctions(True):
        if f.isExternal():
            continue
        addr = f.getEntryPoint()
        name = "%08x" % addr.getOffset()

        res = ifc.decompileFunction(f, 60, mon)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
        else:
            code = "/* decompile failed: %s */" % res.getErrorMessage()

        body = f.getBody()
        size = int(body.getMaxAddress().getOffset() - addr.getOffset() + 1)
        raw = api.getBytes(addr, size)
        hexbytes = bytes(b & 0xff for b in raw).hex()

        callees = sorted("%08x" % c.getEntryPoint().getOffset()
                         for c in f.getCalledFunctions(mon))
        callers = sorted("%08x" % c.getEntryPoint().getOffset()
                         for c in f.getCallingFunctions(mon))
        callgraph[name] = callees

        with open(os.path.join(outdir, "funcs", name + ".c"), "w") as fh:
            fh.write(code)
        meta = {"addr": name, "name": f.getName(), "size": size,
                "signature": f.getPrototypeString(True, False),
                "calling_convention": f.getCallingConventionName(),
                "is_thunk": f.isThunk(),
                "callees": callees, "callers": callers, "bytes": hexbytes}
        with open(os.path.join(outdir, "meta", name + ".json"), "w") as fh:
            json.dump(meta, fh, indent=1)
        count += 1

    with open(os.path.join(outdir, "callgraph.json"), "w") as fh:
        json.dump(callgraph, fh)
    print("exported %d functions to %s" % (count, outdir))
