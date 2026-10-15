/* bigimage.h — the "BigImage" component of ximage.dll: an image larger than
 * one texture, split into texture tiles and drawn as quads through a
 * caller-supplied callback. Port: src/dalibs/ximage/, notes/ximage_dll.md.
 * Slot names are guesses unless noted.
 */
#ifndef BIGIMAGE_H
#define BIGIMAGE_H

#include <stdint.h>

#include "dacom.h"
#include "rendpipe.h"

#define BIGIMAGE_COMPONENT "BigImage"        /* .data 06f840f0 */
#define IID_IBigImage      "1.11_IBigImage"  /* .data 06f8412c */
#define IID_IBigImage2     "1.11_IBigImage2" /* .data 06f8413c */

/* Draw callback (cdecl), called once per visible tile by IBigImage::Draw.
 *   quad: screen rect {left, bottom, right, top}, already offset by -0.5
 *   uv:   8 floats, (u,v) of the corners in the order
 *         (u0,v0) (u1,v0) (u0,v1) (u1,v1)
 *   argb: alpha << 24 | color (see SetColor for a quirk) */
typedef void (*BIGIMAGE_DRAW_FN)(DATEXTURE tex, uint32_t argb, const float *quad,
                                 const float *uv);

/* Source object for BIGIMAGEDESC.source. The interface name is unknown; no
 * caller of this path was found. Slots from 06f81000. */
typedef struct IBigImageSourceVtbl {
    DACOM_IUNKNOWN_SLOTS
    /* 3: copy the pixels in format `fmt` into `buf` (rows `pitch` apart);
     * 0 on success. The last arg is always 0. */
    GENRESULT (DACOM_API *GetPixels)(void *self, DAPIXFMT fmt, void *buf,
                                     uint32_t pitch, uint32_t unk4);            /* 3 */
    void (*unk4)(void);                                                         /* 4 */
    GENRESULT (DACOM_API *GetSize)(void *self, uint32_t *w, uint32_t *h);       /* 5 */
    GENRESULT (DACOM_API *GetFormat)(void *self, DAPIXFMT *out);                /* 6 */
} IBigImageSourceVtbl;
typedef struct IBigImageSource { const IBigImageSourceVtbl *vtbl; } IBigImageSource;

/* Creation descriptor for ICOManager::CreateInstance, 0x2c bytes in the
 * original; size must be exactly 0x2c (06f823f0). Layout from 06f823f0 and
 * its caller in Freelancer.exe Intro.cpp (00565490). */
typedef struct BIGIMAGEDESC {
    uint32_t          size;        /* +0x00 = 0x2c */
    const char       *component;   /* +0x04 "BigImage" (exact, case-sensitive) */
    IRenderPipeline  *pipeline;    /* +0x08 required */
    IBigImageSource  *source;      /* +0x0c if set, pixels come from here ... */
    const DAPIXFMT   *want;        /* +0x10 ... converted to this format */
    const DAPIXFMT   *format;      /* +0x14 else: format of `data` */
    const void       *data;        /* +0x18 */
    uint32_t          width;       /* +0x1c */
    uint32_t          height;      /* +0x20 */
    uint32_t          pitch;       /* +0x24 bytes per row of `data` */
    BIGIMAGE_DRAW_FN  draw;        /* +0x28 */
} BIGIMAGEDESC;
#define BIGIMAGEDESC_ORIG_SIZE 0x2cu

/* IBigImage and IBigImage2 share one vtable (06f830b0); both interfaces are
 * at offset 0 (table 06f830e4). Rects are int32 {left, top, right, bottom}. */
typedef struct IBigImageVtbl {
    DACOM_IUNKNOWN_SLOTS
    /* 3: 06f82640, does nothing (`ret 0xc`); the original leaves EAX as is. */
    GENRESULT (DACOM_API *Slot3)(void *self, void *a, void *b);
    /* 4: draw source rect `src` (NULL or empty: the whole image) stretched
     * to `dst`, through BIGIMAGEDESC.draw. */
    void (DACOM_API *Draw)(void *self, const int32_t *src, const int32_t *dst);
    void (DACOM_API *GetSize)(void *self, uint32_t *w, uint32_t *h);            /* 5 */
    void (DACOM_API *SetAlpha)(void *self, float a);                            /* 6 */
    void (DACOM_API *SetColor)(void *self, const float *rgb);                   /* 7 */
    int32_t (DACOM_API *GetTextureCount)(void *self);                           /* 8 */
    /* 9: tile `i`'s texture; `rect` gets the whole image size. -1 if out of range. */
    GENRESULT (DACOM_API *GetTexture)(void *self, int32_t i, DATEXTURE *tex,
                                      int32_t *rect);
    /* 10: re-upload new pixels of the same size (IBigImage2; the exe calls it
     * after QI for IBigImage2). -2 bad args, -1 upload failed. */
    GENRESULT (DACOM_API *SetData)(void *self, const void *data, const DAPIXFMT *fmt,
                                   uint32_t w, uint32_t h, uint32_t pitch);
    GENRESULT (DACOM_API *Slot11)(void *self, void *a);       /* 11: always -7 */
} IBigImageVtbl;
typedef struct IBigImage { const IBigImageVtbl *vtbl; } IBigImage;

#endif /* BIGIMAGE_H */
