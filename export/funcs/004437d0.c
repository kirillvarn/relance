
undefined4 * __thiscall FUN_004437d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9743;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005593d0(param_2);
  local_4 = 0;
  FUN_00457d60();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_005cb8d4;
  param_1[0xc] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_00457e20();
  FUN_00443920(param_3);
  ExceptionList = local_c;
  return param_1;
}

