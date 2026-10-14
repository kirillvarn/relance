
undefined1 * __fastcall FUN_004349f0(undefined1 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b90d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = local_11;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)(param_1 + 4) = pvVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  param_1[0xc] = local_11;
  param_1[0xd] = local_11;
  param_1[0x18] = 0;
  pvVar1 = operator_new(0x30);
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined1 *)((int)pvVar1 + 0x2c) = 1;
  *(undefined1 *)((int)pvVar1 + 0x2d) = 0;
  *(void **)(param_1 + 0x14) = pvVar1;
  *(undefined1 *)((int)pvVar1 + 0x2d) = 1;
  **(undefined4 **)(param_1 + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 0;
  uVar2 = FUN_00436b30(*(undefined4 *)(param_1 + 0x14),0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(int *)(*(int *)(param_1 + 0x10) + 8) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x20] = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)(param_1 + 0x24) = pvVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

