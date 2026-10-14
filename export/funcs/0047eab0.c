
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047eab0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  GoodInfo *pGVar6;
  undefined4 *puVar7;
  Equipment *pEVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  EquipDesc *pEVar12;
  float fStack_10;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x360) != 0)) {
    uVar5 = FUN_00483580();
    pGVar6 = GoodList::find_by_id(uVar5);
    if (pGVar6 != (GoodInfo *)0x0) {
      FUN_0043a510(DAT_0066873c);
      puVar7 = (undefined4 *)FUN_00437d90(uVar5);
      if ((puVar7 != (undefined4 *)0x0) && (uVar10 = puVar7[7], 0 < (int)uVar10)) {
        if (uVar10 < param_2) {
          param_2 = uVar10;
        }
        puVar7[7] = uVar10 - param_2;
        FUN_00438220(DAT_0066873c,uVar5,param_2);
        if ((puVar7[7] == 0) && (*(int *)(param_1 + 0x398) != 0)) {
          FUN_0047e9e0();
        }
        if (*(int *)(*(int *)(param_1 + 0x360) + 0x978) == 3) {
          if (**(char **)(param_1 + 0x394) == '\0') {
            iVar9 = FUN_0047e460(*(undefined4 *)(pGVar6 + 0x50));
            if ((((iVar9 == 3) && (param_2 == 1)) &&
                (iVar9 = *(int *)(pGVar6 + 0x50), iVar9 != DAT_00674a8c)) &&
               ((iVar9 != DAT_00674a88 && (cVar4 = FUN_0047fb40(iVar9), cVar4 == '\0')))) {
              FUN_004c4200(*(undefined4 *)(pGVar6 + 0x50),0x3f800000);
              FUN_00489e80(DAT_00671c70,0);
            }
            else {
              FUN_004c4230(*(undefined4 *)(pGVar6 + 0x50),param_2,0x3f800000);
              FUN_00489e80(DAT_00671c6c,0);
            }
          }
          else {
            FUN_004c41d0(*(undefined4 *)(pGVar6 + 0x50),(undefined4 *)(param_1 + 0x394),0x3f800000);
            uVar1 = *(undefined4 *)(param_1 + 0x394);
            pEVar8 = Archetype::GetEquipment(*(uint *)(pGVar6 + 0x50));
            if ((pEVar8 != (Equipment *)0x0) &&
               (iVar9 = (**(code **)(*(int *)pEVar8 + 0x10))(), iVar9 == 0x11)) {
              bVar3 = ID_String::IsEmpty((ID_String *)(pEVar8 + 0x98));
              if ((!bVar3) &&
                 ((pEVar8 = Archetype::GetEquipmentByName((ID_String *)(pEVar8 + 0x98)),
                  pEVar8 != (Equipment *)0x0 && (pEVar8[0x78] == (Equipment)0x0)))) {
                FUN_004f6200(0,uVar1);
              }
            }
            FUN_00489e80(DAT_00671c70,0);
            FUN_004c6860(*(undefined4 *)(pGVar6 + 0x50));
          }
        }
        else {
          FUN_004c4230(*(undefined4 *)(pGVar6 + 0x50),param_2,0x3f800000);
        }
        iVar9 = FUN_0047f040(*puVar7);
        FUN_004c4d50(iVar9 * param_2);
        *(undefined1 *)(param_1 + 0x4e5) = 0;
        *(undefined1 *)(param_1 + 0x3b8) = 1;
        if ((*(int *)(pGVar6 + 0xb8) != 0) && (0 < *(int *)(pGVar6 + 0xbc))) {
          Archetype::GetEquipment(*(uint *)(pGVar6 + 0x50));
          fStack_10 = 0.0;
          pEVar8 = Archetype::GetEquipment(*(uint *)(pGVar6 + 0xb8));
          iVar9 = *(int *)(pGVar6 + 0xbc);
          if (pEVar8 != (Equipment *)0x0) {
            fStack_10 = *(float *)(pEVar8 + 0x5c);
            uVar10 = Arch2Good(*(uint *)(pGVar6 + 0xb8));
            iVar11 = FUN_00437d90(uVar10);
            if ((iVar11 == 0) || (iVar2 = *(int *)(iVar11 + 0x1c), iVar2 < 1)) {
              iVar9 = 0;
            }
            else {
              if (iVar2 < iVar9) {
                iVar9 = iVar2;
              }
              *(int *)(iVar11 + 0x1c) = iVar2 - iVar9;
              FUN_00438220(DAT_0066873c,uVar10,iVar9);
            }
          }
          FUN_004c4610();
          FUN_004c4640();
          iVar11 = iVar9;
          if ((fStack_10 != _DAT_005c7474) && (iVar11 = ftol(), iVar9 < iVar11)) {
            iVar11 = iVar9;
          }
          iVar9 = *(int *)MAX_PLAYER_AMMO_exref;
          pEVar12 = EquipDescList::find_matching_cargo
                              ((EquipDescList *)(param_1 + 0x34c),*(uint *)(pGVar6 + 0xb8),0,1.0);
          if (pEVar12 != (EquipDesc *)0x0) {
            iVar9 = iVar9 - *(int *)(pEVar12 + 0x14);
          }
          if (iVar9 < iVar11) {
            iVar11 = iVar9;
          }
          if (0 < iVar11) {
            FUN_004c4230(*(undefined4 *)(pGVar6 + 0xb8),iVar11,0x3f800000);
          }
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x360) + 0x978) != 2) {
        *(uint *)(param_1 + 0x3bc) = uVar5;
        if ((*(int *)(param_1 + 0x32c) != 0) && (*(int *)(param_1 + 0x32c) != 2)) {
          *(undefined1 *)(param_1 + 0x3c0) = 1;
          return;
        }
        *(undefined1 *)(param_1 + 0x3b9) = 1;
      }
    }
  }
  return;
}

