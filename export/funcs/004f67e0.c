
undefined4 FUN_004f67e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_005d98bc;
    puVar1[1] = 1;
    *param_1 = puVar1;
    return 1;
  }
  *param_1 = 0;
  return 1;
}

