
undefined4 * __fastcall FUN_005475b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0f5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00532bc0(2);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  local_4 = 0;
  param_1[0x7d] = 0x3f800000;
  param_1[0x7e] = 0x3f800000;
  param_1[0x7f] = 0x3f800000;
  ID_String::clear((ID_String *)(param_1 + 0x80));
  param_1[0x81] = 0;
  *param_1 = &PTR_LAB_005e0304;
  param_1[1] = &PTR_LAB_005e0284;
  param_1[3] = &PTR_FUN_005e0278;
  param_1[0x2b] = &PTR_FUN_005e0270;
  ExceptionList = local_c;
  return param_1;
}

