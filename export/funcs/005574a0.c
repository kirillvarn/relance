
void __fastcall FUN_005574a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,7);
    (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
    *param_1 = 0;
    FUN_0042e160();
    param_1[1] = 0;
  }
  return;
}

