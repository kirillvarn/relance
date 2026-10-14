
void __thiscall FUN_0042c750(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    do {
      FUN_0042c750(param_2[2]);
      piVar1 = (int *)*param_2;
      param_2[3] = (int)&PTR_FUN_005ca36c;
      FUN_005b7e1d(param_2);
      param_2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 8));
  }
  return;
}

