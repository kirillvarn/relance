
void __thiscall FUN_005a76a0(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 != *(int **)(param_1 + 8)) {
    do {
      FUN_005a76a0(param_2[2]);
      piVar1 = (int *)*param_2;
      FUN_005a68c0();
      FUN_005b7e1d(param_2);
      param_2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 8));
  }
  return;
}

