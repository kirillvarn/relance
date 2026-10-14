
undefined4 __thiscall FUN_005aa8f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_EDI;
  
  if (DAT_0067ecd0 == (int *)0x0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  puVar4 = (undefined4 *)0x0;
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(param_1 + 0x1b8);
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    iVar1 = puVar4[2];
    if (iVar1 != 0) {
      FUN_005af6a0();
      FUN_005b7e1d(iVar1);
    }
    puVar4[2] = 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x1b8);
  while (puVar4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar4;
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      FUN_005b7e1d(puVar4);
      puVar4 = puVar2;
    }
    else {
      *puVar4 = *(undefined4 *)(param_1 + 0x1c4);
      *(undefined4 **)(param_1 + 0x1c4) = puVar4;
      puVar4 = puVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  (**(code **)(*DAT_0067ecd0 + 0x5c))(param_2,DAT_00673344);
  uVar3 = FUN_005a89b0(unaff_EDI,0x40a00000,0x42700000);
  return uVar3;
}

