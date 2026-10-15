/* xi_internal.h — shared between the ximage.dll port's translation units.
 * Original layouts and evidence: notes/ximage_dll.md. */
#ifndef XI_INTERNAL_H
#define XI_INTERNAL_H

#include <stdint.h>

#include "bigimage.h"

#define XI_PF_D3DFMT_COUNT 22   /* searched by 06f82900 (`cmp eax,0x16`) */
#define XI_PF_DESC_COUNT   15   /* 06f82920 clamps indices > 0xe to 0 */
#define XI_PF_DESC_WORDS   19   /* 0x4c bytes */
#define XI_PF_DESC_BPP     1    /* +4: bits per pixel */

extern const uint32_t xi_pf_d3dfmt[XI_PF_D3DFMT_COUNT];                 /* xi_tables.c */
extern const uint32_t xi_pf_desc[XI_PF_DESC_COUNT][XI_PF_DESC_WORDS];   /* xi_tables.c */

/* orig: 06f82900 — pixel-format index of a D3DFORMAT, 0 if unknown. */
DAPIXFMT xi_pf_from_d3dfmt(uint32_t d3dfmt);

/* orig: 06f82920 — descriptor of a pixel format. */
const uint32_t *xi_pf_desc_of(DAPIXFMT fmt);

/* (bits per pixel + 7) / 8, as computed inline everywhere in ximage.dll. */
uint32_t xi_pf_bytes(DAPIXFMT fmt);

#endif /* XI_INTERNAL_H */
