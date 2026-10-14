
undefined4 * __fastcall FUN_00408f20(undefined4 *param_1)

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
  param_1[0x15] = 0;
  param_1[0x16] = 0x168;
  param_1[0x17] = 0;
  ID_String::clear((ID_String *)(param_1 + 0x18));
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  ID_String::clear((ID_String *)(param_1 + 0x1d));
  ID_String::clear((ID_String *)(param_1 + 0x1e));
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  ID_String::clear((ID_String *)(param_1 + 0x21));
  ID_String::clear((ID_String *)(param_1 + 0x22));
  ID_String::clear((ID_String *)(param_1 + 0x23));
  ID_String::clear((ID_String *)(param_1 + 0x24));
  ID_String::clear((ID_String *)(param_1 + 0x25));
  ID_String::clear((ID_String *)(param_1 + 0x26));
  ID_String::clear((ID_String *)(param_1 + 0x27));
  ID_String::clear((ID_String *)(param_1 + 0x28));
  ID_String::clear((ID_String *)(param_1 + 0x29));
  ID_String::clear((ID_String *)(param_1 + 0x2a));
  *param_1 = &PTR_FUN_005c7ac4;
  ExceptionList = local_c;
  return param_1;
}

