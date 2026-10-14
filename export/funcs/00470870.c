
void FUN_00470870(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bb9e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00576010();
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

