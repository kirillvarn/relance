
void FUN_004cab70(void)

{
  char cVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bdbfb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00420d60();
  if (cVar1 != '\0') {
    FUN_0059eee0();
  }
  local_4 = 0xffffffff;
  FUN_0059ef20();
  ExceptionList = local_c;
  return;
}

