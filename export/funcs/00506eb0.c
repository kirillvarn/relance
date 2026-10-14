
void FUN_00506eb0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bfad8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00420f70();
  local_4 = 0xffffffff;
  FUN_00420d10();
  ExceptionList = local_c;
  return;
}

