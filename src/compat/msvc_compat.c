/* msvc_compat.c — MSVCRT behaviour the ported code relies on. */
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>

#include "msvc_compat.h"
#include "platform.h"

static int ascii_lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;
}

int msvc_stricmp(const char *a, const char *b)
{
    const unsigned char *p = (const unsigned char *)a;
    const unsigned char *q = (const unsigned char *)b;
    int ca, cb;
    do {
        ca = ascii_lower(*p++);
        cb = ascii_lower(*q++);
    } while (ca == cb && ca != 0);
    return ca - cb;
}

int msvc_strnicmp(const char *a, const char *b, size_t n)
{
    const unsigned char *p = (const unsigned char *)a;
    const unsigned char *q = (const unsigned char *)b;
    int ca = 0, cb = 0;
    while (n-- > 0) {
        ca = ascii_lower(*p++);
        cb = ascii_lower(*q++);
        if (ca != cb || ca == 0)
            break;
    }
    return ca - cb;
}

static void copy_part(char *dst, size_t cap, const char *src, size_t len)
{
    if (dst == NULL)
        return;
    if (len > cap - 1)
        len = cap - 1;
    memcpy(dst, src, len);
    dst[len] = '\0';
}

void msvc_splitpath(const char *path, char *drive, char *dir, char *fname, char *ext)
{
    const char *p = path;
    const char *last_sep = NULL;
    const char *last_dot = NULL;
    const char *s;

    if (p[0] != '\0' && p[1] == ':') {
        copy_part(drive, MSVC_MAX_DRIVE, p, 2);
        p += 2;
    } else {
        copy_part(drive, MSVC_MAX_DRIVE, p, 0);
    }

    for (s = p; *s != '\0'; s++) {
        if (*s == '\\' || *s == '/')
            last_sep = s;
        else if (*s == '.')
            last_dot = s;
    }

    if (last_sep != NULL) {
        copy_part(dir, MSVC_MAX_DIR, p, (size_t)(last_sep + 1 - p));
        p = last_sep + 1;
    } else {
        copy_part(dir, MSVC_MAX_DIR, p, 0);
    }

    if (last_dot != NULL && last_dot >= p) {
        copy_part(fname, MSVC_MAX_FNAME, p, (size_t)(last_dot - p));
        copy_part(ext, MSVC_MAX_EXT, last_dot, strlen(last_dot));
    } else {
        copy_part(fname, MSVC_MAX_FNAME, p, strlen(p));
        copy_part(ext, MSVC_MAX_EXT, p + strlen(p), 0);
    }
}

void msvc_makepath(char *path, const char *drive, const char *dir,
                   const char *fname, const char *ext)
{
    size_t n = 0, len;

    if (drive != NULL && drive[0] != '\0') {
        path[n++] = drive[0];
        path[n++] = ':';
    }
    if (dir != NULL && dir[0] != '\0') {
        len = strlen(dir);
        memcpy(path + n, dir, len);
        n += len;
        if (dir[len - 1] != '\\' && dir[len - 1] != '/')
            path[n++] = '\\';
    }
    if (fname != NULL) {
        len = strlen(fname);
        memcpy(path + n, fname, len);
        n += len;
    }
    if (ext != NULL && ext[0] != '\0') {
        if (ext[0] != '.')
            path[n++] = '.';
        len = strlen(ext);
        memcpy(path + n, ext, len);
        n += len;
    }
    path[n] = '\0';
}

static int is_sep(char c)
{
    return c == '\\' || c == '/';
}

char *msvc_fullpath(char *out, const char *path, size_t len)
{
    char buf[4096];
    char *parts[512];
    size_t nparts = 0, i, n, prefix_len = 0;
    char *p, *save;
    char prefix[8] = "";

    if (path[0] != '\0' && path[1] == ':') {          /* "C:..." */
        prefix[0] = path[0];
        prefix[1] = ':';
        prefix[2] = '\0';
        prefix_len = 2;
        snprintf(buf, sizeof(buf), "%s", path + 2);
    } else if (is_sep(path[0])) {
        snprintf(buf, sizeof(buf), "%s", path);
    } else {
        char cwd[2048];
        if (platform_current_directory(cwd, sizeof(cwd)) == 0)
            return NULL;
        snprintf(buf, sizeof(buf), "%s\\%s", cwd, path);
    }
    /* Split on either separator and fold "." / "..". */
    for (p = buf; *p != '\0'; p++)
        if (*p == '/')
            *p = '\\';
    for (p = strtok_r(buf, "\\", &save); p != NULL; p = strtok_r(NULL, "\\", &save)) {
        if (strcmp(p, ".") == 0)
            continue;
        if (strcmp(p, "..") == 0) {
            if (nparts > 0)
                nparts--;
            continue;
        }
        if (nparts < sizeof(parts) / sizeof(parts[0]))
            parts[nparts++] = p;
    }
    n = prefix_len;
    if (n + 1 > len)
        return NULL;
    memcpy(out, prefix, prefix_len);
    for (i = 0; i < nparts; i++) {
        size_t l = strlen(parts[i]);
        if (n + 1 + l + 1 > len)
            return NULL;
        out[n++] = '\\';
        memcpy(out + n, parts[i], l);
        n += l;
    }
    if (nparts == 0) {
        if (n + 2 > len)
            return NULL;
        out[n++] = '\\';
    }
    out[n] = '\0';
    return out;
}

int msvc_access(const char *path, int mode)
{
    (void)mode;
    return platform_file_attributes(path) == 0xffffffffu ? -1 : 0;
}

/* Days from 1601-01-01 to y-m-d (proleptic Gregorian). */
static int64_t days_since_1601(int y, int m, int d)
{
    int64_t yy = y - 1601;
    static const int cum[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
    int leap = (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
    return yy * 365 + yy / 4 - yy / 100 + yy / 400 + cum[m - 1] + (m > 2 && leap) + (d - 1);
}

int win32_dos_datetime_to_filetime(uint16_t fat_date, uint16_t fat_time, uint32_t *ft)
{
    static const int mdays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year = 1980 + (fat_date >> 9);
    int month = (fat_date >> 5) & 0x0f;
    int day = fat_date & 0x1f;
    int hour = fat_time >> 11;
    int minute = (fat_time >> 5) & 0x3f;
    int second = (fat_time & 0x1f) * 2;
    int leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    uint64_t t;

    /* RtlTimeFieldsToTime validation */
    if (month < 1 || month > 12 || day < 1 ||
        day > mdays[month - 1] + (month == 2 && leap) ||
        hour > 23 || minute > 59 || second > 59)
        return 0;
    t = ((uint64_t)days_since_1601(year, month, day) * 86400u +
         (uint64_t)hour * 3600u + (uint64_t)minute * 60u + (uint64_t)second) * 10000000u;
    ft[0] = (uint32_t)t;
    ft[1] = (uint32_t)(t >> 32);
    return 1;
}
