
void FUN_005a6920(FmtStr *param_1,FmtStr *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FmtStr::~FmtStr(param_1);
  }
  return;
}

