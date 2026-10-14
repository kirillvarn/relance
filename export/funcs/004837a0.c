
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004837a0(int param_1,int param_2,int *param_3)

{
  CacheString *this;
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  Equipment *pEVar6;
  uint uVar7;
  uint uVar8;
  Ship *pSVar9;
  EquipDesc *pEVar10;
  
  *param_3 = 0;
  iVar1 = FUN_004c3e10();
  if (iVar1 == 0) {
    *param_3 = 3;
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  FUN_0043a510(DAT_0066873c);
  puVar2 = (uint *)FUN_00437d90(param_2);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  if ((int)puVar2[7] < 1) {
    return 0;
  }
  uVar3 = FUN_0047f040(*puVar2);
  uVar4 = FUN_004c4ce0();
  uVar4 = uVar4 / uVar3;
  if ((int)uVar4 < 1) {
    *param_3 = 2;
    return 0;
  }
  if (*(int *)(param_1 + 0x974) != 0) {
    this = (CacheString *)(*(int *)(param_1 + 0x974) + 0x394);
    if (**(char **)this == '\0') {
      CacheString::clear(this);
      iVar1 = FUN_00483580();
      if ((iVar1 != 0) &&
         (((*(int *)(param_1 + 0x32c) == 0 || (*(int *)(param_1 + 0x32c) == 2)) &&
          (pcVar5 = (char *)FUN_00585f20(iVar1,0), pcVar5 != (char *)0x0)))) {
        pcVar5 = StringAlloc(pcVar5,false);
        *(char **)(*(int *)(param_1 + 0x974) + 0x394) = pcVar5;
      }
    }
    if (**(char **)(*(int *)(param_1 + 0x974) + 0x394) != '\0') {
      uVar3 = puVar2[7];
      if (1 < (int)uVar3) {
        uVar3 = 1;
      }
      if ((int)uVar4 < (int)uVar3) {
        return uVar4;
      }
      return uVar3;
    }
  }
  uVar3 = Good2Arch(*puVar2);
  if (((uVar3 != 0) && (pEVar6 = Archetype::GetEquipment(uVar3), pEVar6 != (Equipment *)0x0)) &&
     (*(float *)(pEVar6 + 0x5c) != _DAT_005c7474)) {
    FUN_004c4610();
    FUN_004c4640();
  }
  uVar7 = ftol();
  if ((int)uVar7 <= (int)uVar4) {
    uVar4 = uVar7;
  }
  if ((int)puVar2[7] <= (int)uVar4) {
    uVar4 = puVar2[7];
  }
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x974) + 0x32c);
  if (((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 3)) {
    if (((iVar1 != 3) || ((uVar3 != DAT_00674a8c && (uVar3 != DAT_00674a88)))) && (1 < (int)uVar4))
    {
      uVar4 = 1;
    }
    if ((iVar1 == 3) && ((uVar3 == DAT_00674a8c || (uVar3 == DAT_00674a88)))) {
      uVar8 = FUN_004c3e10();
      pSVar9 = Archetype::GetShip(uVar8);
      if (pSVar9 != (Ship *)0x0) {
        if (uVar3 == DAT_00674a8c) {
          pEVar10 = EquipDescList::find_matching_cargo
                              ((EquipDescList *)(*(int *)(param_1 + 0x974) + 0x34c),DAT_00674a8c,0,
                               1.0);
          iVar1 = 0;
          if (pEVar10 != (EquipDesc *)0x0) {
            iVar1 = *(int *)(pEVar10 + 0x14);
          }
          uVar8 = *(int *)(pSVar9 + 0x140) - iVar1;
          if (((int)uVar8 < (int)uVar4) && (-1 < *(int *)(pSVar9 + 0x140))) {
            uVar4 = uVar8;
          }
          if (0 < (int)uVar4) goto LAB_00483a56;
          *param_3 = 9;
        }
        else {
          if (uVar3 != DAT_00674a88) goto LAB_00483a56;
          pEVar10 = EquipDescList::find_matching_cargo
                              ((EquipDescList *)(*(int *)(param_1 + 0x974) + 0x34c),DAT_00674a88,0,
                               1.0);
          iVar1 = 0;
          if (pEVar10 != (EquipDesc *)0x0) {
            iVar1 = *(int *)(pEVar10 + 0x14);
          }
          uVar8 = *(int *)(pSVar9 + 0x144) - iVar1;
          if (((int)uVar8 < (int)uVar4) && (-1 < *(int *)(pSVar9 + 0x144))) {
            uVar4 = uVar8;
          }
          if (0 < (int)uVar4) goto LAB_00483a56;
          *param_3 = 10;
        }
        uVar4 = 0;
      }
    }
  }
LAB_00483a56:
  if (*(int *)(*(int *)(param_1 + 0x974) + 0x32c) == 1) {
    if (*param_3 != 0) {
      return uVar4;
    }
    uVar8 = *(uint *)MAX_PLAYER_AMMO_exref;
    pEVar10 = EquipDescList::find_matching_cargo
                        ((EquipDescList *)(*(int *)(param_1 + 0x974) + 0x34c),uVar3,0,1.0);
    if (pEVar10 != (EquipDesc *)0x0) {
      uVar8 = uVar8 - *(int *)(pEVar10 + 0x14);
    }
    if ((int)uVar8 < (int)uVar4) {
      uVar4 = uVar8;
    }
    if ((int)uVar4 < 1) {
      *param_3 = 0xb;
      return 0;
    }
  }
  if ((*param_3 == 0) && ((int)uVar7 < 1)) {
    *param_3 = 1;
    return 0;
  }
  return uVar4;
}

