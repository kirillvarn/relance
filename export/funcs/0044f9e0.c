
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044f9e0(int param_1)

{
  int iVar1;
  uint uVar2;
  float unaff_retaddr;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x4c))(*(int **)(param_1 + 0x3c));
  uVar2 = *(int *)(param_1 + 0x40) - iVar1;
  if (uVar2 != 0) {
    floor((double)((float)uVar2 * unaff_retaddr + (float)_DAT_005c75e8));
    ftol();
    FUN_0044f7f0();
  }
  return;
}

