/* rf_util.c — helpers shared by the readfile.dll port. */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#include "rf_internal.h"

static int is_sep(char c)
{
    return c == '\\' || c == '/';
}

/* orig: 06b75420 */
int rf_combine_path(const char *base, const char *path, char *out, int32_t len)
{
    char *dest;
    int32_t i = 0;
    int32_t remain;

    if (len < 3)
        return 0;
    if (path[0] != '\0' && (is_sep(path[0]) || path[1] == ':')) {
        strncpy(out, path, (size_t)len);
        out[len - 1] = '\0';
        return 1;
    }
    for (; base[i] != '\0'; i++) {
        if (len - 1 <= i)
            return 0;
        out[i] = base[i];
    }
    dest = out + i;
    if (dest == out || !is_sep(dest[-1]))
        *dest++ = '\\';
    if (path[0] == '.') {
        if (is_sep(path[1]))
            path += 2;
        while (path[0] == '.' && path[1] == '.') {
            if (dest - out < 3)
                return 0;
            for (dest -= 2; !is_sep(*dest); dest--)
                if (dest == out)
                    return 0;
            path += 2 + (is_sep(path[2]) ? 1 : 0);
        }
    }
    if (dest == out || !is_sep(dest[-1]))
        *dest++ = '\\';
    remain = (int32_t)(out + len - dest);
    if (remain < 2) {
        /* orig: writes the NUL even when remain == 0 (one past the end). */
        if (remain >= 1)
            *dest = '\0';
        else
            out[len - 1] = '\0';
        return 1;
    }
    strncpy(dest, path, (size_t)remain);
    out[len - 1] = '\0';
    return 1;
}

static uint8_t fold(char c)
{
    return rf_fold_table[(int)(signed char)c + 128];
}

/* orig: 06b761a0 */
static int wild(const char *name, const char *pat)
{
    char c = *pat;
    for (;;) {
        if (c == '*') {
            int r = wild(name, pat + 1);
            if (r == 0 && *name != '\0') {
                for (;;) {
                    name++;
                    r = wild(name, pat + 1);
                    if (r != 0)
                        break;
                    if (*name == '\0')
                        return 0;
                }
            }
            return r;
        }
        if (c == '\0') {
            if (*name == '\0')
                return 1;
            if (fold(c) != fold(*name))
                return 0;
        } else if (c == '?') {
            if (*name == '\0')
                return 0;
        } else if (fold(c) != fold(*name)) {
            return 0;
        }
        c = *++pat;
        name++;
    }
}

/* orig: 06b760c0 — a pattern without '.' gets ".*" appended, one starting
 * with '.' gets a leading '*'; a name without '.' gets a trailing '.'.
 * orig: 0x108-byte stack buffers with no length check; bounded here. */
int rf_wild_match(const char *name, const char *pattern)
{
    char pat[2 * RF_PATH + 4], nm[2 * RF_PATH + 4];

    if (strchr(pattern, '.') == NULL)
        snprintf(pat, sizeof(pat), "%s.*", pattern);
    else if (pattern[0] == '.')
        snprintf(pat, sizeof(pat), "*%s", pattern);
    else
        snprintf(pat, sizeof(pat), "%s", pattern);
    if (strchr(name, '.') == NULL)
        snprintf(nm, sizeof(nm), "%s.", name);
    else
        snprintf(nm, sizeof(nm), "%s", name);
    return wild(nm, pat);
}

/* orig: 06b737a0 */
char *rf_format(char *buf, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, 0x2000, fmt, ap);
    va_end(ap);
    return buf;
}

/* ======================= mapped file ======================= */

/* orig: 06b71420 */
void rf_mapped_init(RfMapped *m)
{
    m->file = NULL;
    m->owns_view = 0;
    m->view = NULL;
    m->size = 0;
    m->pos = 0;
}

/* orig: 06b72dd0 */
void rf_mapped_close_view(RfMapped *m)
{
    if (m->owns_view) {
        if (m->view != NULL)
            platform_file_unmap(m->view, m->size);
        m->owns_view = 0;
    }
    m->view = NULL;
    m->size = 0;
}

/* orig: 06b71440 */
void rf_mapped_close(RfMapped *m)
{
    rf_mapped_close_view(m);
    if (m->file != NULL) {
        platform_file_close(m->file);
        m->file = NULL;
    }
}

/* CreateFileA, then CreateFileMapping/MapViewOfFile when the file is not
 * empty (inline in 06b72990 / 06b74a10 / 06b75a70). Returns 1 if the file
 * opened; the view may still be NULL. */
int rf_mapped_open(RfMapped *m, const char *path, uint32_t access, uint32_t creation)
{
    uint32_t size;
    rf_mapped_init(m);
    m->file = platform_file_open(path, access, creation);
    if (m->file == NULL)
        return 0;
    m->view = platform_file_map(m->file, &size);
    if (m->view != NULL) {
        m->owns_view = 1;
        m->size = size;
        m->pos = 0;
    }
    return 1;
}

/* orig: 06b776a0 / 06b776b0 */
int32_t DACOM_API rf_reserved2(void *self, void *a, void *b)
{
    (void)self; (void)a; (void)b;
    return -1;
}

int32_t DACOM_API rf_reserved5(void *self, void *a, void *b, void *c, void *d, void *e)
{
    (void)self; (void)a; (void)b; (void)c; (void)d; (void)e;
    return -1;
}
