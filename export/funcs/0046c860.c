
void __thiscall FUN_0046c860(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  while (param_3 != param_4) {
    piVar1 = (int *)*param_3;
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    if ((undefined4 *)param_3[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_3[2])(1);
      param_3[2] = 0;
    }
    FUN_005b7e1d(param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    param_3 = piVar1;
  }
  *param_2 = param_3;
  return;
}

