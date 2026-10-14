
int __thiscall FUN_0046d430(int param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_4 [4];
  
  piVar1 = (int *)FUN_0041bd90(param_2);
  piVar4 = *(int **)(param_1 + 4);
  if ((int *)piVar4[1] != *(int **)(param_1 + 8)) {
    piVar3 = (int *)piVar4[1];
    do {
      if ((uint)piVar3[3] < *param_2) {
        piVar2 = (int *)piVar3[2];
      }
      else {
        piVar2 = (int *)*piVar3;
        piVar4 = piVar3;
      }
      piVar3 = piVar2;
    } while (piVar2 != *(int **)(param_1 + 8));
  }
  iVar5 = 0;
  piVar3 = piVar4;
  while (piVar3 != piVar1) {
    iVar5 = iVar5 + 1;
    if (*(char *)(piVar3[2] + 0x11) == '\0') {
      piVar3 = (int *)FUN_0046e8e0(piVar3[2]);
    }
    else {
      piVar2 = (int *)piVar3[1];
      if (piVar3 == (int *)piVar2[2]) {
        do {
          piVar3 = piVar2;
          piVar2 = (int *)piVar3[1];
        } while (piVar3 == (int *)piVar2[2]);
      }
      if ((int *)piVar3[2] != piVar2) {
        piVar3 = piVar2;
      }
    }
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (piVar3 = *(int **)(param_1 + 4), piVar4 == (int *)*piVar3)) && (piVar1 == piVar3)) {
    piVar4 = (int *)piVar3[1];
    if (piVar4 != *(int **)(param_1 + 8)) {
      do {
        FUN_0046e380(piVar4[2]);
        piVar1 = (int *)*piVar4;
        FUN_005b7e1d(piVar4);
        piVar4 = piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 8));
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    return iVar5;
  }
  if (piVar4 == piVar1) {
    return iVar5;
  }
  do {
    FUN_00595150();
    FUN_0046dfb0(local_4,piVar4);
  } while (piVar4 != piVar1);
  return iVar5;
}

