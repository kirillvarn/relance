
int __fastcall FUN_00414f80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 < 1) {
    FUN_004154f0();
    FUN_005b7e1d(param_1);
  }
  return iVar1;
}

