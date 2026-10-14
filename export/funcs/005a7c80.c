
void FUN_005a7c80(FmtStr *param_1,FmtStr *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c5301;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (FmtStr *)0x0) {
    ExceptionList = &local_c;
    FmtStr::FmtStr(param_1,param_2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  ExceptionList = local_c;
  return;
}

