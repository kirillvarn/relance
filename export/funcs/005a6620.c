
int FUN_005a6620(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_a0 [2];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  FmtStr local_84 [24];
  FmtStr local_6c [24];
  undefined1 local_54;
  undefined1 local_50 [4];
  int local_4c;
  int local_48;
  undefined4 local_44;
  FmtStr local_40 [24];
  FmtStr local_28 [24];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c5248;
  local_c = ExceptionList;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  ExceptionList = &local_c;
  FUN_005a5e40();
  FUN_005a5e40();
  local_98[0] = *param_1;
  local_4 = 0;
  FUN_005a6b10(local_50);
  local_4._0_1_ = 1;
  FmtStr::FmtStr(local_84,local_40);
  local_4._0_1_ = 2;
  FmtStr::FmtStr(local_6c,local_28);
  local_54 = local_10;
  local_4._0_1_ = 3;
  FUN_005a6ea0(local_a0,local_98);
  local_4._0_1_ = 5;
  FmtStr::~FmtStr(local_6c);
  local_4._0_1_ = 4;
  FmtStr::~FmtStr(local_84);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005a6920(local_90,local_8c);
  FUN_005b7e1d(local_90);
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_4 = 7;
  FmtStr::~FmtStr(local_28);
  local_4 = CONCAT31(local_4._1_3_,6);
  FmtStr::~FmtStr(local_40);
  iVar1 = local_48;
  local_4 = 0xffffffff;
  for (iVar2 = local_4c; iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_005a7f60(0);
  }
  FUN_005b7e1d(local_4c);
  ExceptionList = local_c;
  return local_a0[0] + 0x10;
}

