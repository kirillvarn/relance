
undefined4 * __thiscall FUN_00509fb0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x242;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  *(undefined1 *)((int)param_1 + 0x33) = 0xff;
  *(undefined1 *)((int)param_1 + 0x32) = 0xff;
  *(undefined1 *)((int)param_1 + 0x31) = 0xff;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[7] = param_3;
  param_1[3] = 0x242;
  return param_1;
}

