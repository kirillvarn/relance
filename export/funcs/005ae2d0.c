
int FUN_005ae2d0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005af120(param_3,param_1);
    param_1 = param_1 + 0x50;
    param_3 = param_3 + 0x50;
  } while (param_1 != param_2);
  return param_3;
}

