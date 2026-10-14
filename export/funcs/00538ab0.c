
void FUN_00538ab0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)0x0;
  while( true ) {
    puVar2 = DAT_0067555c;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
    }
    puVar1 = DAT_0067555c;
    if (puVar2 == (undefined4 *)0x0) break;
    if ((undefined4 *)puVar2[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar2[2])(1);
    }
    puVar2[2] = 0;
    puVar1 = puVar2;
  }
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (DAT_00675564 == '\0') {
      FUN_005b7e1d(puVar2);
    }
    else {
      *puVar2 = DAT_00675568;
      DAT_00675568 = puVar2;
    }
  }
  DAT_00675560 = 0;
  DAT_0067555c = (undefined4 *)0x0;
  return;
}

