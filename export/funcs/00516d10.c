
void __fastcall FUN_00516d10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lStack_80;
  int local_7c;
  undefined4 auStack_78 [9];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  HardpointInfo aHStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [14];
  
  piVar1 = *(int **)(param_1 + 8);
  local_7c = param_1;
  lVar5 = (**(code **)(*piVar1 + 0x1c))();
  iVar6 = FUN_0040f080(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4) + 0x84);
  if (iVar6 != 0) {
    bVar4 = FindHardpoint_PS(lVar5,"HpRightLane",&lStack_80,aHStack_48);
    uVar3 = uStack_40;
    uVar2 = uStack_44;
    if (bVar4) {
      puVar8 = auStack_38;
      puVar9 = auStack_78;
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      uStack_54 = uVar2;
      uStack_50 = uVar3;
      uStack_4c = uStack_3c;
      FUN_00503070(iVar6,piVar1,lVar5,auStack_78,0);
      param_1 = local_7c;
    }
    bVar4 = FindHardpoint_PS(lVar5,"HpLeftLane",&lStack_80,aHStack_48);
    uVar3 = uStack_3c;
    uVar2 = uStack_44;
    if (bVar4) {
      puVar8 = auStack_38;
      puVar9 = auStack_78;
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      uStack_54 = uVar2;
      uStack_50 = uStack_40;
      uStack_4c = uVar3;
      FUN_00503070(iVar6,piVar1,lVar5,auStack_78,0);
      param_1 = local_7c;
    }
  }
  iVar6 = FUN_0040f080(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4) + 0x80);
  if (iVar6 != 0) {
    bVar4 = FindHardpoint_PS(lVar5,"HpShield01",&lStack_80,aHStack_48);
    if (bVar4) {
      puVar8 = auStack_38;
      puVar9 = auStack_78;
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      uStack_54 = uStack_44;
      uStack_50 = uStack_40;
      uStack_4c = uStack_3c;
      FUN_00503070(iVar6,piVar1,lVar5,auStack_78,0);
    }
  }
  return;
}

