/* dacom_internal.h — shared between the dacom.dll port's translation units.
 * See notes/dacom_dll.md for the original layouts. All structs here are
 * runtime-only (never serialized), so they use real pointers. */
#ifndef DACOM_INTERNAL_H
#define DACOM_INTERNAL_H

#include <stdint.h>

#include "dacom.h"

#define DACOM_ORIG_SRC_FILE "C:\\work\\builds\\dalibs\\dalibs-build\\build\\Src\\DACOM\\Dacom.cpp"
#define DACOM_MSG_BUF   0x2000   /* 065b27e0: _vsnprintf(buf, 0x2000, ...) */
#define DACOM_MAX_PATH  0x104

extern const uint32_t dacom_crc_table[256];   /* dacom_tables.c (generated) */

/* orig: 065b27e0 — vsnprintf into a DACOM_MSG_BUF buffer, returns it. */
char *dacom_format(char *buf, const char *fmt, ...);

/* Abort where the original executes `int3` on a "can't happen" path. */
void dacom_trap(const char *where);

/* ---- INI document (orig 065b1000..065b1f80) ---- */

typedef struct IniPair {            /* orig: 8 bytes {key, value} */
    char *key;
    char *value;                    /* NULL for a key-only line */
    struct IniPair *next;
} IniPair;

typedef struct IniSection {         /* orig: 0x10 bytes {name, list<IniPair*>} */
    char *name;
    IniPair *pairs;
    IniPair *pairs_tail;
    uint32_t count;
    struct IniSection *next;
} IniSection;

typedef struct IniDoc {             /* orig: 0x10 bytes {list<IniSection*>, current} */
    IniSection *sections;           /* sorted by _stricmp */
    uint32_t count;
    IniSection *current;            /* section that receives parsed keys */
} IniDoc;

void ini_doc_init(IniDoc *doc);                                        /* 065b13e0 */
void ini_doc_destroy(IniDoc *doc);                                     /* 065b1420 */
int  ini_doc_load_file(IniDoc *doc, const char *file);                 /* 065b1480 */
int  ini_doc_load_memory(IniDoc *doc, const void *data, uint32_t size);/* 065b14b0 */
IniSection *ini_doc_find_section(const IniDoc *doc, const char *name); /* 065b1570 */

int      ini_section_read_line(const IniSection *s, int32_t index1, uint32_t buflen, char *buf); /* 065b1230 */
uint32_t ini_section_line_length(const IniSection *s, int32_t index1);                         /* 065b12a0 */
int      ini_section_read_key(const IniSection *s, const char *key, uint32_t buflen, char *buf); /* 065b1300 */
uint32_t ini_section_key_length(const IniSection *s, const char *key);                         /* 065b1380 */

/* ---- ProfileParser component (orig 065b4430..065b4a00) ---- */

/* Factory objects for "ProfileParser" and "ProfileParser2" (065b46d0 /
 * 065b46a0). Returned with one reference. */
IComponentFactory *profile_parser_factory_new(const char *name);

#endif /* DACOM_INTERNAL_H */
