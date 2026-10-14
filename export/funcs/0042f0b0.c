
int FUN_0042f0b0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_004304b0(param_3,param_1);
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
  } while (param_1 != param_2);
  return param_3;
}

