
undefined4 __thiscall FUN_004c64b0(int param_1,EquipDesc *param_2,int param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == (EquipDesc *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = *(int *)(param_2 + 0x14);
  }
  iVar1 = *(int *)(param_2 + 0x14);
  EquipDesc::set_count(param_2,param_3);
  EquipDesc::set_equipped(param_2,false);
  bVar2 = arch_is_combinable(*(uint *)(param_2 + 4));
  EquipDescList::add_equipment_item((EquipDescList *)(param_1 + 0x1c),param_2,bVar2);
  if (param_4 != '\0') {
    FUN_005645c0(0x10);
  }
  EquipDesc::set_count(param_2,iVar1);
  return 1;
}

