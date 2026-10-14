
undefined4 * __fastcall FUN_004a3ff0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bcb84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059f860();
  param_1[0xcb] = &PTR_LAB_005cbed8;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0042cc10();
  local_4 = CONCAT31(local_4._1_3_,2);
  ID_String::clear((ID_String *)(param_1 + 0x19a));
  *param_1 = &PTR_FUN_005d3fdc;
  param_1[0x1f] = &PTR_OnReceive_005d3fd0;
  param_1[0xcb] = &PTR_LAB_005d3fc8;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x198] = 0xffffffff;
  param_1[0x199] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0x158] = 0;
  FUN_0042cc30();
  *(undefined1 *)(param_1 + 0x19b) = 0;
  ExceptionList = local_c;
  return param_1;
}

