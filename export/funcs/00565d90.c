
undefined4 * FUN_00565d90(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_005e2718;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

