
void __fastcall FUN_0058ca00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_005c4730;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e511c;
  param_1[0x1f] = &PTR_OnReceive_005e5110;
  iVar1 = param_1[0x15a];
  iVar2 = param_1[0x159];
  local_4 = 4;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 100) {
    FUN_00444ee0();
  }
  FUN_005b7e1d(param_1[0x159]);
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  iVar1 = param_1[0x132];
  iVar2 = param_1[0x131];
  local_4._0_1_ = 3;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    FUN_00599a60();
  }
  FUN_005b7e1d(param_1[0x131]);
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  FUN_005b7e1d(param_1[0x12d]);
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  FUN_005b7e1d(param_1[0x129]);
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  iVar1 = param_1[0x126];
  iVar2 = param_1[0x125];
  local_4 = (uint)local_4._1_3_ << 8;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_0058e360();
  }
  FUN_005b7e1d(param_1[0x125]);
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  local_4 = 0xffffffff;
  FUN_00579620();
  ExceptionList = local_c;
  return;
}

