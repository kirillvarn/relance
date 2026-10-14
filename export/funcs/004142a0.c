
void __thiscall FUN_004142a0(undefined4 *param_1,uint param_2)

{
  void *pvVar1;
  undefined2 *puVar2;
  
  if ((uint)param_1[1] < param_2) {
    if ((void *)*param_1 != (void *)0x0) {
      pvVar1 = realloc((void *)*param_1,param_2 * 2);
      param_1[1] = param_2;
      *param_1 = pvVar1;
      return;
    }
    puVar2 = malloc(param_2 * 2);
    *param_1 = puVar2;
    *puVar2 = 0;
    param_1[1] = param_2;
  }
  return;
}

