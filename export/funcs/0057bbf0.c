
void __fastcall FUN_0057bbf0(undefined4 *param_1)

{
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c3ea2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005e4844;
  param_1[0x1f] = &PTR_OnReceive_005e4838;
  param_1[0x126] = &PTR_LAB_005e4830;
  local_4 = 6;
  if ((undefined4 *)param_1[0x14b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14b])(1);
  }
  local_4._0_1_ = 5;
  FUN_0057f1e0(local_10,*(undefined4 *)param_1[0x146],(undefined4 *)param_1[0x146]);
  FUN_005b7e1d(param_1[0x146]);
  param_1[0x146] = 0;
  param_1[0x149] = 0;
  FUN_005b7e1d(param_1[0x147]);
  param_1[0x147] = 0;
  local_4._0_1_ = 4;
  FUN_0046c860(local_10,*(undefined4 *)param_1[0x140],(undefined4 *)param_1[0x140]);
  FUN_005b7e1d(param_1[0x140]);
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  local_4._0_1_ = 3;
  FUN_0046c860(local_10,*(undefined4 *)param_1[0x13b],(undefined4 *)param_1[0x13b]);
  FUN_005b7e1d(param_1[0x13b]);
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  local_4._0_1_ = 2;
  FUN_0046c860(local_10,*(undefined4 *)param_1[0x138],(undefined4 *)param_1[0x138]);
  FUN_005b7e1d(param_1[0x138]);
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  FUN_005b7e1d(param_1[0x132]);
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00576010();
  *param_1 = &PTR_FUN_005e476c;
  param_1[0x1f] = &PTR_OnReceive_005e4760;
  local_4 = 7;
  FUN_0046c860(local_10,*(undefined4 *)param_1[0x123],(undefined4 *)param_1[0x123]);
  FUN_005b7e1d(param_1[0x123]);
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  local_4 = 0xffffffff;
  FUN_00579620();
  ExceptionList = pvStack_c;
  return;
}

