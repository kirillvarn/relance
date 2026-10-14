
void __thiscall FUN_00404d50(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)param_1[1];
    param_1[1] = (int)param_2;
  }
  else {
    piVar1 = *(int **)(param_3 + 4);
    *(int **)(param_3 + 4) = param_2;
  }
  if (piVar1 == (int *)0x0) {
    *param_1 = (int)param_2;
    *param_2 = param_3;
    param_2[1] = 0;
    param_1[2] = param_1[2] + 1;
    return;
  }
  *piVar1 = (int)param_2;
  *param_2 = param_3;
  param_2[1] = (int)piVar1;
  param_1[2] = param_1[2] + 1;
  return;
}

