
void __fastcall FUN_004688b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005bb519;
  local_c = ExceptionList;
  piVar6 = (int *)**(int **)(param_1 + 4);
  local_4 = 3;
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  local_18 = param_1;
  if (piVar6 != *(int **)(param_1 + 4)) {
    do {
      iVar1 = piVar6[2];
      local_1c = iVar1;
      FUN_0046bb50();
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_005556b0(&local_1c);
      piVar6 = (int *)*piVar6;
      ppvVar4 = ExceptionList;
    } while (piVar6 != (int *)*(int *)(param_1 + 4));
  }
  ExceptionList = ppvVar4;
  FUN_00535980();
  FUN_004686e0();
  FUN_004684e0();
  piVar6 = (int *)**(int **)(param_1 + 0x10);
  if (piVar6 != *(int **)(param_1 + 0x10)) {
    do {
      iVar1 = piVar6[2];
      if (iVar1 != 0) {
        local_1c = *(int *)(iVar1 + 4);
        puVar5 = (undefined4 *)FUN_0053e430(local_14);
        FUN_0046c860(local_10,*puVar5,local_1c);
        FUN_005b7e1d(*(undefined4 *)(iVar1 + 4));
        *(undefined4 *)(iVar1 + 4) = 0;
        *(undefined4 *)(iVar1 + 8) = 0;
        FUN_005b7e1d(iVar1);
      }
      piVar2 = (int *)*piVar6;
      *(int **)piVar6[1] = piVar2;
      *(int *)(*piVar6 + 4) = piVar6[1];
      FUN_005b7e1d(piVar6);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x10));
  }
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  local_4._0_1_ = 2;
  puVar5 = (undefined4 *)FUN_0053e430(local_10);
  FUN_0046c860(local_14,*puVar5,uVar3);
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  local_4._0_1_ = 1;
  puVar5 = (undefined4 *)FUN_0053e430(local_10);
  FUN_0046c860(local_14,*puVar5,uVar3);
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004a2f80(local_10,**(undefined4 **)(param_1 + 0x10),*(undefined4 **)(param_1 + 0x10));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_4 = 0xffffffff;
  FUN_004a2f80(local_10,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

