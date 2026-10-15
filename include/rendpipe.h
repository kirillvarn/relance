/* rendpipe.h — render pipeline and texture library interfaces (rp8.dll),
 * PARTIAL: only the slots called by ported code. Recovered from their
 * callers (notes/ximage_dll.md), not from rp8.dll yet. Unknown slots are
 * placeholders so indices stay correct. Slot names are guesses from the
 * argument shapes unless noted.
 *
 * The object passed as BIGIMAGEDESC.pipeline is DALib::Pipeline (dalib.dll
 * export, "1.11_IRenderPipeline8B"); QueryInterface on it gives
 * "1.11_ITextureLibraryA".
 */
#ifndef RENDPIPE_H
#define RENDPIPE_H

#include <stdint.h>

#include "dacom.h"

/* DA pixel format: an index into the pixel-format tables (ximage.dll
 * 06f82900/06f82920; the exe has its own copies at 005b7010/005b7030). Passed
 * by value as 4 bytes (06f81000 copies it with 06f81a70). */
typedef int32_t DAPIXFMT;

/* Texture handle written by CreateTexture. guess: a 32-bit id, as the
 * original stores 4 bytes per texture (06f81180 allocates count*4). */
typedef uint32_t DATEXTURE;

/* Pipeline property ids read by ximage.dll (06f823f0) through slot 8. The
 * names are guesses from how 06f81180 uses the values. */
#define RP_PROP_SQUARE_TEXTURES 5u   /* non-zero: edge tiles are made square */
#define RP_PROP_MAX_TEXTURE_W   6u   /* tile width */
#define RP_PROP_MAX_TEXTURE_H   7u   /* tile height */

typedef struct IRenderPipelineVtbl {
    DACOM_IUNKNOWN_SLOTS
    void (*unk3_7[5])(void);                                                    /* 3..7 */
    /* 8: return value is ignored by ximage.dll. */
    GENRESULT (DACOM_API *GetProperty)(void *self, uint32_t id, uint32_t *out);  /* 8 */
    void (*unk9_44[36])(void);                                                  /* 9..44 */
    /* 45: 0 on success. ximage.dll passes levels = 1, flags = 0. */
    GENRESULT (DACOM_API *CreateTexture)(void *self, uint32_t w, uint32_t h,
                                         const DAPIXFMT *fmt, uint32_t levels,
                                         uint32_t flags, DATEXTURE *out);       /* 45 */
    GENRESULT (DACOM_API *DestroyTexture)(void *self, DATEXTURE tex);           /* 46 */
    void (*unk47_52[6])(void);                                                  /* 47..52 */
    /* 53: upload a w*h block of `data` (rows `pitch` bytes apart, format
     * `fmt`) into mip `level`. 0 on success. The last two args are always 0
     * in ximage.dll. */
    GENRESULT (DACOM_API *SetTextureLevel)(void *self, DATEXTURE tex, uint32_t level,
                                           uint32_t w, uint32_t h, uint32_t pitch,
                                           const DAPIXFMT *fmt, const void *data,
                                           uint32_t unk8, uint32_t unk9);       /* 53 */
} IRenderPipelineVtbl;
typedef struct IRenderPipeline { const IRenderPipelineVtbl *vtbl; } IRenderPipeline;

typedef struct ITextureLibraryAVtbl {
    DACOM_IUNKNOWN_SLOTS
    void (*unk3_43[41])(void);                                                  /* 3..43 */
    /* 44: pick the texture format to use for data wanted in `want`; < 0 on
     * failure (06f81180 checks the sign only). */
    GENRESULT (DACOM_API *FindTextureFormat)(void *self, const DAPIXFMT *want,
                                             DAPIXFMT *out);                    /* 44 */
} ITextureLibraryAVtbl;
typedef struct ITextureLibraryA { const ITextureLibraryAVtbl *vtbl; } ITextureLibraryA;

#define IID_ITextureLibraryA "1.11_ITextureLibraryA"

#endif /* RENDPIPE_H */
