
void __fastcall FUN_00447f90(int param_1)

{
  char *pcVar1;
  int iVar2;
  Equipment *pEVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *local_4c;
  char *pcStack_48;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_18;
  byte bStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = FUN_004c4060();
  local_4c = (int *)**(int **)(iVar2 + 4);
  iVar2 = FUN_004c4060();
  local_34 = *(int **)(iVar2 + 4);
  if (local_4c != local_34) {
    do {
      pEVar3 = Archetype::GetEquipment(local_4c[3]);
      if ((pEVar3 != (Equipment *)0x0) &&
         (iVar2 = (**(code **)(*(int *)pEVar3 + 0x10))(), iVar2 == 0xc)) {
        iVar2 = *(int *)(pEVar3 + 4);
        iVar7 = *(int *)(*(int *)(param_1 + 0x30) + 0xfc);
        iStack_3c = iVar7;
        iStack_38 = iVar2;
        CacheString::clear((CacheString *)&pcStack_48);
        iStack_44 = 1;
        if (0 < iVar7) {
          do {
            iVar8 = iStack_44;
            FUN_00447ec0(&pcStack_48,"HpEngine0%d",iStack_44);
            iVar4 = HardpointSummary::find_name(*(HardpointSummary **)(param_1 + 0x74),pcStack_48);
            if (iVar4 != -1) {
              uStack_40 = *(undefined4 *)(iVar2 + 0x78);
              pcVar1 = *(char **)(iVar2 + 0x60);
              iVar2 = *(int *)(param_1 + 0xa4);
              iVar4 = iVar4 * 8;
              puVar5 = (undefined4 *)
                       (**(code **)(**(int **)Engine_exref + 0x90))
                                 (*(int **)Engine_exref,*(undefined4 *)(iVar2 + iVar4));
              iStack_38 = 0;
              uStack_24 = 0;
              uStack_30 = *puVar5;
              uStack_2c = puVar5[1];
              uStack_28 = puVar5[2];
              local_34 = (int *)((uint)local_34 & 0xfffffff8 | 3);
              uVar6 = FUN_0042ae40(&pcStack_48);
              FUN_00428680(uVar6,&iStack_38,iVar2 + iVar4 + 4,0);
              iVar2 = *(int *)(param_1 + 0xa8);
              pcStack_48 = pcVar1;
              puVar5 = (undefined4 *)
                       (**(code **)(**(int **)Engine_exref + 0x90))
                                 (*(int **)Engine_exref,*(undefined4 *)(iVar2 + iVar4));
              uStack_18 = 0;
              uStack_4 = 0;
              uStack_10 = *puVar5;
              uStack_c = puVar5[1];
              bStack_14 = bStack_14 & 0xf8 | 3;
              uStack_8 = puVar5[2];
              uVar6 = FUN_0042ae40(&uStack_40);
              FUN_00428680(uVar6,&uStack_18,iVar2 + iVar4 + 4,0);
              iVar7 = iStack_3c;
              iVar2 = iStack_38;
              iVar8 = iStack_44;
            }
            iStack_44 = iVar8 + 1;
          } while (iStack_44 <= iVar7);
        }
      }
      local_4c = (int *)*local_4c;
    } while (local_4c != local_34);
  }
  return;
}

