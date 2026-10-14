
void __fastcall FUN_00524af0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c012b;
  puVar8 = *(undefined4 **)(param_1 + 0x40);
  local_4 = 0;
  ppvVar5 = &pvStack_c;
  puVar9 = (undefined4 *)*puVar8;
  local_1c = param_1;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar5, puVar9 != puVar8) {
    (**(code **)(*(int *)puVar9[4] + 0x15c))(1);
    puVar6 = (undefined4 *)puVar9[2];
    ppvVar5 = ExceptionList;
    if (*(char *)((int)puVar6 + 0x15) == '\0') {
      cVar1 = *(char *)((int)*puVar6 + 0x15);
      puVar4 = (undefined4 *)*puVar6;
      while (puVar9 = puVar6, cVar1 == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar6 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
      }
    }
    else {
      puVar6 = (undefined4 *)puVar9[1];
      if (puVar9 == (undefined4 *)puVar6[2]) {
        do {
          puVar9 = puVar6;
          puVar6 = (undefined4 *)puVar9[1];
        } while (puVar9 == (undefined4 *)puVar6[2]);
      }
      if ((undefined4 *)puVar9[2] != puVar6) {
        puVar9 = puVar6;
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0x40);
  piVar3 = (int *)*piVar2;
  if (*(int *)(param_1 + 0x4c) == 0) {
    while (piVar3 != piVar2) {
      puVar8 = (undefined4 *)FUN_00526960(auStack_14,0);
      FUN_0046c8c0(auStack_10,*puVar8);
    }
  }
  else {
    FUN_00527400(piVar2[1]);
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(int *)(*(int *)(param_1 + 0x40) + 8) = *(int *)(param_1 + 0x40);
    FUN_0053e430(auStack_18);
  }
  piVar2 = *(int **)(param_1 + 0x40);
  piVar3 = (int *)*piVar2;
  local_4 = 0xffffffff;
  if (((*(int *)(param_1 + 0x4c) == 0) ||
      (piVar7 = (int *)FUN_0053e430(auStack_10), piVar3 != (int *)*piVar7)) ||
     (piVar2 != *(int **)(param_1 + 0x40))) {
    while (piVar3 != piVar2) {
      puVar8 = (undefined4 *)FUN_00526960(auStack_18,0);
      FUN_0046c8c0(&local_1c,*puVar8);
    }
  }
  else {
    FUN_00527400((*(int **)(param_1 + 0x40))[1]);
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(int *)(*(int *)(param_1 + 0x40) + 8) = *(int *)(param_1 + 0x40);
    FUN_0053e430(auStack_14);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x44) = 0;
  ExceptionList = pvStack_c;
  return;
}

