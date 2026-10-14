
char __fastcall FUN_00531cf0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 auStack_88 [9];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [14];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c06fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_004f79a0(0x9c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0054baf0();
    iVar3 = FUN_004fd9d0(*(int *)(param_1 + 8) == iVar3);
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x68))(&uStack_54);
  if (cVar2 == '\0') {
    FUN_004f7a90();
    cVar2 = '\0';
  }
  else {
    puVar6 = auStack_48;
    puVar7 = auStack_88;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uStack_60 = uStack_50;
    uStack_64 = uStack_54;
    puVar6 = auStack_88;
    uStack_5c = uStack_4c;
    uVar4 = (**(code **)(**(int **)(param_1 + 4) + 100))(0,puVar6);
    FUN_004f7d20(*(undefined4 *)(param_1 + 8),uVar4,puVar6);
    if (*(int *)(param_1 + 4) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
    }
    cVar2 = FUN_004fda00(uVar4);
    if (cVar2 != '\0') {
      if (iVar3 != 0) {
        FUN_004f7a80();
      }
      puStack_8 = (undefined1 *)0x0;
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
      *(int *)(param_1 + 0x18) = iVar3;
      if (iVar3 != 0) {
        FUN_004f7a80();
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      puStack_8 = (undefined1 *)0xffffffff;
      if (iVar3 != 0) {
        FUN_004f7a90();
      }
      FUN_004fcea0((undefined4 *)(param_1 + 0x10));
    }
    FUN_004f7a90();
  }
  ExceptionList = pvStack_10;
  return cVar2;
}

