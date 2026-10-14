
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00501470(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if ((7 < param_2) && (7 < iVar3)) {
    iVar4 = 0;
    if (0 < param_2) {
      iVar2 = (iVar3 - param_2) * 4;
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) =
             *(undefined4 *)(iVar2 + *(int *)(param_1 + 4));
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < param_2);
    }
    while (iVar4 < iVar3) {
      iVar2 = *(int *)(param_1 + 4);
      iVar1 = rand();
      iVar4 = iVar4 + 1;
      *(float *)(iVar2 + -4 + iVar4 * 4) =
           (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20)) * (float)iVar1 * _DAT_005da778
           + *(float *)(param_1 + 0x20);
    }
    FUN_005018a0(*(undefined4 *)(param_1 + 4),iVar3 + -1,param_1 + 0x10);
    return (float10)-((iVar3 - param_2) / (iVar3 + -1));
  }
  return (float10)_DAT_005c7474;
}

