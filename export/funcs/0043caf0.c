
void FUN_0043caf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b94c1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    piVar4 = operator_new(0x18);
    *piVar4 = (int)piVar4;
    piVar4[1] = (int)piVar4;
    param_1[4] = piVar4;
    param_1[5] = 0;
    puVar1 = (undefined4 *)param_2[4];
    iVar3 = *piVar4;
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      piVar4 = *(int **)(iVar3 + 4);
      piVar5 = operator_new(0x18);
      *piVar5 = iVar3;
      if (piVar4 == (int *)0x0) {
        piVar4 = piVar5;
      }
      piVar5[1] = (int)piVar4;
      *(int **)(iVar3 + 4) = piVar5;
      *(int **)piVar5[1] = piVar5;
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = puVar2[2];
        piVar5[3] = puVar2[3];
        piVar5[4] = puVar2[4];
        piVar5[5] = puVar2[5];
      }
      param_1[5] = param_1[5] + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

