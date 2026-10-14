
void __fastcall FUN_00530160(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[-3] = &PTR_LAB_005dddd4;
  param_1[-2] = &PTR_LAB_005ddd54;
  *param_1 = &PTR_FUN_005ddd4c;
  local_4 = 0;
  if (param_1[0x2a] != 0) {
    FUN_00536170(param_1[0x2a]);
  }
  local_4 = 0xffffffff;
  FUN_005394b0();
  ExceptionList = local_c;
  return;
}

