
void __fastcall FUN_00447d70(int param_1)

{
  int *piVar1;
  HardpointSummary *this;
  int iVar2;
  Equipment *pEVar3;
  int iVar4;
  HardpointInfo *pHVar5;
  long lVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 auStack_4c [5];
  undefined4 uStack_38;
  char **ppcStack_34;
  char *pcStack_30;
  char *pcStack_14;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_10 = param_1;
  iVar2 = FUN_004c4060();
  piVar7 = (int *)**(int **)(iVar2 + 4);
  iVar2 = FUN_004c4060();
  piVar1 = *(int **)(iVar2 + 4);
  if (piVar7 != piVar1) {
    while( true ) {
      pcStack_30 = (char *)0x447dad;
      pEVar3 = Archetype::GetEquipment(piVar7[3]);
      if ((pEVar3 != (Equipment *)0x0) &&
         (iVar2 = (**(code **)(*(int *)pEVar3 + 0x10))(), iVar2 == 0xc)) break;
      piVar7 = (int *)*piVar7;
      if (piVar7 == piVar1) {
        return;
      }
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0xfc);
    iStack_4 = iVar2;
    CacheString::clear((CacheString *)&pcStack_14);
    iStack_c = 1;
    if (0 < iVar2) {
      do {
        iVar2 = iStack_c;
        ppcStack_34 = &pcStack_14;
        pcStack_30 = "HpEngine0%d";
        uStack_38 = 0x447e10;
        FUN_00447ec0();
        pcStack_30 = (char *)0x447e21;
        iVar4 = HardpointSummary::find_name(*(HardpointSummary **)(param_1 + 0x74),pcStack_14);
        if (iVar4 != -1) {
          this = *(HardpointSummary **)(param_1 + 0x74);
          iStack_8 = piVar7[3];
          pcStack_30 = (char *)0x447e3b;
          pHVar5 = HardpointSummary::get_info(this,iVar4);
          pHVar5 = pHVar5 + 0x10;
          puVar8 = auStack_4c;
          for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *(undefined4 *)pHVar5;
            pHVar5 = pHVar5 + 4;
            puVar8 = puVar8 + 1;
          }
          pHVar5 = HardpointSummary::get_info(this,iVar4);
          uVar9 = *(undefined4 *)(pHVar5 + 4);
          uVar10 = *(undefined4 *)(pHVar5 + 8);
          uVar11 = *(undefined4 *)(pHVar5 + 0xc);
          lVar6 = HardpointSummary::get_instance(this,iVar4);
          FUN_00446ca0(iStack_8,0xbf800000,lVar6,uVar9,uVar10,uVar11);
          param_1 = local_10;
          iVar2 = iStack_c;
        }
        iStack_c = iVar2 + 1;
      } while (iStack_c <= iStack_4);
    }
  }
  return;
}

