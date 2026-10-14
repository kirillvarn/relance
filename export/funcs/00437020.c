
undefined4 * __thiscall FUN_00437020(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 4);
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    if (*(int *)puVar1[2] == param_2) {
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

