#!/usr/bin/env python3
"""Write the x86math.dll ("3DMathEngine") differential test cases to stdout.

One case per line: `slot alias count i:w ...`, the initial contents of an
80-word scratch block (words not listed are 0xcdcdcdcd) that both runners
(tests/test_x86math.c and tools/emu/emu_x86math.py) lay out the same way:

    A = w[0..11]   matrix / transform / quaternion
    B = w[12..23]  second operand / vector
    V = w[24..47]  vector array (8 vectors)
    O = w[48..71]  output, filled with 0xcdcdcdcd
    D = w[72]      det output of slot 23, 0xcdcdcdcd
    S = w[73]      float scalar (scale, t, x)

alias picks the output pointer: 0 = O, 1 = A, 2 = B (V for the array
slots 16..19), 3 = B+1 (V+3). Fixed seed, so the file is reproducible.
"""
import math
import random
import struct

R = random.Random(0x86)
NWORDS = 80
SENTINEL = 0xcdcdcdcd


def fb(f):
    return struct.unpack("<I", struct.pack("<f", f))[0]


# Cancellation mode: big and small powers of two, so that sums such as
# 2^60 - 2^60 + 1 depend on the order of the additions (a reordered sum
# almost never changes a float result for random inputs).
POOL = [1.0, -1.0, 1.5, -1.5, 2.0 ** 31, -2.0 ** 31, 3 * 2.0 ** 30, -3 * 2.0 ** 30,
        2.0 ** -31, 0.0, 2.0 ** 62, -2.0 ** 62]
pool_mode = False


def rnd_float(special=0.02):
    if pool_mode:
        return R.choice(POOL)
    r = R.random()
    if r < special:
        return R.choice([math.inf, -math.inf, math.nan])
    r = R.random()
    if r < 0.12:
        return R.choice([0.0, -0.0])
    if r < 0.22:
        return R.choice([1.0, -1.0])
    if r < 0.30:
        return float(R.randint(-8, 8))
    if r < 0.65:
        return R.uniform(-2, 2)
    if r < 0.80:
        return R.uniform(-1000, 1000)
    if r < 0.86:
        return R.uniform(-1, 1) * 10.0 ** R.randint(-30, -10)
    if r < 0.91:
        return R.uniform(-1, 1) * 10.0 ** R.randint(10, 30)
    if r < 0.95:
        return R.uniform(-1, 1) * 1e-40          # float denormal
    return R.uniform(-3e38, 3e38)


def f32(f):
    try:
        return struct.unpack("<f", struct.pack("<f", f))[0]
    except OverflowError:
        return math.copysign(math.inf, f)


def words(fs):
    out = []
    for f in fs:
        out.append(fb(f32(f)))
    return out


def sparse_row():
    """Rows with 0.0 / 1.0 entries hit the specialised dot products."""
    row = []
    for _ in range(3):
        r = R.random()
        if r < 0.3:
            row.append(R.choice([0.0, 0.0, -0.0]))
        elif r < 0.5:
            row.append(1.0)
        else:
            row.append(rnd_float(0.01))
    return row


def matrix():
    if pool_mode:
        return [rnd_float() for _ in range(9)]
    k = R.random()
    if k < 0.35:
        return [rnd_float() for _ in range(9)]
    if k < 0.65:
        return sparse_row() + sparse_row() + sparse_row()
    if k < 0.80:
        return rotation(quat())
    if k < 0.90:                                  # around the 1e-8 singular limit
        d = R.uniform(1.5e-3, 3e-3)
        m = [R.uniform(-1e-4, 1e-4) for _ in range(9)]
        m[0] += d
        m[4] += d * R.uniform(0.8, 1.2)
        m[8] += d * R.uniform(0.8, 1.2)
        return m
    m = [rnd_float(0) for _ in range(6)]           # singular: row 2 = row 0 (scaled)
    s = R.choice([1.0, 2.0, -0.5, 0.0])
    return m + [m[0] * s, m[1] * s, m[2] * s]


def translation():
    k = R.random()
    if k < 0.3:
        return [R.choice([0.0, -0.0]) for _ in range(3)]
    if k < 0.4:
        t = [rnd_float() for _ in range(3)]
        t[R.randrange(3)] = 0.0
        return t
    return [rnd_float() for _ in range(3)]


def quat():
    k = R.random()
    if k < 0.15:
        return [rnd_float() for _ in range(4)]
    q = [R.gauss(0, 1) for _ in range(4)]
    if k > 0.6:                     # near an axis: 1 - (yy + zz) etc. cancel
        q[R.randrange(4)] *= 10.0 ** R.randint(-6, -2)
    n = math.sqrt(sum(x * x for x in q)) or 1.0
    s = 1.0 if k < 0.8 else R.uniform(0.1, 10)
    q = [x / n * s for x in q]
    if R.random() < 0.15:
        q[R.randrange(4)] = 0.0
    return q


def rotation(q):
    w, x, y, z = q
    return [1 - 2 * (y * y + z * z), 2 * (x * y - w * z), 2 * (x * z + w * y),
            2 * (x * y + w * z), 1 - 2 * (x * x + z * z), 2 * (y * z - w * x),
            2 * (x * z - w * y), 2 * (y * z + w * x), 1 - 2 * (x * x + y * y)]


def vectors(n):
    out = []
    for _ in range(n):
        out += [rnd_float() for _ in range(3)]
    return out


def scalar():
    return rnd_float()


def case(slot):
    global pool_mode
    pool_mode = R.random() < 0.25
    try:
        return case_values(slot)
    finally:
        pool_mode = False


def case_values(slot):
    w = [SENTINEL] * NWORDS
    alias = R.choice([0] * 7 + [1, 2, 3])
    count = 0
    a = b = None
    s = scalar()
    if slot in (3, 4, 5, 8, 11, 12, 13, 14, 17, 18, 20):
        a = matrix()
        b = matrix() if slot == 8 else vectors(1)
    elif slot in (7, 10, 15, 16, 19, 23):
        a = matrix() + translation()
        b = (matrix() + translation()) if slot == 7 else vectors(1)
    elif slot in (6, 9, 21, 22):
        a = quat()
        if slot == 6:
            b = quat()
        elif slot == 22:
            b = quat()
            s = R.choice([0.0, 1.0, 0.5, R.random(), R.uniform(-1, 2), rnd_float()])
        else:
            b = vectors(1)
    if slot in (16, 17, 18, 19):
        count = R.choice([0, 1, 1, 2, 3, 5, 8, 8, -1])
    if slot == 5:
        alias = 0
    if slot in (24, 25):
        alias = R.choice([0, 0, 0, 3])
    a = a or vectors(4)
    b = b or vectors(4)
    w[0:len(a)] = words(a)
    w[12:12 + len(b)] = words(b)
    if 16 <= slot <= 19:
        w[24:48] = words(vectors(8))
    w[73] = fb(f32(s))
    return slot, alias, count, w


def rsqrt_case(slot, x_bits):
    w = [SENTINEL] * NWORDS
    w[73] = x_bits & 0xffffffff
    return slot, 0, 0, w


def main():
    global pool_mode
    cases = []
    for slot in range(3, 26):
        for _ in range(300):
            cases.append(case(slot))
    # Every table index (bits 14..23), at random exponents, plus specials.
    for slot in (24, 25):
        for idx in range(0x400):
            e = R.randint(1, 254) & ~1 | ((idx >> 9) & 1)
            m = ((idx & 0x1ff) << 14) | R.getrandbits(14)
            cases.append(rsqrt_case(slot, (e << 23) | m))
        for bits in (0, 0x80000000, 1, 0x7fffff, 0x800000, 0x3f800000, 0x40800000,
                     0x3f7fffff, 0x7f7fffff, 0x7f800000, 0xff800000, 0x7fc00000,
                     0xbf800000, 0x00400000, 0x3e800000):
            cases.append(rsqrt_case(slot, bits))
    # Every specialised dot product (06f71af0): one row of each class
    # 0.0 / 1.0 / other per entry, the other two rows trivial so that the
    # cost sum reaches 4 and the specialised path runs.
    for slot in (16, 17, 18, 19):
        for cls in range(27):
            for pos in range(3 + 3 * 8):
                pool_mode = pos >= 3
                pos %= 3
                w = [SENTINEL] * NWORDS
                m = []
                for r in range(3):
                    if r == pos:
                        cl = (cls // 9, cls // 3 % 3, cls % 3)
                    else:
                        cl = R.choice([(0, 0, 0), (0, 0, 1), (1, 0, 0), (0, 1, 0)])
                    for c in cl:
                        m.append(R.choice([0.0, -0.0]) if c == 0 else 1.0 if c == 1
                                 else R.choice([rnd_float(0.05), R.uniform(-3, 3)]))
                if slot in (18, 19):         # these transpose m first
                    m = [m[0], m[3], m[6], m[1], m[4], m[7], m[2], m[5], m[8]]
                w[0:12] = words(m + ([R.choice([0.0, -0.0])] * 3 if slot == 19 or R.random() < 0.3
                                     else translation()))
                w[24:48] = words(vectors(8))
                cases.append((slot, R.choice([0, 0, 0, 2, 3]), R.choice([1, 3, 8]), w))
                pool_mode = False
    # Exhaustive order check of the specialised dot products: entries of
    # class "other" are 2^31, the vectors run over {2^31, -2^31, 1, -1}^3, so
    # 2^62 - 2^62 + 1 shows any change in the order of the additions.
    vecs = [[a, b, c] for a in (2.0 ** 31, -2.0 ** 31, 1.0, -1.0)
            for b in (2.0 ** 31, -2.0 ** 31, 1.0, -1.0) for c in (2.0 ** 31, -2.0 ** 31, 1.0, -1.0)]
    for slot in (16, 17):
        for cls in range(27):
            row = [(0.0, 1.0, 2.0 ** 31)[(cls // k) % 3] for k in (9, 3, 1)]
            for i in range(0, len(vecs), 8):
                w = [SENTINEL] * NWORDS
                t = R.choice([1.0, 2.0 ** 62, -(2.0 ** 62)]) if slot == 16 else 0.0
                w[0:12] = words(row + [0.0, 0.0, 0.0, 0.0, 0.0, 1.0] + [t, t, t])
                w[24:48] = words(sum(vecs[i:i + 8], []))
                cases.append((slot, 0, 8, w))
    # Cancellation mode for every slot (see POOL).
    for slot in range(3, 24):
        for _ in range(150):
            pool_mode = True
            cases.append(case_values(slot))
            pool_mode = False
    # nlerp: a.b exactly 0 takes the b - a branch.
    for _ in range(12):
        w = [SENTINEL] * NWORDS
        i, j = R.sample(range(4), 2)
        qa, qb = [0.0] * 4, [0.0] * 4
        qa[i], qb[j] = R.choice([1.0, -1.0, 0.5]), R.choice([1.0, -2.0, 0.25])
        w[0:4], w[12:16] = words(qa), words(qb)
        w[73] = fb(f32(R.choice([0.25, 0.5, R.random()])))
        cases.append((22, 0, 0, w))
    # Quaternions with two tiny components: 1 - (yy + zz) and friends cancel.
    for slot in (9, 21, 22, 6):
        for _ in range(60):
            q = [R.gauss(0, 1) for _ in range(4)]
            for k in R.sample(range(4), 2):
                q[k] *= 10.0 ** R.randint(-5, -2)
            n = math.sqrt(sum(x * x for x in q))
            w = [SENTINEL] * NWORDS
            w[0:4] = words([x / n for x in q])
            w[12:16] = words(quat())
            w[24:48] = words(vectors(8))
            w[73] = fb(f32(R.random()))
            cases.append((slot, 0, 0, w))
    # Singular with an exact duplicate row: the determinant is a rounding
    # residue, which depends on the exact product and sum order.
    for slot in (3, 5, 23):
        for _ in range(60):
            w = [SENTINEL] * NWORDS
            rows = [[R.uniform(-4, 4) for _ in range(3)] for _ in range(2)]
            rows.insert(R.randrange(3), list(rows[R.randrange(2)]))
            w[0:12] = words(rows[0] + rows[1] + rows[2] + vectors(1))
            cases.append((slot, 0, 0, w))
    # |det| exactly at the 1e-8f limit (slots 3, 23) and just around it.
    for d in (1e-8, -1e-8, 1.0000001e-8, 9.999999e-9):
        for slot in (3, 23):
            w = [SENTINEL] * NWORDS
            w[0:12] = words([d, 0, 0, 0, 1, 0, 0, 0, 1] + vectors(1))
            cases.append((slot, 0, 0, w))
    R.shuffle(cases)
    print("# slot alias count index:word... (tests/x86math_cases.py)")
    for slot, alias, count, w in cases:
        assert len(w) == NWORDS
        print("%d %d %d %s" % (slot, alias, count,
                               " ".join("%d:%x" % (i, v) for i, v in enumerate(w)
                                        if v != SENTINEL)))


if __name__ == "__main__":
    main()
