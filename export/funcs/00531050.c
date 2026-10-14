
undefined1 * __thiscall FUN_00531050(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = *param_3;
  param_1[1] = *param_2;
  param_1[0xc] = 0;
  pvVar2 = operator_new(0x38);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x35) = 0;
  *(undefined1 *)((int)pvVar2 + 0x34) = 1;
  *(void **)(param_1 + 8) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x35) = 1;
  **(undefined4 **)(param_1 + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  uVar1 = *(undefined4 *)(param_1 + 8);
  pvVar2 = operator_new(0x38);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x34) = 0;
  *(undefined1 *)((int)pvVar2 + 0x35) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}

