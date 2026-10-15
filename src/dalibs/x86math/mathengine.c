/* mathengine.c — the "3DMathEngine" component of x86math.dll (vtbl
 * 06f73090, factory vtbl 06f73080). Port of 06f71000..06f72960
 * (notes/x86math_dll.md).
 *
 * One 8-byte object is both the factory and the engine: CreateInstance
 * hands out the object itself, and AddRef/Release do nothing.
 *
 * x87: every expression follows the original's operation order, in double
 * (the MSVC default 53-bit precision; notes/questions.md #22). A value is
 * rounded to float exactly where the original does `fst/fstp DWORD`; values
 * it keeps on the x87 stack stay double here. Inputs are re-read through
 * the pointers wherever the original re-reads memory, so overlapping
 * output and input buffers behave as in the original. */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include "mathengine.h"

#define D(x) ((double)(x))

/* orig: operator new(8), the global 06f74438 */
typedef struct MathEngine {
    const IMathEngineVtbl       *vtbl;          /* +0x0 06f73090 */
    const IComponentFactoryVtbl *factory_vtbl;  /* +0x4 06f73080 */
} MathEngine;

#if UINTPTR_MAX == 0xffffffffu
_Static_assert(sizeof(MathEngine) == 8, "MathEngine size");
_Static_assert(offsetof(MathEngine, factory_vtbl) == 4, "MathEngine.factory_vtbl");
_Static_assert(sizeof(MATHENGINEDESC) == MATHENGINEDESC_ORIG_SIZE, "MATHENGINEDESC size");
_Static_assert(offsetof(MATHENGINEDESC, variant) == 8, "MATHENGINEDESC.variant");
#endif

#define FROM_FACTORY(p) ((MathEngine *)(void *)((char *)(p) - offsetof(MathEngine, factory_vtbl)))
#define ENGINE(p) ((IMathEngine *)(p))

static MathEngine *g_engine;            /* orig: 06f74438 */
static uint8_t g_rsqrt_table[0x400];    /* orig: 06f74030 */

static float bitsf(uint32_t u)
{
    float f;
    memcpy(&f, &u, 4);
    return f;
}

static uint32_t fbits(float f)
{
    uint32_t u;
    memcpy(&u, &f, 4);
    return u;
}

/* orig: 06f71010 (also inlined in DllMain 06f71090). Entry i holds the top
 * 8 mantissa bits (rounded) of 1/sqrt(x) for x = 0.5 .. 2 with bits 14..23
 * of x equal to i. Entry 0x200 (x = 1.0) would wrap to 0x00; the original
 * stores 0xff there instead. */
static void build_rsqrt_table(void)
{
    int32_t i;

    for (i = 0; i < 0x400; i++) {
        float x = bitsf(((uint32_t)i | 0xfc00u) << 14);
        float r = (float)(1.0 / sqrt(D(x)));       /* fsqrt; fdivr QWORD 1.0; fstp */
        g_rsqrt_table[i] = (uint8_t)((fbits(r) + 0x2000u) >> 15);
    }
    g_rsqrt_table[0x200] = 0xff;
}

/* ---- IUnknown slots ---------------------------------------------------- */

/* orig: 06f71150 */
static GENRESULT DACOM_API me_query_interface(void *self, const char *iface, void **out)
{
    (void)self;
    (void)iface;
    *out = NULL;
    return GR_GENERIC;
}

/* orig: 06f71160 (AddRef and Release) */
static uint32_t DACOM_API me_addref_release(void *self)
{
    (void)self;
    return 1;
}

/* ---- 3x3 matrices ------------------------------------------------------ */

/* orig: 06f71620 — the result stays in st(0) unrounded. */
static double DACOM_API me_determinant3(void *self, const float *m)
{
    (void)self;
    return D(m[6]) * m[1] * m[5] + D(m[2]) * m[3] * m[7] + D(m[8]) * m[0] * m[4]
           - D(m[0]) * m[7] * m[5] - D(m[8]) * m[1] * m[3] - D(m[6]) * m[2] * m[4];
}

/* orig: 06f711f0. Writes out[] in the order 0 3 6 1 4 7 2 5 8. */
static GENRESULT DACOM_API me_invert3(void *self, float *out, const float *m)
{
    double det = ENGINE(self)->vtbl->Determinant3(self, m), inv;

    if (!(fabs(det) > D(1e-8f))) {      /* fld 06f73064; fcompp; test ah,5; jp */
        out[0] = (float)(D(m[4]) * m[8] - D(m[5]) * m[7]);
        out[3] = (float)-(D(m[8]) * m[3] - D(m[5]) * m[6]);
        out[6] = (float)(D(m[7]) * m[3] - D(m[4]) * m[6]);
        out[1] = (float)-(D(m[8]) * m[1] - D(m[7]) * m[2]);
        out[4] = (float)(D(m[8]) * m[0] - D(m[2]) * m[6]);
        out[7] = (float)-(D(m[7]) * m[0] - D(m[1]) * m[6]);
        out[2] = (float)(D(m[5]) * m[1] - D(m[4]) * m[2]);
        out[5] = (float)-(D(m[5]) * m[0] - D(m[2]) * m[3]);
        out[8] = (float)(D(m[4]) * m[0] - D(m[1]) * m[3]);
        return GR_INVALID_PARMS;
    }
    inv = 1.0 / det;                    /* fdivr DWORD 1.0f */
    out[0] = (float)((D(m[4]) * m[8] - D(m[5]) * m[7]) * inv);
    out[3] = (float)-((D(m[8]) * m[3] - D(m[5]) * m[6]) * inv);
    out[6] = (float)((D(m[7]) * m[3] - D(m[4]) * m[6]) * inv);
    out[1] = (float)-((D(m[8]) * m[1] - D(m[7]) * m[2]) * inv);
    out[4] = (float)((D(m[8]) * m[0] - D(m[2]) * m[6]) * inv);
    out[7] = (float)-((D(m[7]) * m[0] - D(m[1]) * m[6]) * inv);
    out[2] = (float)((D(m[5]) * m[1] - D(m[4]) * m[2]) * inv);
    out[5] = (float)-((D(m[5]) * m[0] - D(m[2]) * m[3]) * inv);
    out[8] = (float)((D(m[4]) * m[0] - D(m[1]) * m[3]) * inv);
    return GR_OK;
}

/* orig: 06f715b0 */
static GENRESULT DACOM_API me_scale3(void *self, float *out, const float *m, float s)
{
    int32_t i;

    (void)self;
    for (i = 0; i < 9; i++)
        out[i] = (float)(D(s) * m[i]);
    return GR_OK;
}

/* orig: 06f71670 — row by row; out[r][0..2] are stored before the next
 * element of row r of a is read. */
static GENRESULT DACOM_API me_multiply3(void *self, float *out, const float *a, const float *b)
{
    int32_t r;

    (void)self;
    for (r = 0; r < 3; r++) {
        const float *ar = a + 3 * r;
        float *o = out + 3 * r;
        o[0] = (float)(D(ar[2]) * b[6] + D(b[3]) * ar[1] + D(ar[0]) * b[0]);
        o[1] = (float)(D(b[1]) * ar[0] + D(ar[2]) * b[7] + D(b[4]) * ar[1]);
        o[2] = (float)(D(b[2]) * ar[0] + D(ar[2]) * b[8] + D(b[5]) * ar[1]);
    }
    return GR_OK;
}

/* orig: 06f716f0 — out = a after b (rotation a.R*b.R, translation
 * a.R*b.t + a.t). Store order 0 1 2 9 3 4 5 10 6 7 8 11. */
static GENRESULT DACOM_API me_transform_multiply(void *self, float *out, const float *a,
                                                 const float *b)
{
    (void)self;
    out[0] = (float)(D(a[0]) * b[0] + D(a[1]) * b[3] + D(b[6]) * a[2]);
    out[1] = (float)(D(a[1]) * b[4] + D(b[7]) * a[2] + D(b[1]) * a[0]);
    out[2] = (float)(D(a[1]) * b[5] + D(b[8]) * a[2] + D(b[2]) * a[0]);
    out[9] = (float)(D(a[1]) * b[10] + D(b[11]) * a[2] + D(b[9]) * a[0] + a[9]);
    out[3] = (float)(D(a[4]) * b[3] + D(a[3]) * b[0] + D(a[5]) * b[6]);
    out[4] = (float)(D(a[5]) * b[7] + D(a[4]) * b[4] + D(a[3]) * b[1]);
    out[5] = (float)(D(a[5]) * b[8] + D(a[4]) * b[5] + D(a[3]) * b[2]);
    out[10] = (float)(D(b[11]) * a[5] + D(b[10]) * a[4] + D(b[9]) * a[3] + a[10]);
    out[6] = (float)(D(a[7]) * b[3] + D(a[8]) * b[6] + D(b[0]) * a[6]);
    out[7] = (float)(D(a[8]) * b[7] + D(a[7]) * b[4] + D(b[1]) * a[6]);
    out[8] = (float)(D(a[8]) * b[8] + D(a[7]) * b[5] + D(b[2]) * a[6]);
    out[11] = (float)(D(a[8]) * b[11] + D(a[7]) * b[10] + D(b[9]) * a[6] + a[11]);
    return GR_OK;
}

/* orig: 06f71380 — inverse of a transform (3x3 + translation). */
static GENRESULT DACOM_API me_invert_transform(void *self, float *out, float *det_out,
                                               const float *m)
{
    double c0 = D(m[4]) * m[8] - D(m[7]) * m[5];
    double det = c0 * m[0] - (D(m[3]) * m[8] - D(m[6]) * m[5]) * m[1]
                 + (D(m[7]) * m[3] - D(m[6]) * m[4]) * m[2];
    double inv;
    GENRESULT r;

    (void)self;
    if (fabs(det) > D(1e-8f)) {
        inv = 1.0 / det;
        r = GR_OK;
    } else {
        inv = 1.0;
        r = GR_INVALID_PARMS;
    }
    out[0] = (float)(c0 * inv);
    out[1] = (float)-((D(m[1]) * m[8] - D(m[7]) * m[2]) * inv);
    out[2] = (float)((D(m[1]) * m[5] - D(m[2]) * m[4]) * inv);
    out[3] = (float)-((D(m[3]) * m[8] - D(m[6]) * m[5]) * inv);
    out[4] = (float)((D(m[0]) * m[8] - D(m[6]) * m[2]) * inv);
    out[5] = (float)-((D(m[0]) * m[5] - D(m[3]) * m[2]) * inv);
    out[6] = (float)((D(m[7]) * m[3] - D(m[6]) * m[4]) * inv);
    out[7] = (float)-((D(m[7]) * m[0] - D(m[6]) * m[1]) * inv);
    out[8] = (float)((D(m[4]) * m[0] - D(m[3]) * m[1]) * inv);
    out[9] = (float)-((D(m[11]) * m[1] * m[5] + D(m[10]) * m[7] * m[2] + D(m[9]) * m[4] * m[8]
                       - D(m[10]) * m[1] * m[8] - D(m[2]) * m[11] * m[4]
                       - D(m[7]) * m[9] * m[5]) * inv);
    out[10] = (float)((D(m[3]) * m[9] * m[8] + D(m[11]) * m[0] * m[5] + D(m[10]) * m[6] * m[2]
                       - D(m[10]) * m[0] * m[8] - D(m[3]) * m[2] * m[11]
                       - D(m[6]) * m[9] * m[5]) * inv);
    out[11] = (float)-((D(m[11]) * m[4] * m[0] + D(m[7]) * m[3] * m[9] + D(m[10]) * m[6] * m[1]
                        - D(m[10]) * m[7] * m[0] - D(m[3]) * m[11] * m[1]
                        - D(m[6]) * m[9] * m[4]) * inv);
    /* A second determinant, expanded differently, times 1/det. */
    *det_out = (float)((D(m[4]) * m[0] * m[8] + D(m[7]) * m[3] * m[2] + D(m[6]) * m[1] * m[5]
                        - D(m[6]) * m[2] * m[4] - D(m[7]) * m[0] * m[5]
                        - D(m[3]) * m[1] * m[8]) * inv);
    return r;
}

/* ---- single vectors ---------------------------------------------------- */

/* orig: 06f71890 */
static GENRESULT DACOM_API me_transform_point(void *self, float *out, const float *m,
                                              const float *v)
{
    (void)self;
    out[0] = (float)(D(m[2]) * v[2] + D(m[1]) * v[1] + D(m[0]) * v[0] + m[9]);
    out[1] = (float)(D(m[5]) * v[2] + D(m[3]) * v[0] + D(m[4]) * v[1] + m[10]);
    out[2] = (float)(D(m[8]) * v[2] + D(m[6]) * v[0] + D(m[7]) * v[1] + m[11]);
    return GR_OK;
}

/* orig: 06f71830 (slots 11 and 12) */
static GENRESULT DACOM_API me_rotate(void *self, float *out, const float *m, const float *v)
{
    (void)self;
    out[0] = (float)(D(m[2]) * v[2] + D(m[1]) * v[1] + D(m[0]) * v[0]);
    out[1] = (float)(D(m[5]) * v[2] + D(m[3]) * v[0] + D(m[4]) * v[1]);
    out[2] = (float)(D(m[8]) * v[2] + D(m[6]) * v[0] + D(m[7]) * v[1]);
    return GR_OK;
}

/* orig: 06f718f0 (slots 13 and 14) */
static GENRESULT DACOM_API me_rotate_transposed(void *self, float *out, const float *m,
                                                const float *v)
{
    (void)self;
    out[0] = (float)(D(m[6]) * v[2] + D(m[3]) * v[1] + D(m[0]) * v[0]);
    out[1] = (float)(D(m[7]) * v[2] + D(m[1]) * v[0] + D(m[4]) * v[1]);
    out[2] = (float)(D(m[8]) * v[2] + D(m[2]) * v[0] + D(m[5]) * v[1]);
    return GR_OK;
}

/* orig: 06f71950 — v is read completely before out is written. */
static GENRESULT DACOM_API me_inverse_transform_point(void *self, float *out, const float *m,
                                                      const float *v)
{
    double d0 = D(v[0]) - m[9], d1 = D(v[1]) - m[10], d2 = D(v[2]) - m[11];

    (void)self;
    out[0] = (float)(d2 * m[6] + d1 * m[3] + d0 * m[0]);
    out[1] = (float)(d2 * m[7] + d1 * m[4] + d0 * m[1]);
    out[2] = (float)(d2 * m[8] + d1 * m[5] + d0 * m[2]);
    return GR_OK;
}

/* ---- vector arrays ----------------------------------------------------- */

/* A matrix row, specialised by 06f71af0 for rows with 0.0 or 1.0 entries.
 * orig: 0x14-byte stack object {x, y, z, fn, cost}. */
typedef struct MathRow MathRow;
typedef double (*MATHROW_DOT_FN)(const MathRow *row, const float *v);   /* thiscall */
struct MathRow {
    float r[3];
    MATHROW_DOT_FN dot;
    int32_t cost;        /* 5 - work done; the caller specialises when the sum >= 4 */
};

/* The 27 dot products (thiscall, ecx = row, result in st(0)). Name: which
 * entries are 0 (z), 1 (o) or other (r), in x y z order. */
static double dot_zzz(const MathRow *w, const float *v) { (void)w; (void)v; return 0.0; }  /* 06f71d60 */
static double dot_zzo(const MathRow *w, const float *v) { (void)w; return v[2]; }          /* 06f71d70 */
static double dot_zzr(const MathRow *w, const float *v) { return D(v[2]) * w->r[2]; }      /* 06f71d80 */
static double dot_zoz(const MathRow *w, const float *v) { (void)w; return v[1]; }          /* 06f71d90 */
static double dot_zoo(const MathRow *w, const float *v) { (void)w; return D(v[2]) + v[1]; } /* 06f71da0 */
static double dot_zor(const MathRow *w, const float *v) { return D(v[2]) * w->r[2] + v[1]; }  /* 06f71db0 */
static double dot_zrz(const MathRow *w, const float *v) { return D(v[1]) * w->r[1]; }         /* 06f71dc0 */
static double dot_zro(const MathRow *w, const float *v) { return D(v[1]) * w->r[1] + v[2]; }  /* 06f71dd0 */
static double dot_zrr(const MathRow *w, const float *v)                                       /* 06f71de0 */
{ return D(v[2]) * w->r[2] + D(v[1]) * w->r[1]; }
static double dot_ozz(const MathRow *w, const float *v) { (void)w; return v[0]; }             /* 06f71e00 */
static double dot_ozo(const MathRow *w, const float *v) { (void)w; return D(v[2]) + v[0]; }   /* 06f71e10 */
static double dot_ozr(const MathRow *w, const float *v) { return D(v[2]) * w->r[2] + v[0]; }  /* 06f71e20 */
static double dot_ooz(const MathRow *w, const float *v) { (void)w; return D(v[1]) + v[0]; }   /* 06f71e30 */
static double dot_ooo(const MathRow *w, const float *v)                                       /* 06f71e40 */
{ (void)w; return D(v[2]) + v[1] + v[0]; }
static double dot_oor(const MathRow *w, const float *v)                                       /* 06f71e50 */
{ return D(v[2]) * w->r[2] + v[1] + v[0]; }
static double dot_orz(const MathRow *w, const float *v) { return D(v[1]) * w->r[1] + v[0]; }  /* 06f71e70 */
static double dot_oro(const MathRow *w, const float *v)                                       /* 06f71e80 */
{ return D(v[1]) * w->r[1] + v[2] + v[0]; }
static double dot_orr(const MathRow *w, const float *v)                                       /* 06f71ea0 */
{ return D(v[2]) * w->r[2] + D(v[1]) * w->r[1] + v[0]; }
static double dot_rzz(const MathRow *w, const float *v) { return D(v[0]) * w->r[0]; }         /* 06f71ec0 */
static double dot_rzo(const MathRow *w, const float *v) { return D(v[0]) * w->r[0] + v[2]; }  /* 06f71ed0 */
static double dot_rzr(const MathRow *w, const float *v)                                       /* 06f71ee0 */
{ return D(v[2]) * w->r[2] + D(v[0]) * w->r[0]; }
static double dot_roz(const MathRow *w, const float *v) { return D(v[0]) * w->r[0] + v[1]; }  /* 06f71f00 */
static double dot_roo(const MathRow *w, const float *v)                                       /* 06f71f10 */
{ return D(v[0]) * w->r[0] + v[2] + v[1]; }
static double dot_ror(const MathRow *w, const float *v)                                       /* 06f71f30 */
{ return D(v[2]) * w->r[2] + D(v[0]) * w->r[0] + v[1]; }
static double dot_rrz(const MathRow *w, const float *v)                                       /* 06f71f50 */
{ return D(v[1]) * w->r[1] + D(v[0]) * w->r[0]; }
static double dot_rro(const MathRow *w, const float *v)                                       /* 06f71f70 */
{ return D(v[1]) * w->r[1] + D(v[0]) * w->r[0] + v[2]; }
static double dot_rrr(const MathRow *w, const float *v)                                       /* 06f71f90 */
{ return D(v[2]) * w->r[2] + D(v[1]) * w->r[1] + D(v[0]) * w->r[0]; }

/* Indexed [x][y][z] by class: 0 = equal to 0.0 (float compare, so -0.0
 * too), 1 = bit pattern 0x3f800000, 2 = anything else (NaN included). */
static const MATHROW_DOT_FN dot_fns[3][3][3] = {
    { { dot_zzz, dot_zzo, dot_zzr }, { dot_zoz, dot_zoo, dot_zor }, { dot_zrz, dot_zro, dot_zrr } },
    { { dot_ozz, dot_ozo, dot_ozr }, { dot_ooz, dot_ooo, dot_oor }, { dot_orz, dot_oro, dot_orr } },
    { { dot_rzz, dot_rzo, dot_rzr }, { dot_roz, dot_roo, dot_ror }, { dot_rrz, dot_rro, dot_rrr } },
};
static const int32_t dot_costs[3][3][3] = {
    { { 5, 5, 4 }, { 5, 4, 3 }, { 4, 3, 2 } },
    { { 5, 4, 3 }, { 4, 3, 2 }, { 3, 2, 1 } },
    { { 4, 3, 2 }, { 3, 2, 1 }, { 2, 1, 0 } },
};

/* x and z are compared with 0.0 first; the 1.0 test is an integer compare
 * of the bits, done only for entries that are not 0. */
static int32_t row_class(const float *f)
{
    if (*f == 0.0f)
        return 0;
    return fbits(*f) == 0x3f800000u ? 1 : 2;
}

/* orig: 06f71af0 (thiscall, ecx = row; r[] filled by the caller) */
static void row_specialise(MathRow *row)
{
    int32_t cx = row_class(&row->r[0]), cy = row_class(&row->r[1]),
            cz = row_class(&row->r[2]);

    row->dot = dot_fns[cx][cy][cz];
    row->cost = dot_costs[cx][cy][cz];
}

static void row_init(MathRow *row, const float *src)
{
    row->r[0] = src[0];
    row->r[1] = src[1];
    row->r[2] = src[2];
    row_specialise(row);
}

/* orig: 06f719b0. The original loops while in < in + count*12 (32-bit
 * pointer compare); the port loops count times, which is the same for every
 * count that does not wrap the address space. */
static GENRESULT DACOM_API me_rotate_array(void *self, float *out, const float *m,
                                           const float *in, int32_t count)
{
    MathRow rows[3];
    int32_t i;

    (void)self;
    row_init(&rows[0], m);
    row_init(&rows[1], m + 3);
    row_init(&rows[2], m + 6);
    if (rows[1].cost + rows[2].cost + rows[0].cost < 4) {
        for (i = 0; i < count; i++, in += 3, out += 3) {
            float x = in[0], y = in[1], z = in[2];
            out[0] = (float)(D(z) * m[2] + D(y) * m[1] + D(x) * m[0]);
            out[1] = (float)(D(z) * m[5] + D(y) * m[4] + D(x) * m[3]);
            out[2] = (float)(D(z) * m[8] + D(y) * m[7] + D(x) * m[6]);
        }
    } else {
        /* Each component re-reads `in` after the previous one is stored. */
        for (i = 0; i < count; i++, in += 3, out += 3) {
            out[0] = (float)rows[0].dot(&rows[0], in);
            out[1] = (float)rows[1].dot(&rows[1], in);
            out[2] = (float)rows[2].dot(&rows[2], in);
        }
    }
    return GR_OK;
}

/* orig: 06f71fb0. A zero translation goes to slot 17. */
static GENRESULT DACOM_API me_transform_points(void *self, float *out, const float *m,
                                               const float *in, int32_t count)
{
    MathRow rows[3];
    int32_t i;

    if (m[9] == 0.0f && m[10] == 0.0f && m[11] == 0.0f)
        return ENGINE(self)->vtbl->RotateArray(self, out, m, in, count);
    row_init(&rows[0], m);
    row_init(&rows[1], m + 3);
    row_init(&rows[2], m + 6);
    if (rows[1].cost + rows[2].cost + rows[0].cost < 4) {
        for (i = 0; i < count; i++, in += 3, out += 3) {
            float x = in[0], y = in[1], z = in[2];
            out[0] = (float)(D(x) * m[0] + D(z) * m[2] + D(y) * m[1] + m[9]);
            out[1] = (float)(D(z) * m[5] + D(y) * m[4] + D(x) * m[3] + m[10]);
            out[2] = (float)(D(z) * m[8] + D(y) * m[7] + D(x) * m[6] + m[11]);
        }
    } else {
        for (i = 0; i < count; i++, in += 3, out += 3) {
            out[0] = (float)(rows[0].dot(&rows[0], in) + m[9]);
            out[1] = (float)(rows[1].dot(&rows[1], in) + m[10]);
            out[2] = (float)(rows[2].dot(&rows[2], in) + m[11]);
        }
    }
    return GR_OK;
}

/* orig: 06f72150 — transposes m into a local and calls slot 17. */
static GENRESULT DACOM_API me_rotate_array_transposed(void *self, float *out, const float *m,
                                                      const float *in, int32_t count)
{
    float t[9] = { m[0], m[3], m[6], m[1], m[4], m[7], m[2], m[5], m[8] };

    return ENGINE(self)->vtbl->RotateArray(self, out, t, in, count);
}

/* orig: 06f721c0 — builds the inverse transform {R^T, R^T * -t} through
 * slot 14 and hands it to slot 16. */
static GENRESULT DACOM_API me_inverse_transform_points(void *self, float *out, const float *m,
                                                       const float *in, int32_t count)
{
    float neg_t[3], rt[3], inv[12];

    neg_t[0] = -m[9];
    neg_t[1] = -m[10];
    neg_t[2] = -m[11];
    ENGINE(self)->vtbl->RotateTransposed2(self, rt, m, neg_t);
    inv[0] = m[0]; inv[1] = m[3]; inv[2] = m[6];
    inv[3] = m[1]; inv[4] = m[4]; inv[5] = m[7];
    inv[6] = m[2]; inv[7] = m[5]; inv[8] = m[8];
    inv[9] = rt[0]; inv[10] = rt[1]; inv[11] = rt[2];
    return ENGINE(self)->vtbl->TransformPoints(self, out, inv, in, count);
}

/* ---- quaternions {w, x, y, z} ------------------------------------------ */

/* orig: 06f72740. out[0] is stored before a[0] and b are read again. */
static GENRESULT DACOM_API me_quat_multiply(void *self, float *out, const float *a,
                                            const float *b)
{
    double u0, u1, a0, a0b1, s1;
    float u2, a0b2, a0b3, b0a1, b0a2, b0a3, s2, s3, r1, r2, r3;

    (void)self;
    out[0] = (float)(D(a[0]) * b[0] - (D(a[3]) * b[3] + D(a[2]) * b[2] + D(a[1]) * b[1]));
    u0 = D(a[2]) * b[3] - D(a[3]) * b[2];
    u1 = D(b[1]) * a[3] - D(a[1]) * b[3];
    u2 = (float)(D(a[1]) * b[2] - D(a[2]) * b[1]);
    a0 = a[0];
    a0b1 = a0 * b[1];
    a0b2 = (float)(a0 * b[2]);
    a0b3 = (float)(a0 * b[3]);
    b0a1 = (float)(D(b[0]) * a[1]);
    b0a2 = (float)(D(b[0]) * a[2]);
    b0a3 = (float)(D(b[0]) * a[3]);
    s1 = D(b0a1) + a0b1;
    s2 = (float)(D(b0a2) + a0b2);
    s3 = (float)(D(b0a3) + a0b3);
    r1 = (float)(s1 + u0);
    r2 = (float)(D(s2) + u1);
    r3 = (float)(D(s3) + u2);
    out[1] = r1;
    out[2] = r2;
    out[3] = r3;
    return GR_OK;
}

/* orig: 06f72720 — vec3 constructor (thiscall). */
static void vec3_set(float *v, float x, float y, float z)
{
    v[0] = x;
    v[1] = y;
    v[2] = z;
}

/* orig: 06f725d0 — v' = (w^2 - |q|^2) v + 2 (q.v) q + 2 w (q x v), with
 * out written in three passes that read out[] back. */
static GENRESULT DACOM_API me_quat_rotate(void *self, float *out, const float *q, const float *v)
{
    double c = D(q[0]) * q[0] - (D(q[3]) * q[3] + D(q[2]) * q[2] + D(q[1]) * q[1]);
    double x2, y2, p1, p2, s2, cx, cy, cyw, czw;
    float tmp[3], z2, dt, p0, s0, s1, cz, w, cxw2, cyw2;

    (void)self;
    vec3_set(tmp, (float)(c * v[0]), (float)(c * v[1]), (float)(c * v[2]));
    out[0] = tmp[0];
    out[1] = tmp[1];
    out[2] = tmp[2];
    x2 = D(q[1]) + q[1];
    y2 = D(q[2]) + q[2];
    z2 = (float)(D(q[3]) + q[3]);
    dt = (float)(D(q[3]) * v[2] + D(q[2]) * v[1] + D(q[1]) * v[0]);
    p0 = (float)(x2 * dt);
    p1 = y2 * dt;
    p2 = D(z2) * dt;
    s0 = (float)(D(p0) + out[0]);
    out[0] = s0;
    s1 = (float)(p1 + out[1]);
    out[1] = s1;
    s2 = p2 + out[2];
    out[2] = (float)s2;                 /* fst: s2 stays unrounded */
    cx = D(v[2]) * q[2] - D(v[1]) * q[3];
    cy = D(v[0]) * q[3] - D(v[2]) * q[1];
    w = q[0];
    cz = (float)(D(v[1]) * q[1] - D(v[0]) * q[2]);
    cxw2 = (float)(D((float)(cx * w)) + (float)(cx * w));
    cyw = cy * w;
    czw = D(cz) * w;
    cyw2 = (float)(cyw + cyw);
    out[0] = (float)(D(s0) + cxw2);
    out[1] = (float)(D(s1) + cyw2);
    out[2] = (float)(s2 + (czw + czw));
    return GR_OK;
}

/* orig: 06f72290 */
static GENRESULT DACOM_API me_quat_from_matrix(void *self, float *out, const float *m)
{
    static const int32_t next[3] = { 1, 2, 0 };     /* .rdata 06f73068 */
    double trace = D(m[4]) + m[0] + m[8], s, k;
    int32_t i, j, n;

    (void)self;
    if (trace > 0.0) {
        s = sqrt(trace + D(1.0f));
        out[0] = (float)(D(0.5f) * s);
        k = D(0.5f) / s;
        out[1] = (float)((D(m[7]) - m[5]) * k);
        out[2] = (float)((D(m[2]) - m[6]) * k);
        out[3] = (float)((D(m[3]) - m[1]) * k);
        return GR_OK;
    }
    i = 0;
    if (m[4] > m[0])
        i = 1;
    if (m[8] > m[i * 4])
        i = 2;
    j = next[i];
    n = next[j];
    s = sqrt(D(m[i * 4]) - (D(m[n * 4]) + m[j * 4]) + D(1.0f));
    out[1 + i] = (float)(D(0.5f) * s);
    k = D(0.5f) / s;
    out[0] = (float)((D(m[n * 3 + j]) - m[j * 3 + n]) * k);
    out[1 + j] = (float)((D(m[i * 3 + j]) + m[j * 3 + i]) * k);
    out[1 + n] = (float)((D(m[i * 3 + n]) + m[n * 3 + i]) * k);
    return GR_OK;
}

/* orig: 06f723c0. Which products are rounded to float follows the
 * original's spills to the stack (the q pointer slot is reused for one). */
static GENRESULT DACOM_API me_matrix_from_quat(void *self, float *out, const float *q)
{
    double s, sx, xx, xy, xz, zz;
    float sy, sz, wx, wy, wz, yy, yz;

    (void)self;
    s = D(2.0f) / (D(q[0]) * q[0] + D(q[1]) * q[1] + D(q[2]) * q[2] + D(q[3]) * q[3]);
    sx = s * q[1];
    sy = (float)(s * q[2]);
    sz = (float)(s * q[3]);
    wx = (float)(sx * q[0]);
    wy = (float)(D(sy) * q[0]);
    wz = (float)(D(sz) * q[0]);
    xx = sx * q[1];
    xy = D(sy) * q[1];
    xz = D(sz) * q[1];
    yy = (float)(D(sy) * q[2]);
    yz = (float)(D(sz) * q[2]);
    zz = D(sz) * q[3];
    out[0] = (float)(D(1.0f) - (D(yy) + zz));
    out[1] = (float)(xy - wz);
    out[2] = (float)(xz + wy);
    out[3] = (float)(xy + wz);
    out[4] = (float)(D(1.0f) - (zz + xx));
    out[5] = (float)(D(yz) - wx);
    out[6] = (float)(xz - wy);
    out[7] = (float)(D(yz) + wx);
    out[8] = (float)(D(1.0f) - (D(yy) + xx));
    return GR_OK;
}

/* orig: 06f724d0 */
static GENRESULT DACOM_API me_quat_nlerp(void *self, float *out, const float *a, const float *b,
                                         float t)
{
    double n, r;
    int32_t i;

    (void)self;
    if (D(a[2]) * b[2] + D(a[1]) * b[1] + D(b[3]) * a[3] + D(a[0]) * b[0] < 0.0) {
        for (i = 0; i < 4; i++)
            out[i] = (float)(D(a[i]) - (D(a[i]) + b[i]) * t);
    } else {
        for (i = 0; i < 4; i++)
            out[i] = (float)((D(b[i]) - a[i]) * t + a[i]);
    }
    n = sqrt(D(out[0]) * out[0] + D(out[1]) * out[1] + D(out[2]) * out[2] + D(out[3]) * out[3]);
    r = D(1.0f) / n;
    for (i = 0; i < 4; i++)
        out[i] = (float)(r * out[i]);
    return GR_OK;
}

/* ---- fast square roots ------------------------------------------------- */

/* Seed from the exponent and the table, then two Newton steps (the first
 * kept unrounded on the x87 stack). */
static double rsqrt_newton(float x)
{
    uint32_t bits = fbits(x);
    uint32_t e = ((bits >> 23) & 0xffu) << 22;
    uint32_t seed = ((0x5f000000u - e) & 0xff800000u)
                    | ((uint32_t)g_rsqrt_table[(bits >> 14) & 0x3ffu] << 15);
    float y = bitsf(seed);
    double r = (D(3.0f) - D(y) * y * x) * y * D(0.5f);

    return (D(3.0f) - r * r * x) * r * D(0.5f);
}

/* orig: 06f72830 */
static GENRESULT DACOM_API me_fast_rsqrt(void *self, float *out, float x)
{
    (void)self;
    *out = (float)rsqrt_newton(x);
    return GR_OK;
}

/* orig: 06f728b0 */
static GENRESULT DACOM_API me_fast_sqrt(void *self, float *out, float x)
{
    (void)self;
    *out = (float)(rsqrt_newton(x) * x);
    return GR_OK;
}

static const IMathEngineVtbl me_vtbl = {
    me_query_interface,             /* 0  06f71150 */
    me_addref_release,              /* 1  06f71160 */
    me_addref_release,              /* 2  06f71160 */
    me_invert3,                     /* 3  06f711f0 */
    me_scale3,                      /* 4  06f715b0 */
    me_determinant3,                /* 5  06f71620 */
    me_quat_multiply,               /* 6  06f72740 */
    me_transform_multiply,          /* 7  06f716f0 */
    me_multiply3,                   /* 8  06f71670 */
    me_quat_rotate,                 /* 9  06f725d0 */
    me_transform_point,             /* 10 06f71890 */
    me_rotate,                      /* 11 06f71830 */
    me_rotate,                      /* 12 06f71830 */
    me_rotate_transposed,           /* 13 06f718f0 */
    me_rotate_transposed,           /* 14 06f718f0 */
    me_inverse_transform_point,     /* 15 06f71950 */
    me_transform_points,            /* 16 06f71fb0 */
    me_rotate_array,                /* 17 06f719b0 */
    me_rotate_array_transposed,     /* 18 06f72150 */
    me_inverse_transform_points,    /* 19 06f721c0 */
    me_quat_from_matrix,            /* 20 06f72290 */
    me_matrix_from_quat,            /* 21 06f723c0 */
    me_quat_nlerp,                  /* 22 06f724d0 */
    me_invert_transform,            /* 23 06f71380 */
    me_fast_rsqrt,                  /* 24 06f72830 */
    me_fast_sqrt,                   /* 25 06f728b0 */
};

/* ---- factory interface (object + 4) ------------------------------------ */

/* orig: 06f72940 — adjustor thunk to 06f71150 */
static GENRESULT DACOM_API mf_query_interface(void *self, const char *iface, void **out)
{
    MathEngine *me = FROM_FACTORY(self);
    return me->vtbl->QueryInterface(me, iface, out);
}

/* orig: 06f72950 — adjustor thunk to 06f71160 (AddRef and Release) */
static uint32_t DACOM_API mf_addref_release(void *self)
{
    return me_addref_release(FROM_FACTORY(self));
}

/* orig: 06f71170 */
static GENRESULT DACOM_API mf_create_instance(void *self, DACOMDESC *d, void **out)
{
    const MATHENGINEDESC *desc = (const MATHENGINEDESC *)(const void *)d;
    MathEngine *me;

    *out = NULL;
    if (desc == NULL || desc->component == NULL)
        return GR_INVALID_PARMS;
    if (desc->size != MATHENGINEDESC_ORIG_SIZE ||
        strcmp(MATHENGINE_COMPONENT, desc->component) != 0)   /* repz cmpsb, 13 bytes */
        return GR_INTERFACE_UNSUPPORTED;
    if (desc->variant != NULL && DACOM_stricmp(MATHENGINE_VARIANT, desc->variant) != 0)
        return GR_INTERFACE_UNSUPPORTED;
    me = FROM_FACTORY(self);
    me->vtbl->AddRef(me);
    *out = me;
    return GR_OK;
}

static const IComponentFactoryVtbl mf_vtbl = {
    mf_query_interface,             /* 0 06f72940 */
    mf_addref_release,              /* 1 06f72950 */
    mf_addref_release,              /* 2 06f72950 */
    mf_create_instance,             /* 3 06f71170 */
};

/* orig: 06f71090 (DllMain, DLL_PROCESS_ATTACH). The static constructor
 * 06f71000 builds the same table once more and registers 06f71070 with
 * atexit, which only sets bit 0 of the byte 06f74430; neither is ported.
 * The ICOManager is not released, as in the original. */
int x86math_dll_process_attach(void *hinstance)
{
    ICOManager *com;
    MathEngine *me = malloc(sizeof(*me));

    (void)hinstance;
    if (me == NULL) {
        g_engine = NULL;
        return 1;
    }
    me->vtbl = &me_vtbl;
    me->factory_vtbl = &mf_vtbl;
    build_rsqrt_table();
    g_engine = me;
    com = DACOM_Acquire();
    if (com != NULL)
        com->vtbl->RegisterComponent(com, &me->factory_vtbl, MATHENGINE_COMPONENT,
                                     0x40000000u);
    return 1;
}

#if !defined(_WIN32)
/* Called by platform_lib_load after dlopen (replaces DllMain). */
int dll_process_attach(void *handle)
{
    return x86math_dll_process_attach(handle);
}
#endif
