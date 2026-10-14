
int __fastcall FUN_00414870(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 < 1) {
    FUN_00414c50();
    FUN_005b7e1d(param_1);
  }
  return iVar1;
}

