
void __fastcall FUN_0056aeb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c27c7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e2934;
  param_1[0x1f] = &PTR_LAB_005e291c;
  param_1[0x20] = &PTR_LAB_005e2914;
  local_4._0_1_ = 0x17;
  local_4._1_3_ = 0;
  FUN_004de730();
  local_4._0_1_ = 0x16;
  FUN_004de730();
  local_4._0_1_ = 0x15;
  FUN_0046ba90();
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
  local_4._0_1_ = 0xf;
  FUN_0046ba90();
  local_4._0_1_ = 0xe;
  FUN_005b7ec6(param_1 + 0xbc,0xc,5,~RenderDisplayList_exref);
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00591ef0();
  local_4 = 0xffffffff;
  FUN_00591ba0();
  ExceptionList = local_c;
  return;
}

