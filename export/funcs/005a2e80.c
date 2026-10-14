
void __fastcall FUN_005a2e80(int *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    FUN_005b7e1d(param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_005b7e1d(param_1[4]);
    param_1[4] = 0;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  return;
}

