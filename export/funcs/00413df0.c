
void __thiscall FUN_00413df0(int *param_1,wchar_t *param_2,size_t param_3)

{
  uint uVar1;
  short *psVar2;
  void *pvVar3;
  undefined2 *puVar4;
  
  if (param_2 != (wchar_t *)0x0) {
    if (param_3 == 0xffffffff) {
      param_3 = wcslen(param_2);
    }
    uVar1 = param_3 + 1;
    if ((uint)param_1[1] < uVar1) {
      if ((void *)*param_1 == (void *)0x0) {
        puVar4 = malloc(uVar1 * 2);
        *param_1 = (int)puVar4;
        *puVar4 = 0;
      }
      else {
        pvVar3 = realloc((void *)*param_1,uVar1 * 2);
        *param_1 = (int)pvVar3;
      }
      param_1[1] = uVar1;
    }
    wcsncpy((wchar_t *)*param_1,param_2,param_3);
    *(undefined2 *)(*param_1 + param_3 * 2) = 0;
    return;
  }
  psVar2 = (short *)*param_1;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    *psVar2 = 0;
  }
  return;
}

