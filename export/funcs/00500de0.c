
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00500de0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    FUN_005012e0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xb0),
                 *(undefined4 *)(param_1 + 0xbc),0,0);
    FUN_005012e0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xb4),
                 *(undefined4 *)(param_1 + 0xc0),0,0);
    FUN_005012e0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xb8),
                 *(undefined4 *)(param_1 + 0xc4),0,0);
  }
  else {
    iVar1 = DAT_00613254 + DAT_0061325c + 1 + DAT_00613258;
    if (*(int *)(param_1 + 0x1bc) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1bc) >> 2;
    }
    if ((7 < iVar1) && (7 < iVar3)) {
      iVar4 = 0;
      if (0 < iVar1) {
        iVar2 = (iVar3 - iVar1) * 4;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x1bc) + iVar4 * 4) =
               *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x1bc));
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < iVar1);
      }
      while (iVar4 < iVar3) {
        iVar1 = *(int *)(param_1 + 0x1bc);
        iVar2 = rand();
        iVar4 = iVar4 + 1;
        *(float *)(iVar1 + -4 + iVar4 * 4) =
             (*(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x1d8)) *
             (float)iVar2 * _DAT_005da778 + *(float *)(param_1 + 0x1d8);
      }
      FUN_005018a0(*(undefined4 *)(param_1 + 0x1bc),iVar3 + -1,param_1 + 0x1c8);
    }
    iVar1 = DAT_00613254 + DAT_0061325c + 1 + DAT_00613258;
    if (*(int *)(param_1 + 0x1e4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e4) >> 2;
    }
    if ((7 < iVar1) && (7 < iVar3)) {
      iVar4 = 0;
      if (0 < iVar1) {
        iVar2 = (iVar3 - iVar1) * 4;
        iVar4 = 0;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x1e4) + iVar4 * 4) =
               *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x1e4));
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < iVar1);
      }
      while (iVar4 < iVar3) {
        iVar1 = *(int *)(param_1 + 0x1e4);
        iVar2 = rand();
        iVar4 = iVar4 + 1;
        *(float *)(iVar1 + -4 + iVar4 * 4) =
             (*(float *)(param_1 + 0x204) - *(float *)(param_1 + 0x200)) *
             (float)iVar2 * _DAT_005da778 + *(float *)(param_1 + 0x200);
      }
      FUN_005018a0(*(undefined4 *)(param_1 + 0x1e4),iVar3 + -1,param_1 + 0x1f0);
    }
    iVar1 = DAT_00613254 + DAT_0061325c + 1 + DAT_00613258;
    if (*(int *)(param_1 + 0x20c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x20c) >> 2;
    }
    if ((7 < iVar1) && (7 < iVar3)) {
      iVar4 = 0;
      if (0 < iVar1) {
        iVar2 = (iVar3 - iVar1) * 4;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x20c) + iVar4 * 4) =
               *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x20c));
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar4 < iVar1);
      }
      while (iVar4 < iVar3) {
        iVar1 = *(int *)(param_1 + 0x20c);
        iVar2 = rand();
        iVar4 = iVar4 + 1;
        *(float *)(iVar1 + -4 + iVar4 * 4) =
             (*(float *)(param_1 + 0x22c) - *(float *)(param_1 + 0x228)) *
             (float)iVar2 * _DAT_005da778 + *(float *)(param_1 + 0x228);
      }
      FUN_005018a0(*(undefined4 *)(param_1 + 0x20c),iVar3 + -1,param_1 + 0x218);
      return;
    }
  }
  return;
}

