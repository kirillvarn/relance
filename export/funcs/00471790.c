
void __fastcall FUN_00471790(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bba31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d035c;
  param_1[0x1f] = &PTR_OnReceive_005d0350;
  param_1[0xcb] = &PTR_LAB_005d0348;
  local_4 = 1;
  FUN_00577c30(param_1 + 0xcb);
  local_4 = local_4 & 0xffffff00;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

