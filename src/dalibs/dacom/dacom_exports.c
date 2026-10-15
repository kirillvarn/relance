/* dacom_exports.c — DACOM.dll's plain exports: CRC32, stricmp, FDUMP and its
 * default handler, LogStream stubs and version queries. Port of dacom.dll
 * 065b27e0, 065b30e0..065b3460, 065b4380..065b43e0, 065b5e60, 065b60b0..
 * 065b61b0; see notes/dacom_dll.md. */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "dacom_internal.h"
#include "msvc_compat.h"
#include "platform.h"

#define DUMP_BUF 0x1000                    /* 065b30e0 stack buffer */
#define DACOM_COMPILED_MAJOR 1             /* 065b34d5 */
#define DACOM_COMPILED_MINOR 0xb           /* 065b34d3 */
#define DACOM_COMPILED_BUILD 0xad          /* 065b34ce */

/* orig: 065b27e0 */
char *dacom_format(char *buf, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    /* orig: _vsnprintf does not NUL-terminate on overflow; vsnprintf does. */
    vsnprintf(buf, DACOM_MSG_BUF, fmt, ap);
    va_end(ap);
    return buf;
}

void dacom_trap(const char *where)
{
    fprintf(stderr, "dacom: fatal: %s\n", where);
    abort();
}

/* ======================= CRC ======================= */

/* orig: the case-fold table at 065b8930 is indexed with a sign-extended
 * char. 0..0x7f fold ASCII upper case; 0x80..0xff (negative) read the 128
 * bytes before the table, which are the tail of the CRC table. */
static uint32_t crc_fold(char c)
{
    int32_t i = (signed char)c;
    if (i >= 0)
        return (uint32_t)((i >= 'A' && i <= 'Z') ? i + ('a' - 'A') : i);
    i += 0x400;     /* byte offset into dacom_crc_table: 0x380..0x3ff */
    return (dacom_crc_table[i >> 2] >> ((i & 3) * 8)) & 0xffu;
}

static uint32_t crc_step(uint32_t crc, char c)
{
    return (crc >> 8) ^ dacom_crc_table[(crc_fold(c) ^ crc) & 0xffu];
}

/* orig: 065b60f0 (export ?GetCRC32@DACOM_CRC@@YAKPBD@Z) */
uint32_t DACOM_CRC_GetCRC32(const char *s)
{
    uint32_t crc = 0xffffffffu;
    if (s == NULL)
        return 0;
    for (; *s != '\0'; s++)
        crc = crc_step(crc, *s);
    return ~crc;
}

/* orig: 065b60b0 (export ?GetCRC32@DACOM_CRC@@YAKPBD0@Z). Returns 0 when
 * begin == end; otherwise the original loop never compares against `end`
 * again and runs until it faults. No game module imports this. */
uint32_t DACOM_CRC_GetCRC32Range(const char *begin, const char *end)
{
    if (begin == end)
        return 0;
    dacom_trap("DACOM_CRC::GetCRC32(begin, end) never returns in the original");
    return 0;
}

/* orig: 065b6140 */
uint32_t DACOM_CRC_GetContinuedCRC32(uint32_t crc, const char *s)
{
    if (s == NULL)
        return crc;
    crc = ~crc;
    for (; *s != '\0'; s++)
        crc = crc_step(crc, *s);
    return ~crc;
}

/* orig: 065b6190 */
uint32_t DACOM_CRC_GetContinuedCRC32Char(uint32_t crc, char c)
{
    return ~crc_step(~crc, c);
}

/* orig: 065b43c0 — jmp to MSVCRT _stricmp. */
int DACOM_CRC_CompareStringsI(const char *a, const char *b)
{
    return msvc_stricmp(a, b);
}

/* orig: 065b5e60 (export "stricmp") — own ASCII fold table at 065b8428,
 * result is -1, 0 or 1. */
int DACOM_stricmp(const char *a, const char *b)
{
    const unsigned char *p = (const unsigned char *)a;
    const unsigned char *q = (const unsigned char *)b;
    for (;;) {
        unsigned ca = *p++, cb = *q++;
        if (ca >= 'A' && ca <= 'Z')
            ca += 'a' - 'A';
        if (cb >= 'A' && cb <= 'Z')
            cb += 'a' - 'A';
        if (ca != cb)
            return ca < cb ? -1 : 1;
        if (ca == 0)
            return 0;
    }
}

/* ======================= LogStream (all stubs) ======================= */

/* orig: 065b43d0 */
int LogStream_Startup(const char *name)
{
    (void)name;
    return 0;
}

/* orig: 065b43e0 — FlushToDisk, LogEvent, LogNamedEvent and Update are all
 * this one `ret`. */
void LogStream_FlushToDisk(void) {}

void LogStream_LogEvent(const char *name, float value, uint32_t id)
{
    (void)name;
    (void)value;
    (void)id;
}

void LogStream_LogNamedEvent(const char *name, const char *text, uint32_t id)
{
    (void)name;
    (void)text;
    (void)id;
}

void LogStream_Update(float dt)
{
    (void)dt;
}

/* ======================= FDUMP ======================= */

static uint8_t g_ignore_warnings;      /* .data 065b8a30 */

/* orig: 065b30e0 "DACOM::STANDARD_DUMP". Severity is the sign-extended low
 * nibble of `flags`: 0 and 1 always ask, 2 asks until "Ignore" is chosen. */
static int dacom_standard_dump(uint32_t flags, const char *fmt, ...)
{
    char buf[DUMP_BUF];
    int32_t sev;
    va_list ap;

    va_start(ap, fmt);
    /* orig: unbounded vsprintf into the 0x1000-byte buffer. */
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    platform_debug_output(buf);

    sev = (int32_t)(flags << 28) >> 28;
    if ((uint32_t)sev < 3)
        platform_debug_output("\n");
    if (sev == 0 || sev == 1 || (!g_ignore_warnings && sev == 2)) {
        switch (platform_message_box_abort_retry_ignore(buf, "DACOM::STANDARD_DUMP")) {
        case PLATFORM_MB_ABORT:
            platform_post_quit(-1);
            abort();
        case PLATFORM_MB_RETRY:
            platform_debug_break();
            return 1;
        case PLATFORM_MB_IGNORE:
            if (sev == 2)
                g_ignore_warnings = 1;
            break;
        default:
            break;
        }
    }
    return 0;
}

/* orig: .data 065b8a34. DllMain (065b31a0) stores the standard dump here on
 * process attach; a static initializer has the same effect. */
DACOM_DUMP_FN FDUMP = dacom_standard_dump;

/* ======================= versions ======================= */

/* orig: 065b3320 */
int32_t DACOM_GetDllVersion(const char *dll, uint32_t *major, uint32_t *minor, uint32_t *build)
{
    uint32_t ms, ls;
    *major = 0;
    *minor = 0;
    *build = 0;
    if (platform_lib_version(dll, &ms, &ls) != 0)
        return -1;
    *major = ms >> 16;
    *minor = ms & 0xffffu;
    *build = ls & 0xffffu;
    return 0;
}

/* orig: 065b3460 */
int32_t DACOM_GetVersion(uint32_t *major, uint32_t *minor, uint32_t *build)
{
    char msg[DACOM_MSG_BUF];
    int32_t r = DACOM_GetDllVersion("DACOM.DLL", major, minor, build);
    if (r >= 0) {
        FDUMP(DACOM_DUMP_NOTICE, "%s(%d) : NOTICE:General:%s", DACOM_ORIG_SRC_FILE, 0x457,
              dacom_format(msg, "Current DACOM.DLL version: %d.%d.%d\n",
                           (int)*major, (int)*minor, (int)*build));
        FDUMP(DACOM_DUMP_NOTICE, "%s(%d) : NOTICE:General:%s", DACOM_ORIG_SRC_FILE, 0x458,
              dacom_format(msg, " Compiled against version: %d.%d.%d\n",
                           DACOM_COMPILED_MAJOR, DACOM_COMPILED_MINOR, DACOM_COMPILED_BUILD));
    }
    return r;
}
