/* profile_parser.c — the "ProfileParser" / "ProfileParser2" DACOM component
 * (IProfileParser + IProfileParser2 over one IniDoc). Port of dacom.dll
 * 065b4430..065b4a00; see notes/dacom_dll.md. */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include "dacom_internal.h"

typedef struct ProfileParser ProfileParser;

/* Non-delegating inner unknown at +0x1c of the original object. */
typedef struct PPInner {
    const IDAComponentVtbl *vtbl;   /* +0x1c (065b7168) */
    uint32_t                refs;   /* +0x20 */
    ProfileParser          *owner;  /* +0x24 */
} PPInner;

/* orig: operator new(0x28). */
struct ProfileParser {
    const IProfileParserVtbl  *vtbl;    /* +0x00 (065b7144) */
    const IProfileParser2Vtbl *vtbl2;   /* +0x04 (065b7118) */
    IniDoc                     doc;     /* +0x08 */
    IDAComponent              *outer;   /* +0x18 controlling unknown */
    PPInner                    inner;   /* +0x1c */
};

/* Factory, operator new(0xc). */
typedef struct PPFactory {
    const IComponentFactoryVtbl *vtbl;  /* +0x00 (065b70f8 / 065b7108, identical) */
    uint32_t                     refs;  /* +0x04 */
    const char                  *name;  /* +0x08 "ProfileParser" or "ProfileParser2" */
} PPFactory;

#define PP_FROM_IPP2(p) ((ProfileParser *)((char *)(p) - offsetof(ProfileParser, vtbl2)))

/* Interface table at .rdata 065b7174: {name, offset}; high bit = indirect. */
#define PP_IFACE_INDIRECT 0x80000000u
static const struct { const char *name; uint32_t offset; } pp_iface_table[] = {
    { IID_IProfileParser,  (uint32_t)offsetof(ProfileParser, vtbl) },
    { IID_IProfileParser2, (uint32_t)offsetof(ProfileParser, vtbl2) },
    { NULL, 0 },
};

/* ======================= inner unknown ======================= */

/* orig: 065b4860 */
static GENRESULT DACOM_API pp_inner_query_interface(void *self, const char *iface, void **out)
{
    ProfileParser *pp = ((PPInner *)self)->owner;
    int i;
    for (i = 0; pp_iface_table[i].name != NULL; i++) {
        if (strcmp(pp_iface_table[i].name, iface) == 0) {
            uint32_t off = pp_iface_table[i].offset;
            IDAComponent *p;
            if (off & PP_IFACE_INDIRECT)
                p = *(IDAComponent **)((char *)pp + (off & 0x7fffffffu));
            else
                p = (IDAComponent *)((char *)pp + off);
            p->vtbl->AddRef(p);
            *out = p;
            return GR_OK;
        }
    }
    *out = NULL;
    return GR_INTERFACE_UNSUPPORTED;
}

/* orig: 065b4740 (shared with the factory: ++refs at +4) */
static uint32_t DACOM_API pp_inner_addref(void *self)
{
    return ++((PPInner *)self)->refs;
}

/* orig: 065b4920 */
static uint32_t DACOM_API pp_inner_release(void *self)
{
    PPInner *in = self;
    if (in->refs != 0)
        in->refs--;
    if (in->refs != 0)
        return in->refs;
    in->refs = 1;   /* orig: guards re-entrant release during destruction */
    if (in->owner != NULL) {
        ini_doc_destroy(&in->owner->doc);     /* 065b4400 */
        free(in->owner);
    }
    return 0;
}

static const IDAComponentVtbl pp_inner_vtbl = {     /* .rdata 065b7168 */
    pp_inner_query_interface,
    pp_inner_addref,
    pp_inner_release,
};

/* ======================= IProfileParser (+0) ======================= */

/* orig: 065b4960 / 065b4970 / 065b4980 — delegate to the controlling unknown */
static GENRESULT DACOM_API pp_query_interface(void *self, const char *iface, void **out)
{
    IDAComponent *o = ((ProfileParser *)self)->outer;
    return o->vtbl->QueryInterface(o, iface, out);
}

static uint32_t DACOM_API pp_addref(void *self)
{
    IDAComponent *o = ((ProfileParser *)self)->outer;
    return o->vtbl->AddRef(o);
}

static uint32_t DACOM_API pp_release(void *self)
{
    IDAComponent *o = ((ProfileParser *)self)->outer;
    return o->vtbl->Release(o);
}

/* orig: 065b4430 */
static GENRESULT DACOM_API pp_initialize(void *self, const char *file, uint32_t flags)
{
    if (flags & 1)
        return -1;
    return ini_doc_load_file(&((ProfileParser *)self)->doc, file) ? 0 : -1;
}

/* orig: 065b4460 */
static int32_t DACOM_API pp_enumerate_sections(void *self, DACOM_ENUM_SECTIONS_FN fn, void *ctx)
{
    ProfileParser *pp = self;
    IniSection *s;
    if (fn == NULL)
        return 0;
    for (s = pp->doc.sections; s != NULL; s = s->next)
        if (fn((IProfileParser *)pp, s->name, ctx) == 0)
            return 0;
    return 1;
}

/* orig: 065b44b0 */
static HANDLE_SECTION DACOM_API pp_create_section(void *self, const char *name, uint32_t mode)
{
    if (mode != 3)
        return NULL;
    return ini_doc_find_section(&((ProfileParser *)self)->doc, name);
}

/* orig: 065b44d0 */
static int32_t DACOM_API pp_close_section(void *self, HANDLE_SECTION sec)
{
    (void)self;
    (void)sec;
    return 1;
}

/* orig: 065b44e0 — `index` is 0-based here, 1-based in the document. */
static uint32_t DACOM_API pp_read_line(void *self, HANDLE_SECTION sec, uint32_t index,
                                       char *buf, uint32_t buflen)
{
    (void)self;
    if (sec == NULL)
        return 0;
    if (buf == NULL)
        return ini_section_line_length(sec, (int32_t)index + 1);
    if (ini_section_read_line(sec, (int32_t)index + 1, buflen, buf))
        return (uint32_t)strlen(buf);
    return 0;
}

/* orig: 065b4540 */
static uint32_t DACOM_API pp_read_key(void *self, HANDLE_SECTION sec, const char *key,
                                      char *buf, uint32_t buflen)
{
    (void)self;
    if (sec == NULL)
        return 0;
    if (buf == NULL)
        return ini_section_key_length(sec, key);
    if (ini_section_read_key(sec, key, buflen, buf))
        return (uint32_t)strlen(buf);
    return 0;
}

static const IProfileParserVtbl pp_vtbl = {         /* .rdata 065b7144 */
    pp_query_interface,
    pp_addref,
    pp_release,
    pp_initialize,
    pp_enumerate_sections,
    pp_create_section,
    pp_close_section,
    pp_read_line,
    pp_read_key,
};

/* ======================= IProfileParser2 (+4) ======================= */

/* orig: 065b49e0 / 065b49f0 / 065b4a00 / 065b4990 / 065b49a0 / 065b49b0 /
 * 065b49c0 / 065b49d0 — `this - 4` adjustors onto the methods above. */
static GENRESULT DACOM_API pp2_query_interface(void *self, const char *iface, void **out)
{
    return pp_query_interface(PP_FROM_IPP2(self), iface, out);
}

static uint32_t DACOM_API pp2_addref(void *self)
{
    return pp_addref(PP_FROM_IPP2(self));
}

static uint32_t DACOM_API pp2_release(void *self)
{
    return pp_release(PP_FROM_IPP2(self));
}

static GENRESULT DACOM_API pp2_initialize(void *self, const char *file, uint32_t flags)
{
    return pp_initialize(PP_FROM_IPP2(self), file, flags);
}

/* orig: 065b45a0 */
static GENRESULT DACOM_API pp2_initialize_from_memory(void *self, const void *data, uint32_t size)
{
    return ini_doc_load_memory(&PP_FROM_IPP2(self)->doc, data, size) ? 0 : -1;
}

static HANDLE_SECTION DACOM_API pp2_create_section(void *self, const char *name, uint32_t mode)
{
    return pp_create_section(PP_FROM_IPP2(self), name, mode);
}

static int32_t DACOM_API pp2_close_section(void *self, HANDLE_SECTION sec)
{
    return pp_close_section(PP_FROM_IPP2(self), sec);
}

static uint32_t DACOM_API pp2_read_line(void *self, HANDLE_SECTION sec, uint32_t index,
                                        char *buf, uint32_t buflen)
{
    return pp_read_line(PP_FROM_IPP2(self), sec, index, buf, buflen);
}

static uint32_t DACOM_API pp2_read_key(void *self, HANDLE_SECTION sec, const char *key,
                                       char *buf, uint32_t buflen)
{
    return pp_read_key(PP_FROM_IPP2(self), sec, key, buf, buflen);
}

/* orig: 065b45c0 — cb(cb, parser2, section name, NULL, ctx). */
static int32_t DACOM_API pp2_enumerate_sections(void *self, IProfileCallback *cb, void *ctx)
{
    IniSection *s;
    if (cb == NULL)
        return 0;
    for (s = PP_FROM_IPP2(self)->doc.sections; s != NULL; s = s->next)
        if (cb->vtbl->Callback(cb, self, s->name, NULL, ctx) == 0)
            return 0;
    return 1;
}

/* orig: 065b4620 — cb(cb, parser2, key, value, ctx). */
static int32_t DACOM_API pp2_enumerate_keys(void *self, IProfileCallback *cb,
                                            HANDLE_SECTION sec, void *ctx)
{
    IniPair *p;
    if (cb == NULL || sec == NULL)
        return 0;
    for (p = ((IniSection *)sec)->pairs; p != NULL; p = p->next)
        if (cb->vtbl->Callback(cb, self, p->key, p->value, ctx) == 0)
            return 0;
    return 1;
}

static const IProfileParser2Vtbl pp2_vtbl = {       /* .rdata 065b7118 */
    pp2_query_interface,
    pp2_addref,
    pp2_release,
    pp2_initialize,
    pp2_initialize_from_memory,
    pp2_create_section,
    pp2_close_section,
    pp2_read_line,
    pp2_read_key,
    pp2_enumerate_sections,
    pp2_enumerate_keys,
};

/* ======================= factory ======================= */

/* orig: 065b4700 */
static GENRESULT DACOM_API ppf_query_interface(void *self, const char *iface, void **out)
{
    *out = NULL;
    if (strcmp(iface, IID_IComponentFactory) != 0)
        return GR_INTERFACE_UNSUPPORTED;
    *out = self;
    ((IComponentFactory *)self)->vtbl->AddRef(self);
    return GR_OK;
}

/* orig: 065b4740 */
static uint32_t DACOM_API ppf_addref(void *self)
{
    return ++((PPFactory *)self)->refs;
}

/* orig: 065b5c90 */
static uint32_t DACOM_API ppf_release(void *self)
{
    PPFactory *f = self;
    if (f->refs != 0)
        f->refs--;
    if (f->refs != 0)
        return f->refs;
    f->refs = 1;
    free(f);
    return 0;
}

/* orig: 065b4750 */
static GENRESULT DACOM_API ppf_create_instance(void *self, DACOMDESC *desc, void **out)
{
    PPFactory *f = self;
    ProfileParser *pp;

    if (desc->size != DACOMDESC_ORIG_SIZE || strcmp(desc->component, f->name) != 0) {
        *out = NULL;
        return GR_INTERFACE_UNSUPPORTED;
    }
    pp = malloc(sizeof(*pp));
    if (pp == NULL) {
        *out = NULL;
        return GR_OUT_OF_MEMORY;
    }
    ini_doc_init(&pp->doc);                 /* 065b43f0 */
    pp->inner.vtbl = &pp_inner_vtbl;
    pp->inner.refs = 1;
    pp->inner.owner = pp;
    pp->vtbl = &pp_vtbl;
    pp->vtbl2 = &pp2_vtbl;
    pp->outer = desc->outer;
    if (desc->outer == NULL)
        pp->outer = (IDAComponent *)&pp->inner;
    else
        *desc->inner_out = (IDAComponent *)&pp->inner;
    /* orig: 065b4420 (init hook) always succeeds; its failure path is dead. */
    *out = pp;
    return GR_OK;
}

static const IComponentFactoryVtbl ppf_vtbl = {     /* .rdata 065b70f8 / 065b7108 */
    ppf_query_interface,
    ppf_addref,
    ppf_release,
    ppf_create_instance,
};

/* orig: 065b46a0 / 065b46d0 */
IComponentFactory *profile_parser_factory_new(const char *name)
{
    PPFactory *f = malloc(sizeof(*f));
    if (f == NULL)
        return NULL;
    f->vtbl = &ppf_vtbl;
    f->refs = 1;
    f->name = name;
    return (IComponentFactory *)f;
}
