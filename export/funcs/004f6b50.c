
void __fastcall FUN_004f6b50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[-1] = &PTR_LAB_005d991c;
  *param_1 = &PTR_FUN_005d9914;
  local_4 = 0;
  (*(code *)PTR_FUN_005d9938)(param_1 + -1);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00420d10();
  ExceptionList = param_1;
  return;
}

