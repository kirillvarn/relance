/* ini_doc.c — the INI document, lexer and parser behind IProfileParser.
 * Port of dacom.dll 065b1000..065b1f80 (notes/dacom_dll.md). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dacom_internal.h"
#include "msvc_compat.h"
#include "platform.h"

/* Lexer tokens (065b1cc0). */
enum {
    TOK_WORD    = 0,
    TOK_INCLUDE = 1,
    TOK_LBRACK  = 2,
    TOK_RBRACK  = 3,
    TOK_EQUALS  = 4,
    TOK_FULL    = 100,    /* produced by read_until on overflow only */
    TOK_EOL     = 0x65,
    TOK_EOF     = 0x66,
};

#define LEX_TEXT    0x400   /* +0x10..+0x410 */
#define PARSE_BUF   0x400   /* size passed to read_until */
#define WORD_BUF    0x40c   /* parser frame: [esp+0x10]..[esp+0x41c] */
#define REST_BUF    0x404   /* [esp+0x61c]..[esp+0xa20] */
#define VALUE_BUF   0x400   /* [esp+0x182c].. */
#define LINE_BUF    0xc04   /* [esp+0xc28]..[esp+0x182c] */

/* orig: 0x418 bytes. */
typedef struct IniLexer {
    char       *data;           /* +0x000 owned (operator new) */
    uint32_t    size;           /* +0x004 */
    const char *cursor;         /* +0x008 */
    int32_t     cur;            /* +0x00c current char, sign-extended; -1 = end */
    char        text[LEX_TEXT + 1]; /* +0x010 text of the last token; orig has no
                                    * room for the NUL of a 0x400-char word, which
                                    * lands on the (zero) low byte of `len` */
    uint32_t    len;            /* +0x410 */
    int32_t     token;          /* +0x414 last token (065b1f70) */
} IniLexer;

/* ======================= document ======================= */

static char *str_dup(const char *s)
{
    size_t n = strlen(s) + 1;
    char *p = malloc(n);
    if (p == NULL)
        abort();    /* orig: operator new has no failure path */
    memcpy(p, s, n);
    return p;
}

/* orig: 065b1000 / 065b1080 */
static IniPair *pair_new(const char *key, const char *value)
{
    IniPair *p = malloc(sizeof(*p));
    if (p == NULL)
        abort();
    p->key = key ? str_dup(key) : NULL;
    p->value = value ? str_dup(value) : NULL;
    p->next = NULL;
    return p;
}

static void pair_free(IniPair *p)
{
    free(p->key);
    free(p->value);
    free(p);
}

/* orig: 065b10b0 */
static IniSection *section_new(const char *name)
{
    IniSection *s = calloc(1, sizeof(*s));
    if (s == NULL)
        abort();
    if (name != NULL)
        s->name = str_dup(name);
    return s;
}

/* orig: 065b1110 */
static void section_free(IniSection *s)
{
    IniPair *p = s->pairs;
    while (p != NULL) {
        IniPair *next = p->next;
        pair_free(p);
        p = next;
    }
    free(s->name);
    free(s);
}

/* orig: 065b11c0 — push_back. */
static void section_add_pair(IniSection *s, const char *key, const char *value)
{
    IniPair *p = pair_new(key, value);
    if (s->pairs_tail != NULL)
        s->pairs_tail->next = p;
    else
        s->pairs = p;
    s->pairs_tail = p;
    s->count++;
}

static const IniPair *section_pair_at(const IniSection *s, int32_t index1)
{
    const IniPair *p;
    if (index1 <= 0)
        return NULL;
    for (p = s->pairs; p != NULL; p = p->next)
        if (--index1 == 0)
            return p;
    return NULL;
}

static const IniPair *section_find_key(const IniSection *s, const char *key)
{
    const IniPair *p;
    for (p = s->pairs; p != NULL; p = p->next)
        if (msvc_stricmp(p->key, key) == 0)
            return p;
    return NULL;
}

/* orig: 065b1230 — 1-based line. A key-only line is truncated to buflen;
 * orig: a "key = value" line uses unbounded sprintf. The port bounds it to
 * buflen (callers pass their real buffer size). */
int ini_section_read_line(const IniSection *s, int32_t index1, uint32_t buflen, char *buf)
{
    const IniPair *p = section_pair_at(s, index1);
    if (p == NULL)
        return 0;
    if (p->value == NULL) {
        strncpy(buf, p->key, buflen);
        buf[buflen - 1] = '\0';
    } else {
        snprintf(buf, buflen, "%s = %s", p->key, p->value);
    }
    return 1;
}

/* orig: 065b12a0 — length of the line read_line would produce:
 * strlen(key), or strlen(key)+3+strlen(value) for "key = value". */
uint32_t ini_section_line_length(const IniSection *s, int32_t index1)
{
    const IniPair *p = section_pair_at(s, index1);
    if (p == NULL)
        return 0;
    if (p->value == NULL)
        return (uint32_t)strlen(p->key);
    return (uint32_t)(strlen(p->key) + strlen(p->value) + 3);
}

/* orig: 065b1300 */
int ini_section_read_key(const IniSection *s, const char *key, uint32_t buflen, char *buf)
{
    const IniPair *p = section_find_key(s, key);
    if (p == NULL)
        return 0;
    if (p->value != NULL) {
        strncpy(buf, p->value, buflen);
        buf[buflen - 1] = '\0';
    } else {
        buf[0] = '\0';
    }
    return 1;
}

/* orig: 065b1380 */
uint32_t ini_section_key_length(const IniSection *s, const char *key)
{
    const IniPair *p = section_find_key(s, key);
    if (p == NULL || p->value == NULL)
        return 0;
    return (uint32_t)strlen(p->value);
}

/* orig: 065b13e0 */
void ini_doc_init(IniDoc *doc)
{
    doc->sections = NULL;
    doc->count = 0;
    doc->current = NULL;
}

/* orig: 065b14f0 */
static void ini_doc_clear(IniDoc *doc)
{
    IniSection *s = doc->sections;
    while (s != NULL) {
        IniSection *next = s->next;
        section_free(s);
        s = next;
    }
    doc->sections = NULL;
    doc->count = 0;
}

/* orig: 065b1420 */
void ini_doc_destroy(IniDoc *doc)
{
    ini_doc_clear(doc);
}

/* orig: 065b1570 — the list is sorted, so the search stops at the first
 * name that compares greater. */
IniSection *ini_doc_find_section(const IniDoc *doc, const char *name)
{
    IniSection *s;
    for (s = doc->sections; s != NULL; s = s->next) {
        int r = msvc_stricmp(s->name, name);
        if (r == 0)
            return s;
        if (r > 0)
            return NULL;
    }
    return NULL;
}

/* orig: 065b15c0 — insert before the first section that compares greater,
 * so a repeated name gets a second section after the first. */
static IniSection *ini_doc_add_section(IniDoc *doc, const char *name)
{
    IniSection **link = &doc->sections;
    IniSection *s;
    while (*link != NULL && msvc_stricmp((*link)->name, name) <= 0)
        link = &(*link)->next;
    s = section_new(name);
    s->next = *link;
    *link = s;
    doc->count++;
    return s;
}

/* ======================= lexer ======================= */

static void lex_next_char(IniLexer *lx)
{
    if (lx->cursor < lx->data + lx->size)
        lx->cur = (signed char)*lx->cursor++;
    else
        lx->cur = -1;
}

/* orig: 065b1ca0 */
static void lex_reset(IniLexer *lx)
{
    lx->len = 0;
    lx->cur = '\n';
    lx->cursor = lx->data;
}

/* orig: 065b1b40 */
static void lex_init(IniLexer *lx)
{
    lx->data = NULL;
    lx->size = 0;
    lex_reset(lx);
}

/* orig: 065b1b60 */
static void lex_free(IniLexer *lx)
{
    free(lx->data);
    lx->data = NULL;
}

/* orig: 065b1b80 */
static int lex_load_file(IniLexer *lx, const char *file)
{
    FILE *f;
    long size;

    free(lx->data);
    lx->data = NULL;
    f = platform_fopen(file, "rb");
    if (f == NULL) {
        lex_reset(lx);
        return 0;
    }
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, 0, SEEK_SET);
    lx->data = malloc(size > 0 ? (size_t)size : 1);
    if (lx->data == NULL)
        abort();
    if (fread(lx->data, 1, (size_t)size, f) != (size_t)size) {
        free(lx->data);
        lx->data = NULL;
        fclose(f);
        return 0;
    }
    lx->size = (uint32_t)size;
    fclose(f);
    lex_reset(lx);
    return 1;
}

/* orig: 065b1c30 */
static int lex_load_memory(IniLexer *lx, const void *data, uint32_t size)
{
    free(lx->data);
    lx->data = malloc(size > 0 ? size : 1);
    if (lx->data == NULL)
        abort();
    memcpy(lx->data, data, size);
    lx->cursor = lx->data;
    lx->size = size;
    lex_reset(lx);
    return 1;
}

/* orig: 065b1c90 */
static void lex_terminate(IniLexer *lx)
{
    lx->text[lx->len] = '\0';
}

/* Single-character token: the char becomes the text. */
static int32_t lex_single(IniLexer *lx, int32_t tok)
{
    lx->text[0] = (char)lx->cur;
    lx->len++;
    lex_terminate(lx);
    lex_next_char(lx);
    return tok;
}

/* orig: 065b1cc0 */
static int32_t lex_scan(IniLexer *lx)
{
    lx->len = 0;
    for (;;) {
        switch (lx->cur) {
        case -1:
            return TOK_EOF;
        case '\t':
        case '\r':
        case ' ':
            lex_next_char(lx);
            continue;
        case ';':
            /* comment: skip to '\n' (left as the current char) or the end */
            do
                lex_next_char(lx);
            while (lx->cur != '\n' && lx->cur != -1);
            lx->len = 0;
            continue;
        case '\n':
            return lex_single(lx, TOK_EOL);
        case '[':
            return lex_single(lx, TOK_LBRACK);
        case ']':
            return lex_single(lx, TOK_RBRACK);
        case '=':
            return lex_single(lx, TOK_EQUALS);
        default:
            break;
        }
        break;
    }

    /* A word runs until a delimiter, NUL (strchr finds the terminator) or the
     * end. orig: no length check; a word longer than LEX_TEXT chars
     * overwrites `len` and corrupts the lexer. The port drops the excess
     * characters instead (deviation). */
    do {
        if (lx->len < LEX_TEXT)
            lx->text[lx->len++] = (char)lx->cur;
        lex_next_char(lx);
    } while (strchr(" \r\n\t[];=", lx->cur) == NULL && lx->cur != -1);
    lex_terminate(lx);
    return msvc_stricmp(lx->text, "@include") == 0 ? TOK_INCLUDE : TOK_WORD;
}

/* orig: 065b1f70 */
static int32_t lex_token(IniLexer *lx)
{
    lx->token = lex_scan(lx);
    return lx->token;
}

/* orig: 065b1650 — join token texts with single spaces into `out` until
 * `stop` or end of line. Returns `stop`, TOK_EOL (also for end of file) or
 * TOK_FULL when `size` would be exceeded. */
static int32_t read_until(IniLexer *lx, int32_t stop, int32_t size, char *out)
{
    int first = 1;
    int32_t n = 0;
    int32_t tok = lex_token(lx);

    for (;;) {
        if (tok == TOK_FULL || tok == TOK_EOL || tok == stop)
            break;
        if (tok == TOK_EOF) {
            tok = TOK_EOL;
            break;
        }
        if (n + (int32_t)lx->len + 1 >= size - 1) {
            tok = TOK_FULL;
            break;
        }
        if (!first)
            out[n++] = ' ';
        first = 0;
        strcpy(out + n, lx->text);
        n += (int32_t)lx->len;
        tok = lex_token(lx);
    }
    out[n] = '\0';
    return tok;
}

/* ======================= parser ======================= */

static int parse_file(IniDoc *doc, const char *file);

/* Key line: `word [rest] [= value]`. orig: inline in 065b17d0. */
static void join_key(char *line, const char *word, const char *rest)
{
    if (rest[0] == '\0')
        strcpy(line, word);
    else
        sprintf(line, "%s %s", word, rest);
}

static void add_pair(IniDoc *doc, const char *key, const char *value)
{
    /* orig: a key before the first section header dereferences NULL. */
    if (doc->current == NULL)
        dacom_trap("ini key outside any section");
    section_add_pair(doc->current, key, value);
}

/* Parser frame: 0x1c20 bytes of stack in the original (via _alloca_probe);
 * allocated on the heap here to spare small (Android) thread stacks. */
typedef struct ParseFrame {
    char word[WORD_BUF];
    char rest[REST_BUF];
    char value[VALUE_BUF];
    char line[LINE_BUF];
    char drive[MSVC_MAX_DRIVE], dir[MSVC_MAX_DIR], fname[MSVC_MAX_FNAME], ext[MSVC_MAX_EXT];
} ParseFrame;

/* orig: 065b17d0 — returns 1 at end of input, 0 on a syntax error. */
static int parse_frame(IniDoc *doc, IniLexer *lx, const char *file, ParseFrame *f)
{
    int32_t tok;

    for (tok = lex_token(lx); tok != TOK_EOF; tok = lex_token(lx)) {
        switch (tok) {
        case TOK_WORD:
            strcpy(f->word, lx->text);
            tok = read_until(lx, TOK_EQUALS, PARSE_BUF, f->rest);
            if (tok == TOK_EQUALS) {
                if (read_until(lx, TOK_EOL, PARSE_BUF, f->value) != TOK_EOL)
                    dacom_trap("ini value too long");
                join_key(f->line, f->word, f->rest);
                add_pair(doc, f->line, f->value);
            } else if (tok == TOK_EOL) {
                join_key(f->line, f->word, f->rest);
                add_pair(doc, f->line, NULL);
            } else {
                dacom_trap("ini key too long");
            }
            break;

        case TOK_INCLUDE:
            if (lex_token(lx) != TOK_WORD)
                return 0;
            msvc_splitpath(lx->text, f->drive, f->dir, f->fname, f->ext);
            if (f->drive[0] == '\0' && f->dir[0] != '\\') {
                /* relative: resolve against the including file's directory */
                msvc_splitpath(file, f->drive, f->dir, f->fname, f->ext);
                sprintf(f->line, "%s%s%s", f->drive, f->dir, lx->text);
            } else {
                strcpy(f->line, lx->text);
            }
            parse_file(doc, f->line);   /* orig: result ignored */
            lex_next_char(lx);          /* orig: drops the char after the name */
            break;

        case TOK_LBRACK:
            tok = read_until(lx, TOK_RBRACK, PARSE_BUF, f->word);
            if (tok == TOK_RBRACK)
                doc->current = ini_doc_add_section(doc, f->word);
            else if (tok != TOK_EOL)
                return 0;
            break;

        case TOK_EOL:
            break;

        default:    /* ']' or '=' at the start of a line */
            dacom_trap("ini unexpected token");
        }
    }
    return 1;
}

static int parse(IniDoc *doc, IniLexer *lx, const char *file)
{
    ParseFrame *f = malloc(sizeof(*f));
    int ok;
    if (f == NULL)
        abort();
    ok = parse_frame(doc, lx, file, f);
    free(f);
    return ok;
}

/* orig: 065b16f0 */
static int parse_file(IniDoc *doc, const char *file)
{
    IniLexer *lx = malloc(sizeof(*lx));
    int ok;
    if (lx == NULL)
        abort();
    lex_init(lx);
    ok = lex_load_file(lx, file) && parse(doc, lx, file);
    lex_free(lx);
    free(lx);
    return ok;
}

/* orig: 065b1760 */
static int parse_memory(IniDoc *doc, const void *data, uint32_t size)
{
    IniLexer *lx = malloc(sizeof(*lx));
    int ok;
    if (lx == NULL)
        abort();
    lex_init(lx);
    ok = lex_load_memory(lx, data, size) && parse(doc, lx, "(local buffer)");
    lex_free(lx);
    free(lx);
    return ok;
}

/* orig: 065b1480 */
int ini_doc_load_file(IniDoc *doc, const char *file)
{
    ini_doc_clear(doc);
    doc->current = NULL;
    if (file == NULL)
        return 1;
    return parse_file(doc, file);
}

/* orig: 065b14b0 */
int ini_doc_load_memory(IniDoc *doc, const void *data, uint32_t size)
{
    ini_doc_clear(doc);
    doc->current = NULL;
    if (data == NULL)
        return 1;
    return parse_memory(doc, data, size);
}
