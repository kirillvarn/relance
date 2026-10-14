
INotify * __thiscall FUN_00532800(INotify *param_1,CEquip *param_2,undefined4 param_3)

{
  bool bVar1;
  CAttachedEquip *this;
  AttachedEquipment *pAVar2;
  Explosion *pEVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c07a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
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
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined ***)param_1 = &PTR_LAB_005de18c;
  ExceptionList = local_c;
  return param_1;
}

