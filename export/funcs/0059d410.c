
void __fastcall FUN_0059d410(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c4e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005e5dcc;
  local_4 = 0;
  FUN_00576190();
  local_4 = 0xffffffff;
  FUN_00576010();
  ExceptionList = local_c;
  return;
}

