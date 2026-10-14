
void __fastcall FUN_0056d360(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c2bd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e2a84;
  param_1[0x1f] = &PTR_LAB_005e2a6c;
  param_1[0x20] = &PTR_LAB_005e2a64;
  local_4 = 0x15;
  FUN_00489160(param_1[0xd7],param_1[0xd8]);
  FUN_005b7e1d(param_1[0xd7]);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  local_4._0_1_ = 0x14;
  FUN_0046ba90();
  local_4._0_1_ = 0x13;
  FUN_0046ba90();
  local_4._0_1_ = 0x12;
  FUN_0046ba90();
  local_4._0_1_ = 0x11;
  FUN_0046ba90();
  local_4._0_1_ = 0x10;
  FUN_0046ba90();
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00591ef0();
  local_4 = 0xffffffff;
  FUN_00591ba0();
  ExceptionList = local_c;
  return;
}

