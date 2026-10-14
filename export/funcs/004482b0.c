
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004482b0(long param_1)

{
  uint uVar1;
  EqObj *this;
  int iVar2;
  int *piVar3;
  CollisionGroup *pCVar4;
  Root *pRVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  char **ppcVar12;
  char **ppcVar13;
  long *local_58;
  int local_54;
  int *local_50;
  int *local_4c;
  int *local_48 [2];
  Ship *local_40;
  char *pcStack_3c;
  ulong uStack_38;
  char *pcStack_34;
  ulong uStack_30;
  HardpointSummary local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b9a09;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004c3e10();
  this = (EqObj *)Archetype::GetShip(uVar1);
  local_40 = (Ship *)this;
  iVar2 = FUN_004c3f00();
  piVar3 = *(int **)(iVar2 + 4);
  piVar8 = (int *)*piVar3;
  local_54 = 0;
  local_58 = (long *)0x0;
  local_50 = piVar3;
  local_4c = piVar8;
  CompoundInstanceList(param_1,&local_54,&local_58);
  iVar2 = local_54;
  piVar11 = piVar8;
  if (piVar8 != piVar3) {
    do {
      if (((float)piVar8[3] == _DAT_005c7474) && (0 < iVar2)) {
        iVar10 = 0;
        do {
          piVar3 = (int *)(**(code **)(**(int **)Engine_exref + 0x68))
                                    (*(int **)Engine_exref,local_48,local_58[iVar10]);
          pcVar9 = (char *)*piVar3;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = "";
          }
          pCVar4 = Archetype::EqObj::get_group_by_id(this,*(ushort *)(piVar8 + 2));
          if (((pcVar9 != (char *)0x0) && (pCVar4 != (CollisionGroup *)0x0)) &&
             (iVar2 = stricmp(pcVar9,*(char **)(pCVar4 + 8)), iVar2 == 0)) {
            (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,local_58[iVar10]);
            local_58[iVar10] = -1;
          }
          iVar10 = iVar10 + 1;
          iVar2 = local_54;
          piVar3 = local_50;
        } while (iVar10 < local_54);
      }
      piVar8 = (int *)*piVar8;
      piVar11 = local_4c;
    } while (piVar8 != piVar3);
  }
  HardpointSummary::HardpointSummary(local_2c);
  uStack_4 = 0;
  HardpointSummary::analyze_instance(local_2c,param_1);
  if (local_4c != piVar3) {
    do {
      if ((float)piVar11[3] == _DAT_005c7474) {
        pCVar4 = Archetype::EqObj::get_group_by_id(this,*(ushort *)(piVar11 + 2));
        local_48[0] = *(int **)(pCVar4 + 0x44);
        piVar8 = (int *)*local_48[0];
        piVar3 = local_50;
        if (piVar8 != local_48[0]) {
          do {
            pcVar9 = (char *)piVar8[2];
            pRVar5 = Archetype::GetSimple(piVar8[3]);
            uVar6 = FUN_0041c540(*(undefined4 *)(pRVar5 + 0xc),*(undefined4 *)Data_exref,0,0,
                                 *(int *)(pRVar5 + 4) + 0x20,0,0);
            pcStack_3c = "DpConnect";
            uStack_38 = DACOM_CRC::GetCRC32("DpConnect");
            pcStack_34 = pcVar9;
            uStack_30 = DACOM_CRC::GetCRC32(pcVar9);
            local_4c = (int *)**(undefined4 **)Hardpoint_exref;
            ppcVar13 = &pcStack_3c;
            ppcVar12 = &pcStack_34;
            lVar7 = HardpointSummary::find_name_instance(local_2c,pcVar9);
            (*(code *)local_4c[6])(*(undefined4 *)Hardpoint_exref,lVar7,ppcVar12,uVar6,ppcVar13);
            piVar8 = (int *)*piVar8;
            this = (EqObj *)local_40;
            piVar3 = local_50;
          } while (piVar8 != local_48[0]);
        }
      }
      piVar11 = (int *)*piVar11;
    } while (piVar11 != piVar3);
  }
  HardpointSummary::destroy(local_2c);
  FUN_005b7e1d(local_58);
  local_58 = (long *)0x0;
  local_54 = 0;
  uStack_4 = 0xffffffff;
  HardpointSummary::~HardpointSummary(local_2c);
  ExceptionList = pvStack_c;
  return;
}

