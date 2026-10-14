
undefined4 * __thiscall FUN_0041c940(undefined4 *param_1,char param_2,short param_3)

{
  param_1 = (undefined4 *)*param_1;
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if ((*(short *)(param_1 + 2) == param_3) && (*(char *)((int)param_1 + 10) == param_2)) break;
    param_1 = (undefined4 *)*param_1;
  }
  return param_1;
}

