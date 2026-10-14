
void __thiscall FUN_005ab1f0(int param_1,CHARACTER_ID *param_2)

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
      FUN_005ab250(puVar2[2]);
      return;
    }
  }
  FUN_005ab250(0);
  return;
}

