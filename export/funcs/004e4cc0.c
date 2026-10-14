
void __fastcall FUN_004e4cc0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  uint uStack_14;
  undefined1 local_2;
  
  iVar6 = param_1 + 0x560;
  iVar2 = FUN_004e4dd0(iVar6);
  if (*(int *)(param_1 + 0x578) != iVar2) {
    uVar3 = FUN_004e4dd0(iVar6);
    *(undefined4 *)(param_1 + 0x578) = uVar3;
    *(undefined4 *)(param_1 + 0x574) = 0;
  }
  if (((0 < *(int *)(param_1 + 0x578)) && (*(int *)(param_1 + 0x398) != 0)) &&
     (*(int *)(param_1 + 0x398) != 8)) {
    piVar4 = (int *)(param_1 + 0x574);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 < 0) {
      *(int *)(param_1 + 0x574) = *(int *)(param_1 + 0x578) + -1;
    }
    iVar2 = *(int *)(param_1 + 0x574);
    FUN_004e4dd0(iVar6);
    piVar1 = *(int **)(param_1 + 0x564);
    piVar4 = (int *)*piVar1;
    iVar6 = 0;
    while (piVar4 != piVar1) {
      if (iVar2 == iVar6) {
        uVar5 = *(ushort *)(piVar4 + 3);
        goto LAB_004e4d69;
      }
      FUN_0052afa0();
      iVar6 = iVar6 + 1;
      piVar1 = *(int **)(param_1 + 0x564);
    }
    uVar5 = *(ushort *)SUBOBJ_ID_NONE_exref;
LAB_004e4d69:
    if (uVar5 != *(ushort *)SUBOBJ_ID_NONE_exref) {
      iVar6 = *(int *)(param_1 + 0x398);
      puVar7 = local_28;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_2 = 1;
      local_28[0] = 0x1c;
      if (iVar6 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(iVar6 + -8);
      }
      uStack_18 = (**(code **)(*piVar4 + 0x20))();
      uStack_14 = (uint)uVar5;
      FUN_0054bcb0(local_28);
    }
  }
  return;
}

