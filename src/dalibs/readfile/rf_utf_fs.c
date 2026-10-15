/* rf_utf_fs.c — the UTF archive file system (IFileSystem vtbl 06b79138).
 * Port of readfile.dll 06b71000..06b71440 and 06b72990..06b74160
 * (notes/readfile_dll.md).
 *
 * One class plays three roles:
 *   - the factory object registered as "FileSystem" (name "\"): its
 *     CreateInstance opens a UTF file (or an IDataBuffer) as an archive;
 *   - an archive: owns the mapped file and the format handler;
 *   - a sub-file system for a node inside an archive (root = the archive,
 *     node = the handle of that node). Handle 0 means "that node".
 */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "msvc_compat.h"
#include "rf_internal.h"

typedef struct UtfMapEntry {                /* CreateFileMapping result */
    UtfHandle          *obj;                /* first: the mapping handle points here */
    struct UtfMapEntry *next;
} UtfMapEntry;

/* orig: calloc(0x250). */
typedef struct UtfFs {
    const IFileSystemVtbl *vtbl;            /* +0x000 */
    RfMapped      m;                        /* +0x004 archive file (archives only) */
    uint32_t      access;                   /* +0x018 */
    uint32_t      last_error;               /* +0x01c */
    char          name[RF_PATH];            /* +0x020 "\" for the factory */
    int32_t       name_len;                 /* +0x124 */
    char          cwd[RF_PATH];             /* +0x128 */
    UtfHandle    *cwd_handle;               /* +0x22c */
    struct UtfFs *root;                     /* +0x230 the archive (sub file systems) */
    IFileSystem  *parent;                   /* +0x234 */
    UtfFormat    *fmt;                      /* +0x238 (archives only) */
    UtfHandle    *node;                     /* +0x23c (sub file systems) */
    UtfMapEntry  *maps;                     /* +0x240 */
    uint32_t      refs;                     /* +0x24c */
} UtfFs;

static const IFileSystemVtbl utf_vtbl;

#define SELF(p) ((UtfFs *)(p))

static UtfFs *utf_alloc(void)
{
    UtfFs *fs = calloc(1, sizeof(*fs));
    if (fs == NULL)
        return NULL;
    fs->vtbl = &utf_vtbl;
    rf_mapped_init(&fs->m);
    fs->name[0] = '\\';
    fs->cwd[0] = '\\';
    fs->refs = 1;
    return fs;
}

/* orig: 06b73d60 */
IFileSystem *utf_fs_new(void)
{
    return (IFileSystem *)utf_alloc();
}

static int is_factory(const UtfFs *fs)
{
    return fs->name[0] == '\\' && fs->name[1] == '\0';
}

/* The archive's format handler. */
static UtfFormat *fmt_of(const UtfFs *fs)
{
    return fs->root != NULL ? fs->root->fmt : fs->fmt;
}

/* The node relative paths start from: the archive root, or this sub file
 * system's node. */
static UtfHandle *cwd_root(const UtfFs *fs)
{
    return fs->fmt != NULL ? utf_format_root(fs->fmt) : fs->node;
}

/* Handle 0 → this file system's own node; otherwise the caller's handle. */
static UtfHandle *object_of(const UtfFs *fs, DAHANDLE h)
{
    if (h == NULL)
        return fs->fmt != NULL ? utf_format_root(fs->fmt) : fs->node;
    return utf_format_adjust(h);
}

/* orig: 06b72e10 */
static void set_name(UtfFs *fs, const char *name, UtfHandle *node)
{
    size_t len = strlen(name);
    if (len > RF_PATH - 2)
        len = RF_PATH - 2;          /* orig: unbounded copy into 0x104 */
    fs->name_len = (int32_t)len;
    memcpy(fs->name, name, len);
    fs->name[len] = '\0';
    if (node != NULL) {
        fs->node = node;
        if (node->ops->is_dir(node)) {
            if (fs->name_len > 0 &&
                (fs->name[fs->name_len - 1] == '\\' || fs->name[fs->name_len - 1] == '/'))
                fs->name_len--;
            fs->name[fs->name_len] = '\\';  /* orig: no NUL; the buffer is zeroed */
        }
    }
}

/* orig: 06b71000 */
static void utf_destroy(UtfFs *fs)
{
    UtfMapEntry *e;
    if (fs->cwd_handle != NULL) {
        utf_format_close(fmt_of(fs), fs->cwd_handle);
        fs->cwd_handle = NULL;
    }
    if (fs->parent != NULL) {
        fs->parent->vtbl->Release(fs->parent);
        fs->parent = NULL;
    }
    if (fs->root != NULL) {
        fs->root->vtbl->Release(fs->root);
        fs->root = NULL;
    }
    if (fs->fmt != NULL) {
        utf_format_destroy(fs->fmt);
        fs->fmt = NULL;
    }
    rf_mapped_close(&fs->m);
    e = fs->maps;
    while (e != NULL) {
        UtfMapEntry *next = e->next;
        free(e);
        e = next;
    }
    free(fs);
}

/* ======================= archive opening ======================= */

/* orig: 06b71190 — validate the header of the mapped file `m` and build an
 * archive file system that takes the file over. */
static GENRESULT open_archive(const DAFILEDESC *desc, RfMapped *m, void **out)
{
    uint8_t hdr[0x38];
    uint32_t n = 0;
    UtfFs *fs;

    if (m->view == NULL) {
        if (m->file == NULL || !platform_file_read(m->file, hdr, sizeof(hdr), &n))
            return -6;
    } else if (m->pos < m->size) {
        n = m->size - m->pos;
        if (n > sizeof(hdr))
            n = sizeof(hdr);
        memcpy(hdr, m->view + m->pos, n);
        m->pos += n;
    }
    if (n != sizeof(hdr) || !utf_header_valid(hdr))
        return -6;

    fs = utf_alloc();
    if (fs == NULL)
        return -6;      /* orig: dereferences NULL */
    fs->fmt = utf_format_create(rf_rd32(hdr, 0x14));
    if (fs->fmt == NULL) {
        /* orig: also zeroes the caller's file handle, leaking it. */
        fs->vtbl->Release(fs);
        return -6;
    }
    fs->m = *m;                 /* take the file over (06b713f0) */
    rf_mapped_init(m);
    set_name(fs, desc->name, NULL);
    fs->access = desc->access;
    if (!utf_format_init(fs->fmt, &fs->m)) {
        fs->vtbl->Release(fs);
        return -6;
    }
    *out = fs;
    return GR_OK;
}

/* ======================= IUnknown ======================= */

/* orig: 06b74060 — only "1.11_IFileSystem". */
static GENRESULT DACOM_API utf_query_interface(void *self, const char *iface, void **out)
{
    if (strcmp(iface, IID_IFileSystem) == 0) {
        SELF(self)->refs++;
        *out = self;
        return GR_OK;
    }
    *out = NULL;
    return GR_INTERFACE_UNSUPPORTED;
}

/* orig: 06b74110 */
static uint32_t DACOM_API utf_addref(void *self)
{
    return ++SELF(self)->refs;
}

/* orig: 06b74130 */
static uint32_t DACOM_API utf_release(void *self)
{
    UtfFs *fs = self;
    if (fs->refs != 0)
        fs->refs--;
    if (fs->refs != 0)
        return fs->refs;
    fs->refs = 1;
    utf_destroy(fs);
    return 0;
}

/* ======================= creation ======================= */

/* orig: 06b72990 */
static GENRESULT DACOM_API utf_create_instance(void *self, DAFILEDESC *desc, void **out)
{
    UtfFs *fs = self;
    IDataBuffer *databuf = NULL;
    const char *name;
    char dir[RF_PATH], joined[3 * RF_PATH], full[RF_PATH];
    GENRESULT r = GR_GENERIC;
    void *result = NULL;

    if (desc == NULL || desc->component == NULL)
        goto done;
    if ((desc->size != DAFILEDESC_SIZE_FIND && desc->size != DAFILEDESC_SIZE_BASIC) ||
        strcmp(desc->component, RF_FACTORY_NAME) != 0) {
        r = GR_INTERFACE_UNSUPPORTED;
        goto done;
    }
    if (desc->iface != NULL && strcmp(desc->iface, "UTF") != 0)
        goto done;
    if (desc->access != DA_GENERIC_READ || desc->creation != DA_OPEN_EXISTING)
        goto done;

    name = desc->name;
    if (desc->parent != NULL &&
        (!is_factory(fs) ||
         desc->parent->vtbl->QueryInterface(desc->parent, IID_IDataBuffer,
                                            (void **)&databuf) != GR_OK)) {
        /* The file lives in the parent file system's directory on disk. */
        desc->parent->vtbl->GetFileName(desc->parent, dir, RF_PATH);
        msvc_makepath(joined, NULL, dir, name, NULL);
        if (msvc_fullpath(full, joined, RF_PATH) == NULL || msvc_access(full, 0) == -1)
            goto done;
        name = full;
    }

    if (is_factory(fs)) {
        RfMapped m;
        rf_mapped_init(&m);
        if (databuf == NULL) {
            if (rf_mapped_open(&m, name, desc->access, desc->creation))
                r = open_archive(desc, &m, &result);
        } else {
            void *data = NULL;
            uint32_t size = 0;
            if (databuf->vtbl->GetData(databuf, &data, &size) == GR_OK && data != NULL &&
                size != 0) {
                m.view = data;          /* not owned: never unmapped */
                m.size = size;
                r = open_archive(desc, &m, &result);
            }
        }
        rf_mapped_close(&m);
    } else {
        /* A node inside this archive becomes a sub file system. */
        UtfFormat *fmt = fmt_of(fs);
        UtfHandle *h;
        UtfFs *child, *top;
        IFileSystem *p;
        char path[RF_PATH] = "";

        if (fmt == NULL)
            goto done;
        fs->vtbl->GetAbsolutePath(fs, path, desc->name, RF_PATH);   /* orig: result ignored */
        h = utf_format_open(fmt, path, cwd_root(fs),
                            desc->size == DAFILEDESC_SIZE_FIND ? desc->find : UTF_NO_FIND);
        if (h == NULL)
            goto done;
        child = utf_alloc();
        if (child == NULL)
            goto done;
        set_name(child, desc->name, h);
        child->parent = (IFileSystem *)fs;
        fs->vtbl->AddRef(fs);
        /* The archive is the end of the parent chain. */
        top = fs;
        for (p = fs->parent; p != NULL; p = ((UtfFs *)p)->parent)
            top = (UtfFs *)p;
        child->root = top;
        top->vtbl->AddRef(top);
        child->access = fs->access & desc->access;
        result = child;
        r = GR_OK;
    }

done:
    *out = result;
    if (databuf != NULL)
        databuf->vtbl->Release(databuf);
    return r;
}

/* ======================= file access ======================= */

/* orig: 06b73650 */
static int32_t DACOM_API utf_close_handle(void *self, DAHANDLE h)
{
    UtfFs *fs = self;
    UtfFormat *fmt;
    UtfMapEntry **link;
    UtfHandle *obj;
    char msg[0x2000];

    if (h == DA_INVALID_HANDLE || (fmt = fmt_of(fs)) == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0;
    }
    for (link = &fs->maps; *link != NULL; link = &(*link)->next) {
        if ((DAHANDLE)*link == h) {
            UtfMapEntry *e = *link;
            *link = e->next;
            free(e);
            return 1;
        }
    }
    if (utf_format_is_valid(fmt, h) && (obj = utf_format_adjust(h)) != NULL)
        return utf_format_close(fmt, obj);
    FDUMP(DACOM_DUMP_WARNING, "%s(%d) : WARNING:General:%s", RF_ORIG_SRC_FILE, 0x29b,
          rf_format(msg, "attempting to close invalid handle (%s)",
                    (fs->root != NULL ? fs->root : fs)->name));
    fs->last_error = DA_ERROR_INVALID_HANDLE;
    return 0;
}

/* orig: 06b72f90 — reading at the end of the data fails (0x1e) instead of
 * returning 0 bytes. */
static int32_t DACOM_API utf_read_file(void *self, DAHANDLE h, void *buf, uint32_t n,
                                       uint32_t *read, void *overlapped)
{
    UtfFs *fs = self;
    UtfFs *archive;
    UtfHandle *obj;
    uint32_t off, start, end, size, cnt;
    (void)overlapped;

    if (buf == NULL || n == 0) {
        fs->last_error = DA_ERROR_INVALID_PARAMETER;
        return 0;
    }
    obj = object_of(fs, h);
    if (obj == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return 0;
    }
    archive = fs->root != NULL ? fs->root : fs;
    if ((archive->m.file == NULL && archive->m.view == NULL) || archive->fmt == NULL) {
        fs->last_error = DA_ERROR_READ_FAULT;
        return 0;
    }
    start = obj->pos;
    off = rf_rd32(utf_format_header(archive->fmt), 0x24) + obj->ops->data_offset(obj) + start;
    end = start + n;
    size = obj->ops->size(obj);
    if (end > size)
        end = size;
    obj->pos = end;
    cnt = end - start;
    if (off > archive->m.size) {
        fs->last_error = DA_ERROR_READ_FAULT;
        return 0;
    }
    if (cnt > archive->m.size - off)
        cnt = archive->m.size - off;
    memcpy(buf, archive->m.view + off, cnt);
    archive->m.pos = off + cnt;
    if (cnt == 0) {
        fs->last_error = DA_ERROR_READ_FAULT;
        return 0;
    }
    *read = cnt;
    return 1;
}

/* orig: 06b72ef0 — FILE_END is size - dist; positions past the end fail
 * without setting an error; the high part is ignored. */
static uint32_t DACOM_API utf_set_file_pointer(void *self, DAHANDLE h, int32_t dist,
                                               int32_t *dist_high, uint32_t method)
{
    UtfFs *fs = self;
    UtfHandle *obj = object_of(fs, h);
    uint32_t size, pos;
    (void)dist_high;

    if (obj == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0xffffffffu;
    }
    size = obj->ops->size(obj);
    if (method == DA_FILE_CURRENT)
        pos = obj->pos + (uint32_t)dist;
    else if (method == DA_FILE_END)
        pos = size - (uint32_t)dist;
    else
        pos = (uint32_t)dist;
    if (pos > size)
        return 0xffffffffu;
    obj->pos = pos;
    return pos;
}

/* orig: 06b72e90 — size_high is not written. */
static uint32_t DACOM_API utf_get_file_size(void *self, DAHANDLE h, uint32_t *size_high)
{
    UtfFs *fs = self;
    UtfHandle *obj = object_of(fs, h);
    (void)size_high;
    if (obj == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0xffffffffu;
    }
    return obj->ops->size(obj);
}

/* orig: 06b73a30 — 1 whenever the handle exists. */
static int32_t DACOM_API utf_get_file_time(void *self, DAHANDLE h, DA_FILETIME *c,
                                           DA_FILETIME *a, DA_FILETIME *w)
{
    UtfFs *fs = self;
    UtfFormat *fmt = fmt_of(fs);
    UtfHandle *obj;
    if (fmt == NULL || (obj = object_of(fs, h)) == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return 0;
    }
    utf_format_file_time(fmt, obj, c, a, w);
    return 1;
}

/* orig: 06b737d0 — only sub file systems can map (the archive has no root). */
static DAHANDLE DACOM_API utf_create_file_mapping(void *self, DAHANDLE h, void *security,
                                                  uint32_t protect, uint32_t size_hi,
                                                  uint32_t size_lo, const char *name)
{
    UtfFs *fs = self;
    UtfHandle *obj;
    UtfMapEntry *e, **tail;
    (void)security;
    (void)size_hi;
    (void)size_lo;
    (void)name;

    if (protect != DA_PAGE_READONLY || fs->root == NULL || fs->root->m.view == NULL ||
        fs->root->fmt == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return DA_INVALID_HANDLE;
    }
    obj = h == NULL ? fs->node : utf_format_adjust(h);
    if (obj == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return DA_INVALID_HANDLE;
    }
    e = malloc(sizeof(*e));
    if (e == NULL)
        abort();
    e->obj = obj;
    e->next = NULL;
    for (tail = &fs->maps; *tail != NULL; tail = &(*tail)->next)
        ;
    *tail = e;
    return (DAHANDLE)e;
}

/* orig: 06b738a0 — a pointer straight into the archive mapping. An unknown
 * mapping handle returns (void *)-1. */
static void *DACOM_API utf_map_view_of_file(void *self, DAHANDLE mapping, uint32_t access,
                                            uint32_t off_hi, uint32_t off_lo, uint32_t n)
{
    UtfFs *fs = self;
    UtfMapEntry *e;
    UtfFormat *fmt;
    UtfHandle *obj;
    (void)off_hi;

    if (access != DA_FILE_MAP_READ) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return NULL;
    }
    for (e = fs->maps; e != NULL && (DAHANDLE)e != mapping; e = e->next)
        ;
    if (e == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return (void *)(intptr_t)-1;
    }
    fmt = fmt_of(fs);
    if (fmt == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return NULL;
    }
    obj = e->obj;
    if (obj == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return NULL;
    }
    if (fs->root != NULL && fs->root->m.view != NULL &&
        n <= obj->ops->size(obj) - off_lo)
        return (void *)(fs->root->m.view + rf_rd32(utf_format_header(fmt), 0x24) +
                        obj->ops->data_offset(obj) + off_lo);
    fs->last_error = DA_ERROR_ACCESS_DENIED;
    return NULL;
}

/* orig: 06b739e0 */
static int32_t DACOM_API utf_unmap_view_of_file(void *self, const void *view)
{
    UtfFs *fs = self;
    (void)view;
    if (fs->root != NULL)
        return 1;
    fs->last_error = DA_ERROR_ACCESS_DENIED;
    return 0;
}

/* ======================= directories ======================= */

/* orig: 06b73280 — a path that cannot be made absolute returns 0, not -1. */
static DAHANDLE DACOM_API utf_find_first_file(void *self, const char *pattern, DA_FIND_DATA *fd)
{
    UtfFs *fs = self;
    UtfFormat *fmt = fmt_of(fs);
    DAHANDLE r;
    char abs[RF_PATH];

    if (fmt == NULL) {
        fs->last_error = DA_ERROR_FILE_NOT_FOUND;
        return DA_INVALID_HANDLE;
    }
    if (fs->cwd_handle != NULL) {
        r = utf_format_find_first(fmt, pattern, fd, fs->cwd_handle);
    } else {
        if (!fs->vtbl->GetAbsolutePath(fs, abs, pattern, RF_PATH)) {
            fs->last_error = DA_ERROR_BAD_PATHNAME;
            return NULL;
        }
        r = utf_format_find_first(fmt, abs, fd, fs->node);
    }
    if (r == DA_INVALID_HANDLE)
        fs->last_error = utf_format_last_error(fmt);
    return r;
}

/* orig: 06b73350 */
static int32_t DACOM_API utf_find_next_file(void *self, DAHANDLE h, DA_FIND_DATA *fd)
{
    UtfFs *fs = self;
    UtfFormat *fmt = fmt_of(fs);
    int32_t r;
    if (fmt == NULL) {
        fs->last_error = DA_ERROR_FILE_NOT_FOUND;
        return 0;
    }
    r = utf_format_find_next(fmt, h, fd);
    if (r == 0)
        fs->last_error = utf_format_last_error(fmt);
    return r;
}

/* orig: 06b733b0 */
static int32_t DACOM_API utf_find_close(void *self, DAHANDLE h)
{
    UtfFs *fs = self;
    UtfFormat *fmt = fmt_of(fs);
    int32_t r;
    if (fmt == NULL) {
        fs->last_error = DA_ERROR_FILE_NOT_FOUND;
        return 0;
    }
    r = utf_format_find_close(fmt, h);
    if (r == 0)
        fs->last_error = utf_format_last_error(fmt);
    return r;
}

/* orig: 06b73470 — copies from the end of `name` (the trailing '\' of a
 * directory node), not from `cwd`; at least 2 bytes are copied. */
static uint32_t DACOM_API utf_get_current_directory(void *self, uint32_t len, char *buf)
{
    UtfFs *fs = self;
    const char *src;
    uint32_t n;
    if (fs->parent == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0;
    }
    src = fs->name + fs->name_len;
    n = (uint32_t)strlen(src);
    if (n < 3)
        n = 2;
    if (len <= n)
        n = len;
    fs->last_error = 0;
    if (n == 0)
        return 0;
    memcpy(buf, src, n);
    buf[n - 1] = '\0';
    return n - 1;
}

/* orig: 06b73500 — does not check that the target is a directory. */
static int32_t DACOM_API utf_set_current_directory(void *self, const char *path)
{
    UtfFs *fs = self;
    UtfHandle *base = cwd_root(fs), *h;
    UtfFormat *fmt;
    char abs[RF_PATH];
    size_t len;

    if (base == NULL || !base->ops->is_dir(base) || (fmt = fmt_of(fs)) == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0;
    }
    if (!fs->vtbl->GetAbsolutePath(fs, abs, path, RF_PATH) ||
        (h = utf_format_open(fmt, abs, cwd_root(fs), UTF_NO_FIND)) == NULL) {
        fs->last_error = DA_ERROR_BAD_PATHNAME;
        return 0;
    }
    if (fs->cwd_handle != NULL)
        utf_format_close(fmt, fs->cwd_handle);
    fs->cwd_handle = h;
    len = strlen(abs);
    memcpy(fs->cwd, abs, len + 1);
    if (len == 0 || (fs->cwd[len - 1] != '\\' && fs->cwd[len - 1] != '/')) {
        if (len + 2 <= sizeof(fs->cwd)) {   /* orig: unchecked */
            fs->cwd[len] = '\\';
            fs->cwd[len + 1] = '\0';
        }
    }
    return 1;
}

/* orig: 06b73ac0 — 0 (not 0xffffffff) for a path that does not resolve. */
static uint32_t DACOM_API utf_get_file_attributes(void *self, const char *path)
{
    UtfFs *fs = self;
    UtfFormat *fmt = fmt_of(fs);
    char abs[RF_PATH];
    uint32_t r;
    if (fmt == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0;
    }
    if (!fs->vtbl->GetAbsolutePath(fs, abs, path, RF_PATH)) {
        fs->last_error = DA_ERROR_BAD_PATHNAME;
        return 0;
    }
    r = utf_format_attributes(fmt, abs, cwd_root(fs));
    if (r == 0xffffffffu) {
        fs->last_error = DA_ERROR_BAD_PATHNAME;
        return 0;
    }
    return r;
}

/* orig: 06b73b70 */
static uint32_t DACOM_API utf_get_last_error(void *self)
{
    return SELF(self)->last_error;
}

/* orig: 06b73b80 — opens a node as a handle. orig: no NULL check on desc. */
static DAHANDLE DACOM_API utf_create_file(void *self, const DAFILEDESC *desc)
{
    UtfFs *fs = self;
    UtfFormat *fmt = fmt_of(fs);
    DAHANDLE find;
    UtfHandle *h = NULL;
    char abs[RF_PATH];

    if (fmt != NULL) {
        find = desc->size == DAFILEDESC_SIZE_FIND ? desc->find : UTF_NO_FIND;
        if (fs->cwd_handle != NULL) {
            h = utf_format_open(fmt, desc->name, fs->cwd_handle, find);
        } else {
            if (!fs->vtbl->GetAbsolutePath(fs, abs, desc->name, RF_PATH)) {
                fs->last_error = DA_ERROR_BAD_PATHNAME;
                return DA_INVALID_HANDLE;
            }
            h = utf_format_open(fmt, abs, cwd_root(fs), find);
        }
    }
    if (h == NULL) {
        fs->last_error = DA_ERROR_FILE_NOT_FOUND;
        return DA_INVALID_HANDLE;
    }
    return (DAHANDLE)h;
}

/* orig: 06b73410 — asks the parent file system. */
static uint32_t DACOM_API utf_get_file_position(void *self, DAHANDLE h, uint32_t *pos_high)
{
    UtfFs *fs = self;
    uint32_t r;
    if (fs->parent == NULL || h == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0;
    }
    r = fs->parent->vtbl->GetFilePosition(fs->parent, h, pos_high);
    if (r == 0xffffffffu)
        fs->last_error = fs->parent->vtbl->GetLastError(fs->parent);
    return r;
}

/* orig: 06b73c70 — not terminated when truncated. */
static void DACOM_API utf_get_file_name(void *self, char *buf, uint32_t len)
{
    UtfFs *fs = self;
    int32_t n = (int32_t)strlen(fs->name) + 1;
    if (n <= (int32_t)len)
        len = (uint32_t)n;
    if ((int32_t)len > 0 && buf != NULL)
        memcpy(buf, fs->name, len);
}

/* orig: 06b77680 */
static uint32_t DACOM_API utf_get_access_type(void *self)
{
    return SELF(self)->access;
}

/* orig: 06b73cc0 */
static GENRESULT DACOM_API utf_get_parent_system(void *self, void **out)
{
    UtfFs *fs = self;
    *out = fs->parent;
    if (fs->parent != NULL)
        fs->parent->vtbl->AddRef(fs->parent);
    return GR_OK;
}

/* orig: 06b73cf0 — tail call into the parent; no parent check. */
static int32_t DACOM_API utf_serialize(void *self, void *arg, DA_SERIALIZE_FN fn, void *ctx)
{
    UtfFs *fs = self;
    if (fs->parent == NULL) {
        fprintf(stderr, "readfile: Serialize on a UTF file system without parent\n");
        abort();    /* orig: NULL dereference */
    }
    return fs->parent->vtbl->Serialize(fs->parent, arg, fn, ctx);
}

/* orig: 06b73130 */
static int32_t DACOM_API utf_get_absolute_path(void *self, char *out, const char *path,
                                               uint32_t len)
{
    return rf_combine_path(SELF(self)->cwd, path, out, (int32_t)len);
}

/* ======================= stubs ======================= */

/* orig: 06b73d10 .. 06b73d50 — ERROR_ACCESS_DENIED, 0. */
static int32_t DACOM_API utf_write_file(void *s, DAHANDLE h, const void *b, uint32_t n,
                                        uint32_t *w, void *o)
{ (void)h; (void)b; (void)n; (void)w; (void)o; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API utf_get_overlapped_result(void *s, DAHANDLE h, void *o, uint32_t *n,
                                                   int32_t w)
{ (void)h; (void)o; (void)n; (void)w; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API utf_set_end_of_file(void *s, DAHANDLE h)
{ (void)h; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API utf_set_file_time(void *s, DAHANDLE h, const DA_FILETIME *c,
                                           const DA_FILETIME *a, const DA_FILETIME *w)
{ (void)h; (void)c; (void)a; (void)w; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API utf_create_directory(void *s, const char *p, void *sa)
{ (void)p; (void)sa; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API utf_path_stub(void *s, const char *p)
{ (void)p; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API utf_copy_file(void *s, const char *a, const char *b, int32_t f)
{ (void)a; (void)b; (void)f; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API utf_move_file(void *s, const char *a, const char *b)
{ (void)a; (void)b; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API utf_set_file_attributes(void *s, const char *p, uint32_t a)
{ (void)p; (void)a; SELF(s)->last_error = 5; return 0; }
/* orig: 06b73a10 — ERROR_ACCESS_DENIED but returns 1. */
static int32_t DACOM_API utf_lock_file(void *s, DAHANDLE h, uint32_t a, uint32_t b,
                                       uint32_t c, uint32_t d)
{ (void)h; (void)a; (void)b; (void)c; (void)d; SELF(s)->last_error = 5; return 1; }

static const IFileSystemVtbl utf_vtbl = {     /* .rdata 06b79138 */
    utf_query_interface,
    utf_addref,
    utf_release,
    utf_create_instance,
    utf_close_handle,
    utf_read_file,
    utf_write_file,
    utf_get_overlapped_result,
    utf_set_file_pointer,
    utf_set_end_of_file,
    utf_get_file_size,
    utf_lock_file,
    utf_lock_file,
    utf_get_file_time,
    utf_set_file_time,
    utf_create_file_mapping,
    utf_map_view_of_file,
    utf_unmap_view_of_file,
    utf_find_first_file,
    utf_find_next_file,
    utf_find_close,
    utf_create_directory,
    utf_path_stub,              /* RemoveDirectory */
    utf_get_current_directory,
    utf_set_current_directory,
    utf_path_stub,              /* DeleteFile */
    utf_copy_file,
    utf_move_file,
    utf_get_file_attributes,
    utf_set_file_attributes,
    utf_get_last_error,
    utf_create_file,
    utf_get_file_position,
    utf_get_file_name,
    utf_get_access_type,
    utf_get_parent_system,
    rf_reserved2,
    rf_reserved2,
    rf_reserved5,
    rf_reserved5,
    utf_serialize,
    utf_get_absolute_path,
};
