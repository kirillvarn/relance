
undefined4 FUN_00428bc0(undefined4 *param_1)

{
  if (DAT_00667cb4 != (int *)0x0) {
    *param_1 = DAT_00667cb4;
    (**(code **)(*DAT_00667cb4 + 4))(DAT_00667cb4);
    return 1;
  }
  return 0;
}

