
int __thiscall FUN_00575520(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[1] != 0) {
        puVar1[1] = puVar1[1] + -1;
      }
      if (puVar1[1] == 0) {
        puVar1[1] = 1;
        (**(code **)*puVar1)(1);
      }
      *param_1 = 0;
    }
    *param_1 = (int)param_2;
    if (param_2 != (undefined4 *)0x0) {
      param_2[1] = param_2[1] + 1;
    }
  }
  return *param_1;
}

