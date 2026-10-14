
void __fastcall FUN_004e4ba0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  ushort uVar7;
  undefined4 *puVar8;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  uint uStack_14;
  undefined1 local_2;
  
  iVar1 = param_1 + 0x560;
  iVar3 = FUN_004e4dd0(iVar1);
  if (*(int *)(param_1 + 0x578) != iVar3) {
    uVar4 = FUN_004e4dd0(iVar1);
    *(undefined4 *)(param_1 + 0x578) = uVar4;
    *(undefined4 *)(param_1 + 0x574) = 0;
  }
  iVar3 = 0;
  if (((0 < *(int *)(param_1 + 0x578)) && (*(int *)(param_1 + 0x398) != 0)) &&
     (*(int *)(param_1 + 0x398) != 8)) {
    iVar6 = *(int *)(param_1 + 0x574) + 1;
    *(int *)(param_1 + 0x574) = iVar6;
    if (*(int *)(param_1 + 0x578) <= iVar6) {
      *(undefined4 *)(param_1 + 0x574) = 0;
    }
    iVar6 = *(int *)(param_1 + 0x574);
    FUN_004e4dd0(iVar1);
    piVar2 = *(int **)(param_1 + 0x564);
    piVar5 = (int *)*piVar2;
    while (piVar5 != piVar2) {
      if (iVar6 == iVar3) {
        uVar7 = *(ushort *)(piVar5 + 3);
        goto LAB_004e4c53;
      }
      FUN_0052afa0();
      iVar3 = iVar3 + 1;
      piVar2 = *(int **)(param_1 + 0x564);
    }
    uVar7 = *(ushort *)SUBOBJ_ID_NONE_exref;
LAB_004e4c53:
    if (uVar7 != *(ushort *)SUBOBJ_ID_NONE_exref) {
      iVar1 = *(int *)(param_1 + 0x398);
      puVar8 = local_28;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_2 = 1;
      local_28[0] = 0x1c;
      if (iVar1 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(iVar1 + -8);
      }
      uStack_18 = (**(code **)(*piVar5 + 0x20))();
      uStack_14 = (uint)uVar7;
      FUN_0054bcb0(local_28);
    }
  }
  return;
}

