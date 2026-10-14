
void __thiscall FUN_0053aab0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_3;
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  if (param_3[4] != 0) {
    FUN_004f7a90();
    param_3[4] = 0;
  }
  piVar2 = (int *)param_3[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_3[3] = 0;
  }
  if (param_3[5] != 0) {
    FUN_00537ad0();
    param_3[5] = 0;
  }
  param_3[2] = 0;
  FUN_005b7e1d(param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *param_2 = iVar1;
  return;
}

