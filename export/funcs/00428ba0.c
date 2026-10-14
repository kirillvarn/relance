
undefined4 FUN_00428ba0(undefined4 *param_1)

{
  if (DAT_00667cb0 != (int *)0x0) {
    *param_1 = DAT_00667cb0;
    (**(code **)(*DAT_00667cb0 + 4))(DAT_00667cb0);
    return 1;
  }
  return 0;
}

