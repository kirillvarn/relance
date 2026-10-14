
undefined4 * __fastcall FUN_0046a0c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bb728;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005cfe7c;
  FUN_005760d0(0x5d);
  ExceptionList = local_c;
  return param_1;
}

