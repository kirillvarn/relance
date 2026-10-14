
undefined4 * __fastcall FUN_005735d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00591ae0(0);
  local_4 = 0;
  FUN_00591e30();
  *param_1 = &PTR_FUN_005e2fbc;
  param_1[0x1f] = &PTR_LAB_005e2fa4;
  param_1[0x20] = &PTR_FUN_005e2f9c;
  param_1[0x2d] = 0;
  ExceptionList = local_c;
  return param_1;
}

