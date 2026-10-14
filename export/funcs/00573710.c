
void __fastcall FUN_00573710(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c3998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e2fbc;
  param_1[0x1f] = &PTR_LAB_005e2fa4;
  param_1[0x20] = &PTR_FUN_005e2f9c;
  local_4 = 0;
  FUN_00591ef0();
  local_4 = 0xffffffff;
  FUN_00591ba0();
  ExceptionList = local_c;
  return;
}

