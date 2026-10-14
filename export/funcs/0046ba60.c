
undefined1 * __thiscall FUN_0046ba60(undefined1 *param_1,undefined1 *param_2)

{
  void *pvVar1;
  
  *param_1 = *param_2;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)(param_1 + 4) = pvVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

