
int FUN_0052c490(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0052c7d0(param_3,param_1);
    param_1 = param_1 + 0x34;
    param_3 = param_3 + 0x34;
  } while (param_1 != param_2);
  return param_3;
}

