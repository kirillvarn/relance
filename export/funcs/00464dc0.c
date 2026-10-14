
undefined4 * __fastcall FUN_00464dc0(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb014;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059f860();
  local_4 = 0;
  *(undefined1 *)(param_1 + 0xcd) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xce] = pvVar1;
  param_1[0xcf] = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0xd0) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xd1] = pvVar1;
  param_1[0xd2] = 0;
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0xd3) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xd4] = pvVar1;
  param_1[0xd5] = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0xd6) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xd7] = pvVar1;
  param_1[0xd8] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005b7fba(param_1 + 0xd9,0xc,4,RenderDisplayList_exref,~RenderDisplayList_exref);
  param_1[0xed] = 0;
  param_1[0xf3] = 0;
  param_1[0xec] = 0;
  param_1[0xef] = 0;
  param_1[0xee] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *param_1 = &PTR_FUN_005cfac4;
  param_1[0x1f] = &PTR_OnReceive_005cfab8;
  param_1[0xea] = 1;
  param_1[0xeb] = 0;
  ExceptionList = local_c;
  return param_1;
}

