/* rf_utf_format.c — the two UTF archive "format handler" classes.
 * Port of readfile.dll 06b714c0..06b72990 (notes/readfile_dll.md):
 *   format A: 0x2c-byte nodes (vtbl 06b790f8), the Freelancer format;
 *   format B: 0x0c-byte nodes (vtbl 06b790bc).
 * Node offsets in the archive are trusted, as in the original. */
#include <stdlib.h>
#include <string.h>

#include "msvc_compat.h"
#include "rf_internal.h"

#define UTF_MAGIC    0x20465455u     /* "UTF " */
#define UTF_VERSION  0x101u
#define UTF_HDR_SIZE 0x38u

enum { FMT_A = 0x2c, FMT_B = 0x0c };

/* One find slot, orig 0x114 bytes {cur, last, pattern[0x104], remaining}. */
typedef struct UtfFind {
    const uint8_t *cur;        /* next node to examine; NULL = free slot */
    const uint8_t *last;       /* node returned by the last FindNext */
    char           pattern[RF_PATH];
    uint32_t       remaining;  /* format B: entries left in the child array */
} UtfFind;

/* orig: 0x454 bytes {next, 4 slots}; the first block lives in the object. */
typedef struct UtfFindBlock {
    struct UtfFindBlock *next;
    UtfFind              slot[4];
} UtfFindBlock;

struct UtfFormat {
    int            kind;           /* FMT_A / FMT_B */
    const uint8_t *base;           /* +0x04 archive header */
    UtfHandle     *root;           /* A +0x08, B +0x0c */
    const uint8_t *names;          /* A +0x0c, B +0x08 */
    UtfHandle     *handles;        /* +0x10 std::list of handle objects */
    UtfHandle     *handles_tail;
    uint32_t       handle_count;   /* +0x18 */
    uint32_t       free_handles;   /* +0x1c */
    UtfFindBlock   finds;          /* +0x20 */
    uint32_t       last_error;     /* +0x474 */
    DA_FILETIME    times[3];       /* B +0x478: the archive file's own times */
};

/* ======================= node accessors ======================= */

static const uint8_t *tree_base(const UtfFormat *f)
{
    return f->root->node;
}

static int node_is_dir(const UtfFormat *f, const uint8_t *n)
{
    if (f->kind == FMT_A)
        return (n[8] & 0x10) != 0;
    return (rf_rd32(n, 0) & 0x80000000u) != 0;
}

static const char *node_name(const UtfFormat *f, const uint8_t *n)
{
    if (f->kind == FMT_A)
        return (const char *)f->names + rf_rd32(n, 4);
    return (const char *)f->names + (rf_rd32(n, 0) & 0x7fffffffu) + 4;
}

/* Handle accessor tables. */
static uint32_t a_name(const UtfHandle *h) { return rf_rd32(h->node, 4); }                    /* 06b73e80 */
static int      a_dir(const UtfHandle *h)  { return (h->node[8] >> 4) & 1; }                  /* 06b73e50 */
static uint32_t a_size(const UtfHandle *h) { return rf_rd32(h->node, 0x1c); }                 /* 06b73e30 */
static uint32_t a_data(const UtfHandle *h) { return rf_rd32(h->node, 0x10); }                 /* 06b73e40 */
static uint32_t b_name(const UtfHandle *h) { return (rf_rd32(h->node, 0) & 0x7fffffffu) + 4; }/* 06b73e60 */
static int      b_dir(const UtfHandle *h)  { return (int)(rf_rd32(h->node, 0) >> 31); }      /* 06b73e90 */
static uint32_t b_size(const UtfHandle *h) { return rf_rd32(h->node, 8); }                    /* 06b73e70 */
static uint32_t b_data(const UtfHandle *h) { return rf_rd32(h->node, 4); }                    /* 06b73e80 */
static const UtfHandleOps a_ops = { a_name, a_dir, a_size, a_data };   /* .rdata 06b791e4 */
static const UtfHandleOps b_ops = { b_name, b_dir, b_size, b_data };   /* .rdata 06b791f4 */

/* Look `name` up among the children of directory node `dir`
 * (orig: 06b71730 for A, 06b721f0 for B). */
static const uint8_t *lookup(const UtfFormat *f, const char *name, const uint8_t *dir)
{
    const uint8_t *tree = tree_base(f);
    if (f->kind == FMT_A) {
        const uint8_t *n = tree + rf_rd32(dir, 0x10);
        while (n != tree) {
            if (DACOM_stricmp(name, node_name(f, n)) == 0)
                return n;
            n = tree + rf_rd32(n, 0);
        }
        return NULL;
    } else {
        uint32_t off = rf_rd32(dir, 4);
        uint32_t end = off + rf_rd32(dir, 8) * 0x0c;
        for (; off < end; off += 0x0c) {
            const uint8_t *n = tree + off;
            if (DACOM_stricmp(name, node_name(f, n)) == 0)
                return n;
        }
        return NULL;
    }
}

/* Walk `path` (components separated by '\' or '/') from `node`. Each step
 * requires a directory. Returns NULL if a component is missing.
 * (inline in 06b71640, 06b717e0, 06b719d0 and the B twins) */
static const uint8_t *walk(const UtfFormat *f, const char *p, const uint8_t *node)
{
    char comp[RF_PATH];
    while (*p != '\0') {
        const char *sep = p;
        size_t len;
        if (!node_is_dir(f, node))
            return NULL;
        while (*sep != '\0' && *sep != '\\' && *sep != '/')
            sep++;
        if (*sep == '\0')
            return lookup(f, p, node);
        len = (size_t)(sep - p);
        if (len >= sizeof(comp))
            len = sizeof(comp) - 1;     /* orig: unbounded copy into 0x104 */
        memcpy(comp, p, len);
        comp[len] = '\0';
        node = lookup(f, comp, node);
        if (node == NULL || sep[1] == '\0')
            return node;
        p = sep + 1;
    }
    return node;
}

/* ======================= handles ======================= */

/* Reuse a closed slot or append a new handle (inline in 06b714f0, 06b717e0,
 * 06b71f50, 06b72260). */
static UtfHandle *handle_alloc(UtfFormat *f, const uint8_t *node)
{
    UtfHandle *h;
    if (f->free_handles != 0) {
        for (h = f->handles; h != NULL; h = h->next) {
            if (h->node == NULL) {
                f->free_handles--;
                h->node = node;
                h->pos = 0;
                return h;
            }
        }
    }
    h = malloc(sizeof(*h));
    if (h == NULL)
        abort();    /* orig: operator new has no failure path */
    h->ops = f->kind == FMT_A ? &a_ops : &b_ops;
    h->node = node;
    h->pos = 0;
    h->next = NULL;
    if (f->handles_tail != NULL)
        f->handles_tail->next = h;
    else
        f->handles = h;
    f->handles_tail = h;
    f->handle_count++;
    return h;
}

/* orig: 06b73ea0 — 1-based find index → slot. */
static UtfFind *find_slot(UtfFormat *f, DAHANDLE find)
{
    UtfFindBlock *b = &f->finds;
    uint32_t i = (uint32_t)(uintptr_t)find - 1;
    while (i >= 4) {
        b = b->next;
        if (b == NULL)
            return NULL;
        i -= 4;
    }
    return &b->slot[i];
}

/* ======================= lifetime ======================= */

UtfFormat *utf_format_create(uint32_t node_size)
{
    UtfFormat *f;
    if (node_size != FMT_A && node_size != FMT_B)
        return NULL;
    f = calloc(1, sizeof(*f));
    if (f == NULL)
        return NULL;
    f->kind = (int)node_size;
    return f;
}

/* orig: 06b71ea0 / 06b728f0 */
void utf_format_destroy(UtfFormat *f)
{
    UtfHandle *h;
    UtfFindBlock *b;
    if (f == NULL)
        return;
    h = f->handles;
    while (h != NULL) {
        UtfHandle *next = h->next;
        free(h);
        h = next;
    }
    b = f->finds.next;
    while (b != NULL) {
        UtfFindBlock *next = b->next;
        free(b);
        b = next;
    }
    free(f);
}

/* orig: 06b714f0 (A) / 06b71f50 (B) */
int utf_format_init(UtfFormat *f, const RfMapped *m)
{
    const uint8_t *base = m->view;
    uint32_t size = m->size;
    uint32_t tree_off;

    if (f->kind == FMT_B) {
        /* B takes its times from the archive file itself; fails without one. */
        if (m->file == NULL ||
            !platform_file_times(m->file, &f->times[0].lo, &f->times[1].lo, &f->times[2].lo))
            return 0;
    }
    if (base == NULL || size <= UTF_HDR_SIZE)
        return 0;
    f->base = base;
    tree_off = rf_rd32(base, 8);
    if (rf_rd32(base, 0x14) != (uint32_t)f->kind || size <= tree_off ||
        size <= rf_rd32(base, 0x18))
        return 0;
    f->root = handle_alloc(f, base + tree_off);
    f->names = base + rf_rd32(base, 0x18);
    return 1;
}

UtfHandle *utf_format_root(const UtfFormat *f)       { return f->root; }         /* 06b714c0 / 06b71f40 */
const uint8_t *utf_format_header(const UtfFormat *f) { return f->base; }         /* 06b714d0 */
uint32_t utf_format_last_error(const UtfFormat *f)   { return f->last_error; }   /* 06b714e0 */

/* ======================= queries ======================= */

/* Resolve a cwd handle: 0 or -1 → root, a closed handle → root. */
static const uint8_t *cwd_node(const UtfFormat *f, UtfHandle *cwd)
{
    if (cwd != UTF_CWD_ROOT && cwd != UTF_CWD_NONE && cwd->node != NULL)
        return cwd->node;
    return f->root->node;
}

static const char *skip_sep(const char *p)
{
    return (*p == '\\' || *p == '/') ? p + 1 : p;
}

/* orig: 06b71640 (A) / 06b720f0 (B) — 0x10 for a directory, 0 for a file,
 * 0xffffffff if the path does not resolve. */
uint32_t utf_format_attributes(UtfFormat *f, const char *path, UtfHandle *cwd)
{
    const uint8_t *node = cwd_node(f, cwd);
    if (node == NULL)
        return 0xffffffffu;
    node = walk(f, skip_sep(path), node);
    if (node == NULL)
        return 0xffffffffu;
    return node_is_dir(f, node) ? DA_FILE_ATTRIBUTE_DIRECTORY : 0;
}

/* orig: 06b717a0 — compares addresses only; closed handles count. */
int utf_format_is_valid(const UtfFormat *f, DAHANDLE h)
{
    const UtfHandle *p;
    if (h == DA_INVALID_HANDLE)
        return 0;
    for (p = f->handles; p != NULL; p = p->next)
        if ((const void *)p == h)
            return 1;
    return 0;
}

/* orig: 06b71790 */
UtfHandle *utf_format_adjust(DAHANDLE h)
{
    return h == DA_INVALID_HANDLE ? NULL : (UtfHandle *)h;
}

/* orig: 06b717e0 (A) / 06b72260 (B). With a find handle, opens the node
 * that find last returned; otherwise resolves `path` from `cwd`. An empty
 * path opens the directory itself. */
UtfHandle *utf_format_open(UtfFormat *f, const char *path, UtfHandle *cwd, DAHANDLE find)
{
    const uint8_t *node;
    if (find != UTF_NO_FIND) {
        UtfFind *s = find_slot(f, find);
        if (s == NULL || s->cur == NULL)
            return NULL;
        node = s->last;
    } else {
        node = cwd_node(f, cwd);
        if (node != NULL)
            node = walk(f, skip_sep(path), node);
    }
    if (node == NULL)
        return NULL;
    return handle_alloc(f, node);
}

/* orig: 06b719b0 — always "succeeds". */
int utf_format_close(UtfFormat *f, UtfHandle *h)
{
    if (h != NULL) {
        h->node = NULL;
        f->free_handles++;
    }
    return 1;
}

/* Fill WIN32_FIND_DATA from a node (inline in 06b71c70 / 06b726f0). */
static void fill_find_data(UtfFormat *f, const uint8_t *n, DA_FIND_DATA *fd)
{
    if (f->kind == FMT_A) {
        fd->attributes = rf_rd32(n, 8);     /* orig: the whole flags dword */
        win32_dos_datetime_to_filetime((uint16_t)rf_rd32(n, 0x20), (uint16_t)(rf_rd32(n, 0x20) >> 16),
                                       &fd->creation.lo);
        win32_dos_datetime_to_filetime((uint16_t)rf_rd32(n, 0x24), (uint16_t)(rf_rd32(n, 0x24) >> 16),
                                       &fd->last_access.lo);
        win32_dos_datetime_to_filetime((uint16_t)rf_rd32(n, 0x28), (uint16_t)(rf_rd32(n, 0x28) >> 16),
                                       &fd->last_write.lo);
        fd->size_high = 0;
        fd->size_low = rf_rd32(n, 0x1c);
    } else {
        fd->attributes = node_is_dir(f, n) ? DA_FILE_ATTRIBUTE_DIRECTORY : 0;
        fd->creation = f->times[0];
        fd->last_access = f->times[1];
        fd->last_write = f->times[2];
        fd->size_high = 0;
        fd->size_low = node_is_dir(f, n) ? 0 : rf_rd32(n, 8);
    }
    fd->reserved0 = 0;
    fd->reserved1 = 0;
    /* orig: unbounded strcpy into cFileName[260] */
    strncpy(fd->file_name, node_name(f, n), sizeof(fd->file_name) - 1);
    fd->file_name[sizeof(fd->file_name) - 1] = '\0';
    fd->alternate_name[0] = '\0';
}

static int matches_all(const char *pattern)
{
    return pattern[0] == '*' && (pattern[1] == '\0' || strcmp(pattern, "*.*") == 0);
}

/* Advance a find slot past node `n` (A: sibling link; B: next array entry). */
static const uint8_t *find_advance(UtfFormat *f, UtfFind *s, const uint8_t *n)
{
    const uint8_t *tree = tree_base(f);
    if (f->kind == FMT_A)
        return tree + rf_rd32(n, 0);
    if (s->remaining < 2)
        return tree;
    s->remaining--;
    return n + 0x0c;
}

/* orig: 06b71c70 (A) / 06b726f0 (B) */
int utf_format_find_next(UtfFormat *f, DAHANDLE find, DA_FIND_DATA *fd)
{
    UtfFind *s = find_slot(f, find);
    const uint8_t *tree = tree_base(f);
    const uint8_t *n;

    if (s == NULL || s->cur == NULL) {
        f->last_error = DA_ERROR_INVALID_HANDLE;
        return 0;
    }
    n = s->cur;
    if (n == tree) {
        f->last_error = DA_ERROR_NO_MORE_FILES;
        return 0;
    }
    if (!matches_all(s->pattern)) {
        while (!rf_wild_match(node_name(f, n), s->pattern)) {
            n = find_advance(f, s, n);
            s->cur = n;
            if (n == tree) {
                f->last_error = DA_ERROR_NO_MORE_FILES;
                return 0;
            }
        }
    }
    fill_find_data(f, n, fd);
    s->last = n;
    s->cur = find_advance(f, s, n);
    return 1;
}

/* orig: 06b71dd0 */
int utf_format_find_close(UtfFormat *f, DAHANDLE find)
{
    UtfFind *s = find_slot(f, find);
    if (s != NULL && s->cur != NULL) {
        s->cur = NULL;
        return 1;
    }
    f->last_error = DA_ERROR_INVALID_HANDLE;
    return 0;
}

/* orig: 06b719d0 (A) / 06b723f0 (B). The directory part of `path` is
 * resolved from `cwd` (cwd == -1 with no directory part: no directory);
 * the last component is the wildcard. Returns a 1-based find index or -1. */
DAHANDLE utf_format_find_first(UtfFormat *f, const char *path, DA_FIND_DATA *fd, UtfHandle *cwd)
{
    const uint8_t *dir;
    const char *last_sep = NULL, *p, *pattern;
    UtfFindBlock *b;
    int32_t index = -1, i = 0, k;

    if (cwd == UTF_CWD_ROOT)
        dir = f->root->node;
    else if (cwd == UTF_CWD_NONE)
        dir = NULL;
    else
        dir = cwd->node;

    for (p = path; *p != '\0'; p++)
        if (*p == '\\' || *p == '/')
            last_sep = p;
    if (last_sep != NULL) {
        if (last_sep != path) {
            char dirpart[RF_PATH];
            size_t len = (size_t)(last_sep - path);
            if (len >= sizeof(dirpart))
                len = sizeof(dirpart) - 1;   /* orig: unbounded */
            memcpy(dirpart, path, len);
            dirpart[len] = '\0';
            if (dir != NULL || (dir = f->root->node) != NULL)
                dir = walk(f, skip_sep(dirpart), dir);
        }
        pattern = last_sep + 1;
    } else {
        pattern = path;
    }

    if (dir == NULL || !node_is_dir(f, dir)) {
        f->last_error = DA_ERROR_BAD_PATHNAME;
        return DA_INVALID_HANDLE;
    }

    /* First free slot, growing the block chain as needed. */
    for (b = &f->finds; ; ) {
        for (k = 0; k < 4; k++, i++) {
            UtfFind *s = &b->slot[k];
            if (s->cur == NULL) {
                const uint8_t *tree = tree_base(f);
                if (f->kind == FMT_A) {
                    s->cur = tree + rf_rd32(dir, 0x10);
                    s->remaining = 0;
                } else {
                    s->cur = tree + rf_rd32(dir, 4);
                    s->remaining = rf_rd32(dir, 8);
                }
                s->last = NULL;
                strncpy(s->pattern, pattern, sizeof(s->pattern));   /* orig: may leave it unterminated */
                s->pattern[sizeof(s->pattern) - 1] = '\0';
                index = i + 1;
                goto found;
            }
        }
        if (b->next == NULL) {
            b->next = calloc(1, sizeof(*b->next));
            if (b->next == NULL) {
                f->last_error = DA_ERROR_OUT_OF_STRUCTURES;
                return DA_INVALID_HANDLE;
            }
        }
        b = b->next;
    }
found:
    if (!utf_format_find_next(f, (DAHANDLE)(intptr_t)index, fd)) {
        utf_format_find_close(f, (DAHANDLE)(intptr_t)index);
        return DA_INVALID_HANDLE;
    }
    return (DAHANDLE)(intptr_t)index;
}

/* orig: 06b71e30 (A: the node's DOS date-times) / 06b72890 (B: the archive
 * file's times). Returns 0 only for a NULL (A: or closed) handle. */
int utf_format_file_time(UtfFormat *f, UtfHandle *h, DA_FILETIME *c, DA_FILETIME *a,
                         DA_FILETIME *w)
{
    if (h == NULL)
        return 0;
    if (f->kind == FMT_A) {
        const uint8_t *n = h == UTF_CWD_NONE ? NULL : h->node;
        if (n == NULL)
            return 0;
        if (c != NULL)
            win32_dos_datetime_to_filetime((uint16_t)rf_rd32(n, 0x20),
                                           (uint16_t)(rf_rd32(n, 0x20) >> 16), &c->lo);
        if (a != NULL)
            win32_dos_datetime_to_filetime((uint16_t)rf_rd32(n, 0x24),
                                           (uint16_t)(rf_rd32(n, 0x24) >> 16), &a->lo);
        if (w != NULL)
            win32_dos_datetime_to_filetime((uint16_t)rf_rd32(n, 0x28),
                                           (uint16_t)(rf_rd32(n, 0x28) >> 16), &w->lo);
        return 1;
    }
    if (c != NULL)
        *c = f->times[0];
    if (a != NULL)
        *a = f->times[1];
    if (w != NULL)
        *w = f->times[2];
    return 1;
}

/* Header check used by the archive opener (06b71190). */
int utf_header_valid(const uint8_t *hdr)
{
    return rf_rd32(hdr, 0) == UTF_MAGIC && rf_rd32(hdr, 4) == UTF_VERSION;
}
