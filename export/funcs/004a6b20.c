
void __fastcall FUN_004a6b20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bccf1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d462c;
  param_1[0x1f] = &PTR_OnReceive_005d461c;
  param_1[0xcb] = &PTR_LAB_005d4614;
  local_4 = 1;
  FUN_00577c30(param_1 + 0xcb);
  local_4 = local_4 & 0xffffff00;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

