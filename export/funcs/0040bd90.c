
undefined4 * __fastcall FUN_0040bd90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b8538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004068d0();
  local_4 = 0;
  ID_String::clear((ID_String *)(param_1 + 0x15));
  ID_String::clear((ID_String *)(param_1 + 0x16));
  ID_String::clear((ID_String *)(param_1 + 0x17));
  ID_String::clear((ID_String *)(param_1 + 0x18));
  ID_String::clear((ID_String *)(param_1 + 0x19));
  ID_String::clear((ID_String *)(param_1 + 0x1a));
  ID_String::clear((ID_String *)(param_1 + 0x1b));
  ID_String::clear((ID_String *)(param_1 + 0x1c));
  ID_String::clear((ID_String *)(param_1 + 0x1d));
  ID_String::clear((ID_String *)(param_1 + 0x1e));
  ID_String::clear((ID_String *)(param_1 + 0x1f));
  ID_String::clear((ID_String *)(param_1 + 0x20));
  ID_String::clear((ID_String *)(param_1 + 0x21));
  ID_String::clear((ID_String *)(param_1 + 0x22));
  ID_String::clear((ID_String *)(param_1 + 0x23));
  ID_String::clear((ID_String *)(param_1 + 0x24));
  param_1[0x25] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x26] = 0x3f800000;
  *param_1 = &PTR_FUN_005c8074;
  param_1[0x29] = 0x43960000;
  param_1[0x28] = 0x44160000;
  param_1[0x2a] = 0x41c80000;
  param_1[0x2b] = 0x42480000;
  param_1[0x2c] = 0;
  ExceptionList = local_c;
  return param_1;
}

