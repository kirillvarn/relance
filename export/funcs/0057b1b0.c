
undefined4 * __fastcall FUN_0057b1b0(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005793e0();
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x122) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x123] = pvVar1;
  param_1[0x124] = 0;
  *(undefined1 *)((int)param_1 + 0x401) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *param_1 = &PTR_FUN_005e476c;
  param_1[0x1f] = &PTR_OnReceive_005e4760;
  *(undefined1 *)(param_1 + 0x125) = 1;
  ExceptionList = local_c;
  return param_1;
}

