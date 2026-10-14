
undefined4 * __fastcall FUN_00587e40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059f860();
  local_4 = 0;
  FUN_0040f150();
  *(undefined1 *)((int)param_1 + 0x413) = 0;
  *(undefined1 *)((int)param_1 + 0x412) = 0;
  *(undefined1 *)((int)param_1 + 0x411) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined1 *)((int)param_1 + 0x417) = 0;
  *(undefined1 *)((int)param_1 + 0x416) = 0;
  *(undefined1 *)((int)param_1 + 0x415) = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)((int)param_1 + 0x345) = 0;
  *(undefined1 *)((int)param_1 + 0x346) = 0;
  *(undefined1 *)((int)param_1 + 0x347) = 0;
  param_1[0x106] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)((int)param_1 + 0x34b) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined1 *)((int)param_1 + 0x349) = 0;
  param_1[0x107] = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *param_1 = &PTR_FUN_005e4d7c;
  param_1[0x1f] = &PTR_OnReceive_005e4d70;
  *(undefined1 *)((int)param_1 + 0x34a) = 1;
  ExceptionList = local_c;
  return param_1;
}

