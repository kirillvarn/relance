
void __fastcall FUN_00489cd0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  void **ppvVar5;
  int *piVar6;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bc298;
  piVar6 = *(int **)(param_1 + 4);
  local_4 = 0;
  ppvVar5 = &local_c;
  piVar4 = (int *)*piVar6;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar5, piVar4 != piVar6) {
    piVar1 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    if (piVar4[4] != 0) {
      FUN_00489dc0(piVar4 + 4);
    }
    FUN_005b7e1d(piVar4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    ppvVar5 = ExceptionList;
    piVar4 = piVar1;
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar3 = (undefined4 *)*puVar2;
  local_4 = 0xffffffff;
  while (puVar3 != puVar2) {
    puVar3 = (undefined4 *)*puVar3;
    piVar6 = (int *)FUN_0053ab20(local_10,0);
    piVar6 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_00489f70(0);
    FUN_005b7e1d(piVar6);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

