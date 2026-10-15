/* xi_pixfmt.c — the pixel-format helpers ximage.dll carries (a copy of a
 * DA library also inlined in Freelancer.exe at 005b7010/005b7030). */
#include "xi_internal.h"

/* orig: 06f82900 (06f828f0 returns the table address) */
DAPIXFMT xi_pf_from_d3dfmt(uint32_t d3dfmt)
{
    int32_t i;
    for (i = 0; i < XI_PF_D3DFMT_COUNT; i++)
        if (xi_pf_d3dfmt[i] == d3dfmt)
            return i;
    return 0;
}

/* orig: 06f82920 — indices > 14 give descriptor 0. Deviation: the original
 * compares signed and reads in front of the table for a negative index; the
 * port gives descriptor 0 for those too. */
const uint32_t *xi_pf_desc_of(DAPIXFMT fmt)
{
    if (fmt > XI_PF_DESC_COUNT - 1 || fmt < 0)
        return xi_pf_desc[0];
    return xi_pf_desc[fmt];
}

uint32_t xi_pf_bytes(DAPIXFMT fmt)
{
    return (xi_pf_desc_of(fmt)[XI_PF_DESC_BPP] + 7u) >> 3;
}
