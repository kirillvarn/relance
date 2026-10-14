
undefined4 * FUN_00577ec0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*DAT_0067c258;
  while( true ) {
    if (puVar1 == DAT_0067c258) {
      return (undefined4 *)0x0;
    }
    if (param_1 == puVar1[2]) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + 2;
}

