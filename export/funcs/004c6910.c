
void __thiscall FUN_004c6910(int *param_1,EquipDesc *param_2,char *param_3)

{
  EquipDesc *this;
  char *pcVar1;
  bool bVar2;
  int iVar3;
  Equipment *pEVar4;
  undefined4 uVar5;
  
  pcVar1 = param_3;
  this = param_2;
  if (((param_2 != (EquipDesc *)0x0) && (*param_1 != 0)) &&
     (iVar3 = stricmp(*(char **)(param_2 + 8),param_3), iVar3 != 0)) {
    param_2 = (EquipDesc *)StringAlloc(pcVar1,false);
    EquipDesc::set_hardpoint(this,(CacheString *)&param_2);
    if (pcVar1 != *(char **)CARGO_BAY_HP_NAME_exref) {
      EquipDesc::set_equipped(this,true);
    }
    FUN_005850f0(param_1 + 7);
    bVar2 = EquipDesc::is_internal(this);
    if (bVar2) {
      FUN_005645c0(0x10);
      return;
    }
    pEVar4 = Archetype::GetEquipment(*(uint *)(this + 4));
    if (pEVar4 != (Equipment *)0x0) {
      uVar5 = (**(code **)(*(int *)pEVar4 + 0x10))();
      switch(uVar5) {
      case 6:
      case 10:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x19:
      case 0x1c:
        FUN_005645c0(0x16);
        return;
      case 0xb:
      case 0xd:
      case 0xe:
        FUN_005645c0(0x15);
        break;
      case 0xc:
      case 0xf:
        FUN_005645c0(0x13);
        return;
      case 0x11:
      case 0x13:
      case 0x21:
        FUN_005645c0(0x12);
        return;
      case 0x12:
      case 0x1e:
      case 0x1f:
      case 0x20:
        FUN_005645c0(0x14);
        return;
      }
    }
  }
  return;
}

