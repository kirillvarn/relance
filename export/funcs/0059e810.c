
undefined4 __thiscall FUN_0059e810(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = operator_new(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 0;
    *piVar1 = 0;
    piVar1[2] = param_2;
  }
  if (param_1[2] == 0) {
    param_1[1] = (int)piVar1;
  }
  else {
    *(int **)(param_1[2] + 4) = piVar1;
  }
  *piVar1 = param_1[2];
  param_1[2] = (int)piVar1;
  piVar1[1] = 0;
  *param_1 = *param_1 + 1;
  return 1;
}

