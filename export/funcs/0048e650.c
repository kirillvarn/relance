
void __fastcall FUN_0048e650(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_18;
  undefined4 *local_14;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bc7d9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d2f84;
  param_1[0x1f] = &PTR_OnReceive_005d2f74;
  param_1[0xcb] = &PTR_LAB_005d2f6c;
  param_1[0xcc] = &PTR_OnDisconnect_005d2f60;
  local_4 = 0x14;
  local_14 = param_1;
  FUN_005b7e1d(param_1[0x35b]);
  param_1[0x35b] = 0;
  FUN_005b7e1d(param_1[0x35c]);
  param_1[0x35c] = 0;
  FUN_005b7e1d(param_1[0x3b8]);
  param_1[0x3b8] = 0;
  FUN_005b7e1d(param_1[0x3b9]);
  param_1[0x3b9] = 0;
  FUN_005b7e1d(param_1[0x350]);
  param_1[0x350] = 0;
  FUN_005b7e1d(param_1[0x351]);
  param_1[0x351] = 0;
  if (param_1[0xd5] != -1) {
    FUN_0059eee0();
  }
  if (param_1[0xdf] != -1) {
    FUN_0059eee0();
  }
  if (param_1[0xe9] != -1) {
    FUN_0059eee0();
  }
  if (param_1[0x228] != -1) {
    FUN_0059eee0();
  }
  if (param_1[0x308] != -1) {
    FUN_0059eee0();
  }
  iVar1 = 10;
  do {
    FUN_0059eee0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = param_1[0x205];
  while (iVar1 != 0) {
    FUN_0053e430(&local_18);
    FUN_005b7e1d(*(undefined4 *)(local_18 + 8));
    FUN_00516f70(local_10,local_18);
    iVar1 = param_1[0x205];
  }
  iVar1 = param_1[0x101];
  while (iVar1 != 0) {
    FUN_0053e430(&local_18);
    if (*(int *)(local_18 + 8) != 0) {
      FUN_0048eb80(1);
    }
    FUN_00516f70(local_10,local_18);
    iVar1 = param_1[0x101];
  }
  puVar2 = param_1 + 0x12e;
  for (iVar1 = 99; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x191;
  for (iVar1 = 99; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00425a20();
  if (DAT_006720ac != (int *)0x0) {
    if (DAT_006720b8 != 0) {
      (**(code **)(*DAT_006720ac + 0x10))(DAT_006720ac,&DAT_006720b8);
      DAT_006720b8 = 0;
    }
    if (DAT_006720bc != 0) {
      (**(code **)(*DAT_006720ac + 0x10))(DAT_006720ac,&DAT_006720bc);
      DAT_006720bc = 0;
    }
    if (DAT_006720c0 != 0) {
      (**(code **)(*DAT_006720ac + 0x10))(DAT_006720ac,&DAT_006720c0);
      DAT_006720c0 = 0;
    }
    (**(code **)(*DAT_006720ac + 8))(DAT_006720ac);
    DAT_006720ac = (int *)0x0;
  }
  if (DAT_006720b0 != (int *)0x0) {
    (**(code **)(*DAT_006720b0 + 8))(DAT_006720b0);
    DAT_006720b0 = (int *)0x0;
  }
  if (DAT_006720b4 != (int *)0x0) {
    (**(code **)(*DAT_006720b4 + 8))(DAT_006720b4);
    DAT_006720b4 = (int *)0x0;
  }
  iVar1 = param_1[0x3ff];
  iVar3 = param_1[0x3fe];
  local_4._0_1_ = 0x13;
  for (; iVar3 != iVar1; iVar3 = iVar3 + 8) {
    FUN_004a3f50(0);
  }
  FUN_005b7e1d(param_1[0x3fe]);
  param_1[0x3fe] = 0;
  param_1[0x3ff] = 0;
  param_1[0x400] = 0;
  iVar1 = param_1[0x3fb];
  iVar3 = param_1[0x3fa];
  local_4._0_1_ = 0x12;
  for (; iVar3 != iVar1; iVar3 = iVar3 + 8) {
    FUN_004a3f50(0);
  }
  FUN_005b7e1d(param_1[0x3fa]);
  param_1[0x3fa] = 0;
  param_1[0x3fb] = 0;
  param_1[0x3fc] = 0;
  FUN_005b7e1d(param_1[0x3f6]);
  param_1[0x3f6] = 0;
  param_1[0x3f7] = 0;
  param_1[0x3f8] = 0;
  local_4._0_1_ = 0x10;
  *(undefined ***)(param_1 + 800) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 800));
  local_4._0_1_ = 0xf;
  FUN_0059ef20();
  FUN_005b7e1d(param_1[0x2e4]);
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e6] = 0;
  FUN_005b7e1d(param_1[0x2d7]);
  param_1[0x2d7] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  local_4._0_1_ = 0xc;
  FUN_005b7ec6(param_1 + 0x24c,0x28,10,FUN_0059ef20);
  local_4._0_1_ = 0xb;
  FUN_0059ef20();
  local_4._0_1_ = 10;
  FUN_004a2c70();
  FUN_005b7e1d(param_1[0x21b]);
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  FUN_005b7e1d(param_1[0x217]);
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  FUN_005b7e1d(param_1[0x213]);
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  local_4._0_1_ = 6;
  FUN_004a2f80(local_10,*(undefined4 *)param_1[0x204],(undefined4 *)param_1[0x204]);
  FUN_005b7e1d(param_1[0x204]);
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  local_4._0_1_ = 5;
  FUN_004a2f80(local_10,*(undefined4 *)param_1[0x100],(undefined4 *)param_1[0x100]);
  FUN_005b7e1d(param_1[0x100]);
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  local_4._0_1_ = 4;
  FUN_0059ef20();
  local_4._0_1_ = 3;
  FUN_0059ef20();
  local_4._0_1_ = 2;
  FUN_0059ef20();
  local_4._0_1_ = 1;
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0xcd),(uchar *)param_1[0xce],param_1[0xcf]);
  FUN_005b7e1d(param_1[0xce]);
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = pvStack_c;
  return;
}

