
void __fastcall FUN_00403200(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  while (piVar1 = (int *)param_1[3], piVar1 != (int *)0x0) {
    if ((int *)piVar1[1] == (int *)0x0) {
      param_1[3] = *piVar1;
    }
    else {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 == 0) {
      param_1[4] = piVar1[1];
    }
    else {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    param_1[5] = param_1[5] + -1;
    puVar2 = (undefined4 *)param_1[1];
    param_1[1] = (int)piVar1;
    if (puVar2 == (undefined4 *)0x0) {
      *param_1 = (int)piVar1;
    }
    else {
      *puVar2 = piVar1;
    }
    *piVar1 = 0;
    piVar1[1] = (int)puVar2;
    param_1[2] = param_1[2] + 1;
  }
  while (piVar1 = (int *)*param_1, piVar1 != (int *)0x0) {
    if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
      *param_1 = *piVar1;
    }
    else {
      *(undefined4 *)piVar1[1] = *piVar1;
    }
    if (*piVar1 == 0) {
      param_1[1] = piVar1[1];
    }
    else {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    param_1[2] = param_1[2] + -1;
    FUN_005b7e1d(piVar1[5]);
    FUN_005b7e1d(piVar1[2]);
    FUN_005b7e1d(piVar1);
  }
  return;
}

