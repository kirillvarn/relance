
void __thiscall FUN_004d47a0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  while (param_3 != param_4) {
    piVar1 = (int *)*param_3;
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    FUN_004d0470();
    FUN_005b7e1d(param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    param_3 = piVar1;
  }
  *param_2 = param_3;
  return;
}

