
void __fastcall FUN_004154f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b886b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005c8ce8;
  local_4 = 0;
  local_10 = param_1;
  if (param_1[0xc] != 0) {
    local_18 = *(undefined4 *)(param_1[0xc] + 0x15c);
    FUN_00432240(&local_14,&local_18);
    iVar1 = param_1[0xc];
    iVar2 = *(int *)(iVar1 + 0x160) + -1;
    *(int *)(iVar1 + 0x160) = iVar2;
    if (iVar2 < 1) {
      FUN_00415050();
      FUN_005b7e1d(iVar1);
    }
    param_1[0xc] = 0;
    if ((local_14 != DAT_00616528) && (iVar2 < 1)) {
      FUN_0046c8c0(&local_18,local_14);
    }
  }
  FUN_005b7e1d(param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}

