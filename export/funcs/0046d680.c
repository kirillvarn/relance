
void __thiscall FUN_0046d680(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  if ((undefined4 *)param_3[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_3[2])(1);
    param_3[2] = 0;
  }
  FUN_005b7e1d(param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *param_2 = iVar1;
  return;
}

