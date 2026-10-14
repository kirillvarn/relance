
void __fastcall FUN_004032a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  while (piVar1 = *(int **)(param_1 + 0x10), piVar1 != (int *)0x0) {
    if ((int *)piVar1[1] == (int *)0x0) {
      *(int *)(param_1 + 0x10) = *piVar1;
    }
    else {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 == 0) {
      *(int *)(param_1 + 0x14) = piVar1[1];
    }
    else {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    puVar2 = *(undefined4 **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar1;
    if (puVar2 == (undefined4 *)0x0) {
      *(int **)(param_1 + 4) = piVar1;
    }
    else {
      *puVar2 = piVar1;
    }
    *piVar1 = 0;
    piVar1[1] = (int)puVar2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  while (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0) {
    if ((int *)piVar1[1] == (int *)0x0) {
      *(int *)(param_1 + 4) = *piVar1;
    }
    else {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 == 0) {
      *(int *)(param_1 + 8) = piVar1[1];
    }
    else {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    FUN_005b7e1d(piVar1[5]);
    FUN_005b7e1d(piVar1[2]);
    FUN_005b7e1d(piVar1);
  }
  return;
}

