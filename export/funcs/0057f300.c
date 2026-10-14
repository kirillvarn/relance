
int FUN_0057f300(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0057fc60(param_3,param_1);
    param_1 = param_1 + 0xc;
    param_3 = param_3 + 0xc;
  } while (param_1 != param_2);
  return param_3;
}

