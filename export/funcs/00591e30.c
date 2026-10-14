
undefined1 * __fastcall FUN_00591e30(undefined1 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = local_11;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)(param_1 + 4) = pvVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  param_1[0x14] = local_11;
  param_1[0x15] = local_11;
  param_1[0x20] = 0;
  pvVar2 = operator_new(0x14);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x11) = 0;
  *(undefined1 *)((int)pvVar2 + 0x10) = 1;
  *(void **)(param_1 + 0x1c) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x11) = 1;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  pvVar2 = operator_new(0x14);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x10) = 0;
  *(undefined1 *)((int)pvVar2 + 0x11) = 0;
  *(void **)(param_1 + 0x18) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 0x18) + 8) = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_c;
  return param_1;
}

