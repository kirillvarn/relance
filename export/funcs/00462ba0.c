
void __fastcall FUN_00462ba0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x32c) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x32c) + 0x14), *(int *)(param_1 + 0x330) != iVar1)) {
    *(int *)(param_1 + 0x330) = iVar1;
    FUN_00462e30();
  }
  FUN_005a17b0();
  return;
}

