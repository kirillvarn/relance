
int FUN_0040d7f0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0040dfa0(param_3,param_1);
    param_1 = param_1 + 0x24;
    param_3 = param_3 + 0x24;
  } while (param_1 != param_2);
  return param_3;
}

