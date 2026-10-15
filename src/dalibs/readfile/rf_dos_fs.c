/* rf_dos_fs.c — the DOS file system (IFileSystem vtbl 06b79218), a thin layer
 * over the OS file API. Port of readfile.dll 06b741b0..06b75f60 and
 * 06b770a0..06b77170 (notes/readfile_dll.md).
 *
 * Every opened file is memory-mapped whole; reads and seeks work on the
 * mapping. An object is one of:
 *   - the root object (global rf_root_dos), the "FileSystem" factory;
 *   - a directory file system: `root` holds "<dir>\<cwd>\", `root_len`
 *     marks where the file system's own root ends;
 *   - a single-file file system (`single`): `own` is the file's handle;
 *   - a child of another file system (`parent`): everything is forwarded.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "msvc_compat.h"
#include "rf_internal.h"

/* One open file (orig: std::map<HANDLE, {HANDLE, mapped file}> node value). */
typedef struct DosFile {
    DAHANDLE        key;        /* the handle returned to callers */
    RfMapped        m;
    struct DosFile *next;       /* this file system's map */
    struct DosFile *all_next;   /* every live DOS file (handle validation) */
} DosFile;

typedef struct DosMap {         /* CreateFileMapping result */
    RfMapped      *m;           /* first: the mapping handle points here */
    struct DosMap *next;
} DosMap;

/* orig: calloc(0x170). */
typedef struct DosFs {
    const IFileSystemVtbl *vtbl;    /* +0x000 */
    char          root[0x10b];      /* +0x00d "<root>\<cwd>\" */
    uint32_t      access;           /* +0x118 */
    uint32_t      last_error;       /* +0x11c */
    IFileSystem  *parent;           /* +0x120 */
    int32_t       single;           /* +0x128 */
    int32_t       root_len;         /* +0x12c */
    DAHANDLE      own;              /* +0x130 */
    DosFile      *files;            /* +0x134 */
    DosMap       *maps;             /* +0x148 */
    PlatformMutex *lock;            /* +0x154 */
    uint32_t      refs;             /* +0x16c */
} DosFs;

#define SELF(p) ((DosFs *)(p))

static const IFileSystemVtbl dos_vtbl;
static DosFile *g_all_files;

/* ======================= open-file table ======================= */

static DosFile *file_find(const DosFs *fs, DAHANDLE h)
{
    DosFile *f;
    for (f = fs->files; f != NULL; f = f->next)
        if (f->key == h)
            return f;
    return NULL;
}

static PlatformFile *live_file(DAHANDLE h)
{
    DosFile *f;
    for (f = g_all_files; f != NULL; f = f->all_next)
        if (f->key == h && f->m.file != NULL)
            return f->m.file;
    return NULL;
}

/* Close a record's file and mapping and drop it from the tables. */
static void file_erase(DosFs *fs, DosFile *rec)
{
    DosFile **link;
    rf_mapped_close(&rec->m);
    for (link = &fs->files; *link != NULL; link = &(*link)->next)
        if (*link == rec) {
            *link = rec->next;
            break;
        }
    for (link = &g_all_files; *link != NULL; link = &(*link)->all_next)
        if (*link == rec) {
            *link = rec->all_next;
            break;
        }
    free(rec);
}

/* orig: 06b74a10 / inline in 06b75a70 — CreateFileA, map it, remember it. */
static DAHANDLE file_open(DosFs *fs, const char *path, uint32_t access, uint32_t creation)
{
    DosFile *rec = calloc(1, sizeof(*rec));
    if (rec == NULL)
        abort();
    if (!rf_mapped_open(&rec->m, path, access, creation)) {
        free(rec);
        return DA_INVALID_HANDLE;
    }
    rec->key = (DAHANDLE)rec->m.file;
    rec->next = fs->files;
    fs->files = rec;
    rec->all_next = g_all_files;
    g_all_files = rec;
    return rec->key;
}

/* ======================= lifetime ======================= */

/* calloc(0x170) + 06b74b20 + vtbl/refs */
DosFs *dos_fs_new(void)
{
    DosFs *fs = calloc(1, sizeof(*fs));
    if (fs == NULL)
        return NULL;
    fs->vtbl = &dos_vtbl;
    fs->root[0] = '\\';
    fs->own = DA_INVALID_HANDLE;
    fs->lock = platform_mutex_create();
    fs->refs = 1;
    return fs;
}

IFileSystem *dos_fs_iface(DosFs *fs)
{
    return (IFileSystem *)fs;
}

/* orig: 06b741b0 */
static void dos_destroy(DosFs *fs)
{
    DosMap *mp;
    if (fs->parent != NULL) {
        fs->parent->vtbl->CloseHandle(fs->parent, fs->own);
        fs->parent->vtbl->Release(fs->parent);
    } else {
        if (fs == rf_root_dos)
            rf_root_dos = NULL;
        while (fs->maps != NULL) {
            mp = fs->maps;
            fs->maps = mp->next;
            free(mp);
        }
        if (fs->own != DA_INVALID_HANDLE) {
            DosFile *rec = file_find(fs, fs->own);
            if (rec == NULL)
                fs->last_error = DA_ERROR_INVALID_HANDLE;
            else
                file_erase(fs, rec);
            fs->own = DA_INVALID_HANDLE;
        }
        while (fs->files != NULL)       /* 06b74350 */
            file_erase(fs, fs->files);
    }
    platform_mutex_destroy(fs->lock);
    while (fs->maps != NULL) {
        mp = fs->maps;
        fs->maps = mp->next;
        free(mp);
    }
    while (fs->files != NULL)
        file_erase(fs, fs->files);
    if (fs->parent != NULL) {
        /* orig: Releases the parent a second time (06b74339). */
        fs->parent->vtbl->Release(fs->parent);
        fs->parent = NULL;
    }
    free(fs);
}

/* ======================= IUnknown ======================= */

/* orig: 06b770a0 */
static GENRESULT DACOM_API dos_query_interface(void *self, const char *iface, void **out)
{
    if (strcmp(iface, IID_IFileSystem) == 0) {
        SELF(self)->refs++;
        *out = self;
        return GR_OK;
    }
    *out = NULL;
    return GR_INTERFACE_UNSUPPORTED;
}

/* orig: 06b77150 */
static uint32_t DACOM_API dos_addref(void *self)
{
    return ++SELF(self)->refs;
}

/* orig: 06b77170 */
static uint32_t DACOM_API dos_release(void *self)
{
    DosFs *fs = self;
    if (fs->refs != 0)
        fs->refs--;
    if (fs->refs != 0)
        return fs->refs;
    fs->refs = 1;
    dos_destroy(fs);
    return 0;
}

/* ======================= creation ======================= */

/* Make `fs` a directory file system rooted at `path` (inline in 06b74470). */
static void set_dir_root(DosFs *fs, const char *path)
{
    size_t len = strlen(path);
    if (len > 0x107)
        len = 0x107;
    memcpy(fs->root, path, len);
    fs->root[len] = '\0';
    fs->root_len = (int32_t)len;
    if (len > 0 && (fs->root[len - 1] == '\\' || fs->root[len - 1] == '/'))
        fs->root_len--;
    fs->root[fs->root_len] = '\\';
    fs->root[fs->root_len + 1] = '\0';
}

static void set_single_name(DosFs *fs, const char *name)
{
    strncpy(fs->root, name, 0x108);
    fs->root[0x108] = '\0';     /* orig: strncpy may leave it unterminated */
    fs->root_len = 0;
}

/* orig: 06b74470 */
static GENRESULT DACOM_API dos_create_instance(void *self, DAFILEDESC *desc, void **out)
{
    DosFs *fs = self, *nfs = NULL;
    GENRESULT r = GR_OK;
    uint32_t attrs;
    char full[RF_PATH];

    if ((desc->size != DAFILEDESC_SIZE_FIND && desc->size != DAFILEDESC_SIZE_BASIC) ||
        strcmp(desc->component, RF_FACTORY_NAME) != 0) {
        r = GR_INTERFACE_UNSUPPORTED;
        goto done;
    }
    if (desc->name == NULL || desc->access != DA_GENERIC_READ ||
        desc->creation != DA_OPEN_EXISTING || fs->single) {
        r = GR_GENERIC;
        goto done;
    }

    if (fs == rf_root_dos) {
        nfs = dos_fs_new();
        if (nfs == NULL) {
            r = GR_GENERIC;     /* orig: dereferences NULL */
            goto done;
        }
        if (desc->parent != NULL) {
            /* A file inside another file system: forward everything. */
            nfs->parent = desc->parent;
            nfs->parent->vtbl->AddRef(nfs->parent);
            nfs->own = desc->handle;
            nfs->single = 1;
            nfs->access = desc->access;
            /* orig: the name goes into the *root* object, not the new one
             * (06b748a8 uses ebx = this). */
            set_single_name(fs, desc->name);
            goto done;
        }
        attrs = platform_file_attributes(desc->name);
        if (attrs != 0xffffffffu) {
            if (attrs & DA_FILE_ATTRIBUTE_DIRECTORY) {
                nfs->access = desc->access;
                set_dir_root(nfs, desc->name);
                goto done;
            }
            nfs->own = file_open(nfs, desc->name, desc->access, desc->creation);
            if (nfs->own != DA_INVALID_HANDLE) {
                set_single_name(nfs, desc->name);
                nfs->access = desc->access;
                nfs->single = 1;
                goto done;
            }
        }
        dos_destroy(nfs);
        nfs = NULL;
        fs->last_error = platform_last_error();
        r = -6;
        goto done;
    }

    /* A directory file system: open a file or a subdirectory of it. */
    if (desc->parent != NULL || !rf_combine_path(fs->root, desc->name, full, RF_PATH)) {
        r = GR_GENERIC;
        goto done;
    }
    attrs = platform_file_attributes(full);
    if (attrs == 0xffffffffu) {
        r = GR_GENERIC;
        goto done;
    }
    if (attrs & DA_FILE_ATTRIBUTE_DIRECTORY) {
        nfs = dos_fs_new();
        if (nfs == NULL) {
            r = GR_GENERIC;
            goto done;
        }
        set_dir_root(nfs, full);    /* orig: access is left 0 here */
        goto done;
    }
    if (desc->iface != NULL && memcmp(desc->iface, "DOS", 4) == 0) {
        nfs = dos_fs_new();
        if (nfs == NULL) {
            r = GR_GENERIC;
            goto done;
        }
        nfs->own = file_open(nfs, full, desc->access, desc->creation);
        if (nfs->own == DA_INVALID_HANDLE) {
            dos_destroy(nfs);
            nfs = NULL;
            r = -6;
            fs->last_error = platform_last_error();
            goto done;
        }
        set_single_name(nfs, desc->name);   /* orig: the name as given, not `full` */
        nfs->access = desc->access;
        nfs->single = 1;
        goto done;
    }
    /* Any other file: let the component manager find a file system class
     * that can open it (UTF archives), with this one as the parent. */
    desc->parent = (IFileSystem *)fs;
    r = rf_com->vtbl->CreateInstance(rf_com, (DACOMDESC *)desc, (void **)&nfs);
    desc->parent = NULL;

done:
    *out = nfs;
    return r;
}

/* ======================= file access ======================= */

/* Error after a failed call: the parent's error, or the OS error. */
static void set_error_after(DosFs *fs)
{
    if (fs->parent != NULL)
        fs->last_error = fs->parent->vtbl->GetLastError(fs->parent);
    else
        fs->last_error = platform_last_error();
}

/* orig: 06b74bf0 */
static int32_t DACOM_API dos_close_handle(void *self, DAHANDLE h)
{
    DosFs *fs = self;
    DosMap **link;
    DosFile *rec;

    if (h == NULL || h == fs->own) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return 0;
    }
    if (fs->parent != NULL) {
        int32_t r = fs->parent->vtbl->CloseHandle(fs->parent, h);
        if (r == 0) {
            fs->last_error = fs->parent->vtbl->GetLastError(fs->parent);
            return 0;
        }
        return r;
    }
    for (link = &fs->maps; *link != NULL; link = &(*link)->next) {
        if ((DAHANDLE)*link == h) {
            DosMap *mp = *link;
            *link = mp->next;
            free(mp);
            return 1;
        }
    }
    rec = file_find(fs, h);
    if (rec == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return 0;
    }
    file_erase(fs, rec);
    return 1;
}

/* orig: 06b74d60 — a short read is a failure (last error 0xffffffff).
 * orig: an unknown handle returns `n` without touching *read. */
static int32_t DACOM_API dos_read_file(void *self, DAHANDLE h, void *buf, uint32_t n,
                                       uint32_t *read, void *overlapped)
{
    DosFs *fs = self;
    DosFile *rec;
    uint32_t got;

    if (fs->parent != NULL) {
        int32_t r = fs->parent->vtbl->ReadFile(fs->parent, h != NULL ? h : fs->own, buf, n,
                                               read, overlapped);
        if (r == 0)
            fs->last_error = fs->parent->vtbl->GetLastError(fs->parent);
        return r;
    }
    if (h == NULL)
        h = fs->own;
    if (h == DA_INVALID_HANDLE || (rec = file_find(fs, h)) == NULL)
        return (int32_t)n;
    if (rec->m.view == NULL) {
        if (!platform_file_read(rec->m.file, buf, n, &got))
            got = 0;
    } else if (rec->m.pos < rec->m.size) {
        got = rec->m.size - rec->m.pos;
        if (got > n)
            got = n;
        memcpy(buf, rec->m.view + rec->m.pos, got);
        rec->m.pos += got;
    } else {
        got = 0;
    }
    *read = got;
    if (got != n) {
        fs->last_error = 0xffffffffu;
        return 0;
    }
    return 1;
}

/* orig: 06b75d00 — only mapped files have a position. */
static uint32_t DACOM_API dos_get_file_position(void *self, DAHANDLE h, uint32_t *pos_high)
{
    DosFs *fs = self;
    DosFile *rec;
    if (h == NULL)
        h = fs->own;
    if (fs->parent != NULL)
        return fs->parent->vtbl->GetFilePosition(fs->parent, h, pos_high);
    if (pos_high != NULL)
        *pos_high = 0;
    if (h != DA_INVALID_HANDLE && (rec = file_find(fs, h)) != NULL && rec->m.view != NULL)
        return rec->m.pos;
    fs->last_error = 0xffffffffu;
    return 0xffffffffu;
}

/* orig: 06b74eb0 — 64-bit arithmetic, but only mapped files can seek and
 * the stored position is 32-bit; no bounds check. */
static uint32_t DACOM_API dos_set_file_pointer(void *self, DAHANDLE h, int32_t dist,
                                               int32_t *dist_high, uint32_t method)
{
    DosFs *fs = self;
    DosFile *rec;
    int64_t hi = dist_high != NULL ? *dist_high : (dist < 0 ? -1 : 0);
    uint64_t pos = ((uint64_t)(uint32_t)hi << 32) | (uint32_t)dist;

    if (fs->parent != NULL) {
        uint32_t r = fs->parent->vtbl->SetFilePointer(fs->parent, h != NULL ? h : fs->own,
                                                      dist, dist_high, method);
        if (r == 0xffffffffu)
            fs->last_error = fs->parent->vtbl->GetLastError(fs->parent);
        return r;
    }
    if (method == DA_FILE_CURRENT) {
        uint32_t cur_hi = 0;
        uint32_t cur = fs->vtbl->GetFilePosition(fs, h, &cur_hi);
        pos += ((uint64_t)cur_hi << 32) | cur;
    } else if (method == DA_FILE_END) {
        uint32_t size_hi = 0;
        uint32_t size = fs->vtbl->GetFileSize(fs, h, &size_hi);
        pos = (((uint64_t)size_hi << 32) | size) - pos;
    }
    if (h == NULL)
        h = fs->own;
    if (h != DA_INVALID_HANDLE && (rec = file_find(fs, h)) != NULL && rec->m.view != NULL) {
        rec->m.pos = (uint32_t)pos;
        if ((uint32_t)pos != 0xffffffffu) {
            if (dist_high != NULL)
                *dist_high = (int32_t)(pos >> 32);
            return (uint32_t)pos;
        }
    }
    fs->last_error = 0xffffffffu;
    return 0xffffffffu;
}

/* orig: 06b74ff0 — the OS call works for any live handle. */
static uint32_t DACOM_API dos_get_file_size(void *self, DAHANDLE h, uint32_t *size_high)
{
    DosFs *fs = self;
    uint32_t r;
    PlatformFile *f;
    if (h == NULL)
        h = fs->own;
    if (fs->parent != NULL) {
        r = fs->parent->vtbl->GetFileSize(fs->parent, h, size_high);
    } else if ((f = live_file(h)) != NULL) {
        r = platform_file_size(f, size_high);
    } else {
        fs->last_error = DA_ERROR_INVALID_HANDLE;   /* GetFileSize on a bad handle */
        return 0xffffffffu;
    }
    if (r == 0xffffffffu)
        set_error_after(fs);
    return r;
}

/* orig: 06b75070 */
static int32_t DACOM_API dos_get_file_time(void *self, DAHANDLE h, DA_FILETIME *c,
                                           DA_FILETIME *a, DA_FILETIME *w)
{
    DosFs *fs = self;
    int32_t r;
    PlatformFile *f;
    if (h == NULL)
        h = fs->own;
    if (fs->parent != NULL) {
        r = fs->parent->vtbl->GetFileTime(fs->parent, h, c, a, w);
    } else if ((f = live_file(h)) != NULL) {
        r = platform_file_times(f, c ? &c->lo : NULL, a ? &a->lo : NULL, w ? &w->lo : NULL);
    } else {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return 0;
    }
    if (r == 0)
        set_error_after(fs);
    return r;
}

/* orig: 06b75100 — refused when the file system was opened for writing. */
static DAHANDLE DACOM_API dos_create_file_mapping(void *self, DAHANDLE h, void *security,
                                                  uint32_t protect, uint32_t size_hi,
                                                  uint32_t size_lo, const char *name)
{
    DosFs *fs = self;
    DosFile *rec;
    DosMap *mp, **tail;

    if (fs->parent != NULL) {
        DAHANDLE r = fs->parent->vtbl->CreateFileMapping(fs->parent, h != NULL ? h : fs->own,
                                                         security, protect, size_hi, size_lo,
                                                         name);
        if (r == NULL)
            fs->last_error = fs->parent->vtbl->GetLastError(fs->parent);
        return r;
    }
    if (fs->access & DA_GENERIC_WRITE) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return NULL;
    }
    if (h == NULL)
        h = fs->own;
    if (h == DA_INVALID_HANDLE || (rec = file_find(fs, h)) == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return NULL;
    }
    mp = malloc(sizeof(*mp));
    if (mp == NULL)
        abort();
    mp->m = &rec->m;
    mp->next = NULL;
    for (tail = &fs->maps; *tail != NULL; tail = &(*tail)->next)
        ;
    *tail = mp;
    return (DAHANDLE)mp;
}

/* orig: 06b75230 — an unknown mapping handle returns (void *)-1. */
static void *DACOM_API dos_map_view_of_file(void *self, DAHANDLE mapping, uint32_t access,
                                            uint32_t off_hi, uint32_t off_lo, uint32_t n)
{
    DosFs *fs = self;
    DosMap *mp;
    const RfMapped *m;

    if (fs->parent != NULL) {
        void *r = fs->parent->vtbl->MapViewOfFile(fs->parent, mapping, access, off_hi,
                                                  off_lo, n);
        if (r == NULL)
            fs->last_error = fs->parent->vtbl->GetLastError(fs->parent);
        return r;
    }
    if (access != DA_FILE_MAP_READ) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return NULL;
    }
    for (mp = fs->maps; mp != NULL && (DAHANDLE)mp != mapping; mp = mp->next)
        ;
    if (mp == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return (void *)(intptr_t)-1;
    }
    m = mp->m;
    if (m == NULL) {
        fs->last_error = DA_ERROR_INVALID_HANDLE;
        return NULL;
    }
    if (m->view != NULL && n <= m->size - off_lo)
        return (void *)(m->view + off_lo);
    fs->last_error = DA_ERROR_ACCESS_DENIED;
    return NULL;
}

/* orig: 06b75350 */
static int32_t DACOM_API dos_unmap_view_of_file(void *self, const void *view)
{
    (void)self;
    (void)view;
    return 1;
}

/* orig: 06b75a70 — open a file below the root; a NULL desc returns the
 * file system's own handle. */
static DAHANDLE DACOM_API dos_create_file(void *self, const DAFILEDESC *desc)
{
    DosFs *fs = self;
    char full[RF_PATH];
    uint32_t attrs;
    DAHANDLE h;

    if (desc == NULL)
        return fs->own;
    if (!fs->single && desc->name != NULL && rf_combine_path(fs->root, desc->name, full, RF_PATH)) {
        attrs = platform_file_attributes(full);
        if (attrs != 0xffffffffu && !(attrs & DA_FILE_ATTRIBUTE_DIRECTORY)) {
            h = file_open(fs, full, desc->access, desc->creation);
            if (h != DA_INVALID_HANDLE)
                return h;
        }
    }
    fs->last_error = DA_ERROR_FILE_NOT_FOUND;
    return DA_INVALID_HANDLE;
}

/* ======================= directories ======================= */

typedef struct DosFind {        /* FindFirstFile handle */
    PlatformFind   *find;
    struct DosFind *next;
} DosFind;
static DosFind *g_finds;

static void copy_find_data(DA_FIND_DATA *fd, const PlatformFindData *p)
{
    memset(fd, 0, sizeof(*fd));
    fd->attributes = p->attributes;
    fd->creation.lo = p->creation[0];
    fd->creation.hi = p->creation[1];
    fd->last_access.lo = p->last_access[0];
    fd->last_access.hi = p->last_access[1];
    fd->last_write.lo = p->last_write[0];
    fd->last_write.hi = p->last_write[1];
    fd->size_high = p->size_high;
    fd->size_low = p->size_low;
    memcpy(fd->file_name, p->name, sizeof(fd->file_name));
}

static DosFind *find_lookup(DAHANDLE h)
{
    DosFind *f;
    for (f = g_finds; f != NULL; f = f->next)
        if ((DAHANDLE)f == h)
            return f;
    return NULL;
}

/* orig: 06b75360 — inverted check: a pattern that *can* be joined to the
 * root fails with ERROR_BAD_PATHNAME; FindFirstFileA only runs on the
 * partial buffer of a failed join. A failed FindFirstFileA returns
 * INVALID_HANDLE_VALUE without setting the error (the original tests for
 * NULL). */
static DAHANDLE DACOM_API dos_find_first_file(void *self, const char *pattern, DA_FIND_DATA *fd)
{
    DosFs *fs = self;
    char buf[RF_PATH];
    PlatformFindData pd;
    DosFind *f;

    if (fs->single) {
        fs->last_error = DA_ERROR_FILE_NOT_FOUND;
        return DA_INVALID_HANDLE;
    }
    memset(buf, 0, sizeof(buf));
    if (rf_combine_path(fs->root, pattern, buf, RF_PATH)) {
        fs->last_error = DA_ERROR_BAD_PATHNAME;
        return DA_INVALID_HANDLE;
    }
    buf[sizeof(buf) - 1] = '\0';
    f = calloc(1, sizeof(*f));
    if (f == NULL)
        abort();
    f->find = platform_find_first(buf, &pd);
    if (f->find == NULL) {
        free(f);
        return DA_INVALID_HANDLE;
    }
    copy_find_data(fd, &pd);
    f->next = g_finds;
    g_finds = f;
    return (DAHANDLE)f;
}

/* orig: 06b75560 */
static int32_t DACOM_API dos_find_next_file(void *self, DAHANDLE h, DA_FIND_DATA *fd)
{
    DosFs *fs = self;
    DosFind *f = find_lookup(h);
    PlatformFindData pd;
    if (f != NULL && platform_find_next(f->find, &pd)) {
        copy_find_data(fd, &pd);
        return 1;
    }
    if (f == NULL && fs->parent == NULL)
        fs->last_error = DA_ERROR_INVALID_HANDLE;
    else
        set_error_after(fs);
    return 0;
}

/* orig: 06b755b0 */
static int32_t DACOM_API dos_find_close(void *self, DAHANDLE h)
{
    DosFs *fs = self;
    DosFind **link;
    for (link = &g_finds; *link != NULL; link = &(*link)->next) {
        if ((DAHANDLE)*link == h) {
            DosFind *f = *link;
            *link = f->next;
            platform_find_close(f->find);
            free(f);
            return 1;
        }
    }
    if (fs->parent != NULL)
        fs->last_error = fs->parent->vtbl->GetLastError(fs->parent);
    else
        fs->last_error = DA_ERROR_INVALID_HANDLE;
    return 0;
}

/* orig: 06b75600 — the cwd relative to the file system root ("\sub\"). */
static uint32_t DACOM_API dos_get_current_directory(void *self, uint32_t len, char *buf)
{
    DosFs *fs = self;
    const char *src;
    uint32_t n;
    if (fs->single) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0;
    }
    src = fs->root + fs->root_len;
    n = (uint32_t)strlen(src);
    if (n < 3)
        n = 2;
    if (len <= n)
        n = len;
    if (n != 0) {
        memcpy(buf, src, n);
        buf[n - 1] = '\0';
        if (n - 1 != 0)
            return n - 1;
    }
    set_error_after(fs);
    return 0;
}

/* orig: 06b756b0 — nothing stops ".." from leaving the root. */
static int32_t DACOM_API dos_set_current_directory(void *self, const char *path)
{
    DosFs *fs = self;
    char full[RF_PATH];
    uint32_t attrs;
    size_t len;

    if (fs->single) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0;
    }
    if (!rf_combine_path(fs->root, path, full, RF_PATH) ||
        (attrs = platform_file_attributes(full)) == 0xffffffffu ||
        !(attrs & DA_FILE_ATTRIBUTE_DIRECTORY)) {
        fs->last_error = DA_ERROR_BAD_PATHNAME;
        return 0;
    }
    len = strlen(full);
    memcpy(fs->root, full, len + 1);
    if (len == 0 || (fs->root[len - 1] != '\\' && fs->root[len - 1] != '/')) {
        fs->root[len] = '\\';
        fs->root[len + 1] = '\0';
    }
    return 1;
}

/* orig: 06b758a0 */
static uint32_t DACOM_API dos_get_file_attributes(void *self, const char *path)
{
    DosFs *fs = self;
    char full[RF_PATH];
    uint32_t attrs;
    if (fs->single || path == NULL) {
        fs->last_error = DA_ERROR_ACCESS_DENIED;
        return 0;
    }
    if (!rf_combine_path(fs->root, path, full, RF_PATH)) {
        fs->last_error = DA_ERROR_BAD_PATHNAME;
        return 0;
    }
    attrs = platform_file_attributes(full);
    if (attrs == 0xffffffffu)
        set_error_after(fs);
    return attrs;
}

/* orig: 06b75a60 */
static uint32_t DACOM_API dos_get_last_error(void *self)
{
    return SELF(self)->last_error;
}

/* orig: 06b75da0 — the root without the cwd part. */
static void DACOM_API dos_get_file_name(void *self, char *buf, uint32_t len)
{
    DosFs *fs = self;
    int32_t n = (int32_t)strlen(fs->root) + 1;
    if (n <= (int32_t)len)
        len = (uint32_t)n;
    if ((int32_t)len > 0 && buf != NULL) {
        memcpy(buf, fs->root, len);
        if (fs->root_len != 0 && fs->root_len < (int32_t)len)
            buf[fs->root_len] = '\0';
        else
            buf[len - 1] = '\0';
    }
}

/* orig: 06b75e10 */
static uint32_t DACOM_API dos_get_access_type(void *self)
{
    return SELF(self)->access;
}

/* orig: 06b75e20 */
static GENRESULT DACOM_API dos_get_parent_system(void *self, void **out)
{
    DosFs *fs = self;
    *out = fs->parent;
    if (fs->parent != NULL)
        fs->parent->vtbl->AddRef(fs->parent);
    return GR_OK;
}

/* orig: 06b75f10 */
static int32_t DACOM_API dos_serialize(void *self, void *arg, DA_SERIALIZE_FN fn, void *ctx)
{
    DosFs *fs = self;
    int32_t r;
    if (fs->parent != NULL)
        return fs->parent->vtbl->Serialize(fs->parent, arg, fn, ctx);
    platform_mutex_lock(fs->lock);
    r = fn(arg, ctx);
    platform_mutex_unlock(fs->lock);
    return r;
}

/* orig: 06b76410 — used by MEM file systems. */
int32_t rf_serialize_global(void *arg, DA_SERIALIZE_FN fn, void *ctx)
{
    int32_t r;
    PlatformMutex *lock = rf_root_dos->lock;    /* orig: no NULL check */
    platform_mutex_lock(lock);
    r = fn(arg, ctx);
    platform_mutex_unlock(lock);
    return r;
}

/* orig: 06b75f60 — relative to the file system root. */
static int32_t DACOM_API dos_get_absolute_path(void *self, char *out, const char *path,
                                               uint32_t len)
{
    DosFs *fs = self;
    return rf_combine_path(fs->root + fs->root_len, path, out, (int32_t)len);
}

/* ======================= stubs ======================= */

/* orig: 06b75e50 .. 06b75ef0 — ERROR_ACCESS_DENIED, 0 (06b75eb0: 1). */
static int32_t DACOM_API dos_write_file(void *s, DAHANDLE h, const void *b, uint32_t n,
                                        uint32_t *w, void *o)
{ (void)h; (void)b; (void)n; (void)w; (void)o; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API dos_get_overlapped_result(void *s, DAHANDLE h, void *o, uint32_t *n,
                                                   int32_t w)
{ (void)h; (void)o; (void)n; (void)w; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API dos_set_end_of_file(void *s, DAHANDLE h)
{ (void)h; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API dos_lock_file(void *s, DAHANDLE h, uint32_t a, uint32_t b,
                                       uint32_t c, uint32_t d)
{ (void)h; (void)a; (void)b; (void)c; (void)d; SELF(s)->last_error = 5; return 1; }
static int32_t DACOM_API dos_set_file_time(void *s, DAHANDLE h, const DA_FILETIME *c,
                                           const DA_FILETIME *a, const DA_FILETIME *w)
{ (void)h; (void)c; (void)a; (void)w; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API dos_create_directory(void *s, const char *p, void *sa)
{ (void)p; (void)sa; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API dos_path_stub(void *s, const char *p)
{ (void)p; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API dos_copy_file(void *s, const char *a, const char *b, int32_t f)
{ (void)a; (void)b; (void)f; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API dos_move_file(void *s, const char *a, const char *b)
{ (void)a; (void)b; SELF(s)->last_error = 5; return 0; }
static int32_t DACOM_API dos_set_file_attributes(void *s, const char *p, uint32_t a)
{ (void)p; (void)a; SELF(s)->last_error = 5; return 0; }

static const IFileSystemVtbl dos_vtbl = {     /* .rdata 06b79218 */
    dos_query_interface,
    dos_addref,
    dos_release,
    dos_create_instance,
    dos_close_handle,
    dos_read_file,
    dos_write_file,
    dos_get_overlapped_result,
    dos_set_file_pointer,
    dos_set_end_of_file,
    dos_get_file_size,
    dos_lock_file,
    dos_lock_file,
    dos_get_file_time,
    dos_set_file_time,
    dos_create_file_mapping,
    dos_map_view_of_file,
    dos_unmap_view_of_file,
    dos_find_first_file,
    dos_find_next_file,
    dos_find_close,
    dos_create_directory,
    dos_path_stub,              /* RemoveDirectory */
    dos_get_current_directory,
    dos_set_current_directory,
    dos_path_stub,              /* DeleteFile */
    dos_copy_file,
    dos_move_file,
    dos_get_file_attributes,
    dos_set_file_attributes,
    dos_get_last_error,
    dos_create_file,
    dos_get_file_position,
    dos_get_file_name,
    dos_get_access_type,
    dos_get_parent_system,
    rf_reserved2,
    rf_reserved2,
    rf_reserved5,
    rf_reserved5,
    dos_serialize,
    dos_get_absolute_path,
};
