
undefined4 * __fastcall FUN_004147a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b884b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)((int)param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  local_4 = 0;
  *param_1 = &PTR_LAB_005c8cb8;
  param_1[9] = 0xff080808;
  (*(code *)PTR_FUN_005c8cd8)(1);
  ExceptionList = param_1;
  return param_1;
}

