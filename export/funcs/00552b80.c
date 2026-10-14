
undefined4 * __fastcall FUN_00552b80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c13bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00420d40();
  local_4 = 0;
  CacheString::clear((CacheString *)(param_1 + 4));
  *param_1 = &PTR_FUN_005e0e20;
  local_4 = 1;
  FUN_00420d40();
  local_4._0_1_ = 2;
  CacheString::clear((CacheString *)(param_1 + 9));
  param_1[5] = &PTR_FUN_005e0e20;
  local_4._0_1_ = 3;
  FUN_00420d40();
  local_4 = CONCAT31(local_4._1_3_,4);
  CacheString::clear((CacheString *)(param_1 + 0xe));
  param_1[10] = &PTR_FUN_005e0e20;
  param_1[0xf] = 0;
  param_1[0x10] = 3;
  ExceptionList = local_c;
  return param_1;
}

