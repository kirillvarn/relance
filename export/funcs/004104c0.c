
int FUN_004104c0(int param_1)

{
  if (param_1 < 0) {
    return 0;
  }
  if (0xff < param_1) {
    param_1 = 0xff;
  }
  return param_1;
}

