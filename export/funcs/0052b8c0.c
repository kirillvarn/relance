
void __thiscall FUN_0052b8c0(FuseAction *param_1,FuseAction *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  FuseAction::CopyArchProperties(param_1,param_2);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  param_1[0x2c] = param_2[0x2c];
  if (param_1 + 0x30 != param_2 + 0x30) {
    puVar1 = *(undefined4 **)(param_2 + 0x34);
    if (puVar1 == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (*(int *)(param_2 + 0x38) - (int)puVar1) / 0x34;
    }
    puVar7 = *(undefined4 **)(param_1 + 0x34);
    if (puVar7 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(int *)(param_1 + 0x38) - (int)puVar7) / 0x34;
    }
    if (uVar11 <= uVar6) {
      puVar8 = *(undefined4 **)(param_2 + 0x38);
      for (; puVar1 != puVar8; puVar1 = puVar1 + 0xd) {
        puVar10 = puVar1;
        puVar12 = puVar7;
        for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar7 = puVar7 + 0xd;
      }
      if (*(int *)(param_2 + 0x34) == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
        return;
      }
      *(int *)(param_1 + 0x38) =
           ((*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34)) / 0x34) * 0x34 +
           *(int *)(param_1 + 0x34);
      return;
    }
    if (puVar1 == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (*(int *)(param_2 + 0x38) - (int)puVar1) / 0x34;
    }
    if (puVar7 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(int *)(param_1 + 0x3c) - (int)puVar7) / 0x34;
    }
    if (uVar11 <= uVar6) {
      if (puVar7 == (undefined4 *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 0x38) - (int)puVar7) / 0x34;
      }
      puVar8 = puVar1 + iVar5 * 0xd;
      while (puVar1 != puVar8) {
        puVar2 = puVar1 + 0xd;
        puVar9 = puVar7 + 0xd;
        puVar10 = puVar1;
        puVar12 = puVar7;
        for (iVar5 = 0xd; puVar1 = puVar2, puVar7 = puVar9, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      puVar1 = *(undefined4 **)(param_2 + 0x38);
      iVar5 = *(int *)(param_1 + 0x38);
      for (; puVar8 != puVar1; puVar8 = puVar8 + 0xd) {
        FUN_0052c7d0(iVar5,puVar8);
        iVar5 = iVar5 + 0x34;
      }
      if (*(int *)(param_2 + 0x34) == 0) {
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
        return;
      }
      *(int *)(param_1 + 0x38) =
           ((*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34)) / 0x34) * 0x34 +
           *(int *)(param_1 + 0x34);
      return;
    }
    FUN_005b7e1d(puVar7);
    if (*(int *)(param_2 + 0x34) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34)) / 0x34;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    pvVar3 = operator_new(iVar5 * 0x34);
    *(void **)(param_1 + 0x34) = pvVar3;
    uVar4 = FUN_0052c490(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),pvVar3);
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  return;
}

