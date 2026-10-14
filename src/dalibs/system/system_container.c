/* system_container.c — port of system.dll (DA libs "System" component).
 *
 * Original: game/EXE/system.dll, PDB C:\work\builds\dalibs\dalibs-build\
 * build\Lib\System.pdb, source Src\System\SysContainer.cpp. 2974 bytes of
 * .text, ported from the disassembly in full (notes/system_dll.md).
 *
 * The DLL registers one DACOM component class, "SystemContainer". A
 * SystemContainer reads the [System] section of dacom.ini, creates each
 * listed component aggregated under itself, and then forwards
 * Initialize/Update and connection-point lookups to its children.
 *
 * Original-behaviour notes are marked "orig:".
 */
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#include "dacom.h"

#define SC_COMPONENT_NAME "SystemContainer"           /* .data 6f13080 */
#define SC_SECTION_NAME   "System"                    /* .data 6f13154 */
#define SC_ORIG_SRC_FILE  "C:\\work\\builds\\dalibs\\dalibs-build\\build\\Src\\System\\SysContainer.cpp"
#define SC_FACTORY_PRIORITY 0x40000000u               /* 6f117b5 */
#define SC_LINE_BUF   0x100                           /* 6f11246 */
#define SC_MSG_BUF    0x2000                          /* 6f1148f */

/* One child component. 0x14 bytes in the original (operator new(0x14)). */
typedef struct SysNode {
    struct SysNode      *next;    /* +0x00 */
    IDAComponent        *iface;   /* +0x04 child's inner unknown (owned ref) */
    void                *created; /* +0x08 CreateInstance out-param (not released) */
    ISystemComponent    *sys;     /* +0x0c weak: QI'd then released at once */
    IAggregateComponent *agg;     /* +0x10 weak: same */
} SysNode;

typedef struct SystemContainer SystemContainer;

/* Non-delegating inner unknown at +0x10 of the container. */
typedef struct SysInner {
    const IDAComponentVtbl *vtbl; /* +0x00 (6f120c8) */
    uint32_t                refs; /* +0x04 */
    SystemContainer        *owner;/* +0x08 */
} SysInner;

typedef struct ISystemContainerVtbl {
    DACOM_IUNKNOWN_SLOTS
    GENRESULT (DACOM_API *Initialize)(void *self);                      /* 3 6f11610 */
    void      (DACOM_API *Update)(void *self);                          /* 4 6f115e0 */
    GENRESULT (DACOM_API *LoadSystemComponents)(void *self);            /* 5 6f111e0 */
    GENRESULT (DACOM_API *RemoveAll)(void *self);                       /* 6 6f11190 */
    GENRESULT (DACOM_API *AddComponent)(void *self, DACOMDESC *desc);   /* 7 6f114b0 */
} ISystemContainerVtbl;

/* calloc(1, 0x28) in the original. */
struct SystemContainer {
    const ISystemContainerVtbl            *vtbl;      /* +0x00 (6f12098) */
    const IDAConnectionPointContainerVtbl *cpc_vtbl;  /* +0x04 (6f12084) */
    SysNode      *head;       /* +0x08 */
    SysNode      *tail;       /* +0x0c last node; orig stores a node* and writes *tail */
    SysInner      inner;      /* +0x10 */
    IDAComponent *outer;      /* +0x1c controlling unknown (&inner unless aggregated) */
    uint32_t      aggregated; /* +0x20 */
    uint32_t      loaded;     /* +0x24 [System] section already loaded */
};

/* Factory object, operator new(0xc) in the original. */
typedef struct SysFactory {
    const IComponentFactoryVtbl *vtbl; /* +0x00 (6f120b8) */
    uint32_t                     refs; /* +0x04 */
    const char                  *name; /* +0x08 -> "SystemContainer" */
} SysFactory;

#if UINTPTR_MAX == 0xffffffffu
_Static_assert(sizeof(SysNode) == 0x14, "SysNode size");
_Static_assert(offsetof(SystemContainer, inner) == 0x10, "inner offset");
_Static_assert(offsetof(SystemContainer, outer) == 0x1c, "outer offset");
_Static_assert(offsetof(SystemContainer, loaded) == 0x24, "loaded offset");
_Static_assert(sizeof(SystemContainer) == 0x28, "SystemContainer size");
_Static_assert(sizeof(SysFactory) == 0xc, "SysFactory size");
_Static_assert(sizeof(DACOMDESC) == 0x14, "DACOMDESC size");
#endif

/* ---- module globals (.data) ---- */
static void       *g_hinstance;  /* 6f13198 */
static ICOManager *g_dacom;      /* 6f13194 */

/* ---- forward declarations ---- */
static uint32_t DACOM_API sc_inner_addref(void *self);
static void     sc_destroy(SystemContainer *sc);
static GENRESULT DACOM_API sc_remove_all(void *self);

#define SC_FROM_CPC(p) ((SystemContainer *)((char *)(p) - offsetof(SystemContainer, cpc_vtbl)))
#define SC_FROM_INNER(p) ((SystemContainer *)((char *)(p) - offsetof(SystemContainer, inner)))

/* Interface table at .rdata 6f1205c: {name, offset}; the high bit of offset
 * means "the slot holds a pointer to the interface" (unused here, kept). */
#define SC_IFACE_INDIRECT 0x80000000u
static const struct { const char *name; uint32_t offset; } sc_iface_table[] = {
    { IID_ISystemContainer,            (uint32_t)offsetof(SystemContainer, vtbl) },
    { IID_IAggregateComponent,         (uint32_t)offsetof(SystemContainer, vtbl) },
    { IID_ISystemComponent,            (uint32_t)offsetof(SystemContainer, vtbl) },
    { IID_IDAConnectionPointContainer, (uint32_t)offsetof(SystemContainer, cpc_vtbl) },
    { NULL, 0 },
};

/* orig: 06f11480 — vsnprintf into caller buffer, returns it.
 * orig: _vsnprintf does not NUL-terminate on overflow; vsnprintf always does. */
static char *sc_format(char *buf, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, SC_MSG_BUF, fmt, ap);
    va_end(ap);
    return buf;
}

/* Release a node's owned interface and free the node (pattern repeated
 * inline in 6f11190, 6f11350, 6f11610, 6f115ad). */
static void sc_node_free(SysNode *node)
{
    if (node->iface != NULL) {
        node->iface->vtbl->Release(node->iface);
        node->iface = NULL;
    }
    free(node);
}

/* Append to list and take weak ISystemComponent/IAggregateComponent
 * pointers (inline in 6f1136d.. and 6f11548..). */
static void sc_node_attach(SystemContainer *sc, SysNode *node)
{
    if (sc->tail != NULL)
        sc->tail->next = node;
    else
        sc->head = node;
    sc->tail = node;

    if (node->iface->vtbl->QueryInterface(node->iface, IID_ISystemComponent,
                                          (void **)&node->sys) == GR_OK)
        node->sys->vtbl->Release(node->sys);
    if (node->iface->vtbl->QueryInterface(node->iface, IID_IAggregateComponent,
                                          (void **)&node->agg) == GR_OK)
        node->agg->vtbl->Release(node->agg);
}

/* ======================= inner (non-delegating) unknown ================== */

/* orig: 06f11000 */
static GENRESULT DACOM_API sc_inner_query_interface(void *self, const char *iface, void **out)
{
    SystemContainer *sc = ((SysInner *)self)->owner;
    SysNode *node;
    int i;

    for (i = 0; sc_iface_table[i].name != NULL; i++) {
        if (strcmp(sc_iface_table[i].name, iface) == 0) {
            uint32_t off = sc_iface_table[i].offset;
            IDAComponent *p;
            if (off & SC_IFACE_INDIRECT)
                p = *(IDAComponent **)((char *)sc + (off & 0x7fffffffu));
            else
                p = (IDAComponent *)((char *)sc + off);
            p->vtbl->AddRef(p);
            *out = p;
            return GR_OK;
        }
    }

    /* Not ours: ask each child. */
    *out = NULL;
    for (node = sc->head; node != NULL; node = node->next) {
        GENRESULT r = node->iface->vtbl->QueryInterface(node->iface, iface, out);
        if (r == GR_OK)
            return GR_OK;
    }
    return GR_INTERFACE_UNSUPPORTED;
}

/* orig: 06f11990 (shared with the factory: ++refs at +4) */
static uint32_t DACOM_API sc_inner_addref(void *self)
{
    SysInner *in = self;
    return ++in->refs;
}

/* orig: 06f119a0 */
static uint32_t DACOM_API sc_inner_release(void *self)
{
    SysInner *in = self;
    if (in->refs > 0)
        in->refs--;
    if (in->refs != 0)
        return in->refs;
    in->refs = 1;   /* orig: guards against re-entrant release during destruction */
    if (in->owner != NULL) {
        SystemContainer *sc = in->owner;
        sc_destroy(sc);
        free(sc);   /* allocated with calloc */
    }
    return 0;
}

static const IDAComponentVtbl sc_inner_vtbl = {   /* .rdata 6f120c8 */
    sc_inner_query_interface,
    sc_inner_addref,
    sc_inner_release,
};

/* ======================= main interface (+0) ============================ */

/* orig: 06f11160 / 06f11170 / 06f11180 — delegate to the controlling unknown */
static GENRESULT DACOM_API sc_query_interface(void *self, const char *iface, void **out)
{
    IDAComponent *o = ((SystemContainer *)self)->outer;
    return o->vtbl->QueryInterface(o, iface, out);
}

static uint32_t DACOM_API sc_addref(void *self)
{
    IDAComponent *o = ((SystemContainer *)self)->outer;
    return o->vtbl->AddRef(o);
}

static uint32_t DACOM_API sc_release(void *self)
{
    IDAComponent *o = ((SystemContainer *)self)->outer;
    return o->vtbl->Release(o);
}

/* orig: 06f11610 — Initialize every aggregate child; drop children that fail.
 * Returns the result of the last Initialize call made (0 if none). */
static GENRESULT DACOM_API sc_initialize(void *self)
{
    SystemContainer *sc = self;
    SysNode *prev = NULL;
    SysNode *node = sc->head;
    GENRESULT result = GR_OK;

    while (node != NULL) {
        if (node->agg != NULL) {
            result = node->agg->vtbl->Initialize(node->agg);
            if (result != GR_OK) {
                if (prev != NULL)
                    prev->next = node->next;
                else
                    sc->head = node->next;
                /* orig: sc->tail is NOT updated here. If the last node is
                 * removed, tail dangles and a later AddComponent writes into
                 * freed memory. Kept for fidelity; see notes/system_dll.md. */
                sc_node_free(node);
                if (sc->aggregated)
                    return result;
                prev = NULL;
                node = sc->head;    /* restart the scan */
                continue;
            }
        }
        prev = node;
        node = node->next;
    }
    return result;
}

/* orig: 06f115e0 — broadcast ISystemComponent slot 4 to all children.
 * orig: returns whatever EAX holds (no explicit result); ported as void. */
static void DACOM_API sc_update(void *self)
{
    SystemContainer *sc = self;
    SysNode *node;
    for (node = sc->head; node != NULL; node = node->next)
        if (node->sys != NULL)
            node->sys->vtbl->Update(node->sys);
}

/* orig: 06f111e0 — create every component listed in dacom.ini [System].
 * Line format: `name [= args]`; ';' starts a comment line. */
static GENRESULT DACOM_API sc_load_system_components(void *self)
{
    SystemContainer *sc = self;
    IProfileParser *parser = NULL;
    HANDLE_SECTION section;
    uint32_t line_index;
    char line[SC_LINE_BUF];
    char msg[SC_MSG_BUF];

    if (sc->loaded)
        return GR_OK;

    if (g_dacom->vtbl->QueryInterface(g_dacom, IID_IProfileParser,
                                      (void **)&parser) != GR_OK)
        goto done;

    section = parser->vtbl->CreateSection(parser, SC_SECTION_NAME, 3);
    if (section == NULL)
        goto done;

    line_index = 1;
    if (parser->vtbl->ReadLine(parser, section, 0, line, SC_LINE_BUF) != 0) {
        do {
            DACOMDESC desc = { DACOMDESC_ORIG_SIZE, NULL, NULL, NULL, NULL };
            char *name = line;
            char *args;
            char *p;
            SysNode *node;
            const char *status;

            while (*name == ' ' || *name == '\t')
                name++;
            if (*name == ';' || *name == '\0')
                goto next_line;

            args = strchr(name, '=');
            if (args != NULL) {
                *args = '\0';
                do {
                    args++;
                } while (*args == ' ' || *args == '\t');
            }

            node = malloc(sizeof(*node));
            if (node == NULL) {
                /* orig: no NULL check; it would dereference node+4 and fault. */
                abort();
            }
            node->iface = NULL;
            node->next = NULL;
            node->created = NULL;
            node->sys = NULL;
            node->agg = NULL;

            desc.component = name;
            desc.outer = (IDAComponent *)sc;
            desc.inner_out = &node->iface;
            desc.args = args;

            /* trim the name at the first space and first tab */
            p = strchr(name, ' ');
            if (p != NULL)
                *p = '\0';
            p = strchr(name, '\t');
            if (p != NULL)
                *p = '\0';

            if (g_dacom->vtbl->CreateInstance(g_dacom, &desc, &node->created) != GR_OK) {
                status = "[FAILED]";
                sc_node_free(node);
            } else {
                status = "[OK]";
                sc_node_attach(sc, node);
            }

            sc_format(msg, "SystemContainer: LoadSystemComponents: Loading '%s' [%s] returned %s\n",
                      desc.component, desc.args != NULL ? desc.args : "", status);
            FDUMP(0x100003, "%s(%d) : NOTICE:General:%s", SC_ORIG_SRC_FILE, 0x123, msg);

next_line:
            ;
        } while (parser->vtbl->ReadLine(parser, section, line_index++, line, SC_LINE_BUF) != 0);
    }

    if (!sc->aggregated)
        sc->vtbl->Initialize(sc);
    sc->loaded = 1;

done:
    if (parser != NULL)
        parser->vtbl->Release(parser);
    return GR_OK;
}

/* orig: 06f11190 — release and free every child. */
static GENRESULT DACOM_API sc_remove_all(void *self)
{
    SystemContainer *sc = self;
    while (sc->head != NULL) {
        SysNode *next = sc->head->next;
        sc_node_free(sc->head);
        sc->head = next;
    }
    sc->tail = NULL;
    sc->loaded = 0;
    return GR_OK;
}

/* orig: 06f114b0 — create one component from a caller-supplied descriptor
 * and aggregate it. desc->outer/inner_out are overridden during the call and
 * restored afterwards. */
static GENRESULT DACOM_API sc_add_component(void *self, DACOMDESC *desc)
{
    SystemContainer *sc = self;
    IDAComponent *saved_outer;
    IDAComponent **saved_inner_out;
    SysNode *node;
    GENRESULT r;

    if (desc == NULL)
        return GR_INVALID_PARMS;

    saved_outer = desc->outer;
    saved_inner_out = desc->inner_out;

    node = malloc(sizeof(*node));
    if (node == NULL)
        return GR_OUT_OF_MEMORY;
    node->iface = NULL;
    node->next = NULL;
    node->created = NULL;
    node->sys = NULL;
    node->agg = NULL;

    desc->outer = (IDAComponent *)sc;
    desc->inner_out = &node->iface;

    r = g_dacom->vtbl->CreateInstance(g_dacom, desc, &node->created);
    if (r != GR_OK) {
        desc->outer = saved_outer;
        desc->inner_out = saved_inner_out;
        sc_node_free(node);
        return r;
    }

    sc_node_attach(sc, node);
    desc->outer = saved_outer;
    desc->inner_out = saved_inner_out;
    return r;
}

static const ISystemContainerVtbl sc_vtbl = {   /* .rdata 6f12098 */
    sc_query_interface,
    sc_addref,
    sc_release,
    sc_initialize,
    sc_update,
    sc_load_system_components,
    sc_remove_all,
    sc_add_component,
};

/* ================ IDAConnectionPointContainer (+4) ====================== */

/* orig: 06f119e0 / 06f119f0 / 06f11a00 — this-adjust by -4, then delegate */
static GENRESULT DACOM_API sc_cpc_query_interface(void *self, const char *iface, void **out)
{
    return sc_query_interface(SC_FROM_CPC(self), iface, out);
}

static uint32_t DACOM_API sc_cpc_addref(void *self)
{
    return sc_addref(SC_FROM_CPC(self));
}

static uint32_t DACOM_API sc_cpc_release(void *self)
{
    return sc_release(SC_FROM_CPC(self));
}

/* orig: 06f11690 (slot 3, initial result -1) and 06f11710 (slot 4, initial
 * result 1): forward to each child's IDAConnectionPointContainer until one
 * returns GR_OK. */
static GENRESULT sc_cpc_forward(SystemContainer *sc, int slot, void *a, void *b,
                                GENRESULT initial)
{
    IDAConnectionPointContainer *cpc = NULL;
    GENRESULT result = initial;
    SysNode *node;

    for (node = sc->head; node != NULL; node = node->next) {
        if (cpc != NULL) {
            cpc->vtbl->Release(cpc);
            cpc = NULL;
        }
        if (node->iface->vtbl->QueryInterface(node->iface, IID_IDAConnectionPointContainer,
                                              (void **)&cpc) == GR_OK) {
            result = slot == 3 ? cpc->vtbl->Slot3(cpc, a, b)
                               : cpc->vtbl->Slot4(cpc, a, b);
            if (result == GR_OK)
                break;
        }
    }
    if (cpc != NULL)
        cpc->vtbl->Release(cpc);
    return result;
}

static GENRESULT DACOM_API sc_cpc_slot3(void *self, void *a, void *b)
{
    return sc_cpc_forward(SC_FROM_CPC(self), 3, a, b, -1);
}

static GENRESULT DACOM_API sc_cpc_slot4(void *self, void *a, void *b)
{
    return sc_cpc_forward(SC_FROM_CPC(self), 4, a, b, 1);
}

static const IDAConnectionPointContainerVtbl sc_cpc_vtbl = {   /* .rdata 6f12084 */
    sc_cpc_query_interface,
    sc_cpc_addref,
    sc_cpc_release,
    sc_cpc_slot3,
    sc_cpc_slot4,
};

/* ======================= construction / destruction ===================== */

/* orig: 06f110e0 — apply aggregation from the creation descriptor. */
static GENRESULT sc_aggregate_init(SystemContainer *sc, const DACOMDESC *desc)
{
    /* orig: repz cmpsb over 16 bytes == strcmp against "SystemContainer" */
    if (desc->args != NULL && strcmp(desc->args, SC_COMPONENT_NAME) == 0)
        return GR_GENERIC;
    if (desc->outer != NULL) {
        sc->outer = desc->outer;
        *desc->inner_out = (IDAComponent *)&sc->inner;
        sc->aggregated = 1;
    }
    return GR_OK;
}

/* orig: 06f11130 — destructor body (memory freed by caller). */
static void sc_destroy(SystemContainer *sc)
{
    sc->vtbl = &sc_vtbl;
    sc->cpc_vtbl = &sc_cpc_vtbl;
    /* orig: calls AddRef (slot 1, not Release) on the controlling unknown */
    sc->outer->vtbl->AddRef(sc->outer);
    sc_remove_all(sc);
}

/* ============================ factory ================================== */

/* orig: 06f11830 — repz cmpsb over 0x17 bytes == strcmp against the IID */
static GENRESULT DACOM_API sf_query_interface(void *self, const char *iface, void **out)
{
    *out = NULL;
    if (strcmp(iface, IID_IComponentFactory) != 0)
        return GR_INTERFACE_UNSUPPORTED;
    *out = self;
    ((SysFactory *)self)->vtbl->AddRef(self);
    return GR_OK;
}

/* orig: 06f11990 */
static uint32_t DACOM_API sf_addref(void *self)
{
    return ++((SysFactory *)self)->refs;
}

/* orig: 06f11870 */
static uint32_t DACOM_API sf_release(void *self)
{
    SysFactory *f = self;
    if (f->refs > 0)
        f->refs--;
    if (f->refs != 0)
        return f->refs;
    f->refs = 1;
    free(f);
    return 0;
}

/* orig: 06f118a0 */
static GENRESULT DACOM_API sf_create_instance(void *self, DACOMDESC *desc, void **out)
{
    SysFactory *f = self;
    SystemContainer *sc;
    GENRESULT r;

    if (desc->size != DACOMDESC_ORIG_SIZE || strcmp(desc->component, f->name) != 0) {
        *out = NULL;
        return GR_INTERFACE_UNSUPPORTED;
    }

    sc = calloc(1, sizeof(*sc));
    if (sc == NULL) {
        *out = NULL;
        return GR_OUT_OF_MEMORY;
    }
    sc->inner.vtbl = &sc_inner_vtbl;
    sc->inner.refs = 1;
    sc->inner.owner = sc;
    sc->vtbl = &sc_vtbl;
    sc->cpc_vtbl = &sc_cpc_vtbl;
    sc->outer = (IDAComponent *)&sc->inner;

    r = sc_aggregate_init(sc, desc);
    if (r != GR_OK) {
        sc_destroy(sc);
        free(sc);
        *out = NULL;
        return r;
    }
    *out = sc;
    return r;
}

static const IComponentFactoryVtbl sf_vtbl = {   /* .rdata 6f120b8 */
    sf_query_interface,
    sf_addref,
    sf_release,
    sf_create_instance,
};

/* orig: 06f117a0 */
static void sc_register_factory(ICOManager *dacom)
{
    SysFactory *f = malloc(sizeof(*f));
    if (f == NULL)
        return;
    f->refs = 1;
    f->name = SC_COMPONENT_NAME;
    f->vtbl = &sf_vtbl;
    dacom->vtbl->RegisterComponent(dacom, f, SC_COMPONENT_NAME, SC_FACTORY_PRIORITY);
    f->vtbl->Release(f);
}

/* ============================ module entry ============================== */

/* orig: 06f117f0 (DllMain). Replaces DLL_PROCESS_ATTACH; the port calls it
 * once at startup. DisableThreadLibraryCalls is dropped (no DLL threads).
 * orig: DACOM_Acquire is called twice — once for the cached global, once for
 * the registration argument. Kept, since it may take a reference each time. */
int system_dll_process_attach(void *hinstance)
{
    g_hinstance = hinstance;
    g_dacom = DACOM_Acquire();
    sc_register_factory(DACOM_Acquire());
    return 1;
}
