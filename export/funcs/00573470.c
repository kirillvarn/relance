
void __fastcall FUN_00573470(undefined4 *param_1)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c397b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e2ef4;
  param_1[0x1f] = &PTR_LAB_005e2ed8;
  param_1[0x20] = &PTR_LAB_005e2ed0;
  local_4 = 7;
  FUN_0046c860(local_10,*(undefined4 *)param_1[0x41],(undefined4 *)param_1[0x41]);
  FUN_005b7e1d(param_1[0x41]);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  local_4._0_1_ = 6;
  FUN_0046c860(local_10,*(undefined4 *)param_1[0x3e],(undefined4 *)param_1[0x3e]);
  FUN_005b7e1d(param_1[0x3e]);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00591ef0();
  local_4 = 0xffffffff;
  FUN_00591ba0();
  ExceptionList = local_c;
  return;
}

