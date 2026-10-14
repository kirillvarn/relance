
INotify * __thiscall FUN_00531a30(INotify *param_1,CEquip *param_2,undefined4 param_3)

{
  bool bVar1;
  CAttachedEquip *this;
  AttachedEquipment *pAVar2;
  Explosion *pEVar3;
  
  *(CEquip **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &PTR_FUN_005de13c;
  CEquip::ConnectClientEquip(param_2,param_1);
  this = CAttachedEquip::cast(param_2);
  if (this != (CAttachedEquip *)0x0) {
    pAVar2 = CAttachedEquip::AttachedEquipArch(this);
    bVar1 = ID_String::IsEmpty((ID_String *)(pAVar2 + 0x70));
    if (!bVar1) {
      pAVar2 = CAttachedEquip::AttachedEquipArch(this);
      pEVar3 = Archetype::GetExplosion((ID_String *)(pAVar2 + 0x70));
      *(Explosion **)(param_1 + 0xc) = pEVar3;
      if (pEVar3 != (Explosion *)0x0) {
        FUN_00536100(pEVar3);
      }
    }
  }
  return param_1;
}

