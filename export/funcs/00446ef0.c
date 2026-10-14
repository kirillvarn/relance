
undefined4 * __thiscall FUN_00446ef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9983;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005593d0(param_2);
  local_4 = 0;
  FUN_00457d60();
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_005cbdf0;
  param_1[0xc] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff;
  FUN_00457e20();
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_00447120(param_3);
  ExceptionList = local_c;
  return param_1;
}

