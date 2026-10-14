
void __thiscall FUN_00534730(int param_1,undefined4 param_2,CAttachedEquip *param_3)

{
  char cVar1;
  AttachedEquipment *pAVar2;
  AttachedEquipment *pAVar3;
  CObject *pCVar4;
  ID_String *pIVar5;
  ID_String *pIVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  switch(param_2) {
  case 5:
    break;
  case 6:
    uVar8 = 0;
    uVar9 = (**(code **)(*(int *)param_3 + 0x84))(0);
    FUN_004fd230(uVar9,uVar8);
    return;
  case 7:
    pCVar4 = CArchGroup::RetreiveDestroyedObj((CArchGroup *)param_3);
    cVar1 = (**(code **)(*(int *)(param_1 + -0xac) + 0x154))();
    if (cVar1 == '\0') {
      pIVar5 = CArchGroup::ExplosionTypeName((CArchGroup *)param_3);
      pIVar6 = CArchGroup::DebrisTypeName((CArchGroup *)param_3);
      FUN_00533d10(pCVar4,pIVar6,pIVar5);
      return;
    }
    uVar9 = 0;
    pIVar5 = CArchGroup::DebrisTypeName((CArchGroup *)param_3);
    FUN_00533d10(pCVar4,pIVar5,uVar9);
    return;
  case 8:
    uVar9 = 0;
    lVar7 = CArchGroup::GetRootIndex((CArchGroup *)param_3);
    FUN_004fd230(lVar7,uVar9);
  default:
    return;
  }
  pCVar4 = CAttachedEquip::RetrieveDebrisObject(param_3);
  cVar1 = (**(code **)(*(int *)(param_1 + -0xac) + 0x154))();
  if (cVar1 == '\0') {
    pAVar2 = CAttachedEquip::AttachedEquipArch(param_3);
    pAVar2 = pAVar2 + 0x70;
    pAVar3 = CAttachedEquip::AttachedEquipArch(param_3);
    FUN_00533d10(pCVar4,pAVar3 + 0x74,pAVar2);
    return;
  }
  uVar9 = 0;
  pAVar2 = CAttachedEquip::AttachedEquipArch(param_3);
  FUN_00533d10(pCVar4,pAVar2 + 0x74,uVar9);
  return;
}

