
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047f040(float param_1)

{
  int iVar1;
  GoodInfo *pGVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  Equipment *pEVar6;
  EquipDesc *pEVar7;
  int local_14;
  float local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_0043a510(DAT_0066873c);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00438060(param_1);
  local_c = ftol();
  pGVar2 = GoodList::find_by_id((uint)param_1);
  if (((pGVar2 != (GoodInfo *)0x0) && (*(uint *)(pGVar2 + 0xb8) != 0)) &&
     (0 < *(int *)(pGVar2 + 0xbc))) {
    uVar3 = Arch2Good(*(uint *)(pGVar2 + 0xb8));
    FUN_00438060(uVar3);
    local_4 = ftol();
    iVar1 = *(int *)(pGVar2 + 0xbc);
    local_14 = iVar1;
    iVar4 = FUN_00437d90(uVar3);
    if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x1c), iVar4 < 1)) {
      local_14 = 0;
    }
    else if (iVar4 < iVar1) {
      local_14 = iVar4;
    }
    uVar5 = Good2Arch((uint)param_1);
    if ((uVar5 == 0) || (pEVar6 = Archetype::GetEquipment(uVar5), pEVar6 == (Equipment *)0x0)) {
      param_1 = 0.0;
    }
    else {
      param_1 = *(float *)(pEVar6 + 0x5c);
    }
    uVar3 = Good2Arch(uVar3);
    if ((uVar3 == 0) || (pEVar6 = Archetype::GetEquipment(uVar3), pEVar6 == (Equipment *)0x0)) {
      local_10 = 0.0;
    }
    else {
      local_10 = *(float *)(pEVar6 + 0x5c);
    }
    iVar1 = local_14;
    if ((_DAT_005c7474 < param_1) && (_DAT_005c7474 < local_10)) {
      FUN_004c63e0(&local_14,&local_8);
      iVar4 = ftol();
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (iVar4 < iVar1) {
        iVar1 = iVar4;
      }
    }
    iVar4 = *(int *)MAX_PLAYER_AMMO_exref;
    if (*(char *)(local_8 + 0x35c) == '\0') {
      uVar3 = *(uint *)(pGVar2 + 0xb8);
    }
    else {
      uVar3 = *(uint *)(pGVar2 + 0xb8);
      local_8 = *(int *)(local_8 + 0x974);
    }
    pEVar7 = EquipDescList::find_matching_cargo((EquipDescList *)(local_8 + 0x34c),uVar3,0,1.0);
    if (pEVar7 != (EquipDesc *)0x0) {
      iVar4 = iVar4 - *(int *)(pEVar7 + 0x14);
    }
    if (iVar4 < iVar1) {
      iVar1 = iVar4;
    }
    local_c = local_c + iVar1 * local_4;
  }
  return local_c;
}

