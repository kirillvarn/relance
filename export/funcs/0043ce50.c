
void __fastcall FUN_0043ce50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_005b7e1d(puVar2);
      puVar2 = puVar1;
    }
    else {
      *puVar2 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar2;
      puVar2 = puVar1;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

