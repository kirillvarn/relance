
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fc8b0(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x80) =
         (*(float *)(iVar1 + 0x68) + *(float *)(iVar1 + 100) + _DAT_005d9e0c) / param_2;
    return;
  }
  *(float *)(param_1 + 0x80) = _DAT_005d440c / param_2;
  return;
}

