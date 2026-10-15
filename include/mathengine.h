/* mathengine.h — the "3DMathEngine" component of x86math.dll: matrix,
 * transform and quaternion helpers behind one vtable. Port:
 * src/dalibs/x86math/, notes/x86math_dll.md.
 *
 * Users (each gets it the same way: DACOM_Acquire()->CreateInstance with a
 * 0xc-byte descriptor naming "3DMathEngine"): Freelancer.exe 005b73e0,
 * common.dll 06391a10, engbase.dll 06628190, rp8.dll 06d5cd40, alchemy,
 * deformable2, flmaterials, rendcomp, server, shading, thorn, content.
 *
 * The interface name is unknown: QueryInterface always fails, so no string
 * names it. Slot names are guesses from what the code computes.
 *
 * Layouts, as the original indexes them (row r of a 3x3 is m[3r..3r+2]):
 *   matrix3   float[9]   row-major; v' = M v means v'_r = row_r . v
 *   transform float[12]  matrix3 + translation t at [9..11]; p' = M p + t
 *   quat      float[4]   {w, x, y, z} (w first: 2290 writes 0.5*sqrt(trace+1)
 *                        to [0])
 *   vector    float[3]
 * Every method reads its inputs through the pointers as it goes, so output
 * buffers that overlap an input give the original's (garbled) results.
 */
#ifndef MATHENGINE_H
#define MATHENGINE_H

#include <stdint.h>

#include "dacom.h"

#define MATHENGINE_COMPONENT "3DMathEngine"   /* .data 06f74020 */
#define MATHENGINE_VARIANT   "x86"            /* .rdata 06f73060 */

/* Creation descriptor, 0xc bytes in the original; CreateInstance (06f71170)
 * requires size == 0xc exactly. Callers zero `variant`. */
typedef struct MATHENGINEDESC {
    uint32_t    size;       /* +0x0 = 0xc */
    const char *component;  /* +0x4 "3DMathEngine" (strcmp, case-sensitive) */
    const char *variant;    /* +0x8 NULL, or "x86" (stricmp); name is a guess */
} MATHENGINEDESC;
#define MATHENGINEDESC_ORIG_SIZE 0xcu

/* vtbl 06f73090. Return values are GR_OK unless noted. */
typedef struct IMathEngineVtbl {
    /* 0: always GR_GENERIC (-1) and *out = NULL (06f71150). */
    GENRESULT (DACOM_API *QueryInterface)(void *self, const char *iface, void **out);
    uint32_t  (DACOM_API *AddRef)(void *self);                         /* 1: returns 1 */
    uint32_t  (DACOM_API *Release)(void *self);                        /* 2: returns 1 */
    /* 3: out = inverse of m. If |det| <= 1e-8 (or NaN): out = adjugate and
     * GR_INVALID_PARMS. */
    GENRESULT (DACOM_API *Invert3)(void *self, float *out, const float *m);
    GENRESULT (DACOM_API *Scale3)(void *self, float *out, const float *m, float s);    /* 4 */
    /* 5: the original returns it in st(0) unrounded (53-bit), so the port
     * returns double. */
    double    (DACOM_API *Determinant3)(void *self, const float *m);
    GENRESULT (DACOM_API *QuatMultiply)(void *self, float *out, const float *a,
                                        const float *b);                   /* 6: a*b */
    GENRESULT (DACOM_API *TransformMultiply)(void *self, float *out, const float *a,
                                             const float *b);              /* 7: a after b */
    GENRESULT (DACOM_API *Multiply3)(void *self, float *out, const float *a,
                                     const float *b);                      /* 8: a*b */
    GENRESULT (DACOM_API *QuatRotate)(void *self, float *out, const float *q,
                                      const float *v);                     /* 9 */
    GENRESULT (DACOM_API *TransformPoint)(void *self, float *out, const float *xf,
                                          const float *v);                 /* 10: M v + t */
    GENRESULT (DACOM_API *Rotate)(void *self, float *out, const float *m,
                                  const float *v);                         /* 11: M v */
    GENRESULT (DACOM_API *Rotate2)(void *self, float *out, const float *m,
                                   const float *v);                        /* 12: same code as 11 */
    GENRESULT (DACOM_API *RotateTransposed)(void *self, float *out, const float *m,
                                            const float *v);               /* 13: M^T v */
    GENRESULT (DACOM_API *RotateTransposed2)(void *self, float *out, const float *m,
                                             const float *v);              /* 14: same code as 13 */
    GENRESULT (DACOM_API *InverseTransformPoint)(void *self, float *out, const float *xf,
                                                 const float *v);          /* 15: M^T (v - t) */
    /* 16..19: `count` vectors of 3 floats. Nothing happens for count <= 0. */
    GENRESULT (DACOM_API *TransformPoints)(void *self, float *out, const float *xf,
                                           const float *in, int32_t count);        /* 16 */
    GENRESULT (DACOM_API *RotateArray)(void *self, float *out, const float *m,
                                       const float *in, int32_t count);            /* 17 */
    GENRESULT (DACOM_API *RotateArrayTransposed)(void *self, float *out, const float *m,
                                                 const float *in, int32_t count);  /* 18 */
    GENRESULT (DACOM_API *InverseTransformPoints)(void *self, float *out, const float *xf,
                                                  const float *in, int32_t count); /* 19 */
    GENRESULT (DACOM_API *QuatFromMatrix)(void *self, float *out, const float *m); /* 20 */
    GENRESULT (DACOM_API *MatrixFromQuat)(void *self, float *out, const float *q); /* 21 */
    /* 22: normalized lerp from a to b (to -b when a.b < 0). */
    GENRESULT (DACOM_API *QuatNlerp)(void *self, float *out, const float *a,
                                     const float *b, float t);
    /* 23: out = inverse of the transform xf. *det_out = det(xf) * (1/det(xf))
     * (about 1.0); when |det| <= 1e-8 (or NaN) out is the unscaled adjugate
     * form, *det_out = det, and the result is GR_INVALID_PARMS. */
    GENRESULT (DACOM_API *InvertTransform)(void *self, float *out, float *det_out,
                                           const float *xf);
    /* 24/25: table-seeded Newton approximations of 1/sqrt(x) and sqrt(x). */
    GENRESULT (DACOM_API *FastRSqrt)(void *self, float *out, float x);
    GENRESULT (DACOM_API *FastSqrt)(void *self, float *out, float x);
} IMathEngineVtbl;
typedef struct IMathEngine { const IMathEngineVtbl *vtbl; } IMathEngine;

#endif
