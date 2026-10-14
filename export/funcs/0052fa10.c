
char __fastcall FUN_0052fa10(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005c0600;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = (undefined4 *)FUN_004f79a0(0x84);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_004f79f0(0x2d);
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    *puVar3 = &PTR_LAB_005ddcec;
  }
  cVar2 = FUN_00512be0(param_1);
  if (cVar2 != '\0') {
    uStack_1c = 0;
    piStack_18 = (int *)0x0;
    iStack_10 = 0;
    puStack_14 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_004f7a80();
      if (piStack_18 != (int *)0x0) {
        (**(code **)(*piStack_18 + 4))(piStack_18);
      }
      if (iStack_10 != 0) {
        FUN_00537ac0();
      }
    }
    uStack_4 = 0;
    FUN_004fcea0(&uStack_1c);
    uStack_4 = 0xffffffff;
    if (puStack_14 != (undefined4 *)0x0) {
      FUN_004f7a90();
      puStack_14 = (undefined4 *)0x0;
    }
    if (piStack_18 != (int *)0x0) {
      (**(code **)(*piStack_18 + 8))(piStack_18);
      piStack_18 = (int *)0x0;
    }
    if (iStack_10 != 0) {
      FUN_00537ad0();
    }
    uStack_1c = 0;
    piStack_18 = (int *)0x0;
    iStack_10 = 0;
    puStack_14 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_004f7a80();
    }
    uStack_4 = 1;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_004f7a90();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00537ad0();
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 **)(param_1 + 0x18) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_004f7a80();
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uStack_4 = 0xffffffff;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_004f7a90();
    }
  }
  FUN_004f7a90();
  ExceptionList = pvStack_c;
  return cVar2;
}

