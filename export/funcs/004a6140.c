
void __fastcall FUN_004a6140(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bcc58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d443c;
  param_1[0x1f] = &PTR_OnReceive_005d442c;
  param_1[0xcb] = &PTR_LAB_005d4424;
  local_4 = 0;
  DAT_0067dcc8 = 0;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

