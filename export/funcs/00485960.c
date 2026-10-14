
undefined4 * __fastcall FUN_00485960(undefined4 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc121;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059f860();
  param_1[0xcb] = &PTR_LAB_005cbed8;
  *(undefined1 *)(param_1 + 0xd0) = local_11;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined1 *)(param_1 + 0xd4) = local_11;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  FUN_005a2100();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005a2100();
  *(undefined1 *)((int)param_1 + 0x33d) = 1;
  *(undefined1 *)((int)param_1 + 0x33e) = 1;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *param_1 = &PTR_FUN_005d1d5c;
  param_1[0x1f] = &PTR_OnReceive_005d1d50;
  param_1[0xcb] = &PTR_LAB_005d1d48;
  ExceptionList = local_c;
  return param_1;
}

