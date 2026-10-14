
undefined4 * __fastcall FUN_00414d10(undefined4 *param_1)

{
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b886b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = local_15;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[7] = 0xff080808;
  *param_1 = &PTR_LAB_005c8ce8;
  (*(code *)PTR_FUN_005c8d08)(1);
  ExceptionList = param_1;
  return param_1;
}

