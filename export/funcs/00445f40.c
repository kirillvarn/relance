
undefined4 * __thiscall FUN_00445f40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b98e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005593d0(param_2);
  *(undefined1 *)(param_1 + 0xe) = (undefined1)param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00555a40();
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0x1a) = (undefined1)param_2;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x1b] = pvVar1;
  param_1[0x1c] = 0;
  local_4._0_1_ = 3;
  FUN_00558180();
  local_4 = CONCAT31(local_4._1_3_,4);
  *param_1 = &PTR_FUN_005cbc0c;
  param_1[0xc] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  FUN_00555a70();
  param_1[0x19] = 0;
  FUN_004464f0(param_3);
  ExceptionList = local_c;
  return param_1;
}

