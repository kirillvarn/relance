
void __fastcall FUN_00474420(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bbb88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d08e4;
  param_1[0x1f] = &PTR_OnReceive_005d08d8;
  DAT_0067dccc = DAT_0067dccc + -1;
  local_4 = 0;
  FUN_0059d8c0(0);
  FUN_0042d6d0();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

