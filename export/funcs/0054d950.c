
float10 __thiscall FUN_0054d950(int param_1,int param_2)

{
  param_2 = param_2 - *(int *)(param_1 + 0x5c);
  if (param_2 < 0) {
    param_2 = 0;
  }
  return (float10)*(float *)(*(int *)(param_1 + 0x60) + 0x14 + param_2 * 0x18);
}

