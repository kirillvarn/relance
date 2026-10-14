
void __fastcall FUN_00464f40(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bb064;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005cfac4;
  param_1[0x1f] = &PTR_OnReceive_005cfab8;
  local_4 = 4;
  FUN_005b7ec6(param_1 + 0xd9,0xc,4,~RenderDisplayList_exref);
  piVar1 = (int *)param_1[0xd7];
  piVar2 = (int *)*piVar1;
  local_4._0_1_ = 3;
  while (piVar2 != piVar1) {
    puVar5 = (undefined4 *)FUN_0053ab20(local_14,0);
    FUN_0046d680(local_10,*puVar5);
  }
  FUN_005b7e1d(param_1[0xd7]);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  piVar1 = (int *)param_1[0xd4];
  piVar2 = (int *)*piVar1;
  local_4._0_1_ = 2;
  while (piVar2 != piVar1) {
    puVar5 = (undefined4 *)FUN_0053ab20(local_10,0);
    FUN_0046d680(local_14,*puVar5);
  }
  FUN_005b7e1d(param_1[0xd4]);
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  piVar1 = (int *)param_1[0xd1];
  piVar2 = (int *)*piVar1;
  local_4._0_1_ = 1;
  while (piVar2 != piVar1) {
    puVar5 = (undefined4 *)FUN_0053ab20(local_10,0);
    FUN_0046d680(local_14,*puVar5);
  }
  FUN_005b7e1d(param_1[0xd1]);
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  puVar5 = (undefined4 *)param_1[0xce];
  local_4 = (uint)local_4._1_3_ << 8;
  puVar4 = (undefined4 *)*puVar5;
  while (puVar4 != puVar5) {
    puVar3 = (undefined4 *)*puVar4;
    FUN_0046d680(local_10,puVar4);
    puVar4 = puVar3;
  }
  FUN_005b7e1d(param_1[0xce]);
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

