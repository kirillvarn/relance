
INotify * __thiscall FUN_00531b40(INotify *param_1,CEquip *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  CAttachedEquip *this;
  AttachedEquipment *pAVar3;
  Explosion *pEVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c06c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(CEquip **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &PTR_FUN_005de13c;
  CEquip::ConnectClientEquip(param_2,param_1);
  this = CAttachedEquip::cast(param_2);
  if (this != (CAttachedEquip *)0x0) {
    pAVar3 = CAttachedEquip::AttachedEquipArch(this);
    bVar1 = ID_String::IsEmpty((ID_String *)(pAVar3 + 0x70));
    if (!bVar1) {
      pAVar3 = CAttachedEquip::AttachedEquipArch(this);
      pEVar4 = Archetype::GetExplosion((ID_String *)(pAVar3 + 0x70));
      *(Explosion **)(param_1 + 0xc) = pEVar4;
      if (pEVar4 != (Explosion *)0x0) {
        FUN_00536100(pEVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined ***)param_1 = &PTR_FUN_005de14c;
  local_4 = 1;
  cVar2 = (**(code **)(*(int *)param_2 + 4))();
  if (cVar2 != '\0') {
    FUN_00531cf0();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

