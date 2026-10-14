
undefined4 FUN_00538e80(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    puVar3 = DAT_0067555c;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar2;
    }
    if (puVar3 == (undefined4 *)0x0) break;
    iVar1 = stricmp((char *)(puVar3[2] + 0x18),param_1);
    puVar2 = puVar3;
    if (iVar1 == 0) {
      return puVar3[2];
    }
  }
  return 0;
}

