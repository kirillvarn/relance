
undefined1 * __fastcall FUN_0041dd20(undefined1 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  param_1[1] = local_1;
  param_1[0xc] = 0;
  pvVar1 = operator_new(0x5c);
  *(undefined4 *)((int)pvVar1 + 4) = 0;
  *(undefined1 *)((int)pvVar1 + 0x59) = 0;
  *(undefined1 *)((int)pvVar1 + 0x58) = 1;
  *(void **)(param_1 + 8) = pvVar1;
  *(undefined1 *)((int)pvVar1 + 0x59) = 1;
  **(undefined4 **)(param_1 + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  uVar2 = FUN_00420c20(*(undefined4 *)(param_1 + 8),0);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
  return param_1;
}

