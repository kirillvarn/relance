
undefined4 * __thiscall FUN_004a3f50(undefined4 *param_1,byte param_2)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_005b7e1d(param_1);
  }
  return param_1;
}

