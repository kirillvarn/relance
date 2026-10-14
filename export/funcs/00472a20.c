
void __fastcall FUN_00472a20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bbab1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d07bc;
  param_1[0x1f] = &PTR_OnReceive_005d07ac;
  param_1[0xcb] = &PTR_LAB_005d07a4;
  DAT_0067dccc = DAT_0067dccc + -1;
  local_4 = 1;
  FUN_0059d8c0(0);
  local_4 = local_4 & 0xffffff00;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

