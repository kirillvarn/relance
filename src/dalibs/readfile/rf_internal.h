/* rf_internal.h — shared between the readfile.dll port's translation units.
 * Original layouts and evidence: notes/readfile_dll.md. All structs here are
 * runtime-only, so they use real pointers. */
#ifndef RF_INTERNAL_H
#define RF_INTERNAL_H

#include <stdint.h>

#include "dacom.h"
#include "dafile.h"
#include "platform.h"

#define RF_ORIG_SRC_FILE "C:\\work\\builds\\dalibs\\dalibs-build\\build\\Src\\DOSFile\\ReadFile\\BaseUTF.cpp"
#define RF_PATH 0x104                  /* MAX_PATH buffers throughout */
#define RF_FACTORY_NAME "FileSystem"   /* .data 06b7a028 */

extern const uint8_t rf_fold_table[384];   /* rf_tables.c (generated) */

/* Globals set by rf_process_attach (DllMain 06b76220). */
extern struct DosFs *rf_root_dos;           /* .data 06b7a224 */
extern ICOManager   *rf_com;                /* .data 06b7a220 */

/* ---- shared helpers (rf_util.c) ---- */

/* orig: 06b75420 (and its inlined copies in 06b73130 / 06b75f60 / 06b74470
 * / 06b756b0 / 06b758a0 / 06b75a70) — join `base` and a relative `path`
 * into `out`, folding leading ".\" and "..\". An absolute `path` (leading
 * separator or "X:") is copied as is. Returns 1, or 0 if `len` < 3, the
 * base does not fit, or ".." climbs above the base. */
int rf_combine_path(const char *base, const char *path, char *out, int32_t len);

/* orig: 06b760c0 — DOS-style wildcard match of `name` against `pattern`. */
int rf_wild_match(const char *name, const char *pattern);

/* orig: 06b776a0 / 06b776b0 — IFileSystem slots 36..39 in every class. */
int32_t DACOM_API rf_reserved2(void *self, void *a, void *b);
int32_t DACOM_API rf_reserved5(void *self, void *a, void *b, void *c, void *d, void *e);

/* Header check (magic "UTF ", version 0x101) used by the archive opener. */
int utf_header_valid(const uint8_t *hdr);

/* orig: 06b737a0 */
char *rf_format(char *buf, const char *fmt, ...);

/* Read a little-endian dword from a mapped archive. */
static inline uint32_t rf_rd32(const uint8_t *p, uint32_t off)
{
    return (uint32_t)p[off] | (uint32_t)p[off + 1] << 8 |
           (uint32_t)p[off + 2] << 16 | (uint32_t)p[off + 3] << 24;
}

/* ---- mapped file (orig 0x14 bytes {hFile, hMapping, view, size, pos}) ---- */
typedef struct RfMapped {
    PlatformFile *file;     /* NULL = INVALID_HANDLE_VALUE */
    int           owns_view;/* orig: hMapping != 0 → UnmapViewOfFile on close */
    const uint8_t *view;
    uint32_t      size;
    uint32_t      pos;
} RfMapped;

void rf_mapped_init(RfMapped *m);                               /* 06b71420 */
void rf_mapped_close_view(RfMapped *m);                         /* 06b72dd0 */
void rf_mapped_close(RfMapped *m);                              /* 06b71440 */
/* CreateFileA + CreateFileMapping + MapViewOfFile of the whole file. */
int  rf_mapped_open(RfMapped *m, const char *path, uint32_t access, uint32_t creation);

/* ---- UTF archive format handlers (rf_utf_format.c) ---- */
typedef struct UtfFormat UtfFormat;
typedef struct UtfHandle UtfHandle;

/* Handle-accessor "vtable" (orig 06b791e4 for format A, 06b791f4 for B). */
typedef struct UtfHandleOps {
    uint32_t (*name_offset)(const UtfHandle *h);   /* 0 */
    int      (*is_dir)(const UtfHandle *h);        /* 1 */
    uint32_t (*size)(const UtfHandle *h);          /* 2 */
    uint32_t (*data_offset)(const UtfHandle *h);   /* 3 */
} UtfHandleOps;

/* A handle given to callers: pointer to the 3-dword object in the
 * handle list (orig {vptr, node, position}). node == NULL: closed slot. */
struct UtfHandle {
    const UtfHandleOps *ops;
    const uint8_t      *node;
    uint32_t            pos;
    UtfHandle          *next;
};

UtfFormat  *utf_format_create(uint32_t node_size);              /* 0x2c → A, 0xc → B, else NULL */
void        utf_format_destroy(UtfFormat *f);                   /* slot 5 */
int         utf_format_init(UtfFormat *f, const RfMapped *m);   /* slot 3 */
UtfHandle  *utf_format_root(const UtfFormat *f);                /* slot 0 */
const uint8_t *utf_format_header(const UtfFormat *f);           /* slot 1 */
uint32_t    utf_format_last_error(const UtfFormat *f);          /* slot 2 */
uint32_t    utf_format_attributes(UtfFormat *f, const char *path, UtfHandle *cwd);  /* slot 6 */
int         utf_format_is_valid(const UtfFormat *f, DAHANDLE h);/* slot 7 */
UtfHandle  *utf_format_adjust(DAHANDLE h);                      /* slot 8 */
UtfHandle  *utf_format_open(UtfFormat *f, const char *path, UtfHandle *cwd, DAHANDLE find); /* slot 9 */
int         utf_format_close(UtfFormat *f, UtfHandle *h);       /* slot 10 */
DAHANDLE    utf_format_find_first(UtfFormat *f, const char *path, DA_FIND_DATA *fd,
                                  UtfHandle *cwd);              /* slot 11 */
int         utf_format_find_next(UtfFormat *f, DAHANDLE find, DA_FIND_DATA *fd); /* slot 12 */
int         utf_format_find_close(UtfFormat *f, DAHANDLE find); /* slot 13 */
int         utf_format_file_time(UtfFormat *f, UtfHandle *h, DA_FILETIME *c,
                                 DA_FILETIME *a, DA_FILETIME *w);/* slot 14 */

/* Special handle values used by the format handlers (orig 0 and -1). */
#define UTF_CWD_ROOT     ((UtfHandle *)0)
#define UTF_CWD_NONE     ((UtfHandle *)(intptr_t)-1)
#define UTF_NO_FIND      DA_INVALID_HANDLE

/* ---- components ---- */
IFileSystem *utf_fs_new(void);                    /* 06b73d60: the UTF factory object */
struct DosFs *dos_fs_new(void);                   /* calloc(0x170) + 06b74b20 */
IFileSystem *dos_fs_iface(struct DosFs *fs);
IComponentFactory *mem_fs_factory_new(void);      /* 06b77900 */
IComponentFactory *search_path_factory_new(void); /* 06b78020 */

/* orig: 06b76410 — run fn(arg, ctx) under the root DOS file system's lock. */
int32_t rf_serialize_global(void *arg, DA_SERIALIZE_FN fn, void *ctx);

#endif /* RF_INTERNAL_H */
