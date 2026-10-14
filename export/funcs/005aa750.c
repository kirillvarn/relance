
int __thiscall FUN_005aa750(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *unaff_ESI;
  undefined4 *puVar3;
  
  if (DAT_0067ecd0 == (int *)0x0) {
    return 0;
  }
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
    iVar2 = puVar3[2];
    if (iVar2 != 0) {
      FUN_005af6a0();
      FUN_005b7e1d(iVar2);
    }
    puVar3[2] = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x1b8);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      FUN_005afe80(1);
      puVar3 = puVar1;
    }
    else {
      *puVar3 = *(undefined4 *)(param_1 + 0x1c4);
      *(undefined4 **)(param_1 + 0x1c4) = puVar3;
      puVar3 = puVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  (**(code **)(*DAT_0067ecd0 + 0x58))(param_2,DAT_00673344);
  iVar2 = FUN_005a89b0(unaff_ESI,0x40a00000,0x42700000);
  if ((*unaff_ESI != '\0') && (*(int *)(param_1 + 0x1b8) == 0)) {
    if (DAT_0067ecd0 == (int *)0x0) {
      return 0;
    }
    *unaff_ESI = '\0';
    puVar3 = (undefined4 *)0x0;
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(param_1 + 0x1b8);
      }
      else {
        puVar3 = (undefined4 *)*puVar3;
      }
      if (puVar3 == (undefined4 *)0x0) break;
      iVar2 = puVar3[2];
      if (iVar2 != 0) {
        FUN_005af6a0();
        FUN_005b7e1d(iVar2);
      }
      puVar3[2] = 0;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x1b8);
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      if (*(char *)(param_1 + 0x1c0) == '\0') {
        FUN_005b7e1d(puVar3);
        puVar3 = puVar1;
      }
      else {
        *puVar3 = *(undefined4 *)(param_1 + 0x1c4);
        *(undefined4 **)(param_1 + 0x1c4) = puVar3;
        puVar3 = puVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    (**(code **)(*DAT_0067ecd0 + 0x4c))(DAT_00673344,0);
    iVar2 = FUN_005a89b0(unaff_ESI,0x40a00000,0x42700000);
    if (iVar2 == 1) {
      iVar2 = 4;
    }
  }
  return iVar2;
}

