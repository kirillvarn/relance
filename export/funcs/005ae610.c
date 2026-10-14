
int FUN_005ae610(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005af3b0(param_3,param_1);
    param_1 = param_1 + 0x9c;
    param_3 = param_3 + 0x9c;
  } while (param_1 != param_2);
  return param_3;
}

