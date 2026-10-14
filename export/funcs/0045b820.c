
void __fastcall FUN_0045b820(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ba328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005cea44;
  param_1[0x1f] = &PTR_OnReceive_005cea38;
  param_1[0xcb] = &PTR_FUN_005cea30;
  param_1[0xcc] = &PTR_LAB_005cea24;
  param_1[0xd4] = &PTR_LAB_005cea18;
  local_4 = 0;
  if (DAT_0066d3f0 == param_1) {
    DAT_0066d3f0 = (undefined4 *)0x0;
  }
  FUN_005b7e1d(param_1[0xd6]);
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  FUN_005b7e1d(param_1[0xce]);
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

