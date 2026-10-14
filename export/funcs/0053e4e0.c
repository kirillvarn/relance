
void __fastcall FUN_0053e4e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[-3] = &PTR_LAB_005df5d4;
  param_1[-2] = &PTR_LAB_005df554;
  *param_1 = &PTR_FUN_005df548;
  local_4 = 0;
  if (param_1[0x28] != 0) {
    FUN_00536170(param_1[0x28]);
  }
  local_4 = 0xffffffff;
  FUN_005394b0();
  ExceptionList = local_c;
  return;
}

