
void FUN_00445dc0(int *param_1,int *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
  }
  return;
}

