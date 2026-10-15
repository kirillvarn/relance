/* comanager.c — the DACOM component manager returned by DACOM_Acquire().
 * Port of dacom.dll 065b1f80..065b3320; see notes/dacom_dll.md.
 *
 * The original keeps factories in std::map<crc32, std::list<entry>> and
 * libraries in std::list. Here they are a CRC-sorted bucket list and a
 * singly linked list; iteration order is the same as the original's. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dacom_internal.h"
#include "msvc_compat.h"
#include "platform.h"

#define COM_PARSER_PRIORITY 0x80000000u     /* 065b2009 / 065b2024 */

/* One registered factory (list node payload, orig 0x10 bytes). */
typedef struct FactoryEntry {
    IComponentFactory   *factory;   /* +0x0 reference held */
    char                *name;      /* +0x4 */
    uint32_t             priority;  /* +0x8 */
    char                *dll;       /* +0xc fname of the DLL that registered it ("" if none) */
    struct FactoryEntry *next;
} FactoryEntry;

/* Map node: all factories registered under one component-name CRC. */
typedef struct Bucket {
    uint32_t       crc;
    FactoryEntry  *entries;         /* sorted by priority, descending */
    uint32_t       count;
    struct Bucket *next;            /* buckets sorted by crc, ascending */
} Bucket;

/* Library list node, orig 0x10 bytes {next, prev, HMODULE, name}. */
typedef struct Library {
    void           *module;
    char           *name;           /* _splitpath fname, no extension */
    struct Library *next;
} Library;

/* orig: static object at .data 065b8a40, 0x138 bytes. */
typedef struct COManager {
    const ICOManagerVtbl *vtbl;                 /* +0x000 (065b70cc) */
    uint8_t         initialized;                /* +0x004 */
    Bucket         *buckets;                    /* +0x008 std::map */
    uint32_t        bucket_count;               /* +0x018 */
    Library        *libs, *libs_tail;           /* +0x01c std::list */
    uint32_t        lib_count;                  /* +0x024 */
    IProfileParser *parser;                     /* +0x028 */
    IDAComponent   *parser_inner;               /* +0x02c owns the parser */
    char            cur_dll[DACOM_MAX_PATH];    /* +0x030 */
    char           *dllpath;                    /* +0x134 */
} COManager;

static char *str_dup(const char *s)
{
    size_t n = strlen(s) + 1;
    char *p = malloc(n);
    if (p == NULL)
        abort();    /* orig: operator new has no failure path */
    memcpy(p, s, n);
    return p;
}

/* ======================= factory map ======================= */

/* orig: 065b3ab0 (map::find) */
static Bucket *bucket_find(COManager *com, uint32_t crc)
{
    Bucket *b;
    for (b = com->buckets; b != NULL && b->crc <= crc; b = b->next)
        if (b->crc == crc)
            return b;
    return NULL;
}

/* orig: 065b3570 (map::insert of an empty list) */
static Bucket *bucket_get(COManager *com, uint32_t crc)
{
    Bucket **link = &com->buckets;
    Bucket *b;
    while (*link != NULL && (*link)->crc < crc)
        link = &(*link)->next;
    if (*link != NULL && (*link)->crc == crc)
        return *link;
    b = calloc(1, sizeof(*b));
    if (b == NULL)
        abort();
    b->crc = crc;
    b->next = *link;
    *link = b;
    com->bucket_count++;
    return b;
}

/* orig: 065b3640 (map::erase) — the bucket must already be empty. */
static Bucket *bucket_erase(COManager *com, Bucket *b)
{
    Bucket **link = &com->buckets;
    Bucket *next = b->next;
    while (*link != b)
        link = &(*link)->next;
    *link = next;
    free(b);
    com->bucket_count--;
    return next;
}

/* orig: 065b2490 / 065b4210 / 065b4320 (entry destructor) */
static void entry_free(FactoryEntry *e)
{
    if (e->factory != NULL) {
        e->factory->vtbl->Release(e->factory);
        e->factory = NULL;
    }
    e->priority = 0;
    free(e->name);
    free(e->dll);
    free(e);
}

/* Unlink and destroy every entry of `b` for which `match` holds; returns
 * after the first match when `first_only`. Returns the number removed. */
static uint32_t bucket_remove(Bucket *b, int (*match)(const FactoryEntry *, const void *),
                              const void *arg, int first_only)
{
    FactoryEntry **link = &b->entries;
    uint32_t removed = 0;
    while (*link != NULL) {
        FactoryEntry *e = *link;
        if (match(e, arg)) {
            *link = e->next;
            entry_free(e);
            b->count--;
            removed++;
            if (first_only)
                break;
        } else {
            link = &e->next;
        }
    }
    return removed;
}

static int match_factory(const FactoryEntry *e, const void *factory)
{
    return (const void *)e->factory == factory;
}

static int match_dll(const FactoryEntry *e, const void *dll)
{
    return msvc_stricmp(dll, e->dll) == 0;
}

static int match_all(const FactoryEntry *e, const void *unused)
{
    (void)e;
    (void)unused;
    return 1;
}

/* ======================= ICOManager ======================= */

/* orig: 065b2090 */
static GENRESULT DACOM_API com_query_interface(void *self, const char *iface, void **out)
{
    COManager *com = self;
    *out = NULL;
    if (strcmp(iface, IID_ICOManager) == 0) {
        com->vtbl->AddRef(com);
        *out = com;
        return GR_OK;
    }
    if (com->parser_inner != NULL)
        return com->parser_inner->vtbl->QueryInterface(com->parser_inner, iface, out);
    return GR_INTERFACE_UNSUPPORTED;
}

/* orig: 065b20f0 — static object: both always return 1. */
static uint32_t DACOM_API com_addref(void *self)
{
    (void)self;
    return 1;
}

static uint32_t DACOM_API com_release(void *self)
{
    (void)self;
    return 1;
}

/* orig: 065b2100 */
static GENRESULT DACOM_API com_create_instance(void *self, DACOMDESC *desc, void **out)
{
    COManager *com = self;
    Bucket *b;
    FactoryEntry *e;
    GENRESULT r;

    *out = NULL;
    if (desc == NULL || desc->component == NULL || strcmp(desc->component, "COManager") == 0) {
        *out = com;
        com->vtbl->AddRef(com);
        return GR_OK;
    }
    b = bucket_find(com, DACOM_CRC_GetCRC32(desc->component));
    if (b == NULL || b->entries == NULL)
        return GR_INTERFACE_UNSUPPORTED;
    r = GR_INTERFACE_UNSUPPORTED;
    for (e = b->entries; e != NULL; e = e->next) {
        r = e->factory->vtbl->CreateInstance(e->factory, desc, out);
        if (r == GR_OK)
            return GR_OK;
    }
    return r;
}

/* orig: 065b21e0 */
static GENRESULT DACOM_API com_register_component(void *self, void *factory,
                                                  const char *name, uint32_t priority)
{
    COManager *com = self;
    Bucket *b;
    FactoryEntry **link, *e;

    if (factory == NULL || name == NULL)
        return GR_INVALID_PARMS;
    b = bucket_get(com, DACOM_CRC_GetCRC32(name));

    /* Insert before the first entry whose priority is not higher. */
    link = &b->entries;
    while (*link != NULL && priority < (*link)->priority)
        link = &(*link)->next;

    e = malloc(sizeof(*e));
    if (e == NULL)
        abort();
    e->factory = factory;
    e->factory->vtbl->AddRef(e->factory);
    e->name = str_dup(name);
    e->priority = priority;
    e->dll = str_dup(com->cur_dll);
    e->next = *link;
    *link = e;
    b->count++;
    return GR_OK;
}

/* orig: 065b23a0 — removes the first entry holding `factory`, searching one
 * name or (name NULL) every name. */
static GENRESULT DACOM_API com_unregister_component(void *self, void *factory, const char *name)
{
    COManager *com = self;
    Bucket *b, *end;

    if (name == NULL) {
        b = com->buckets;
        end = NULL;
    } else {
        b = bucket_find(com, DACOM_CRC_GetCRC32(name));
        if (b == NULL)
            return GR_INVALID_PARMS;
        end = b->next;
    }
    for (; b != end; b = b->next) {
        if (bucket_remove(b, match_factory, factory, 1) != 0) {
            if (b->count == 0)
                bucket_erase(com, b);
            return GR_OK;
        }
    }
    return GR_INVALID_PARMS;
}

/* orig: 065b24e0 — always GR_OK unless cb is NULL; an unknown name is not
 * an error. */
static GENRESULT DACOM_API com_enumerate_components(void *self, const char *name,
                                                    DACOM_ENUM_COMPONENTS_CB cb, void *ctx)
{
    COManager *com = self;
    Bucket *b, *end;
    FactoryEntry *e;

    if (cb == NULL)
        return GR_INVALID_PARMS;
    if (name == NULL) {
        b = com->buckets;
        end = NULL;
    } else {
        b = bucket_find(com, DACOM_CRC_GetCRC32(name));
        if (b == NULL)
            return GR_OK;
        end = b->next;
    }
    for (; b != end; b = b->next)
        for (e = b->entries; e != NULL; e = e->next)
            if (cb(e->factory, e->name, e->priority, ctx) == 0)
                return GR_OK;
    return GR_OK;
}

/* orig: 065b25b0 */
static GENRESULT DACOM_API com_add_library(void *self, const char *dll)
{
    COManager *com = self;
    char full[DACOM_MAX_PATH];
    char fname[MSVC_MAX_FNAME];
    char msg[DACOM_MSG_BUF];
    uint32_t major, minor, build;
    void *module;
    Library *lib;

    if (dll == NULL)
        return GR_INVALID_PARMS;
    if (platform_search_path(com->dllpath, dll, full, sizeof(full)) == 0) {
        FDUMP(DACOM_DUMP_ERROR, "%s(%d) : ERROR:General:%s", DACOM_ORIG_SRC_FILE, 0x25a,
              dacom_format(msg, "DACOM: AddLibrary: unable to find dll '%s' in path\n", dll));
        return GR_GENERIC;
    }
    msvc_splitpath(full, NULL, NULL, fname, NULL);
    strcpy(com->cur_dll, fname);

    /* Loading runs the module's attach hook, which registers its factories
     * stamped with cur_dll. */
    module = platform_lib_load(full);
    if (module == NULL) {
        /* orig: cur_dll is left set on this path. */
        FDUMP(DACOM_DUMP_ERROR, "%s(%d) : ERROR:General:%s", DACOM_ORIG_SRC_FILE, 0x264,
              dacom_format(msg, "DACOM: AddLibrary: unable to load dll '%s', ignoring...\n", dll));
        return GR_INVALID_PARMS;
    }
    DACOM_GetDllVersion(full, &major, &minor, &build);
    FDUMP(DACOM_DUMP_NOTICE, "%s(%d) : NOTICE:General:%s", DACOM_ORIG_SRC_FILE, 0x26a,
          dacom_format(msg, "DACOM: AddLibrary: DLL '%s' [%d.%d.%d]\n",
                       full, (int)major, (int)minor, (int)build));

    lib = malloc(sizeof(*lib));
    if (lib == NULL)
        abort();
    lib->module = module;
    lib->name = str_dup(fname);
    lib->next = NULL;
    if (com->libs_tail != NULL)
        com->libs_tail->next = lib;
    else
        com->libs = lib;
    com->libs_tail = lib;
    com->lib_count++;
    com->cur_dll[0] = '\0';
    return GR_OK;
}

/* orig: 065b2ff0 — drop every factory registered by `dll`. */
static void com_remove_dll_factories(COManager *com, const char *dll)
{
    Bucket *b = com->buckets;
    while (b != NULL) {
        bucket_remove(b, match_dll, dll, 0);
        if (b->count == 0)
            b = bucket_erase(com, b);
        else
            b = b->next;
    }
}

static void library_unlink(COManager *com, Library *lib)
{
    Library **link = &com->libs, *prev = NULL;
    while (*link != lib) {
        prev = *link;
        link = &(*link)->next;
    }
    *link = lib->next;
    if (com->libs_tail == lib)
        com->libs_tail = prev;
    com->lib_count--;
}

/* orig: 065b2870 */
static GENRESULT DACOM_API com_remove_library(void *self, const char *dll)
{
    COManager *com = self;
    char fname[MSVC_MAX_FNAME];
    Library *lib;

    if (dll == NULL)
        return GR_INVALID_PARMS;
    msvc_splitpath(dll, NULL, NULL, fname, NULL);
    for (lib = com->libs; lib != NULL; lib = lib->next)
        if (msvc_stricmp(lib->name, fname) == 0)
            break;
    if (lib == NULL)
        return GR_GENERIC;
    com_remove_dll_factories(com, lib->name);
    platform_lib_free(lib->module);
    library_unlink(com, lib);
    free(lib->name);
    free(lib);
    return GR_OK;
}

/* orig: 065b2940 */
static GENRESULT DACOM_API com_shut_down(void *self)
{
    COManager *com = self;

    if (com->parser_inner != NULL) {
        com->parser_inner->vtbl->Release(com->parser_inner);
        com->parser_inner = NULL;
        /* orig: com->parser is left dangling. */
    }
    while (com->buckets != NULL) {
        bucket_remove(com->buckets, match_all, NULL, 0);
        bucket_erase(com, com->buckets);
    }
    while (com->libs != NULL) {
        Library *lib = com->libs;
        platform_lib_free(lib->module);
        library_unlink(com, lib);
        free(lib->name);
        free(lib);
    }
    free(com->dllpath);
    com->dllpath = NULL;
    com->initialized = 0;
    return GR_OK;
}

/* orig: 065b2eb0 — AddLibrary every line of [Libraries]. True if at least
 * one succeeded. */
static int com_load_libraries(COManager *com)
{
    IProfileParser *pp = com->parser;
    HANDLE_SECTION sec;
    char line[DACOM_MAX_PATH];
    uint32_t index = 1;
    int any = 0;

    sec = pp->vtbl->CreateSection(pp, "Libraries", 3);
    if (sec == NULL) {
        FDUMP(DACOM_DUMP_ERROR, "%s(%d) : ERROR:General:%s", DACOM_ORIG_SRC_FILE, 0x369,
              "DACOM: load_libraries: [Libraries] group not found in INI\n");
        return 0;
    }
    FDUMP(DACOM_DUMP_NOTICE, "%s(%d) : NOTICE:General:%s", DACOM_ORIG_SRC_FILE, 0x370,
          "DACOM: initialize: Loading DLL's from [Libraries] group.\n");

    if (pp->vtbl->ReadLine(pp, sec, 0, line, sizeof(line)) == 0)
        return 0;
    do {
        char *name = line;
        char *p;
        while (*name != '\0' &&
               (*name == ' ' || *name == '\t' || *name == '\n' || *name == '\r'))
            name++;
        if (*name != ';') {
            p = name;
            if (*p == '"') {
                /* orig: meant to find the closing quote, but tests the
                 * opening one first, so the name is always just `"`. */
                while (*p != '"' && *p != '\0')
                    p++;
                p[1] = '\0';
            } else {
                while (*p != '\0' && *p != ' ' && *p != '\t' && *p != ';' &&
                       *p != '\n' && *p != '\r')
                    p++;
                *p = '\0';
            }
            if (com->vtbl->AddLibrary(com, name) >= 0)
                any = 1;
        }
    } while (pp->vtbl->ReadLine(pp, sec, index++, line, sizeof(line)) != 0);
    return any;
}

/* Turn the [DACOM] DllPath value into a path. orig: inline in 065b2b20. */
static void com_resolve_dllpath(COManager *com, const char *value)
{
    char exe[DACOM_MAX_PATH], drive[MSVC_MAX_DRIVE], dir[MSVC_MAX_DIR];
    char base[DACOM_MAX_PATH + MSVC_MAX_DIR];
    const char *rest = value;
    char *end;
    size_t len;

    if (value[0] == '\\' || value[0] == '/' || value[1] == ':') {
        free(com->dllpath);
        com->dllpath = str_dup(value);
        return;
    }

    platform_exe_path(exe, sizeof(exe));
    msvc_splitpath(exe, drive, dir, NULL, NULL);
    msvc_makepath(base, drive, dir, NULL, NULL);
    len = strlen(base);
    end = &base[len - 1];
    if (*end == '/' || *end == '\\')
        *end = '\0';

    while (*rest == '.') {
        if (rest[1] == '.') {
            /* "..\" pops one directory. orig: the "invalid path" message at
             * 065b2c57 is unreachable (it tests the pointer for NULL). */
            while (end != base && *end != '/' && *end != '\\')
                end--;
            *end = '\0';
            rest += 3;
        } else if (rest[1] == '\\' || rest[1] == '/') {
            rest += 2;
        } else {
            /* orig: loops forever on "." followed by anything else. */
            dacom_trap("DllPath '.x' (original hangs)");
        }
    }
    strcat(base, "\\");
    strcat(base, rest);
    /* orig: the new string replaces dllpath without freeing the old one. */
    com->dllpath = str_dup(base);
}

/* orig: 065b2b20 */
static int com_initialize(COManager *com)
{
    IProfileParser *pp = com->parser;
    HANDLE_SECTION sec;
    char value[0x400];
    char msg[DACOM_MSG_BUF];
    int use_env = 1;
    const char *env;

    if (com->initialized)
        return com->initialized;

    sec = pp->vtbl->CreateSection(pp, "DACOM", 3);
    if (sec != NULL) {
        if (pp->vtbl->ReadKey(pp, sec, "DllPath", value, sizeof(value)) != 0)
            com_resolve_dllpath(com, value);
        if (pp->vtbl->ReadKey(pp, sec, "IgnoreDACOMEnv", value, sizeof(value)) != 0) {
            if (strncmp(value, "true", 4) == 0)
                use_env = 0;
            else if (strncmp(value, "false", 5) == 0)
                use_env = 1;
            else
                use_env = atoi(value) == 0;
        }
    }
    if (use_env) {
        env = getenv("DACOM");
        if (env != NULL) {
            free(com->dllpath);
            com->dllpath = str_dup(env);
        }
    }

    FDUMP(DACOM_DUMP_NOTICE, "%s(%d) : NOTICE:General:%s", DACOM_ORIG_SRC_FILE, 0x354,
          dacom_format(msg, "DACOM: initialize: dllpath: '%s'\n",
                       com->dllpath ? com->dllpath : "(null)"));
    if (!com_load_libraries(com)) {
        FDUMP(DACOM_DUMP_WARNING, "%s(%d) : WARNING:General:%s", DACOM_ORIG_SRC_FILE, 0x357,
              "DACOM: initialize: unable to load libraries from [Libraries]");
        return 0;
    }
    com->initialized = 1;
    return 1;
}

/* orig: 065b2a30 */
static GENRESULT DACOM_API com_set_ini_config(void *self, const char *arg, uint32_t flags)
{
    COManager *com = self;
    uint32_t major, minor, build;
    GENRESULT r;

    DACOM_GetVersion(&major, &minor, &build);
    if ((flags & 3) == 3)
        return GR_INVALID_PARMS;
    if (flags & 2) {
        IProfileParser2 *pp2;
        r = com->parser->vtbl->QueryInterface(com->parser, IID_IProfileParser2, (void **)&pp2);
        if (r < 0)
            goto fail;
        r = pp2->vtbl->InitializeFromMemory(pp2, arg, (uint32_t)strlen(arg));
        if (pp2 != NULL)
            pp2->vtbl->Release(pp2);
    } else {
        r = com->parser->vtbl->Initialize(com->parser, arg, (flags & 1) != 0);
    }
    if (r == GR_OK) {
        com_initialize(com);
        return GR_OK;
    }
fail:
    FDUMP(DACOM_DUMP_WARNING, "%s(%d) : WARNING:General:%s", DACOM_ORIG_SRC_FILE, 0x2e6,
          "DACOM: SetINIConfig: unable to initialize parser");
    return r;
}

static const ICOManagerVtbl com_vtbl = {    /* .rdata 065b70cc */
    com_query_interface,
    com_addref,
    com_release,
    com_create_instance,
    com_register_component,
    com_unregister_component,
    com_enumerate_components,
    com_add_library,
    com_remove_library,
    com_shut_down,
    com_set_ini_config,
};

/* ======================= construction ======================= */

static COManager g_com;          /* .data 065b8a40 */
static uint8_t   g_com_guard;    /* .data 065b8a38 */

/* orig: 065b1f80 */
static void com_construct(COManager *com)
{
    IComponentFactory *f;
    DACOMDESC desc;

    memset(com, 0, sizeof(*com));
    com->vtbl = &com_vtbl;

    f = profile_parser_factory_new("ProfileParser");
    com_register_component(com, f, "ProfileParser", COM_PARSER_PRIORITY);
    f->vtbl->Release(f);

    f = profile_parser_factory_new("ProfileParser2");
    com_register_component(com, f, "ProfileParser2", COM_PARSER_PRIORITY);
    desc.size = DACOMDESC_ORIG_SIZE;
    desc.component = "ProfileParser2";
    desc.outer = (IDAComponent *)com;
    desc.inner_out = &com->parser_inner;
    desc.args = NULL;
    f->vtbl->CreateInstance(f, &desc, (void **)&com->parser);
    f->vtbl->Release(f);
}

/* orig: 065b3210 (onexit) — frees the containers. Libraries are not
 * unloaded and the parser is not released, as in the original. */
static void com_destruct(void)
{
    COManager *com = &g_com;
    while (com->libs != NULL) {
        Library *lib = com->libs;
        library_unlink(com, lib);
        free(lib->name);
        free(lib);
    }
    while (com->buckets != NULL) {
        bucket_remove(com->buckets, match_all, NULL, 0);
        bucket_erase(com, com->buckets);
    }
}

/* orig: 065b31d0 */
ICOManager *DACOM_Acquire(void)
{
    if ((g_com_guard & 1) == 0) {
        g_com_guard |= 1;
        com_construct(&g_com);
        atexit(com_destruct);
    }
    return (ICOManager *)&g_com;
}
