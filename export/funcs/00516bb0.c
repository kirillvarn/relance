
void __fastcall FUN_00516bb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bfdd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005db904;
  local_4 = 0;
  FUN_0040c7d0();
  local_4 = 0xffffffff;
  FUN_00531af0();
  ExceptionList = local_c;
  return;
}

