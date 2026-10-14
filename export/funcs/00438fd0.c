
void __fastcall FUN_00438fd0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puStack_20;
  int local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005b92ee;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  local_1c = param_1;
  FUN_00439260();
  local_4._0_1_ = 1;
  FUN_0043bea0(&puStack_20,**(undefined4 **)(param_1 + 0x24),*(undefined4 **)(param_1 + 0x24));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  puStack_20 = (undefined4 *)*puVar1;
  local_4 = (uint)local_4._1_3_ << 8;
  if (((*(int *)(param_1 + 0x1c) == 0) ||
      (piVar3 = (int *)FUN_0053e430(auStack_18), puStack_20 != (undefined4 *)*piVar3)) ||
     (puVar1 != *(undefined4 **)(param_1 + 0x10))) {
    while (puStack_20 != puVar1) {
      puVar4 = (undefined4 *)FUN_00526960(auStack_18,0);
      FUN_0046c8c0(auStack_10,*puVar4);
    }
  }
  else {
    FUN_0043bf90((*(undefined4 **)(param_1 + 0x10))[1]);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(*(int *)(param_1 + 0x10) + 8) = *(int *)(param_1 + 0x10);
    FUN_0053e430(auStack_14);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar1 = *(undefined4 **)(param_1 + 4);
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)*puVar1;
  while (puVar4 != puVar1) {
    puVar2 = (undefined4 *)*puVar4;
    FUN_0043bf50(auStack_10,puVar4);
    puVar4 = puVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = pvStack_c;
  return;
}

