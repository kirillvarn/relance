
void FUN_00552c70(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c13e3;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00420d10();
  local_4 = local_4 & 0xffffff00;
  FUN_00420d10();
  local_4 = 0xffffffff;
  FUN_00420d10();
  ExceptionList = local_c;
  return;
}

