
void __fastcall FUN_00403190(int *param_1)

{
  int *piVar1;
  
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
    FUN_004031e0();
    FUN_005b7e1d(piVar1);
  }
  return;
}

