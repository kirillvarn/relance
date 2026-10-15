/* test_x86math.c — differential test of the x86math.dll port ("3DMathEngine").
 *
 * usage: test_x86math <dir with libx86math.so> <cases> <out>
 *
 * Loads libx86math.so through the dacom port's AddLibrary, takes the
 * "3DMathEngine" factory, checks CreateInstance against a fixed set of
 * descriptors, then runs every case of <cases> (tests/x86math_cases.py
 * explains the format) and logs each result and every word of the scratch
 * block that changed. `make test` compares <out> with
 * tests/x86math_golden.txt, recorded from the original x86math.dll under an
 * x86 emulator by tools/emu/emu_x86math.py with the same log format.
 * Floats are logged as hex bits; any NaN is logged as "nan" (the port does
 * not reproduce x87 NaN signs and payloads). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dacom.h"
#include "mathengine.h"

enum { NWORDS = 80, A = 0, B = 12, V = 24, O = 48, DW = 72, S = 73 };

static FILE *g_out;

static float bitsf(uint32_t u)
{
    float f;
    memcpy(&f, &u, 4);
    return f;
}

static const char *word_str(uint32_t u, char *buf)
{
    if ((u & 0x7f800000u) == 0x7f800000u && (u & 0x7fffffu) != 0)
        return "nan";
    sprintf(buf, "%x", u);
    return buf;
}

static IComponentFactory *g_factory;

static int32_t find_factory(IComponentFactory *factory, const char *name, uint32_t prio, void *ctx)
{
    (void)ctx;
    if (strcmp(name, MATHENGINE_COMPONENT) == 0 && prio == 0x40000000u)
        g_factory = factory;
    return 1;
}

static const char *who(void *p, void *engine)
{
    return p == NULL ? "null" : p == engine ? "engine" : "other";
}

/* Must match create_checks() in tools/emu/emu_x86math.py. */
static IMathEngine *create_checks(void)
{
    static const struct { const char *tag; uint32_t size; const char *name, *variant; } d[] = {
        { "size14", 0x14, "3DMathEngine", NULL },
        { "size0", 0, "3DMathEngine", NULL },
        { "noname", 0xc, NULL, NULL },
        { "short", 0xc, "3DMathEngin", NULL },
        { "long", 0xc, "3DMathEngineX", NULL },
        { "case", 0xc, "3dmathengine", NULL },
        { "ok", 0xc, "3DMathEngine", NULL },
        { "x86", 0xc, "3DMathEngine", "x86" },
        { "X86", 0xc, "3DMathEngine", "X86" },
        { "sse", 0xc, "3DMathEngine", "sse" },
        { "empty", 0xc, "3DMathEngine", "" },
        { "x86sp", 0xc, "3DMathEngine", "x86 " },
    };
    void *engine = NULL, *p;
    size_t i;
    GENRESULT r;

    p = (void *)1;
    r = g_factory->vtbl->CreateInstance(g_factory, NULL, &p);
    fprintf(g_out, "create nulldesc -> %d %s\n", r, who(p, engine));
    for (i = 0; i < sizeof(d) / sizeof(d[0]); i++) {
        MATHENGINEDESC desc = { d[i].size, d[i].name, d[i].variant };
        p = (void *)1;
        r = g_factory->vtbl->CreateInstance(g_factory, (DACOMDESC *)(void *)&desc, &p);
        if (engine == NULL && r == GR_OK)
            engine = p;
        fprintf(g_out, "create %s -> %d %s\n", d[i].tag, r, who(p, engine));
    }
    p = (void *)1;
    r = g_factory->vtbl->QueryInterface(g_factory, IID_IComponentFactory, &p);
    fprintf(g_out, "factory qi -> %d %s\n", r, who(p, engine));
    fprintf(g_out, "factory addref -> %u\n", g_factory->vtbl->AddRef(g_factory));
    fprintf(g_out, "factory release -> %u\n", g_factory->vtbl->Release(g_factory));
    if (engine != NULL) {
        IMathEngine *me = engine;
        p = (void *)1;
        r = me->vtbl->QueryInterface(me, IID_IComponentFactory, &p);
        fprintf(g_out, "engine qi -> %d %s\n", r, who(p, engine));
        fprintf(g_out, "engine addref -> %u\n", me->vtbl->AddRef(me));
        fprintf(g_out, "engine release -> %u\n", me->vtbl->Release(me));
    }
    return engine;
}

static void run_case(IMathEngine *me, int32_t slot, int32_t alias, int32_t count,
                     const uint32_t *init)
{
    union { uint32_t u[NWORDS]; float f[NWORDS]; } m;
    const IMathEngineVtbl *vt = me->vtbl;
    float *out, *a = &m.f[A], *b = &m.f[B], *v = &m.f[V];
    float s = bitsf(init[S]);
    GENRESULT r = 0;
    char buf[16];
    int32_t i;
    int arr = slot >= 16 && slot <= 19;

    memcpy(m.u, init, sizeof(m.u));
    out = alias == 0 ? &m.f[O] : alias == 1 ? a : alias == 2 ? (arr ? v : b) : (arr ? v + 3 : b + 1);
    switch (slot) {
    case 3:  r = vt->Invert3(me, out, a); break;
    case 4:  r = vt->Scale3(me, out, a, s); break;
    case 5: {
        double det = vt->Determinant3(me, a);
        uint64_t bits;
        memcpy(&bits, &det, 8);
        if (det != det)
            fprintf(g_out, "slot 5 -> nan\n");
        else
            fprintf(g_out, "slot 5 -> %016llx\n", (unsigned long long)bits);
        return;
    }
    case 6:  r = vt->QuatMultiply(me, out, a, b); break;
    case 7:  r = vt->TransformMultiply(me, out, a, b); break;
    case 8:  r = vt->Multiply3(me, out, a, b); break;
    case 9:  r = vt->QuatRotate(me, out, a, b); break;
    case 10: r = vt->TransformPoint(me, out, a, b); break;
    case 11: r = vt->Rotate(me, out, a, b); break;
    case 12: r = vt->Rotate2(me, out, a, b); break;
    case 13: r = vt->RotateTransposed(me, out, a, b); break;
    case 14: r = vt->RotateTransposed2(me, out, a, b); break;
    case 15: r = vt->InverseTransformPoint(me, out, a, b); break;
    case 16: r = vt->TransformPoints(me, out, a, v, count); break;
    case 17: r = vt->RotateArray(me, out, a, v, count); break;
    case 18: r = vt->RotateArrayTransposed(me, out, a, v, count); break;
    case 19: r = vt->InverseTransformPoints(me, out, a, v, count); break;
    case 20: r = vt->QuatFromMatrix(me, out, a); break;
    case 21: r = vt->MatrixFromQuat(me, out, a); break;
    case 22: r = vt->QuatNlerp(me, out, a, b, s); break;
    case 23: r = vt->InvertTransform(me, out, &m.f[DW], a); break;
    case 24: r = vt->FastRSqrt(me, out, s); break;
    case 25: r = vt->FastSqrt(me, out, s); break;
    default:
        fprintf(stderr, "bad slot %d\n", slot);
        exit(2);
    }
    fprintf(g_out, "slot %d -> %d", slot, r);
    for (i = 0; i < NWORDS; i++)
        if (m.u[i] != init[i])
            fprintf(g_out, " %d:%s", i, word_str(m.u[i], buf));
    fputc('\n', g_out);
}

int main(int argc, char **argv)
{
    ICOManager *com;
    IMathEngine *me;
    FILE *in;
    char path[4096], line[8192];

    if (argc != 4) {
        fprintf(stderr, "usage: %s <lib dir> <cases> <out>\n", argv[0]);
        return 2;
    }
    com = DACOM_Acquire();
    snprintf(path, sizeof(path), "%s/x86math.dll", argv[1]);
    if (com->vtbl->AddLibrary(com, path) != GR_OK) {
        fprintf(stderr, "FAIL: AddLibrary(%s)\n", path);
        return 1;
    }
    com->vtbl->EnumerateComponents(com, MATHENGINE_COMPONENT, find_factory, NULL);
    if (g_factory == NULL) {
        fprintf(stderr, "FAIL: no 3DMathEngine factory registered\n");
        return 1;
    }
    in = fopen(argv[2], "r");
    g_out = fopen(argv[3], "w");
    if (in == NULL || g_out == NULL) {
        perror("open");
        return 2;
    }
    me = create_checks();
    if (me == NULL) {
        fprintf(stderr, "FAIL: CreateInstance\n");
        return 1;
    }
    while (fgets(line, sizeof(line), in) != NULL) {
        uint32_t f[3], w[NWORDS];
        char *p = line, *end;
        int n;
        if (line[0] == '#' || line[0] == '\n')
            continue;
        for (n = 0; n < 3; n++, p = end) {
            f[n] = (uint32_t)strtoul(p, &end, 0);
            if (end == p) {
                fprintf(stderr, "bad case line: %s", line);
                return 2;
            }
        }
        for (n = 0; n < NWORDS; n++)
            w[n] = 0xcdcdcdcdu;
        for (;;) {
            unsigned long i = strtoul(p, &end, 10);
            if (end == p)
                break;
            if (*end != ':' || i >= NWORDS) {
                fprintf(stderr, "bad case line: %s", line);
                return 2;
            }
            p = end + 1;
            w[i] = (uint32_t)strtoul(p, &end, 16);
            p = end;
        }
        run_case(me, (int32_t)f[0], (int32_t)f[1], (int32_t)f[2], w);
    }
    fclose(in);
    fclose(g_out);
    return 0;
}
