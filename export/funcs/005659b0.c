
void __fastcall FUN_005659b0(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != -1) {
    if (param_1[2] != -1) {
      if (param_1[3] != 0) {
        (**(code **)(*(int *)param_1[4] + 0x44))((int *)param_1[4],param_1[3]);
        param_1[3] = 0;
      }
      (**(code **)(*(int *)param_1[4] + 0x10))((int *)param_1[4],param_1[2]);
    }
    (**(code **)(*(int *)param_1[4] + 0x10))((int *)param_1[4],*param_1);
    *param_1 = -1;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  return;
}

