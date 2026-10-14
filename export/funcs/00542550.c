
undefined4 * __thiscall FUN_00542550(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c0d2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00547440(param_2);
  param_1[0x2b] = 0xbf800000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *param_1 = &PTR_LAB_005df95c;
  param_1[1] = &PTR_LAB_005df8dc;
  param_1[3] = &PTR_FUN_005df8d0;
  ExceptionList = local_c;
  return param_1;
}

