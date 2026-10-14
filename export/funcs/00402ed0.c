
undefined4 * __fastcall FUN_00402ed0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    puVar2 = operator_new(0x28);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      return puVar2;
    }
    return (undefined4 *)0x0;
  }
  if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
    *param_1 = *piVar1;
  }
  else {
    *(undefined4 *)piVar1[1] = *piVar1;
  }
  if (*piVar1 == 0) {
    param_1[1] = piVar1[1];
    param_1[2] = param_1[2] + -1;
    return piVar1;
  }
  *(int *)(*piVar1 + 4) = piVar1[1];
  param_1[2] = param_1[2] + -1;
  return piVar1;
}

