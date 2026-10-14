
undefined4 * __thiscall FUN_00447620(undefined4 *param_1,byte param_2)

{
  if ((param_2 & 2) != 0) {
    FUN_005b7ec6(param_1,8,param_1[-1],FUN_00446ec0);
    if ((param_2 & 1) != 0) {
      FUN_005b7e1d(param_1 + -1);
    }
    return param_1 + -1;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x88))(0);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    FUN_005b7e1d(param_1);
  }
  return param_1;
}

