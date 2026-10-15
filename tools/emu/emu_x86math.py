#!/usr/bin/env python3
"""Run the ORIGINAL x86math.dll on tests/x86math_cases.txt and write the same
log as tests/test_x86math.c. Its output is tests/x86math_golden.txt
(`make golden-x86math`).

usage: emu_x86math.py <x86math.dll> <cases> <out> [fpcw]

fpcw defaults to 0x27f (MSVC: 53-bit precision). 0x07f gives the 24-bit
mode Direct3D sets (notes/questions.md #22).
"""
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pe_emu import NATIVE, PeEmu, s32  # noqa: E402

NWORDS, A, B, V, O, DW, S = 80, 0, 12, 24, 48, 72, 73

# det_call(fn, this, m, out): call the stdcall Determinant3 and store its
# st(0) result as a double at out (also pops the x87 stack).
DET_CALL = bytes.fromhex("8B4424048B4C24088B54240C5251FFD08B4C2410DD19C3")
DET_CALL_ADDR = NATIVE + 0x80


def word_str(u):
    if (u & 0x7f800000) == 0x7f800000 and (u & 0x7fffff):
        return "nan"
    return "%x" % u


def who(p, engine):
    return "null" if p == 0 else "engine" if p == engine else "other"


def create_checks(e, factory):
    """Must match create_checks() in tests/test_x86math.c."""
    descs = [("size14", 0x14, "3DMathEngine", None), ("size0", 0, "3DMathEngine", None),
             ("noname", 0xc, None, None), ("short", 0xc, "3DMathEngin", None),
             ("long", 0xc, "3DMathEngineX", None), ("case", 0xc, "3dmathengine", None),
             ("ok", 0xc, "3DMathEngine", None), ("x86", 0xc, "3DMathEngine", "x86"),
             ("X86", 0xc, "3DMathEngine", "X86"), ("sse", 0xc, "3DMathEngine", "sse"),
             ("empty", 0xc, "3DMathEngine", ""), ("x86sp", 0xc, "3DMathEngine", "x86 ")]
    engine = 0
    p = e.put_u32s([1])
    r = s32(e.vcall(factory, 3, 0, p))
    e.out("create nulldesc -> %d %s" % (r, who(e.rd(p), engine)))
    for tag, size, name, variant in descs:
        d = e.put_u32s([size, e.put_str(name) if name is not None else 0,
                        e.put_str(variant) if variant is not None else 0])
        p = e.put_u32s([1])
        r = s32(e.vcall(factory, 3, d, p))
        if engine == 0 and r == 0:
            engine = e.rd(p)
        e.out("create %s -> %d %s" % (tag, r, who(e.rd(p), engine)))
    p = e.put_u32s([1])
    r = s32(e.vcall(factory, 0, e.put_str("1.11_IComponentFactory"), p))
    e.out("factory qi -> %d %s" % (r, who(e.rd(p), engine)))
    e.out("factory addref -> %u" % e.vcall(factory, 1))
    e.out("factory release -> %u" % e.vcall(factory, 2))
    if engine:
        p = e.put_u32s([1])
        r = s32(e.vcall(engine, 0, e.put_str("1.11_IComponentFactory"), p))
        e.out("engine qi -> %d %s" % (r, who(e.rd(p), engine)))
        e.out("engine addref -> %u" % e.vcall(engine, 1))
        e.out("engine release -> %u" % e.vcall(engine, 2))
    return engine


def run_case(e, me, slot, alias, count, init):
    e.reset_data()
    mem = e.put_u32s(init)
    a, b, v = mem + 4 * A, mem + 4 * B, mem + 4 * V
    arr = 16 <= slot <= 19
    out = {0: mem + 4 * O, 1: a, 2: v if arr else b, 3: v + 12 if arr else b + 4}[alias]
    s = init[S]
    if slot == 5:
        res = e.put_u32s([0, 0])
        e.call(DET_CALL_ADDR, e.rd(e.rd(me) + 4 * 5), me, a, res)
        bits = struct.unpack("<Q", bytes(e.mu.mem_read(res, 8)))[0]
        nan = (bits >> 52) & 0x7ff == 0x7ff and bits & ((1 << 52) - 1)
        e.out("slot 5 -> %s" % ("nan" if nan else "%016x" % bits))
        return
    args = {
        3: (out, a), 4: (out, a, s), 6: (out, a, b), 7: (out, a, b), 8: (out, a, b),
        9: (out, a, b), 10: (out, a, b), 11: (out, a, b), 12: (out, a, b),
        13: (out, a, b), 14: (out, a, b), 15: (out, a, b),
        16: (out, a, v, count), 17: (out, a, v, count), 18: (out, a, v, count),
        19: (out, a, v, count), 20: (out, a), 21: (out, a), 22: (out, a, b, s),
        23: (out, mem + 4 * DW, a), 24: (out, s), 25: (out, s),
    }[slot]
    r = s32(e.vcall(me, slot, *args))
    after = e.rd_u32s(mem, NWORDS)
    diff = "".join(" %d:%s" % (i, word_str(after[i])) for i in range(NWORDS)
                   if after[i] != init[i])
    e.out("slot %d -> %d%s" % (slot, r, diff))


def main():
    fpcw = int(sys.argv[4], 0) if len(sys.argv) > 4 else 0x27f
    e = PeEmu(sys.argv[1], fpcw)
    e.mu.mem_write(DET_CALL_ADDR, DET_CALL)
    e.attach()                                   # CRT init + DllMain → RegisterComponent
    factory, prio = e.factories["3DMathEngine"]
    assert prio == 0x40000000
    me = create_checks(e, factory)
    assert me
    case_heap = e.heap
    with open(sys.argv[2]) as f:
        for line in f:
            if line.startswith("#") or not line.strip():
                continue
            fields = line.split()
            slot, alias, count = (int(x, 0) for x in fields[:3])
            init = [0xcdcdcdcd] * NWORDS
            for f_ in fields[3:]:
                i, v = f_.split(":")
                init[int(i)] = int(v, 16)
            e.heap = case_heap
            run_case(e, me, slot, alias, count & 0xffffffff, init)
    e.write_log(sys.argv[3])


if __name__ == "__main__":
    main()
