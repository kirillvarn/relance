
void __fastcall FUN_00469d20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bb6e8;
  local_c = ExceptionList;
  piVar6 = (int *)**(int **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  local_18 = param_1;
  if (piVar6 != *(int **)(param_1 + 4)) {
    do {
      iVar1 = piVar6[4];
      if (iVar1 != 0) {
        uVar2 = *(undefined4 *)(iVar1 + 4);
        puVar5 = (undefined4 *)FUN_0053e430(local_14);
        FUN_0046c860(local_10,*puVar5,uVar2);
        FUN_005b7e1d(*(undefined4 *)(iVar1 + 4));
        *(undefined4 *)(iVar1 + 4) = 0;
        *(undefined4 *)(iVar1 + 8) = 0;
        FUN_005b7e1d(iVar1);
      }
      piVar6[4] = 0;
      FUN_0046c8c0(&local_1c,piVar6);
      piVar6 = local_1c;
      ppvVar4 = ExceptionList;
    } while (local_1c != *(int **)(param_1 + 4));
  }
  ExceptionList = ppvVar4;
  piVar6 = *(int **)(param_1 + 4);
  local_1c = (int *)*piVar6;
  local_4 = 0xffffffff;
  piVar3 = local_1c;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (local_1c = piVar3, piVar3 != piVar6) {
      FUN_0052afa0();
      FUN_0046c8c0(local_14,piVar3);
      piVar3 = local_1c;
    }
  }
  else {
    FUN_0046d8e0(piVar6[1]);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_0053e430(local_10);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

