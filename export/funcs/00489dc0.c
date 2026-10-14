
void FUN_00489dc0(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x60))();
    (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
    *param_1 = 0;
  }
  return;
}

