/* bigimage.c — the "BigImage" component (IBigImage/IBigImage2 vtbl 06f830b0,
 * factory vtbl 06f83070). Port of ximage.dll 06f81000..06f828e0
 * (notes/ximage_dll.md). Source file per the original's FDUMP strings:
 * Src\ximage\bigimage.cpp.
 *
 * An image is cut into tiles of the pipeline's maximum texture size
 * (RP_PROP_MAX_TEXTURE_W/H), row-major. The right column and bottom row hold
 * the remainders; their textures are rounded up to a power of two, or kept
 * at full tile size (corner: square) when RP_PROP_SQUARE_TEXTURES is set.
 *
 * x87: the float math follows the original's operation order assuming the
 * MSVC default 53-bit precision (notes/ximage_dll.md, "Precision"). */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "msvc_compat.h"
#include "xi_internal.h"

#define BI_SRC_FILE "C:\\work\\builds\\dalibs\\dalibs-build\\build\\Src\\ximage\\bigimage.cpp"
#define BI_WARNING  "%s(%d) : WARNING:General:%s"   /* .data 06f84040 */
#define BI_NOTICE   "%s(%d) : NOTICE:General:%s"    /* .data 06f840d4 */
#define BI_SET_FAIL " failed to set texture level data "            /* .data 06f8401c */
#define BI_ALLOC_FAIL "Failed to allocate %d by %d, %d bpp texture." /* .data 06f840a4 */
#define BI_GR_NOT_IMPLEMENTED (-7)   /* 06f81de0; name is a guess */

/* orig: operator new(0x48). Runtime-only, so real pointers. */
typedef struct BigImage {
    const IBigImageVtbl *vtbl;       /* +0x00 */
    IRenderPipeline  *pipe;          /* +0x04 BIGIMAGEDESC.pipeline, AddRef'd */
    ITextureLibraryA *texlib;        /* +0x08 QI of pipe */
    DATEXTURE        *textures;      /* +0x0c [count], zeroed */
    float           (*uv)[8];        /* +0x10 [count], 32 bytes per tile */
    int32_t           count;         /* +0x14 tiles */
    uint32_t          cols;          /* +0x18 tiles across */
    uint32_t          rows;          /* +0x1c tiles down */
    uint32_t          width;         /* +0x20 */
    uint32_t          height;        /* +0x24 */
    uint32_t          color;         /* +0x28 0x00ffffff initially */
    uint8_t           alpha;         /* +0x2c 0xff initially */
    DAPIXFMT          tex_format;    /* +0x30 from FindTextureFormat */
    BIGIMAGE_DRAW_FN  draw;          /* +0x34 */
    uint32_t          square;        /* +0x38 RP_PROP_SQUARE_TEXTURES */
    uint32_t          tile_w;        /* +0x3c RP_PROP_MAX_TEXTURE_W */
    uint32_t          tile_h;        /* +0x40 RP_PROP_MAX_TEXTURE_H */
    uint32_t          refs;          /* +0x44 */
} BigImage;

/* orig: operator new(0xc) */
typedef struct BigImageFactory {
    const IComponentFactoryVtbl *vtbl;   /* +0x0 */
    uint32_t    refs;                    /* +0x4 */
    const char *name;                    /* +0x8 "BigImage" */
} BigImageFactory;

#if UINTPTR_MAX == 0xffffffffu
_Static_assert(sizeof(BigImage) == 0x48, "BigImage size");
_Static_assert(offsetof(BigImage, tex_format) == 0x30, "BigImage.tex_format");
_Static_assert(offsetof(BigImage, refs) == 0x44, "BigImage.refs");
_Static_assert(sizeof(BIGIMAGEDESC) == BIGIMAGEDESC_ORIG_SIZE, "BIGIMAGEDESC size");
_Static_assert(offsetof(BIGIMAGEDESC, draw) == 0x28, "BIGIMAGEDESC.draw");
_Static_assert(sizeof(BigImageFactory) == 0xc, "BigImageFactory size");
#endif

#define SELF(p) ((BigImage *)(p))

static void *xcalloc(size_t n, size_t size)
{
    void *p = calloc(n, size);
    if (p == NULL && n != 0)
        abort();                /* the original writes through NULL */
    return p;
}

/* orig: 06f81a10 — the smallest power of two >= v (v itself if it is one);
 * 0 for 0. Shifts are arithmetic as in the original, which loops forever
 * on a negative v; callers only pass remainders < tile size. */
static int32_t next_pow2(int32_t v)
{
    uint32_t r = 1;
    int pow2 = (v & (v - 1)) == 0;
    while (v != 0) {
        v >>= 1;
        r <<= 1;
    }
    return pow2 ? (int32_t)r >> 1 : (int32_t)r;
}

/* orig: 06f822d0 — order a rect's corners. 0 if it is empty in either axis. */
static int normalize_rect(int32_t *r)
{
    int32_t x0 = r[0], x1 = r[2], y0 = r[1], y1 = r[3];
    int32_t dx = (int32_t)((uint32_t)x1 - (uint32_t)x0);
    int32_t dy = (int32_t)((uint32_t)y1 - (uint32_t)y0);
    if (dx == 0 || dy == 0)
        return 0;
    if (dx < 0) {
        r[0] = x1;
        r[2] = x0;
    }
    if (dy <= 0) {
        r[1] = y1;
        r[3] = y0;
    }
    return 1;
}

/* ---- tile creation ---- */

static int create_tile(BigImage *bi, int32_t idx, uint32_t w, uint32_t h)
{
    return bi->pipe->vtbl->CreateTexture(bi->pipe, w, h, &bi->tex_format, 1, 0,
                                         &bi->textures[idx]);
}

static int set_tile(BigImage *bi, int32_t idx, uint32_t w, uint32_t h, uint32_t pitch,
                    const DAPIXFMT *fmt, const uint8_t *data)
{
    return bi->pipe->vtbl->SetTextureLevel(bi->pipe, bi->textures[idx], 0, w, h, pitch,
                                           fmt, data, 0, 0);
}

/* The "Failed to allocate" warning prints the whole image size and a
 * constant 16 bpp, as the original does. */
static int fail_alloc(int line, uint32_t w, uint32_t h)
{
    char msg[0x2000];
    snprintf(msg, sizeof(msg), BI_ALLOC_FAIL, (int)w, (int)h, 0x10);  /* 06f81a40 */
    FDUMP(DACOM_DUMP_WARNING, BI_WARNING, BI_SRC_FILE, line, msg);
    return 0;
}

static int fail_set(BigImage *bi, int line, int32_t idx)
{
    FDUMP(DACOM_DUMP_WARNING, BI_WARNING, BI_SRC_FILE, line, BI_SET_FAIL);
    bi->pipe->vtbl->DestroyTexture(bi->pipe, bi->textures[idx]);
    bi->textures[idx] = 0;
    return 0;
}

/* orig: 06f81180 (thiscall, 0x2020-byte frame) — create and fill the tiles
 * from `data` (format `fmt`, rows `pitch` apart); the textures use the
 * format the texture library picks for `want`. 1 on success. Created
 * textures are kept on failure; the destructor frees them. */
static int build_tiles(BigImage *bi, const DAPIXFMT *want, const DAPIXFMT *fmt,
                       const uint8_t *data, uint32_t w, uint32_t h, uint32_t pitch)
{
    uint32_t tw, th, cols, rows, wrem, hrem, bpp;
    int32_t idx = 0, col = 0, row = 0, ph;

    if (bi->texlib->vtbl->FindTextureFormat(bi->texlib, want, &bi->tex_format) < 0)
        return 0;
    tw = bi->tile_w;
    th = bi->tile_h;
    cols = w / tw;
    rows = h / th;
    wrem = w % tw;
    hrem = h % th;
    bi->width = w;
    bi->count = (int32_t)((rows + (hrem != 0)) * (cols + (wrem != 0)));
    bi->height = h;
    bpp = xi_pf_bytes(*fmt);
    if (bi->count == 0)
        return 1;
    bi->uv = xcalloc((size_t)(uint32_t)bi->count, sizeof(*bi->uv));
    bi->textures = xcalloc((size_t)(uint32_t)bi->count, sizeof(*bi->textures));

#define TILE_DATA() (data + (uint32_t)(tw * bpp * (uint32_t)col + th * (uint32_t)row * pitch))
    for (row = 0; row < (int32_t)rows; row++) {
        for (col = 0; col < (int32_t)cols; col++) {
            if (create_tile(bi, idx, tw, th) != 0)
                return fail_alloc(0x179, w, h);
            if (set_tile(bi, idx, tw, th, pitch, fmt, TILE_DATA()) != 0)
                return fail_set(bi, 0x17f, idx);
            idx++;
        }
        if (wrem != 0) {
            if (bi->square) {
                if (create_tile(bi, idx, tw, th) != 0)
                    return fail_alloc(0x18f, w, h);
            } else if (create_tile(bi, idx, (uint32_t)next_pow2((int32_t)wrem), th) != 0) {
                return fail_alloc(0x197, w, h);
            }
            if (set_tile(bi, idx, wrem, th, pitch, fmt, TILE_DATA()) != 0)
                return fail_set(bi, 0x19f, idx);
            idx++;
        }
    }
    if (hrem != 0) {
        ph = next_pow2((int32_t)hrem);
        for (col = 0; col < (int32_t)cols; col++) {
            if (bi->square) {
                if (create_tile(bi, idx, tw, th) != 0)
                    return fail_alloc(0x1b6, w, h);
            } else if (create_tile(bi, idx, tw, (uint32_t)ph) != 0) {
                return fail_alloc(0x1be, w, h);
            }
            if (set_tile(bi, idx, tw, hrem, pitch, fmt, TILE_DATA()) != 0)
                return fail_set(bi, 0x1c5, idx);
            idx++;
        }
        if (wrem != 0) {
            if (bi->square) {
                /* square corner: the larger of the two powers of two */
                int32_t s = next_pow2((int32_t)wrem);
                if (s <= ph)
                    s = ph;
                if (create_tile(bi, idx, (uint32_t)s, (uint32_t)s) != 0)
                    return fail_alloc(0x1e1, w, h);
            } else if (create_tile(bi, idx, (uint32_t)next_pow2((int32_t)wrem),
                                   (uint32_t)ph) != 0) {
                return fail_alloc(0x1e9, w, h);
            }
            if (set_tile(bi, idx, wrem, hrem, pitch, fmt, TILE_DATA()) != 0)
                return fail_set(bi, 0x1ef, idx);
        }
    }
#undef TILE_DATA
    bi->cols = (uint32_t)col + (wrem != 0);
    bi->rows = (uint32_t)row + (hrem != 0);
    return 1;
}

/* orig: 06f81000 (thiscall) — build the tiles from a source object. The
 * pixels are asked for in `want`; if the source refuses, in its own format. */
static int build_from_source(BigImage *bi, IBigImageSource *src, const DAPIXFMT *want)
{
    DAPIXFMT fmt = xi_pf_from_d3dfmt(0);
    uint32_t w = 0, h = 0, wbpp, sbpp;
    uint8_t *buf;
    int r;

    if (src->vtbl->GetFormat(src, &fmt) != 0)
        return 0;
    if (src->vtbl->GetSize(src, &w, &h) != 0)
        return 0;
    wbpp = xi_pf_bytes(*want);
    sbpp = xi_pf_bytes(fmt);
    buf = malloc((uint32_t)(wbpp * w * h));    /* orig: no NULL check */
    if (src->vtbl->GetPixels(src, *want, buf, wbpp * w, 0) == 0) {
        r = build_tiles(bi, want, want, buf, w, h, wbpp * w);
    } else {
        free(buf);
        buf = malloc((uint32_t)(sbpp * w * h));
        if (src->vtbl->GetPixels(src, fmt, buf, sbpp * w, 0) != 0) {
            free(buf);
            return 0;
        }
        r = build_tiles(bi, want, &fmt, buf, w, h, sbpp * w);
    }
    free(buf);
    return r;
}

/* ---- UVs and drawing ---- */

/* orig: 06f81df0 (thiscall) — per tile, the UVs of the part of source rect
 * `r` (normalized, unsigned compares as in the original) that lies in the
 * tile. Tiles outside the rect get zero UVs (V only, if only V is outside). */
static void compute_uvs(BigImage *bi, const uint32_t *r)
{
    uint32_t tx, ty;
    for (tx = 0; tx < bi->cols; tx++) {
        uint32_t tw = bi->tile_w, ew = tw;
        uint32_t cx0 = r[0] / tw, rx0 = r[0] % tw, cx1, rx1;
        float u0, u1;

        if (cx0 > tx || (cx1 = r[2] / tw, rx1 = r[2] % tw, cx1 < tx)) {
            for (ty = 0; ty < bi->rows; ty++)
                memset(bi->uv[bi->cols * ty + tx], 0, sizeof(bi->uv[0]));
            continue;
        }
        if (tx >= bi->cols - 1 && bi->width % tw != 0)
            ew = bi->width % tw;
        u0 = cx0 == tx ? (float)((double)rx0 / (double)(int32_t)ew) : 0.0f;
        u1 = cx1 == tx ? (float)((double)rx1 / (double)(int32_t)ew) : 1.0f;

        for (ty = 0; ty < bi->rows; ty++) {
            float *q = bi->uv[bi->cols * ty + tx];
            uint32_t th = bi->tile_h, eh = th;
            uint32_t cy0 = r[1] / th, ry0 = r[1] % th, cy1, ry1;
            float v0, v1;

            if (cy0 > ty || (cy1 = r[3] / th, ry1 = r[3] % th, cy1 < ty)) {
                q[0] = u0; q[1] = 0.0f; q[2] = u1; q[3] = 0.0f;
                q[4] = u0; q[5] = 0.0f; q[6] = u1; q[7] = 0.0f;
                continue;
            }
            if (ty >= bi->rows - 1 && bi->height % th != 0)
                eh = bi->height % th;
            v0 = cy0 == ty ? (float)((double)ry0 / (double)(int32_t)eh) : 0.0f;
            v1 = cy1 == ty ? (float)((double)ry1 / (double)(int32_t)eh) : 1.0f;
            q[0] = u0; q[1] = v0; q[2] = u1; q[3] = v0;
            q[4] = u0; q[5] = v1; q[6] = u1; q[7] = v1;
        }
    }
}

/* orig: 06f82060, slot 4 */
static void DACOM_API bi_draw(void *self, const int32_t *src, const int32_t *dst)
{
    BigImage *bi = SELF(self);
    int32_t r[4], dw, dh, tx, ty;
    float sx, sy, cur_x, cur_y;

    if (src == NULL || (memcpy(r, src, sizeof(r)), !normalize_rect(r))) {
        r[0] = 0;
        r[1] = 0;
        r[2] = (int32_t)bi->width;
        r[3] = (int32_t)bi->height;
    }
    compute_uvs(bi, (const uint32_t *)r);
    dw = (int32_t)((uint32_t)r[2] - (uint32_t)r[0]);
    if (dw == 0)
        return;
    dh = (int32_t)((uint32_t)r[3] - (uint32_t)r[1]);
    if (dh == 0)
        return;
    cur_x = (float)dst[0];
    sx = (float)((double)(int32_t)((uint32_t)dst[2] - (uint32_t)dst[0]) / (double)dw);
    sy = (float)((double)(int32_t)((uint32_t)dst[3] - (uint32_t)dst[1]) / (double)dh);

    for (tx = 0; tx < (int32_t)bi->cols; tx++) {
        const float *top = bi->uv[tx];
        uint32_t ew = bi->tile_w;
        float du = top[2] - top[0];
        float step_x;

        cur_y = (float)dst[1];
        if (tx == (int32_t)bi->cols - 1 && bi->width % bi->tile_w != 0)
            ew = bi->width % bi->tile_w;
        step_x = (float)((double)ew * (double)sx * (double)du);

        for (ty = 0; ty < (int32_t)bi->rows; ty++) {
            int32_t tile = (int32_t)(bi->cols * (uint32_t)ty + (uint32_t)tx);
            const float *q = bi->uv[tile];
            uint32_t eh = bi->tile_h;
            /* v1 - v0 stays in an x87 register: not rounded to float */
            double dv = (double)q[5] - (double)q[1];
            float step_y;

            if (ty == (int32_t)bi->rows - 1 && bi->height % bi->tile_h != 0)
                eh = bi->height % bi->tile_h;
            step_y = (float)((double)eh * (double)sy * dv);
            if (du == 0.0f)     /* skips the y advance too; NaN draws */
                continue;
            if (bi->draw != NULL) {
                float quad[4];
                quad[0] = (float)((double)cur_x - 0.5);
                quad[1] = (float)((double)step_y + (double)cur_y - 0.5);
                quad[2] = (float)((double)step_x + (double)cur_x - 0.5);
                quad[3] = (float)((double)cur_y - 0.5);
                bi->draw(bi->textures[tile], (uint32_t)bi->alpha << 24 | bi->color, quad, q);
            }
            cur_y = (float)((double)step_y + (double)cur_y);
        }
        cur_x = (float)((double)step_x + (double)cur_x);
    }
}

/* ---- IBigImage ---- */

/* orig: 06f82640, slot 3 — empty. The original returns whatever is in EAX;
 * the port returns 0. */
static GENRESULT DACOM_API bi_slot3(void *self, void *a, void *b)
{
    (void)self;
    (void)a;
    (void)b;
    return GR_OK;
}

/* orig: 06f82650, slot 5 */
static void DACOM_API bi_get_size(void *self, uint32_t *w, uint32_t *h)
{
    *w = SELF(self)->width;
    *h = SELF(self)->height;
}

/* orig: 06f82670, slot 6 — _ftol(a * 255.0f), low byte. */
static void DACOM_API bi_set_alpha(void *self, float a)
{
    SELF(self)->alpha = (uint8_t)msvc_ftol((double)a * 255.0);
}

/* orig: 06f82690, slot 7 — rgb[0..2] in 0..1. Quirk kept: the result has
 * 0xff in the top byte (r is OR'd with 0xffffff00), so once SetColor has
 * been called the alpha OR'd in by Draw no longer has any effect. */
static void DACOM_API bi_set_color(void *self, const float *rgb)
{
    uint32_t g = (uint32_t)msvc_ftol((double)rgb[1] * 255.0);
    uint32_t r = (uint32_t)msvc_ftol((double)rgb[0] * 255.0);
    uint32_t b = (uint32_t)msvc_ftol((double)rgb[2] * 255.0);
    SELF(self)->color = ((g & 0xffu) | (r | 0xffffff00u) << 8) << 8 | (b & 0xffu);
}

/* orig: 06f826f0, slot 8 */
static int32_t DACOM_API bi_get_texture_count(void *self)
{
    return SELF(self)->count;
}

/* orig: 06f82700, slot 9 — SetRect(rect, 0, 0, width, height). */
static GENRESULT DACOM_API bi_get_texture(void *self, int32_t i, DATEXTURE *tex, int32_t *rect)
{
    BigImage *bi = SELF(self);
    if (i < 0 || i >= bi->count)
        return GR_GENERIC;
    *tex = bi->textures[i];
    if (rect != NULL) {         /* SetRect fails on NULL */
        rect[0] = 0;
        rect[1] = 0;
        rect[2] = (int32_t)bi->width;
        rect[3] = (int32_t)bi->height;
    }
    return GR_OK;
}

static int set_fail(int line)
{
    FDUMP(DACOM_DUMP_NOTICE, BI_NOTICE, BI_SRC_FILE, line, BI_SET_FAIL);
    return GR_GENERIC;
}

/* orig: 06f81a80, slot 10 — upload new pixels into the existing tiles, in
 * the order build_tiles created them. */
static GENRESULT DACOM_API bi_set_data(void *self, const void *data_, const DAPIXFMT *fmt,
                                       uint32_t w, uint32_t h, uint32_t pitch)
{
    BigImage *bi = SELF(self);
    const uint8_t *data = data_;
    uint32_t tw, th, cols, rows, bpp;
    int32_t idx = 0, col = 0, row = 0;

    if (w != bi->width || h != bi->height || data == NULL || fmt == NULL)
        return GR_INVALID_PARMS;
    tw = bi->tile_w;
    th = bi->tile_h;
    cols = w / tw;
    rows = h / th;
    bpp = xi_pf_bytes(*fmt);
    if (bi->count == 0)
        return GR_OK;

#define TILE_DATA() (data + (uint32_t)(tw * bpp * (uint32_t)col + th * (uint32_t)row * pitch))
    for (row = 0; row < (int32_t)rows; row++) {
        for (col = 0; col < (int32_t)cols; col++) {
            if (set_tile(bi, idx, tw, th, pitch, fmt, TILE_DATA()) != 0)
                return set_fail(0x21e);
            idx++;
        }
        if (w % tw != 0) {
            if (set_tile(bi, idx, w % tw, th, pitch, fmt, TILE_DATA()) != 0)
                return set_fail(0x22b);
            idx++;
        }
    }
    if (h % th == 0)
        return GR_OK;
    for (col = 0; col < (int32_t)cols; col++) {
        if (set_tile(bi, idx, tw, h % th, pitch, fmt, TILE_DATA()) != 0)
            return set_fail(0x23e);
        idx++;
    }
    if (w % tw != 0 && set_tile(bi, idx, w % tw, h % th, pitch, fmt, TILE_DATA()) != 0)
        return set_fail(0x24c);
#undef TILE_DATA
    return GR_OK;
}

/* orig: 06f81de0, slot 11 */
static GENRESULT DACOM_API bi_slot11(void *self, void *a)
{
    (void)self;
    (void)a;
    return BI_GR_NOT_IMPLEMENTED;
}

/* orig: 06f82760 — interface table 06f830e4: both names at offset 0. */
static GENRESULT DACOM_API bi_query_interface(void *self, const char *iface, void **out)
{
    if (strcmp(IID_IBigImage2, iface) == 0 || strcmp(IID_IBigImage, iface) == 0) {
        SELF(self)->vtbl->AddRef(self);
        *out = self;
        return GR_OK;
    }
    *out = NULL;
    return GR_INTERFACE_UNSUPPORTED;
}

/* orig: 06f82810 */
static uint32_t DACOM_API bi_addref(void *self)
{
    return ++SELF(self)->refs;
}

/* The destructor, inlined in 06f82820 and 06f823f0 (it first switches to
 * the abstract base vtbl 06f83080, which has no effect here). */
static void bi_destroy(BigImage *bi)
{
    int32_t i;
    if (bi->textures != NULL)
        for (i = 0; i < bi->count; i++)
            if (bi->textures[i] != 0)
                bi->pipe->vtbl->DestroyTexture(bi->pipe, bi->textures[i]);
    free(bi->textures);
    free(bi->uv);
    if (bi->texlib != NULL) {
        bi->texlib->vtbl->Release(bi->texlib);
        bi->texlib = NULL;
    }
    if (bi->pipe != NULL) {
        bi->pipe->vtbl->Release(bi->pipe);
        bi->pipe = NULL;
    }
    free(bi);
}

/* orig: 06f82820 */
static uint32_t DACOM_API bi_release(void *self)
{
    BigImage *bi = SELF(self);
    if (bi->refs != 0)
        bi->refs--;
    if (bi->refs != 0)
        return bi->refs;
    bi->refs = 1;
    bi_destroy(bi);
    return 0;
}

static const IBigImageVtbl bi_vtbl = {      /* orig: 06f830b0 */
    bi_query_interface, bi_addref, bi_release,
    bi_slot3, bi_draw, bi_get_size, bi_set_alpha, bi_set_color,
    bi_get_texture_count, bi_get_texture, bi_set_data, bi_slot11,
};

/* ---- factory ---- */

/* orig: 06f82370 */
static GENRESULT DACOM_API bf_query_interface(void *self, const char *iface, void **out)
{
    *out = NULL;
    if (strcmp(iface, IID_IComponentFactory) != 0)
        return GR_INTERFACE_UNSUPPORTED;
    *out = self;
    ((BigImageFactory *)self)->vtbl->AddRef(self);
    return GR_OK;
}

/* orig: 06f823b0 */
static uint32_t DACOM_API bf_addref(void *self)
{
    return ++((BigImageFactory *)self)->refs;
}

/* orig: 06f823c0 */
static uint32_t DACOM_API bf_release(void *self)
{
    BigImageFactory *f = self;
    if (f->refs != 0)
        f->refs--;
    if (f->refs != 0)
        return f->refs;
    f->refs = 1;
    free(f);
    return 0;
}

/* orig: 06f823f0 */
static GENRESULT DACOM_API bf_create_instance(void *self, DACOMDESC *desc_, void **out)
{
    BigImageFactory *f = self;
    BIGIMAGEDESC *desc = (BIGIMAGEDESC *)desc_;
    GENRESULT r = GR_GENERIC;
    BigImage *bi;

    if (desc->size != BIGIMAGEDESC_ORIG_SIZE || strcmp(desc->component, f->name) != 0) {
        *out = NULL;
        return GR_INTERFACE_UNSUPPORTED;
    }
    bi = malloc(sizeof(*bi));
    if (bi == NULL) {
        *out = NULL;
        return GR_OUT_OF_MEMORY;
    }
    memset(bi, 0, sizeof(*bi));   /* orig sets every field but square/tile_w/tile_h */
    bi->tex_format = xi_pf_from_d3dfmt(0);
    bi->color = 0xffffffu;
    bi->alpha = 0xff;
    bi->vtbl = &bi_vtbl;
    bi->refs = 1;
    if (desc->size <= BIGIMAGEDESC_ORIG_SIZE)
        bi->draw = desc->draw;

    if (desc->pipeline != NULL) {
        bi->pipe = desc->pipeline;
        bi->pipe->vtbl->AddRef(bi->pipe);
        /* return values ignored, as in the original */
        bi->pipe->vtbl->GetProperty(bi->pipe, RP_PROP_SQUARE_TEXTURES, &bi->square);
        bi->pipe->vtbl->GetProperty(bi->pipe, RP_PROP_MAX_TEXTURE_W, &bi->tile_w);
        bi->pipe->vtbl->GetProperty(bi->pipe, RP_PROP_MAX_TEXTURE_H, &bi->tile_h);
        if (bi->pipe->vtbl->QueryInterface(bi->pipe, IID_ITextureLibraryA,
                                           (void **)&bi->texlib) >= 0) {
            int ok = desc->source != NULL
                ? build_from_source(bi, desc->source, desc->want)
                : build_tiles(bi, desc->want, desc->format, desc->data,
                              desc->width, desc->height, desc->pitch);
            if (ok)
                r = GR_OK;
        }
    }
    if (r != GR_OK) {
        bi_destroy(bi);
        *out = NULL;
        return r;
    }
    *out = bi;
    return GR_OK;
}

static const IComponentFactoryVtbl bf_vtbl = {      /* orig: 06f83070 */
    bf_query_interface, bf_addref, bf_release, bf_create_instance,
};

/* orig: 06f82320, called by DllMain 06f828d0 on DLL_PROCESS_ATTACH. The
 * DACOM reference is never released, as in the original. */
int ximage_dll_process_attach(void *hinstance)
{
    ICOManager *com = DACOM_Acquire();
    BigImageFactory *f = malloc(sizeof(*f));
    (void)hinstance;
    if (f == NULL)
        abort();                /* the original calls Release on NULL */
    f->vtbl = &bf_vtbl;
    f->refs = 1;
    f->name = BIGIMAGE_COMPONENT;
    com->vtbl->RegisterComponent(com, f, BIGIMAGE_COMPONENT, 0x40000000u);
    f->vtbl->Release(f);
    return 1;
}

#if !defined(_WIN32)
/* Called by platform_lib_load after dlopen (replaces DllMain). */
int dll_process_attach(void *handle)
{
    return ximage_dll_process_attach(handle);
}
#endif
