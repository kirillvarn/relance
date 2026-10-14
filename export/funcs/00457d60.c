
undefined4 * __fastcall FUN_00457d60(undefined4 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ba0db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 4) = local_11;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_4 = 0;
  FUN_00558180();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = local_c;
  return param_1;
}

