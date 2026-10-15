#!/usr/bin/env python3
"""Run the ORIGINAL ximage.dll on tests/ximage_cases.txt with the same mocks
as tests/test_ximage.c and write the same log. Its output is
tests/ximage_golden.txt (`make golden-ximage`).

usage: emu_ximage.py <ximage.dll> <cases> <out>
"""
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pe_emu import PeEmu, s32  # noqa: E402

# Field indices: the enum in tests/test_ximage.c.
(F_ID, F_SQUARE, F_TILE_W, F_TILE_H, F_QI_FAIL, F_FIND_FAIL, F_TEX_FMT,
 F_PIPE_NULL, F_DESC_SIZE, F_NAME_OK, F_USE_SOURCE, F_WANT, F_DATA_FMT,
 F_W, F_H, F_PITCH, F_FAIL_CREATE, F_FAIL_SET, F_SRC_FMT_RC, F_SRC_FMT,
 F_SRC_SIZE_RC, F_PIX_RC1, F_PIX_RC2, F_DRAW_CB, F_SET_ALPHA, F_ALPHA,
 F_SET_COLOR, F_COLOR) = range(28)
F_D1_SRC_NULL = F_COLOR + 3
F_D1_SRC, F_D1_DST = F_D1_SRC_NULL + 1, F_D1_SRC_NULL + 5
F_D2_SRC_NULL = F_D1_DST + 4
F_D2_SRC, F_D2_DST = F_D2_SRC_NULL + 1, F_D2_SRC_NULL + 5
F_SD_DATA_NULL = F_D2_DST + 4
(F_SD_FMT_NULL, F_SD_FMT, F_SD_W, F_SD_H, F_SD_PITCH, F_SD_FAIL,
 F_TEX_EXTRA) = range(F_SD_DATA_NULL + 1, F_SD_DATA_NULL + 8)
F_COUNT = F_TEX_EXTRA + 1


class XImageMocks:
    """Pipeline, texture library, image source and draw callback."""

    def __init__(self, e):
        self.e = e
        self.c = [0] * F_COUNT
        self.creates = self.sets = self.pix = 0
        self.fail_create = self.fail_set = 0
        self.base = 0
        self.tl = e.vtable(45, {2: (self.tl_release, 1), 44: (self.tl_find, 3)}, "texlib")
        self.pipe = e.vtable(54, {0: (self.pipe_qi, 3), 1: (self.pipe_addref, 1),
                                  2: (self.pipe_release, 1), 8: (self.pipe_prop, 3),
                                  45: (self.pipe_create, 7), 46: (self.pipe_destroy, 2),
                                  53: (self.pipe_set, 10)}, "pipeline")
        self.src = e.vtable(7, {3: (self.src_pixels, 5), 5: (self.src_size, 3),
                                6: (self.src_format, 2)}, "source")
        self.draw_cb = e.stub(self.draw)

    def tl_release(self):
        self.e.out("tl.release")
        return 1

    def tl_find(self):
        e, c = self.e, self.c
        e.out("tl.find %d" % s32(e.rd(e.arg(1))))
        if c[F_FIND_FAIL]:
            return -1
        e.wr(e.arg(2), c[F_TEX_FMT])
        return 0

    def pipe_qi(self):
        e = self.e
        e.out("pipe.qi %s" % e.cstr(e.arg(1)))
        if self.c[F_QI_FAIL]:
            e.wr(e.arg(2), 0)
            return -3
        e.wr(e.arg(2), self.tl)
        return 0

    def pipe_addref(self):
        self.e.out("pipe.addref")
        return 1

    def pipe_release(self):
        self.e.out("pipe.release")
        return 1

    def pipe_prop(self):
        e, c = self.e, self.c
        pid = e.arg(1)
        e.out("pipe.prop %u" % pid)
        e.wr(e.arg(2), c[F_SQUARE] if pid == 5 else c[F_TILE_W] if pid == 6 else c[F_TILE_H])
        return 0

    def pipe_create(self):
        e = self.e
        self.creates += 1
        rc = -1 if self.creates == self.fail_create else 0
        w, h, fmt, lv, fl, out = (e.arg(k) for k in range(1, 7))
        e.out("pipe.create %u %u %d %u %u -> %d" % (w, h, s32(e.rd(fmt)), lv, fl, rc))
        if rc == 0:
            e.wr(out, 1000 + self.creates)
        return rc

    def pipe_destroy(self):
        self.e.out("pipe.destroy %u" % self.e.arg(1))
        return 0

    def pipe_set(self):
        e = self.e
        self.sets += 1
        rc = -1 if self.sets == self.fail_set else 0
        tex, lv, w, h, pitch, fmt, data, a, b = (e.arg(k) for k in range(1, 10))
        e.out("pipe.set %u %u %u %u %u %d %d %u %u -> %d" % (
            tex, lv, w, h, pitch, s32(e.rd(fmt)), s32(data - self.base), a, b, rc))
        return rc

    def src_pixels(self):
        e, c = self.e, self.c
        self.pix += 1
        rc = s32(c[F_PIX_RC1] if self.pix == 1 else c[F_PIX_RC2])
        e.out("src.pixels %d %u %u -> %d" % (s32(e.arg(1)), e.arg(3), e.arg(4), rc))
        self.base = e.arg(2)
        return rc

    def src_size(self):
        e, c = self.e, self.c
        e.out("src.size -> %d" % s32(c[F_SRC_SIZE_RC]))
        e.wr(e.arg(1), c[F_W])
        e.wr(e.arg(2), c[F_H])
        return c[F_SRC_SIZE_RC]

    def src_format(self):
        e, c = self.e, self.c
        e.out("src.format -> %d" % s32(c[F_SRC_FMT_RC]))
        e.wr(e.arg(1), c[F_SRC_FMT])
        return c[F_SRC_FMT_RC]

    def draw(self):         # cdecl (tex, argb, quad*, uv*)
        e = self.e
        tex, argb, q, uv = (e.arg(k) for k in range(4))
        e.out("cb %u %08x q %s uv %s" % (tex, argb,
                                          " ".join("%08x" % v for v in e.rd_u32s(q, 4)),
                                          " ".join("%08x" % v for v in e.rd_u32s(uv, 8))))


def run_case(e, m, factory):
    c = m.c
    e.reset_data()
    e.out("case %u" % c[F_ID])
    m.creates = m.sets = m.pix = 0
    m.fail_create, m.fail_set = s32(c[F_FAIL_CREATE]), s32(c[F_FAIL_SET])
    data = e.put_bytes(bytes(16))
    m.base = data
    want, fmt = e.put_u32s([c[F_WANT]]), e.put_u32s([c[F_DATA_FMT]])
    name = e.put_str("BigImage" if c[F_NAME_OK] else "BigImagf")
    desc = e.put_u32s([c[F_DESC_SIZE], name, 0 if c[F_PIPE_NULL] else m.pipe,
                       m.src if c[F_USE_SOURCE] else 0, want, fmt, data, c[F_W], c[F_H],
                       c[F_PITCH], m.draw_cb if c[F_DRAW_CB] else 0])
    out = e.put_u32s([0])
    r = s32(e.vcall(factory, 3, desc, out))
    bi = e.rd(out)
    e.out("create -> %d %s" % (r, "obj" if bi else "null"))
    if r != 0:
        return

    wh = e.put_u32s([0, 0])
    e.vcall(bi, 5, wh, wh + 4)
    e.out("size %u %u" % tuple(e.rd_u32s(wh, 2)))
    count = s32(e.vcall(bi, 8))
    e.out("count %d" % count)
    for idx in (-1, 0, count - 1, count, s32(c[F_TEX_EXTRA])):
        tex, rect = e.put_u32s([0xdeadbeef]), e.put_u32s([7, 7, 7, 7])
        r = s32(e.vcall(bi, 9, idx, tex, rect))
        e.out("tex %d -> %d %u %d %d %d %d" % (idx, r, e.rd(tex),
                                                *(s32(v) for v in e.rd_u32s(rect, 4))))
    for tag, iid in (("qi2", "1.11_IBigImage2"), ("qi1", "1.11_IBigImage"),
                     ("qi3", "1.11_IBigImage3")):
        q = e.put_u32s([1])
        r = s32(e.vcall(bi, 0, e.put_str(iid), q))
        qv = e.rd(q)
        e.out("%s -> %d %s" % (tag, r, "self" if qv == bi else "null" if qv == 0 else "other"))
        if r == 0 and tag != "qi3":
            e.out("release -> %u" % e.vcall(bi, 2))
    if c[F_SET_ALPHA]:
        e.vcall(bi, 6, c[F_ALPHA])
    if c[F_SET_COLOR]:
        e.vcall(bi, 7, e.put_u32s(c[F_COLOR:F_COLOR + 3]))
    for fnull, fsrc, fdst in ((F_D1_SRC_NULL, F_D1_SRC, F_D1_DST),
                              (F_D2_SRC_NULL, F_D2_SRC, F_D2_DST)):
        src, dst = e.put_u32s(c[fsrc:fsrc + 4]), e.put_u32s(c[fdst:fdst + 4])
        e.out("draw")
        e.vcall(bi, 4, 0 if c[fnull] else src, dst)
    m.sets = 0
    m.fail_set = s32(c[F_SD_FAIL])
    m.base = data
    sdfmt = e.put_u32s([c[F_SD_FMT]])
    r = s32(e.vcall(bi, 10, 0 if c[F_SD_DATA_NULL] else data, 0 if c[F_SD_FMT_NULL] else sdfmt,
                    c[F_SD_W], c[F_SD_H], c[F_SD_PITCH]))
    e.out("setdata -> %d" % r)
    e.out("slot11 -> %d" % s32(e.vcall(bi, 11, 0)))
    e.out("addref -> %u" % e.vcall(bi, 1))
    e.out("release -> %u" % e.vcall(bi, 2))
    e.out("release -> %u" % e.vcall(bi, 2))


def main():
    e = PeEmu(sys.argv[1])
    m = XImageMocks(e)
    e.attach()                                   # CRT init + DllMain → RegisterComponent
    factory, prio = e.factories["BigImage"]
    assert prio == 0x40000000
    q = e.put_u32s([0])
    assert e.vcall(factory, 0, e.put_str("1.11_IComponentFactory"), q) == 0
    assert e.rd(q) == factory
    e.vcall(factory, 2)
    case_heap = e.heap
    with open(sys.argv[2]) as f:
        for line in f:
            if line.startswith("#") or not line.strip():
                continue
            m.c[:] = [int(v, 0) & 0xffffffff for v in line.split()]
            assert len(m.c) == F_COUNT
            e.heap = case_heap                   # every case starts from a fresh heap
            run_case(e, m, factory)
    e.write_log(sys.argv[3])


if __name__ == "__main__":
    main()
