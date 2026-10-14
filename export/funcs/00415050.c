
void __fastcall FUN_00415050(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  param_1[1] = 0;
  return;
}

