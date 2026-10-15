/* rf_mem_fs.c — the MEM file system: one memory buffer as a file
 * (IFileSystem vtbl 06b792f0 + IDataBuffer vtbl 06b792e0, factory vtbl
 * 06b792d0). Port of readfile.dll 06b77250..06b77b90 (notes/readfile_dll.md).
 * Only handle 0 (the buffer itself) is valid. */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include "rf_internal.h"

#define MEM_OWNED  1u   /* free the buffer on release */
#define MEM_FIXED  2u   /* caller's buffer: cannot grow */
#define MEM_ALLOC  4u   /* our allocation (orig VirtualAlloc) */

/* orig: calloc(300). */
typedef struct MemFs {
    const IFileSystemVtbl *vtbl;    /* +0x000 */
    const IDataBufferVtbl *db_vtbl; /* +0x004 */
    uint8_t  *buf;                  /* +0x008 */
    uint32_t  cap;                  /* +0x00c */
    uint32_t  pos;                  /* +0x010 */
    uint32_t  flags;                /* +0x014 */
    uint32_t  access;               /* +0x018 */
    uint32_t  size;                 /* +0x01c */
    char      name[0x108];          /* +0x020 */
    uint32_t  refs;                 /* +0x128 */
} MemFs;

#define SELF(p)     ((MemFs *)(p))
#define FROM_DB(p)  ((MemFs *)((char *)(p) - offsetof(MemFs, db_vtbl)))

static const IFileSystemVtbl mem_vtbl;
static const IDataBufferVtbl mem_db_vtbl;

/* orig: 06b77250 */
static void mem_free_buffer(MemFs *m)
{
    if (m->flags & MEM_OWNED)
        free(m->buf);   /* orig: VirtualFree if MEM_ALLOC, else free */
    m->buf = NULL;
}

/* Grow to hold `need` bytes, rounded like the original:
 * (need + 0xffff) & ~0xfff (inline in 06b77330 / 06b774b0). */
static int mem_grow(MemFs *m, uint32_t need)
{
    uint32_t cap = (need + 0xffffu) & 0xfffff000u;
    uint8_t *nb = calloc(1, cap);   /* orig: VirtualAlloc (zeroed) */
    if (nb == NULL)
        return 0;
    if (m->buf != NULL) {
        memcpy(nb, m->buf, m->cap);
        free(m->buf);   /* orig: VirtualFree, whatever the buffer was */
    }
    m->buf = nb;
    m->cap = cap;
    m->flags |= MEM_ALLOC;
    return 1;
}

/* orig: 06b777f0 */
static GENRESULT mem_init(MemFs *m, const DAFILEDESC *d)
{
    if (d->parent != NULL)
        return -2;
    if (d->iface == NULL || memcmp(d->iface, "MEM", 4) != 0)
        return GR_GENERIC;
    m->access = d->access;
    if (!(d->buffer_flags & 1)) {
        /* Copy mode: our own buffer of `buffer_size` bytes. */
        if (d->buffer != NULL)
            m->cap = d->buffer_size;
        if (m->cap != 0) {
            m->buf = calloc(1, m->cap);
            if (m->buf == NULL)
                m->cap = 0;
        }
        m->flags |= MEM_OWNED | MEM_ALLOC;
    } else {
        /* The caller's buffer, used in place. */
        m->buf = (uint8_t *)d->buffer;
        m->cap = d->buffer != NULL ? d->buffer_size : 0;
        if (d->buffer_flags & 2)
            m->flags |= MEM_OWNED;
        m->flags |= MEM_FIXED;
    }
    if (m->buf != NULL) {
        if (d->creation > 2 && d->creation < 5)     /* OPEN_EXISTING / OPEN_ALWAYS */
            m->size = m->cap;
        if (d->buffer != NULL && d->buffer != m->buf)
            memcpy(m->buf, d->buffer, m->cap);
    }
    if (d->name != NULL)
        strncpy(m->name, d->name, 0x107);
    return GR_OK;
}

/* ======================= IUnknown / IDataBuffer ======================= */

/* orig: 06b77a50 */
static GENRESULT DACOM_API mem_query_interface(void *self, const char *iface, void **out)
{
    MemFs *m = self;
    if (strcmp(iface, IID_IFileSystem) == 0) {
        m->refs++;
        *out = m;
        return GR_OK;
    }
    if (strcmp(iface, IID_IDataBuffer) == 0) {
        m->refs++;
        *out = &m->db_vtbl;
        return GR_OK;
    }
    *out = NULL;
    return GR_INTERFACE_UNSUPPORTED;
}

/* orig: 06b77b00 */
static uint32_t DACOM_API mem_addref(void *self)
{
    return ++SELF(self)->refs;
}

/* orig: 06b77b20 */
static uint32_t DACOM_API mem_release(void *self)
{
    MemFs *m = self;
    if (m->refs != 0)
        m->refs--;
    if (m->refs != 0)
        return m->refs;
    m->refs = 1;
    mem_free_buffer(m);
    free(m);
    return 0;
}

/* orig: 06b77b70 / 06b77b80 / 06b77b90 — this-4 adjustors */
static GENRESULT DACOM_API db_query_interface(void *self, const char *iface, void **out)
{
    return mem_query_interface(FROM_DB(self), iface, out);
}
static uint32_t DACOM_API db_addref(void *self)  { return mem_addref(FROM_DB(self)); }
static uint32_t DACOM_API db_release(void *self) { return mem_release(FROM_DB(self)); }

/* orig: 06b772a0 — the capacity, not the file size. */
static GENRESULT DACOM_API db_get_data(void *self, void **data, uint32_t *size)
{
    MemFs *m = FROM_DB(self);
    *data = m->buf;
    *size = m->cap;
    return GR_OK;
}

static const IDataBufferVtbl mem_db_vtbl = {      /* .rdata 06b792e0 */
    db_query_interface, db_addref, db_release, db_get_data,
};

/* ======================= file access ======================= */

/* orig: 06b77290 */
static GENRESULT DACOM_API mem_create_instance(void *self, DAFILEDESC *desc, void **out)
{
    (void)self;
    (void)desc;
    *out = NULL;
    return GR_GENERIC;
}

/* orig: 06b772c0 — an OVERLAPPED's Offset (+8) sets the position. */
static int32_t DACOM_API mem_read_file(void *self, DAHANDLE h, void *buf, uint32_t n,
                                       uint32_t *read, void *overlapped)
{
    MemFs *m = self;
    if (h != NULL)
        return 0;
    if (overlapped != NULL)
        m->pos = ((const uint32_t *)overlapped)[2];
    if (m->pos > m->size)
        m->pos = m->size;
    if (n > m->size - m->pos)
        n = m->size - m->pos;
    memcpy(buf, m->buf + m->pos, n);
    *read = n;
    m->pos += n;
    return 1;
}

/* orig: 06b77330 */
static int32_t DACOM_API mem_write_file(void *self, DAHANDLE h, const void *buf, uint32_t n,
                                        uint32_t *written, void *overlapped)
{
    MemFs *m = self;
    if (h != NULL || !(m->access & DA_GENERIC_WRITE))
        return 0;
    if (overlapped != NULL)
        m->pos = ((const uint32_t *)overlapped)[2];
    if (m->cap < m->pos + n) {
        if (!(m->flags & MEM_FIXED)) {
            if (!mem_grow(m, m->pos + n))
                n = 0;
        } else {
            n = m->pos < m->cap ? m->cap - m->pos : 0;
        }
    }
    memcpy(m->buf + m->pos, buf, n);
    if (written != NULL)
        *written = n;
    m->pos += n;
    if (n != 0 && m->size < m->pos)
        m->size = m->pos;
    return 1;
}

/* orig: 06b77460 — FILE_END is measured from the capacity. */
static uint32_t DACOM_API mem_set_file_pointer(void *self, DAHANDLE h, int32_t dist,
                                               int32_t *dist_high, uint32_t method)
{
    MemFs *m = self;
    uint32_t pos = (uint32_t)dist;
    if (h != NULL)
        return 0xffffffffu;
    if (method == DA_FILE_CURRENT)
        pos += m->pos;
    else if (method == DA_FILE_END)
        pos = m->cap - (uint32_t)dist;
    m->pos = pos;
    if (dist_high != NULL)
        *dist_high = 0;
    return pos;
}

/* orig: 06b774b0 — the handle is not checked. */
static int32_t DACOM_API mem_set_end_of_file(void *self, DAHANDLE h)
{
    MemFs *m = self;
    (void)h;
    if (!(m->access & DA_GENERIC_WRITE))
        return 0;
    if (m->cap < m->pos) {
        if (m->flags & MEM_FIXED)
            return 0;
        mem_grow(m, m->pos);    /* orig: a failed grow still succeeds */
    }
    m->size = m->pos;
    return 1;
}

/* orig: 06b77550 */
static uint32_t DACOM_API mem_get_file_size(void *self, DAHANDLE h, uint32_t *size_high)
{
    MemFs *m = self;
    if (h != NULL)
        return 0xffffffffu;
    if (size_high != NULL)
        *size_high = 0;
    return m->size;
}

/* orig: 06b77600 */
static uint32_t DACOM_API mem_get_file_position(void *self, DAHANDLE h, uint32_t *pos_high)
{
    MemFs *m = self;
    if (h != NULL)
        return 0xffffffffu;
    if (pos_high != NULL)
        *pos_high = 0;
    return m->pos;
}

/* orig: 06b77630 */
static void DACOM_API mem_get_file_name(void *self, char *buf, uint32_t len)
{
    MemFs *m = self;
    int32_t n = (int32_t)strlen(m->name) + 1;
    if (n <= (int32_t)len)
        len = (uint32_t)n;
    if ((int32_t)len > 0 && buf != NULL) {
        memcpy(buf, m->name, len);
        buf[len - 1] = '\0';
    }
}

/* orig: 06b77680 */
static uint32_t DACOM_API mem_get_access_type(void *self)
{
    return SELF(self)->access;
}

/* orig: 06b77690 */
static GENRESULT DACOM_API mem_get_parent_system(void *self, void **out)
{
    (void)self;
    *out = NULL;
    return GR_GENERIC;
}

/* orig: 06b776c0 → 06b76410: the root DOS file system's lock. */
static int32_t DACOM_API mem_serialize(void *self, void *arg, DA_SERIALIZE_FN fn, void *ctx)
{
    (void)self;
    return rf_serialize_global(arg, fn, ctx);
}

/* orig: 06b776e0 — relative to `name`; "..\" truncates one character and
 * then everything after the last separator. Not terminated when truncated. */
static int32_t DACOM_API mem_get_absolute_path(void *self, char *out, const char *path,
                                               uint32_t len)
{
    MemFs *m = self;
    int32_t ok = 1;
    size_t cur;
    if ((int32_t)len < 1)
        return 0;
    if (path[0] == '\\' || path[0] == '/') {
        strncpy(out, path, len);
        out[len - 1] = '\0';
        return 1;
    }
    strncpy(out, m->name, len);
    if (path[0] == '.') {
        if (path[1] == '\\' || path[1] == '/')
            path += 2;
        while (path[0] == '.' && path[1] == '.') {
            size_t l = strlen(out);
            if ((int32_t)l < 3) {
                ok = 0;
            } else {
                char *p, *last = NULL;
                out[l - 1] = '\0';
                for (p = out; *p != '\0'; p++)
                    if (*p == '\\' || *p == '/')
                        last = p;
                if (last == NULL)
                    ok = 0;
                else
                    last[1] = '\0';
            }
            path += (path[2] == '\\' || path[2] == '/') ? 3 : 2;
        }
    }
    cur = strlen(out);
    if ((int32_t)(len - cur) > 0)
        strncpy(out + cur, path, len - cur);
    return ok;
}

/* ======================= stubs ======================= */

/* orig: 06b75b0 / 75c0 / 75d0 → 0; 7450 → 0; 7580 → 1; 75e0 → 0;
 * 75f0 / 76a0 → -1. No last error anywhere. */
static int32_t DACOM_API mem_close_handle(void *s, DAHANDLE h) { (void)s; (void)h; return 0; }
static int32_t DACOM_API mem_get_overlapped_result(void *s, DAHANDLE h, void *o, uint32_t *n,
                                                   int32_t w)
{ (void)s; (void)h; (void)o; (void)n; (void)w; return 0; }
static int32_t DACOM_API mem_lock_file(void *s, DAHANDLE h, uint32_t a, uint32_t b,
                                       uint32_t c, uint32_t d)
{ (void)s; (void)h; (void)a; (void)b; (void)c; (void)d; return 1; }
static int32_t DACOM_API mem_get_file_time(void *s, DAHANDLE h, DA_FILETIME *c,
                                           DA_FILETIME *a, DA_FILETIME *w)
{ (void)s; (void)h; (void)c; (void)a; (void)w; return 0; }
static int32_t DACOM_API mem_set_file_time(void *s, DAHANDLE h, const DA_FILETIME *c,
                                           const DA_FILETIME *a, const DA_FILETIME *w)
{ (void)s; (void)h; (void)c; (void)a; (void)w; return 0; }
static DAHANDLE DACOM_API mem_create_file_mapping(void *s, DAHANDLE h, void *sa, uint32_t p,
                                                  uint32_t hi, uint32_t lo, const char *n)
{ (void)s; (void)h; (void)sa; (void)p; (void)hi; (void)lo; (void)n; return NULL; }
static void *DACOM_API mem_map_view_of_file(void *s, DAHANDLE m, uint32_t a, uint32_t hi,
                                            uint32_t lo, uint32_t n)
{ (void)s; (void)m; (void)a; (void)hi; (void)lo; (void)n; return NULL; }
static int32_t DACOM_API mem_unmap_view_of_file(void *s, const void *v) { (void)s; (void)v; return 0; }
static DAHANDLE DACOM_API mem_find_first_file(void *s, const char *p, DA_FIND_DATA *fd)
{ (void)s; (void)p; (void)fd; return DA_INVALID_HANDLE; }
static int32_t DACOM_API mem_find_next_file(void *s, DAHANDLE h, DA_FIND_DATA *fd)
{ (void)s; (void)h; (void)fd; return 0; }
static int32_t DACOM_API mem_find_close(void *s, DAHANDLE h) { (void)s; (void)h; return 0; }
static int32_t DACOM_API mem_create_directory(void *s, const char *p, void *sa)
{ (void)s; (void)p; (void)sa; return 0; }
static int32_t DACOM_API mem_path_stub(void *s, const char *p) { (void)s; (void)p; return 0; }
static uint32_t DACOM_API mem_get_current_directory(void *s, uint32_t l, char *b)
{ (void)s; (void)l; (void)b; return 0; }
static int32_t DACOM_API mem_copy_file(void *s, const char *a, const char *b, int32_t f)
{ (void)s; (void)a; (void)b; (void)f; return 0; }
static int32_t DACOM_API mem_move_file(void *s, const char *a, const char *b)
{ (void)s; (void)a; (void)b; return 0; }
static uint32_t DACOM_API mem_get_file_attributes(void *s, const char *p)
{ (void)s; (void)p; return 0; }
static int32_t DACOM_API mem_set_file_attributes(void *s, const char *p, uint32_t a)
{ (void)s; (void)p; (void)a; return 0; }
static uint32_t DACOM_API mem_get_last_error(void *s) { (void)s; return 0; }
static DAHANDLE DACOM_API mem_create_file(void *s, const DAFILEDESC *d)
{ (void)s; (void)d; return DA_INVALID_HANDLE; }

static const IFileSystemVtbl mem_vtbl = {     /* .rdata 06b792f0 */
    mem_query_interface,
    mem_addref,
    mem_release,
    mem_create_instance,
    mem_close_handle,
    mem_read_file,
    mem_write_file,
    mem_get_overlapped_result,
    mem_set_file_pointer,
    mem_set_end_of_file,
    mem_get_file_size,
    mem_lock_file,
    mem_lock_file,
    mem_get_file_time,
    mem_set_file_time,
    mem_create_file_mapping,
    mem_map_view_of_file,
    mem_unmap_view_of_file,
    mem_find_first_file,
    mem_find_next_file,
    mem_find_close,
    mem_create_directory,
    mem_path_stub,              /* RemoveDirectory */
    mem_get_current_directory,
    mem_path_stub,              /* SetCurrentDirectory */
    mem_path_stub,              /* DeleteFile */
    mem_copy_file,
    mem_move_file,
    mem_get_file_attributes,
    mem_set_file_attributes,
    mem_get_last_error,
    mem_create_file,
    mem_get_file_position,
    mem_get_file_name,
    mem_get_access_type,
    mem_get_parent_system,
    rf_reserved2,
    rf_reserved2,
    rf_reserved5,
    rf_reserved5,
    mem_serialize,
    mem_get_absolute_path,
};

/* ======================= factory ======================= */

typedef struct RfFactory {      /* orig: operator new(0xc) {vtbl, refs, name} */
    const IComponentFactoryVtbl *vtbl;
    uint32_t                     refs;
    const char                  *name;
} RfFactory;

/* orig: 06b77930 (shared with SearchPath) */
GENRESULT DACOM_API rf_factory_query_interface(void *self, const char *iface, void **out)
{
    *out = NULL;
    if (strcmp(iface, IID_IComponentFactory) != 0)
        return GR_INTERFACE_UNSUPPORTED;
    *out = self;
    ((IComponentFactory *)self)->vtbl->AddRef(self);
    return GR_OK;
}

/* orig: 06b78050 */
uint32_t DACOM_API rf_factory_addref(void *self)
{
    return ++((RfFactory *)self)->refs;
}

/* orig: 06b78060 */
uint32_t DACOM_API rf_factory_release(void *self)
{
    RfFactory *f = self;
    if (f->refs != 0)
        f->refs--;
    if (f->refs != 0)
        return f->refs;
    f->refs = 1;
    free(f);
    return 0;
}

/* orig: 06b77970 */
static GENRESULT DACOM_API mem_factory_create_instance(void *self, DACOMDESC *desc, void **out)
{
    RfFactory *f = self;
    const DAFILEDESC *d = (const DAFILEDESC *)desc;
    MemFs *m;
    GENRESULT r;

    if (d->size != DAFILEDESC_SIZE_MEM || strcmp(d->component, f->name) != 0) {
        *out = NULL;
        return GR_INTERFACE_UNSUPPORTED;
    }
    m = calloc(1, sizeof(*m));
    if (m == NULL) {
        *out = NULL;
        return GR_OUT_OF_MEMORY;
    }
    m->vtbl = &mem_vtbl;
    m->db_vtbl = &mem_db_vtbl;
    m->refs = 1;
    r = mem_init(m, d);
    if (r != GR_OK) {
        mem_free_buffer(m);
        free(m);
        *out = NULL;
        return r;
    }
    *out = m;
    return GR_OK;
}

static const IComponentFactoryVtbl mem_factory_vtbl = {  /* .rdata 06b792d0 */
    rf_factory_query_interface,
    rf_factory_addref,
    rf_factory_release,
    mem_factory_create_instance,
};

/* orig: 06b77900 */
IComponentFactory *mem_fs_factory_new(void)
{
    RfFactory *f = malloc(sizeof(*f));
    if (f == NULL)
        return NULL;
    f->vtbl = &mem_factory_vtbl;
    f->refs = 1;
    f->name = RF_FACTORY_NAME;
    return (IComponentFactory *)f;
}
