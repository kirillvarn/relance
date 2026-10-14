
void __fastcall FUN_004d7400(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005be278;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 4) != -1) {
    ExceptionList = &local_c;
    FUN_0059eee0();
  }
  local_4 = 0xffffffff;
  FUN_0059ef20();
  ExceptionList = local_c;
  return;
}

