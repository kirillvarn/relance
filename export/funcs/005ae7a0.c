
void __fastcall FUN_005ae7a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 4);
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
    if (puVar3 == (undefined4 *)0x0) break;
    iVar1 = puVar3[2];
    if (iVar1 != 0) {
      FUN_005af6a0();
      FUN_005b7e1d(iVar1);
    }
    puVar3[2] = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_005b7e1d(puVar3);
      puVar3 = puVar2;
    }
    else {
      *puVar3 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar3;
      puVar3 = puVar2;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

