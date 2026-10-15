/* rf_search_path.c — the "SearchPath" component: an ordered list of file
 * systems built from a ';'-separated path (ISearchPath vtbl 06b793c0,
 * factory vtbl 06b793b0). Port of readfile.dll 06b77ba0..06b78210
 * (notes/readfile_dll.md). */
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "rf_internal.h"

GENRESULT DACOM_API rf_factory_query_interface(void *self, const char *iface, void **out);
uint32_t  DACOM_API rf_factory_addref(void *self);
uint32_t  DACOM_API rf_factory_release(void *self);

#define SP_DESC_SIZE 8u
#define SP_NAME "SearchPath"            /* .data 06b7a1e4 */

/* orig: calloc(0x118). */
typedef struct SearchPath {
    const ISearchPathVtbl *vtbl;    /* +0x000 */
    char          path[RF_PATH];    /* +0x004 */
    IFileSystem **fs;               /* +0x10c */
    int32_t       count;            /* +0x110 */
    uint32_t      refs;             /* +0x114 */
} SearchPath;

#define SELF(p) ((SearchPath *)(p))

static int is_sep(char c)
{
    return c == '\\' || c == '/';
}

/* orig: 06b77dd0 — open `path` one directory level at a time: the first
 * element through `opener` (the component manager), each further element
 * through the file system opened before it. "\\server\share" and "X:\dir"
 * count as one element. Modifies `path`. Returns 1 on success. */
static int open_path(void *opener, int opener_is_com, char *path, IFileSystem **out)
{
    DAFILEDESC desc;
    IFileSystem *fs = NULL;
    char *rest = NULL, *p = path;
    GENRESULT r;
    int ok = 0;

    memset(&desc, 0, sizeof(desc));
    desc.size = DAFILEDESC_SIZE_FIND;
    desc.component = RF_FACTORY_NAME;
    desc.iface = "DOS";
    desc.name = path;
    desc.access = DA_GENERIC_READ;
    desc.share = DA_FILE_SHARE_READ;
    desc.creation = DA_OPEN_EXISTING;
    desc.flags = 0x08000080u;       /* FILE_FLAG_SEQUENTIAL_SCAN | FILE_ATTRIBUTE_NORMAL */
    desc.find = DA_INVALID_HANDLE;
    *out = NULL;

    if (is_sep(p[0]) && is_sep(p[1])) {
        /* UNC: \\server\share[\rest] */
        if (is_sep(p[2]) || p[3] == '\0')
            return 0;
        for (p += 3; !is_sep(*p); p++)
            if (*p == '\0')
                return 0;
        p++;
        if (is_sep(*p))
            return 0;
        for (; *p != '\0'; p++) {
            if (is_sep(*p)) {
                *p = '\0';
                rest = p + 1;
                break;
            }
        }
    } else {
        if (isalpha((unsigned char)p[0]) && p[1] == ':')
            p += p[2] != '\0' ? 3 : 2;  /* past "X:\"; orig reads past a bare "X:" */
        else
            p += 1;
        for (; *p != '\0'; p++) {
            if (is_sep(*p)) {
                *p = '\0';
                rest = p + 1;
                break;
            }
        }
    }

    if (opener_is_com)
        r = ((ICOManager *)opener)->vtbl->CreateInstance(opener, (DACOMDESC *)&desc, (void **)&fs);
    else
        r = ((IFileSystem *)opener)->vtbl->CreateInstance(opener, &desc, (void **)&fs);
    if (r == GR_OK) {
        if (rest == NULL || *rest == '\0') {
            *out = fs;
            fs->vtbl->AddRef(fs);
            ok = 1;
        } else {
            ok = open_path(fs, 0, rest, out);
        }
    }
    if (fs != NULL)
        fs->vtbl->Release(fs);
    return ok;
}

/* orig: 06b77cd0 — split on ';' (empty elements skipped), allocate the
 * array at the deepest level, then fill it on the way back. Returns the
 * element count. */
static int32_t parse(char *s, IFileSystem ***array, int32_t index)
{
    char *semi = strchr(s, ';');
    while (semi != NULL && semi == s) {
        s = semi + 1;
        semi = strchr(s, ';');
    }
    if (semi != NULL) {
        int32_t count;
        *semi = '\0';
        count = parse(semi + 1, array, index + 1);
        if ((*array)[index] != NULL) {
            (*array)[index]->vtbl->Release((*array)[index]);
            (*array)[index] = NULL;
        }
        open_path(rf_com, 1, s, &(*array)[index]);
        return count;
    }
    if (*s != '\0')
        index++;
    if (index != 0) {
        *array = calloc((size_t)index, sizeof(**array));
        if (*array == NULL)
            abort();    /* orig: writes through NULL */
    }
    if (*s != '\0')
        open_path(rf_com, 1, s, &(*array)[index - 1]);
    return index;
}

static void sp_clear(SearchPath *sp)
{
    int32_t i;
    if (sp->fs != NULL) {
        for (i = sp->count - 1; i >= 0; i--) {
            if (sp->fs[i] != NULL) {
                sp->fs[i]->vtbl->Release(sp->fs[i]);
                sp->fs[i] = NULL;
            }
        }
        free(sp->fs);
        sp->fs = NULL;  /* orig: left dangling (a later clear frees it again) */
    }
    sp->count = 0;
}

/* orig: 06b78140 */
static GENRESULT DACOM_API sp_query_interface(void *self, const char *iface, void **out)
{
    if (strcmp(iface, IID_ISearchPath) == 0 || strcmp(iface, IID_IComponentFactory) == 0) {
        SELF(self)->refs++;
        *out = self;
        return GR_OK;
    }
    *out = NULL;
    return GR_INTERFACE_UNSUPPORTED;
}

/* orig: 06b781f0 */
static uint32_t DACOM_API sp_addref(void *self)
{
    return ++SELF(self)->refs;
}

/* orig: 06b78210 */
static uint32_t DACOM_API sp_release(void *self)
{
    SearchPath *sp = self;
    if (sp->refs != 0)
        sp->refs--;
    if (sp->refs != 0)
        return sp->refs;
    sp->refs = 1;
    sp_clear(sp);
    sp->path[0] = '\0';
    free(sp);
    return 0;
}

/* orig: 06b77ba0 — the first file system that creates `desc` wins; with no
 * file systems the result is -6. */
static GENRESULT DACOM_API sp_create_instance(void *self, DAFILEDESC *desc, void **out)
{
    SearchPath *sp = self;
    GENRESULT r = -6;
    int32_t i;
    *out = NULL;
    for (i = 0; i < sp->count; i++) {
        IFileSystem *fs = sp->fs[i];
        if (fs != NULL) {
            r = fs->vtbl->CreateInstance(fs, desc, out);
            if (r == GR_OK)
                return GR_OK;
        }
    }
    return r;
}

/* orig: 06b77c00 */
static GENRESULT DACOM_API sp_set_path(void *self, const char *path)
{
    SearchPath *sp = self;
    char copy[RF_PATH];
    if (path == NULL)
        return GR_INVALID_PARMS;
    sp_clear(sp);
    sp->path[0] = '\0';
    strncpy(sp->path, path, RF_PATH - 1);   /* orig: RF_PATH, unterminated if longer */
    memcpy(copy, sp->path, sizeof(copy));
    copy[sizeof(copy) - 1] = '\0';  /* orig: unterminated if path is 0x104+ chars */
    sp->count = parse(copy, &sp->fs, 0);
    return GR_OK;
}

/* orig: 06b77fc0 */
static void DACOM_API sp_get_path(void *self, char *buf, uint32_t len)
{
    SearchPath *sp = self;
    uint32_t n = (uint32_t)strlen(sp->path) + 1;
    if (n <= len)
        len = n;
    if (len != 0 && buf != NULL) {
        memcpy(buf, sp->path, len);
        buf[len - 1] = '\0';
    }
}

static const ISearchPathVtbl sp_vtbl = {          /* .rdata 06b793c0 */
    sp_query_interface,
    sp_addref,
    sp_release,
    sp_create_instance,
    sp_set_path,
    sp_get_path,
};

/* orig: 06b78090 */
static GENRESULT DACOM_API sp_factory_create_instance(void *self, DACOMDESC *desc, void **out)
{
    const char *name = ((const struct { const IComponentFactoryVtbl *v; uint32_t r;
                                        const char *n; } *)self)->n;
    SearchPath *sp;
    if (desc->size != SP_DESC_SIZE || strcmp(desc->component, name) != 0) {
        *out = NULL;
        return GR_INTERFACE_UNSUPPORTED;
    }
    sp = calloc(1, sizeof(*sp));
    if (sp == NULL) {
        *out = NULL;
        return GR_OUT_OF_MEMORY;
    }
    sp->vtbl = &sp_vtbl;
    sp->refs = 1;
    *out = sp;
    return GR_OK;
}

static const IComponentFactoryVtbl sp_factory_vtbl = {   /* .rdata 06b793b0 */
    rf_factory_query_interface,
    rf_factory_addref,
    rf_factory_release,
    sp_factory_create_instance,
};

/* orig: 06b78020 */
IComponentFactory *search_path_factory_new(void)
{
    struct { const IComponentFactoryVtbl *v; uint32_t r; const char *n; } *f = malloc(sizeof(*f));
    if (f == NULL)
        return NULL;
    f->v = &sp_factory_vtbl;
    f->r = 1;
    f->n = SP_NAME;
    return (IComponentFactory *)f;
}
