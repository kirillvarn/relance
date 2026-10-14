
int FUN_00587770(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00587af0(param_3,param_1);
    param_1 = param_1 + 0x20;
    param_3 = param_3 + 0x20;
  } while (param_1 != param_2);
  return param_3;
}

