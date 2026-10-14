
undefined4 * __thiscall FUN_00527a70(undefined4 *param_1,int *param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c01f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00429040(1);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x43b40000;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  local_4 = 0;
  param_1[0x19] = param_2;
  *param_1 = &PTR_LAB_005dd084;
  (**(code **)(*param_2 + 0xc))();
  ExceptionList = pvStack_c;
  return param_1;
}

