
void __fastcall FUN_005600c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c1afd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e1a4c;
  param_1[0x1f] = &PTR_LAB_005e1a34;
  param_1[0x20] = &PTR_LAB_005e1a2c;
  local_4 = 0x12;
  FUN_0046ba90();
  local_4._0_1_ = 0x11;
  FUN_0046ba90();
  local_4._0_1_ = 0x10;
  FUN_0046ba90();
  local_4._0_1_ = 0xf;
  FUN_0046ba90();
  local_4._0_1_ = 0xe;
  FUN_0046ba90();
  local_4._0_1_ = 0xd;
  FUN_0046ba90();
  local_4._0_1_ = 0xc;
  FUN_0046ba90();
  local_4._0_1_ = 0xb;
  FUN_0046ba90();
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  puVar1 = (undefined4 *)param_1[0x34];
  local_4._0_1_ = 2;
  puVar5 = (undefined4 *)*puVar1;
  while (puVar5 != puVar1) {
    puVar2 = (undefined4 *)*puVar5;
    FUN_0046d680(local_10,puVar5);
    puVar5 = puVar2;
  }
  FUN_005b7e1d(param_1[0x34]);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  piVar3 = (int *)param_1[0x31];
  local_4._0_1_ = 1;
  piVar6 = (int *)*piVar3;
  while (piVar6 != piVar3) {
    piVar4 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_0046ea80(0);
    FUN_005b7e1d(piVar6);
    param_1[0x32] = param_1[0x32] + -1;
    piVar6 = piVar4;
  }
  FUN_005b7e1d(param_1[0x31]);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00591ef0();
  local_4 = 0xffffffff;
  FUN_00591ba0();
  ExceptionList = local_c;
  return;
}

