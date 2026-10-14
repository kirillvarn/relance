
undefined4 * __thiscall FUN_00516c30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bfdd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00531a30(param_2,param_3);
  param_1[4] = &PTR_LAB_005db914;
  param_1[7] = &PTR_LAB_005db914;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_005db904;
  param_1[5] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[0xb] = *(undefined4 *)(*(int *)(*(int *)(param_1[1] + 0xc) + 4) + 0xac);
  FUN_00516af0();
  FUN_00516d10();
  FUN_0040c690();
  ExceptionList = local_c;
  return param_1;
}

