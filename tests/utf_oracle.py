#!/usr/bin/env python3
"""Independent UTF reader used to check the readfile.dll port.

For every archive listed in <list> (paths relative to <data dir>), prints
one line per node: "<archive>|<path>|<dir 0/1>|<size>|<fnv1a32 of data>",
in tree order. Sizes and data follow readfile.dll's rules (format A, 0x2c
nodes): size = node+0x1c, data at header+0x24 + node+0x10.

usage: utf_oracle.py <data dir> <list file>
"""
import os
import struct
import sys


def fnv1a(b):
    h = 0x811c9dc5
    for x in b:
        h = ((h ^ x) * 0x01000193) & 0xffffffff
    return h


def walk(buf, out, arch):
    tree, names, data = (struct.unpack_from("<I", buf, o)[0] for o in (8, 0x18, 0x24))
    def name(n):
        off = names + struct.unpack_from("<I", buf, n + 4)[0]
        return buf[off:buf.index(b"\0", off)].decode("latin1")
    def rec(d, prefix):
        child = tree + struct.unpack_from("<I", buf, d + 0x10)[0]
        while child != tree:
            p = prefix + "\\" + name(child)
            is_dir = buf[child + 8] & 0x10 != 0
            if is_dir:
                out.append("%s|%s|1|0|0" % (arch, p))
                rec(child, p)
            else:
                size = struct.unpack_from("<I", buf, child + 0x1c)[0]
                off = data + struct.unpack_from("<I", buf, child + 0x10)[0]
                out.append("%s|%s|0|%d|%08x" % (arch, p, size, fnv1a(buf[off:off + size])))
            child = tree + struct.unpack_from("<I", buf, child)[0]
    rec(tree, "")


def main():
    data_dir, lst = sys.argv[1], sys.argv[2]
    out = []
    for arch in open(lst).read().split():
        with open(os.path.join(data_dir, arch.replace("\\", "/")), "rb") as fh:
            walk(fh.read(), out, arch)
    sys.stdout.write("\n".join(out) + "\n")


if __name__ == "__main__":
    main()
