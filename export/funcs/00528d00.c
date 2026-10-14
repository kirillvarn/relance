
void __fastcall FUN_00528d00(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c029b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != 0) {
    ExceptionList = &local_c;
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  ExceptionList = local_c;
  return;
}

