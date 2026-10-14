
int FUN_005758e0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00575b80(param_3,param_1);
    param_1 = param_1 + 0x24;
    param_3 = param_3 + 0x24;
  } while (param_1 != param_2);
  return param_3;
}

