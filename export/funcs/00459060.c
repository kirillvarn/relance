
void __fastcall FUN_00459060(int param_1)

{
  int iVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ba198;
  local_c = ExceptionList;
  piVar7 = (int *)**(int **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  local_1c = param_1;
  if (piVar7 != *(int **)(param_1 + 4)) {
    do {
      iVar4 = *(int *)((int)piVar7 + 0x18);
      while (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 8);
        FUN_005b7e1d(iVar4);
        iVar4 = iVar1;
      }
      if (*(char *)(*(int *)((int)piVar7 + 8) + 0x1d) == '\0') {
        iVar4 = FUN_0046e8c0(*(int *)((int)piVar7 + 8));
LAB_004590d4:
        piVar7 = (int *)iVar4;
      }
      else {
        iVar4 = *(int *)((int)piVar7 + 4);
        if (piVar7 == (int *)*(int *)(iVar4 + 8)) {
          do {
            piVar7 = (int *)iVar4;
            iVar4 = *(int *)((int)piVar7 + 4);
          } while (piVar7 == (int *)*(int *)(iVar4 + 8));
        }
        if (*(int *)((int)piVar7 + 8) != iVar4) goto LAB_004590d4;
      }
      ppvVar3 = ExceptionList;
    } while (piVar7 != (int *)*(int *)(param_1 + 4));
  }
  ExceptionList = ppvVar3;
  piVar7 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar7;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (piVar2 != piVar7) {
      puVar6 = (undefined4 *)FUN_00459b00(local_18,0);
      FUN_0046dba0(local_14,*puVar6);
    }
  }
  else {
    FUN_00459d70(piVar7[1]);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  piVar7 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar7;
  local_4 = 0xffffffff;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (piVar5 = (int *)FUN_0053e430(local_14), piVar2 != (int *)*piVar5)) ||
     (piVar7 != *(int **)(param_1 + 4))) {
    while (piVar2 != piVar7) {
      puVar6 = (undefined4 *)FUN_00459b00(&local_1c,0);
      FUN_0046dba0(local_10,*puVar6);
    }
  }
  else {
    FUN_00459d70((*(int **)(param_1 + 4))[1]);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_0053e430(local_18);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

