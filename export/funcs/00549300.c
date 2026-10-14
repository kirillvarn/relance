
undefined4 * __fastcall FUN_00549300(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c1238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = &PTR_LAB_005cbed8;
  local_4 = 0;
  FUN_00517180();
  local_4._0_1_ = 1;
  FUN_00518600();
  local_4._0_1_ = 2;
  FUN_0051a210();
  local_4._0_1_ = 3;
  FUN_0051ad30();
  local_4._0_1_ = 4;
  FUN_0051b2f0();
  param_1[0x1d3] = 0x3f800000;
  param_1[0x1d5] = 0x3fc00000;
  param_1[0x1d6] = 0x3f59999a;
  param_1[0x1d7] = 0x42c80000;
  param_1[0x183] = &PTR_LAB_005e061c;
  local_4._0_1_ = 5;
  FUN_0051e100();
  local_4._0_1_ = 6;
  FUN_0051b2f0();
  param_1[0x269] = &PTR_LAB_005e0594;
  local_4._0_1_ = 7;
  FUN_0051ea20();
  *param_1 = &PTR_LAB_005e0554;
  param_1[1] = &PTR_LAB_005e0548;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x2e8] = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  if (DAT_00679744 != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)&DAT_00679744,(Watchable *)0x0);
  }
  *(undefined1 *)((int)param_1 + 0xbaa) = 0;
  *(undefined1 *)((int)param_1 + 0xbab) = 0;
  *(undefined1 *)((int)param_1 + 0xba9) = 0;
  *(undefined1 *)(param_1 + 0x2ea) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[0x2e9] = 1;
  ExceptionList = local_c;
  return param_1;
}

