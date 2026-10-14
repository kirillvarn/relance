
undefined4 * __thiscall FUN_0043cbd0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_005cb024;
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (*(char *)(param_1 + 3) == '\0') {
      FUN_005b7e1d(puVar2);
      puVar2 = puVar1;
    }
    else {
      *puVar2 = param_1[4];
      param_1[4] = puVar2;
      puVar2 = puVar1;
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  puVar2 = (undefined4 *)param_1[4];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005b7e1d(puVar2);
    puVar2 = puVar1;
  }
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_005b7e1d(param_1);
  }
  return param_1;
}

