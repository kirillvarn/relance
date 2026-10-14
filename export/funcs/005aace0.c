
undefined4 __thiscall FUN_005aace0(int param_1,CHARACTER_ID *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_1 + 0x1b8);
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    bVar1 = operator==((CHARACTER_ID *)puVar2[2],param_2);
    if (bVar1) {
      return puVar2[2];
    }
  }
  return 0;
}

