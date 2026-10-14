
char * __thiscall FUN_00585f20(int param_1,char *param_2,char param_3)

{
  HpAttachmentType HVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  GoodInfo *pGVar6;
  int iVar7;
  HpAttachmentType HVar8;
  int iVar9;
  code *_Str1;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  HpAttachmentType local_48;
  Gun *local_40;
  ShieldGenerator *local_3c;
  HardpointSummary *local_38;
  int local_34;
  int local_30;
  int local_2c;
  char *local_28;
  uint local_24;
  Ship *local_20;
  char local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c43a8;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x4d4) != 0) && (param_2 != (char *)0x0)) {
    local_1c = param_3;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    local_40 = (Gun *)0x0;
    local_3c = (ShieldGenerator *)0x0;
    ExceptionList = &local_c;
    pGVar6 = GoodList::find_by_id((uint)param_2);
    if (pGVar6 == (GoodInfo *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_005835f0(*(undefined4 *)(pGVar6 + 0x50),&local_40,&local_3c);
    }
    local_20 = Archetype::GetShipByName((ID_String *)(param_1 + 0x32c));
    local_38 = (HardpointSummary *)**(int **)(param_1 + 0x4d4);
    if (*(int *)(local_20 + 0x134) == 0) {
      local_2c = 0;
    }
    else {
      local_2c = (*(int *)(local_20 + 0x138) - *(int *)(local_20 + 0x134)) / 0x14;
    }
    local_24 = 0;
    if (0 < local_2c) {
      local_30 = 0;
      do {
        HVar1 = *(HpAttachmentType *)(*(int *)(local_20 + 0x134) + local_30);
        iVar11 = *(int *)(local_20 + 0x134) + local_30;
        bVar4 = false;
        if ((local_48 == 4) && (local_40 != (Gun *)0x0)) {
          iVar7 = Archetype::Gun::get_number_of_hp_types(local_40);
          iVar12 = 0;
          if (0 < iVar7) {
            do {
              HVar8 = Archetype::Gun::get_hp_type_by_index(local_40,iVar12);
              if (HVar1 == HVar8) {
                bVar4 = true;
                break;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar7);
          }
        }
        bVar3 = false;
        if ((local_3c != (ShieldGenerator *)0x0) &&
           ((((local_48 == 5 || (local_48 == 6)) || (local_48 == 7)) || (local_48 == 8)))) {
          iVar7 = Archetype::ShieldGenerator::get_number_of_hp_types(local_3c);
          iVar12 = 0;
          if (0 < iVar7) {
            do {
              HVar8 = Archetype::ShieldGenerator::get_hp_type_by_index(local_3c,iVar12);
              if (HVar1 == HVar8) {
                bVar3 = true;
                break;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar7);
          }
        }
        if (((HVar1 == local_48) || (bVar4)) || (bVar3)) {
          iVar7 = 0;
          if (*(int *)(iVar11 + 8) == 0) {
            local_34 = 0;
          }
          else {
            local_34 = *(int *)(iVar11 + 0xc) - *(int *)(iVar11 + 8) >> 2;
          }
          if (0 < local_34) {
            do {
              pcVar2 = *(char **)(*(int *)(iVar11 + 8) + iVar7 * 4);
              iVar12 = 0;
              if (local_38 != (HardpointSummary *)0x0) {
                for (; iVar9 = HardpointSummary::get_count(local_38), iVar12 < iVar9;
                    iVar12 = iVar12 + 1) {
                  local_28 = HardpointSummary::get_name(local_38,iVar12);
                  if ((local_28 != (char *)0x0) &&
                     (iVar9 = stricmp(local_28,pcVar2), pcVar5 = local_28, iVar9 == 0)) {
                    if (param_3 != '\0') {
                      FUN_005b7e1d(local_18);
                      ExceptionList = local_c;
                      return pcVar5;
                    }
                    iVar9 = FUN_00457f00(iVar12);
                    pcVar5 = local_28;
                    if (iVar9 == -1) {
                      if (!bVar4) {
                        FUN_005b7e1d(local_18);
                        ExceptionList = local_c;
                        return pcVar5;
                      }
                      FUN_00537260(local_14,1,&local_28);
                    }
                  }
                }
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < local_34);
          }
          if ((!bVar4) && (!bVar3)) break;
        }
        local_24 = local_24 + 1;
        local_30 = local_30 + 0x14;
      } while ((int)local_24 < local_2c);
    }
    if ((local_18 != (undefined4 *)0x0) && (iVar11 = local_14 - (int)local_18 >> 2, 0 < iVar11)) {
      if (iVar11 == 1) {
        pcVar2 = (char *)*local_18;
        FUN_005b7e1d(local_18);
        ExceptionList = local_c;
        return pcVar2;
      }
      local_28 = (char *)0x0;
      local_24 = 9999;
      if (*(int *)(param_1 + 0x564) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x564) >> 5;
      }
      param_2 = (char *)0x0;
      puVar10 = local_18;
      if (0 < iVar11) {
        do {
          pcVar2 = (char *)puVar10[(int)param_2];
          uVar13 = 0;
          if (0 < iVar7) {
            iVar12 = 0;
            do {
              if (((iVar12 < 0) || (iVar9 = *(int *)(param_1 + 0x564), iVar9 == 0)) ||
                 ((uint)(*(int *)(param_1 + 0x568) - iVar9 >> 5) <= uVar13)) {
                iVar9 = 0;
              }
              else {
                iVar9 = iVar9 + iVar12;
              }
              _Str1 = *(code **)(iVar9 + 8);
              if (*(code **)(iVar9 + 8) == (code *)0x0) {
                _Str1 = _C_exref;
              }
              iVar9 = stricmp((char *)_Str1,pcVar2);
              puVar10 = local_18;
              if (iVar9 == 0) {
                if ((int)uVar13 < (int)local_24) {
                  local_28 = param_2;
                  local_24 = uVar13;
                }
                break;
              }
              uVar13 = uVar13 + 1;
              iVar12 = iVar12 + 0x20;
            } while ((int)uVar13 < iVar7);
          }
          param_2 = param_2 + 1;
        } while ((int)param_2 < iVar11);
      }
      pcVar2 = (char *)puVar10[(int)local_28];
      FUN_005b7e1d(puVar10);
      ExceptionList = local_c;
      return pcVar2;
    }
    FUN_005b7e1d(local_18);
  }
  ExceptionList = local_c;
  return (char *)0x0;
}

