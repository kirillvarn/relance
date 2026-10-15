/* test_ximage.c — differential test of the ximage.dll port ("BigImage").
 *
 * usage: test_ximage <dir with libximage.so> <cases> <out>
 *
 * Loads libximage.so through the dacom port's AddLibrary, takes the
 * "BigImage" factory and runs every case of <cases> (tests/ximage_cases.txt,
 * one case per line, fields below) against a mock render pipeline, texture
 * library and image source. Every call into the mocks and every result is
 * written to <out>. `make test` compares <out> with tests/ximage_golden.txt,
 * which was recorded by running the original ximage.dll machine code on the
 * same cases under an x86 emulator with the same mocks
 * (notes/ximage_dll.md, "Verification"). Floats are logged as hex bits. */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bigimage.h"
#include "dacom.h"

enum {
    F_ID, F_SQUARE, F_TILE_W, F_TILE_H, F_QI_FAIL, F_FIND_FAIL, F_TEX_FMT,
    F_PIPE_NULL, F_DESC_SIZE, F_NAME_OK, F_USE_SOURCE, F_WANT, F_DATA_FMT,
    F_W, F_H, F_PITCH, F_FAIL_CREATE, F_FAIL_SET, F_SRC_FMT_RC, F_SRC_FMT,
    F_SRC_SIZE_RC, F_PIX_RC1, F_PIX_RC2, F_DRAW_CB, F_SET_ALPHA, F_ALPHA,
    F_SET_COLOR, F_COLOR,                                   /* 3 fields */
    F_D1_SRC_NULL = F_COLOR + 3, F_D1_SRC, F_D1_DST = F_D1_SRC + 4,
    F_D2_SRC_NULL = F_D1_DST + 4, F_D2_SRC, F_D2_DST = F_D2_SRC + 4,
    F_SD_DATA_NULL = F_D2_DST + 4, F_SD_FMT_NULL, F_SD_FMT, F_SD_W, F_SD_H,
    F_SD_PITCH, F_SD_FAIL, F_TEX_EXTRA,
    F_COUNT
};

static uint32_t c[F_COUNT];     /* current case */
static FILE *g_out;
static int g_creates, g_sets, g_fail_create, g_fail_set, g_pix;
static const uint8_t *g_base;   /* data offsets in the log are relative to this */
static uint8_t g_data[16];      /* stands in for the caller's pixels; never read */

static void logf_(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vfprintf(g_out, fmt, ap);
    va_end(ap);
    fputc('\n', g_out);
}

static uint32_t fbits(float f)
{
    uint32_t u;
    memcpy(&u, &f, 4);
    return u;
}

static float bitsf(uint32_t u)
{
    float f;
    memcpy(&f, &u, 4);
    return f;
}

static int log_dump(uint32_t flags, const char *fmt, ...)
{
    char buf[0x3000];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    logf_("dump %x %s", flags, buf);
    return 0;
}

/* ---- mock ITextureLibraryA ---- */

static uint32_t DACOM_API tl_release(void *self)
{
    (void)self;
    logf_("tl.release");
    return 1;
}

static GENRESULT DACOM_API tl_find(void *self, const DAPIXFMT *want, DAPIXFMT *out)
{
    (void)self;
    logf_("tl.find %d", *want);
    if (c[F_FIND_FAIL])
        return -1;
    *out = (DAPIXFMT)c[F_TEX_FMT];
    return 0;
}

static ITextureLibraryAVtbl tl_vtbl;
static ITextureLibraryA g_tl = { &tl_vtbl };

/* ---- mock IRenderPipeline ---- */

static GENRESULT DACOM_API pipe_qi(void *self, const char *iface, void **out)
{
    (void)self;
    logf_("pipe.qi %s", iface);
    if (c[F_QI_FAIL]) {
        *out = NULL;
        return GR_INTERFACE_UNSUPPORTED;
    }
    *out = &g_tl;
    return GR_OK;
}

static uint32_t DACOM_API pipe_addref(void *self)
{
    (void)self;
    logf_("pipe.addref");
    return 1;
}

static uint32_t DACOM_API pipe_release(void *self)
{
    (void)self;
    logf_("pipe.release");
    return 1;
}

static GENRESULT DACOM_API pipe_prop(void *self, uint32_t id, uint32_t *out)
{
    (void)self;
    logf_("pipe.prop %u", id);
    *out = id == RP_PROP_SQUARE_TEXTURES ? c[F_SQUARE]
         : id == RP_PROP_MAX_TEXTURE_W ? c[F_TILE_W] : c[F_TILE_H];
    return 0;
}

static GENRESULT DACOM_API pipe_create(void *self, uint32_t w, uint32_t h, const DAPIXFMT *fmt,
                                       uint32_t levels, uint32_t flags, DATEXTURE *out)
{
    int rc = ++g_creates == g_fail_create ? -1 : 0;
    (void)self;
    logf_("pipe.create %u %u %d %u %u -> %d", w, h, *fmt, levels, flags, rc);
    if (rc == 0)
        *out = 1000u + (uint32_t)g_creates;
    return rc;
}

static GENRESULT DACOM_API pipe_destroy(void *self, DATEXTURE tex)
{
    (void)self;
    logf_("pipe.destroy %u", tex);
    return 0;
}

static GENRESULT DACOM_API pipe_set(void *self, DATEXTURE tex, uint32_t level, uint32_t w,
                                    uint32_t h, uint32_t pitch, const DAPIXFMT *fmt,
                                    const void *data, uint32_t a, uint32_t b)
{
    int rc = ++g_sets == g_fail_set ? -1 : 0;
    (void)self;
    logf_("pipe.set %u %u %u %u %u %d %lld %u %u -> %d", tex, level, w, h, pitch, *fmt,
          (long long)((const uint8_t *)data - g_base), a, b, rc);
    return rc;
}

static IRenderPipelineVtbl pipe_vtbl;
static IRenderPipeline g_pipe = { &pipe_vtbl };

/* ---- mock IBigImageSource ---- */

static GENRESULT DACOM_API src_pixels(void *self, DAPIXFMT fmt, void *buf, uint32_t pitch,
                                      uint32_t unk)
{
    int rc = (int)(++g_pix == 1 ? c[F_PIX_RC1] : c[F_PIX_RC2]);
    (void)self;
    logf_("src.pixels %d %u %u -> %d", fmt, pitch, unk, rc);
    g_base = buf;
    return rc;
}

static GENRESULT DACOM_API src_size(void *self, uint32_t *w, uint32_t *h)
{
    (void)self;
    logf_("src.size -> %d", (int)c[F_SRC_SIZE_RC]);
    *w = c[F_W];
    *h = c[F_H];
    return (GENRESULT)c[F_SRC_SIZE_RC];
}

static GENRESULT DACOM_API src_format(void *self, DAPIXFMT *out)
{
    (void)self;
    logf_("src.format -> %d", (int)c[F_SRC_FMT_RC]);
    *out = (DAPIXFMT)c[F_SRC_FMT];
    return (GENRESULT)c[F_SRC_FMT_RC];
}

static IBigImageSourceVtbl src_vtbl;
static IBigImageSource g_src = { &src_vtbl };

/* ---- draw callback ---- */

static void draw_cb(DATEXTURE tex, uint32_t argb, const float *q, const float *uv)
{
    logf_("cb %u %08x q %08x %08x %08x %08x uv %08x %08x %08x %08x %08x %08x %08x %08x",
          tex, argb, fbits(q[0]), fbits(q[1]), fbits(q[2]), fbits(q[3]),
          fbits(uv[0]), fbits(uv[1]), fbits(uv[2]), fbits(uv[3]),
          fbits(uv[4]), fbits(uv[5]), fbits(uv[6]), fbits(uv[7]));
}

/* ---- the case runner (mirrors the emulator harness step by step) ---- */

static void run_draw(IBigImage *bi, int f_null, int f_src, int f_dst)
{
    int32_t src[4], dst[4];
    int i;
    for (i = 0; i < 4; i++) {
        src[i] = (int32_t)c[f_src + i];
        dst[i] = (int32_t)c[f_dst + i];
    }
    logf_("draw");
    bi->vtbl->Draw(bi, c[f_null] ? NULL : src, dst);
}

static void run_case(IComponentFactory *f)
{
    BIGIMAGEDESC d;
    IBigImage *bi = NULL;
    void *q;
    DAPIXFMT want = (DAPIXFMT)c[F_WANT], fmt = (DAPIXFMT)c[F_DATA_FMT], sdfmt;
    GENRESULT r;
    int32_t idx[5], i;

    logf_("case %u", c[F_ID]);
    g_creates = g_sets = g_pix = 0;
    g_fail_create = (int)c[F_FAIL_CREATE];
    g_fail_set = (int)c[F_FAIL_SET];
    g_base = g_data;

    memset(&d, 0, sizeof(d));
    d.size = c[F_DESC_SIZE];
    d.component = c[F_NAME_OK] ? "BigImage" : "BigImagf";
    d.pipeline = c[F_PIPE_NULL] ? NULL : &g_pipe;
    d.source = c[F_USE_SOURCE] ? &g_src : NULL;
    d.want = &want;
    d.format = &fmt;
    d.data = g_data;
    d.width = c[F_W];
    d.height = c[F_H];
    d.pitch = c[F_PITCH];
    d.draw = c[F_DRAW_CB] ? draw_cb : NULL;

    r = f->vtbl->CreateInstance(f, (DACOMDESC *)&d, (void **)&bi);
    logf_("create -> %d %s", r, bi != NULL ? "obj" : "null");
    if (r != GR_OK)
        return;

    {
        uint32_t w = 0, h = 0;
        bi->vtbl->GetSize(bi, &w, &h);
        logf_("size %u %u", w, h);
    }
    logf_("count %d", bi->vtbl->GetTextureCount(bi));
    idx[0] = -1;
    idx[1] = 0;
    idx[2] = bi->vtbl->GetTextureCount(bi) - 1;
    idx[3] = bi->vtbl->GetTextureCount(bi);
    idx[4] = (int32_t)c[F_TEX_EXTRA];
    for (i = 0; i < 5; i++) {
        DATEXTURE tex = 0xdeadbeefu;
        int32_t rect[4] = { 7, 7, 7, 7 };
        r = bi->vtbl->GetTexture(bi, idx[i], &tex, rect);
        logf_("tex %d -> %d %u %d %d %d %d", idx[i], r, tex, rect[0], rect[1], rect[2], rect[3]);
    }
    q = (void *)1;
    r = bi->vtbl->QueryInterface(bi, IID_IBigImage2, &q);
    logf_("qi2 -> %d %s", r, q == bi ? "self" : q == NULL ? "null" : "other");
    if (r == GR_OK)
        logf_("release -> %u", bi->vtbl->Release(bi));
    q = (void *)1;
    r = bi->vtbl->QueryInterface(bi, IID_IBigImage, &q);
    logf_("qi1 -> %d %s", r, q == bi ? "self" : q == NULL ? "null" : "other");
    if (r == GR_OK)
        logf_("release -> %u", bi->vtbl->Release(bi));
    q = (void *)1;
    r = bi->vtbl->QueryInterface(bi, "1.11_IBigImage3", &q);
    logf_("qi3 -> %d %s", r, q == bi ? "self" : q == NULL ? "null" : "other");

    if (c[F_SET_ALPHA])
        bi->vtbl->SetAlpha(bi, bitsf(c[F_ALPHA]));
    if (c[F_SET_COLOR]) {
        float rgb[3] = { bitsf(c[F_COLOR]), bitsf(c[F_COLOR + 1]), bitsf(c[F_COLOR + 2]) };
        bi->vtbl->SetColor(bi, rgb);
    }
    run_draw(bi, F_D1_SRC_NULL, F_D1_SRC, F_D1_DST);
    run_draw(bi, F_D2_SRC_NULL, F_D2_SRC, F_D2_DST);

    g_sets = 0;
    g_fail_set = (int)c[F_SD_FAIL];
    g_base = g_data;
    sdfmt = (DAPIXFMT)c[F_SD_FMT];
    r = bi->vtbl->SetData(bi, c[F_SD_DATA_NULL] ? NULL : g_data,
                          c[F_SD_FMT_NULL] ? NULL : &sdfmt, c[F_SD_W], c[F_SD_H], c[F_SD_PITCH]);
    logf_("setdata -> %d", r);
    logf_("slot11 -> %d", bi->vtbl->Slot11(bi, NULL));
    logf_("addref -> %u", bi->vtbl->AddRef(bi));
    logf_("release -> %u", bi->vtbl->Release(bi));
    logf_("release -> %u", bi->vtbl->Release(bi));
}

static IComponentFactory *g_factory;

static int32_t find_factory(IComponentFactory *factory, const char *name, uint32_t prio, void *ctx)
{
    (void)ctx;
    if (strcmp(name, BIGIMAGE_COMPONENT) == 0 && prio == 0x40000000u)
        g_factory = factory;
    return 1;
}

int main(int argc, char **argv)
{
    ICOManager *com;
    FILE *in;
    char path[4096], line[4096];

    if (argc != 4) {
        fprintf(stderr, "usage: %s <lib dir> <cases> <out>\n", argv[0]);
        return 2;
    }
    tl_vtbl.Release = tl_release;
    tl_vtbl.FindTextureFormat = tl_find;
    pipe_vtbl.QueryInterface = pipe_qi;
    pipe_vtbl.AddRef = pipe_addref;
    pipe_vtbl.Release = pipe_release;
    pipe_vtbl.GetProperty = pipe_prop;
    pipe_vtbl.CreateTexture = pipe_create;
    pipe_vtbl.DestroyTexture = pipe_destroy;
    pipe_vtbl.SetTextureLevel = pipe_set;
    src_vtbl.GetPixels = src_pixels;
    src_vtbl.GetSize = src_size;
    src_vtbl.GetFormat = src_format;

    com = DACOM_Acquire();
    snprintf(path, sizeof(path), "%s/ximage.dll", argv[1]);
    if (com->vtbl->AddLibrary(com, path) != GR_OK) {
        fprintf(stderr, "FAIL: AddLibrary(%s)\n", path);
        return 1;
    }
    com->vtbl->EnumerateComponents(com, BIGIMAGE_COMPONENT, find_factory, NULL);
    if (g_factory == NULL) {
        fprintf(stderr, "FAIL: no BigImage factory registered\n");
        return 1;
    }
    {
        void *q = NULL;
        if (g_factory->vtbl->QueryInterface(g_factory, IID_IComponentFactory, &q) != GR_OK ||
            q != g_factory) {
            fprintf(stderr, "FAIL: factory QI\n");
            return 1;
        }
        g_factory->vtbl->Release(g_factory);
    }

    FDUMP = log_dump;
    in = fopen(argv[2], "r");
    g_out = fopen(argv[3], "w");
    if (in == NULL || g_out == NULL) {
        perror("open");
        return 2;
    }
    while (fgets(line, sizeof(line), in) != NULL) {
        char *p = line, *end;
        int n = 0;
        if (line[0] == '#' || line[0] == '\n')
            continue;
        while (n < F_COUNT) {
            c[n] = (uint32_t)strtoul(p, &end, 0);
            if (end == p)
                break;
            p = end;
            n++;
        }
        if (n != F_COUNT) {
            fprintf(stderr, "bad case line: %s", line);
            return 2;
        }
        run_case(g_factory);
    }
    fclose(in);
    fclose(g_out);
    return 0;
}
