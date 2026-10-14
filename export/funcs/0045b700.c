
undefined4 * __fastcall FUN_0045b700(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba314;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059f860();
  param_1[0xcb] = &PTR_LAB_005cbed8;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0055dec0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0055e340();
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0xea] = 0;
  param_1[0x143] = 0;
  param_1[0xeb] = 0;
  param_1[0x144] = 0;
  param_1[0x148] = 0;
  param_1[0x142] = 0;
  param_1[0x149] = 0;
  *(undefined1 *)(param_1 + 0x14b) = 0;
  *(undefined1 *)((int)param_1 + 0x52d) = 0;
  *(undefined1 *)((int)param_1 + 0x52e) = 0;
  *param_1 = &PTR_FUN_005cea44;
  param_1[0x1f] = &PTR_OnReceive_005cea38;
  param_1[0xcb] = &PTR_FUN_005cea30;
  param_1[0xcc] = &PTR_LAB_005cea24;
  param_1[0xd4] = &PTR_LAB_005cea18;
  DAT_0066d3f0 = param_1;
  *(undefined1 *)((int)param_1 + 0x52f) = 0;
  ExceptionList = local_c;
  return param_1;
}

