
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t __thiscall FUN_0058b360(int *param_1,undefined4 param_2,float *param_3,uint param_4)

{
  int iVar1;
  short *psVar2;
  float fVar3;
  size_t sVar4;
  float unaff_ESI;
  float *pfVar5;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float local_4;
  
  switch(param_2) {
  case 6:
    pfVar5 = (float *)(param_1 + 0x2a);
    *pfVar5 = *param_3;
    param_1[0x2b] = (int)param_3[1];
    param_1[0x2c] = (int)param_3[2];
    if (param_1[0x21] != -1) {
      (**(code **)(*param_1 + 0xa4))(&local_24);
      if ((char)param_1[0xde] == '\0') {
        unaff_ESI = unaff_ESI - (float)param_1[0xcb] * _DAT_005c75e0;
        local_24 = (float)param_1[0xcc] * _DAT_005c75e0 + local_24;
      }
      if ((*(byte *)(param_1 + 0xbd) & 1) != 0) {
        fStack_1c = unaff_ESI + *pfVar5;
        fStack_18 = local_24 + (float)param_1[0x2b];
        pfVar5 = &fStack_1c;
        fStack_14 = fStack_20 + (float)param_1[0x2c];
      }
      fStack_10 = *pfVar5;
      local_c = pfVar5[1];
      fStack_8 = pfVar5[2];
      FUN_005a0880(&fStack_10);
      return 0;
    }
    break;
  default:
    sVar4 = FUN_005a13c0(param_2,param_3,param_4);
    return sVar4;
  case 0xc:
    *(bool *)(param_1 + 0xd5) = param_3 != (float *)0x0;
    return 0;
  case 0x1d:
    local_4 = (float)param_1[0x2c] + (float)param_1[0x1a];
    FUN_004145d0(param_1[0xcb],local_4);
    FUN_00415860(param_3);
    goto LAB_0058b5dc;
  case 0x1e:
    FUN_0058a5f0(param_3);
LAB_0058b5dc:
    psVar2 = (short *)param_1[0xdc];
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      *psVar2 = 0;
    }
    return 0;
  case 0x1f:
    return *(size_t *)param_1[0xcd];
  case 0x20:
    if (*(wchar_t **)param_1[0xcd] != (wchar_t *)0x0) {
      sVar4 = wcslen(*(wchar_t **)param_1[0xcd]);
      return sVar4;
    }
    break;
  case 0x21:
    return param_1[0xd0];
  case 0x22:
    param_1[0xcf] = param_4;
    param_1[0xce] = (int)param_3;
    return 0;
  case 0x23:
    param_1[0xd3] = (int)param_3;
    param_1[0xd4] = param_4;
    break;
  case 0x24:
    if (param_3 == (float *)0x0) {
      *(undefined1 *)(param_1 + 0xd7) = 0;
      return 0;
    }
    *(undefined1 *)(param_1 + 0xd7) = 1;
    return 0;
  case 0x33:
    fVar3 = *param_3;
    *(bool *)((int)param_1 + 0x35d) = param_4 == 1;
    *(float *)((int)param_1 + 0x35e) = fVar3;
    return 0;
  case 0x50:
    if (*(char *)((int)param_1 + 0x389) != '\0') {
      *(undefined1 *)((int)param_1 + 0x389) = 0;
      DAT_0067d8c8 = DAT_0067d8c8 + -1;
      if (DAT_0067d8c8 < 1) {
        FUN_005646e0(0xb);
      }
      iVar1 = param_1[0xdc];
      FUN_00423b30(&local_c,param_1 + 0x18,param_1 + 0x2a);
      FUN_004145d0(param_1[0xcb],local_4);
      FUN_00415860(iVar1);
    }
    *(undefined1 *)((int)param_1 + 0x362) = 0;
    param_1[0xd9] = 1;
    param_1[0xda] = 0;
    psVar2 = (short *)param_1[0xdc];
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      *psVar2 = 0;
    }
    if (param_3 == (float *)0x1) {
      *(undefined1 *)((int)param_1 + 0x362) = 1;
      param_1[0xdb] = (int)((float)param_4 * _DAT_005d1494);
      return 0;
    }
    break;
  case 0x51:
    *(undefined1 *)((int)param_1 + 0x379) = 0;
    if (param_3 != (float *)0x0) {
      *(undefined1 *)((int)param_1 + 0x379) = 1;
      *(undefined1 *)((int)param_1 + 0x35d) = 1;
      return 0;
    }
  }
  return 0;
}

