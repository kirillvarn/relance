
undefined4 __fastcall FUN_005aa440(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (DAT_00673344 != 0) {
    (**(code **)(*DAT_0067ecd0 + 0x40))(DAT_00673344,0);
    DAT_0067ecbe = 0;
    DAT_0067ecbf = 0;
    *(undefined1 *)(param_1 + 0x184) = 0;
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    *(undefined1 *)(param_1 + 0x1d4) = 0;
    puVar3 = (undefined4 *)0x0;
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(param_1 + 0x1b8);
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
    puVar3 = *(undefined4 **)(param_1 + 0x1b8);
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar3;
      if (*(char *)(param_1 + 0x1c0) == '\0') {
        FUN_005b7e1d(puVar3);
        puVar3 = puVar2;
      }
      else {
        *puVar3 = *(undefined4 *)(param_1 + 0x1c4);
        *(undefined4 **)(param_1 + 0x1c4) = puVar3;
        puVar3 = puVar2;
      }
    }
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x21c) = 0;
  }
  return 1;
}

