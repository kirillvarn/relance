
void FUN_004c4170(undefined4 param_1,EquipDesc *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  DAT_00673384 = DAT_00673384 + 1;
  bVar1 = arch_is_combinable(*(uint *)(param_2 + 4));
  iVar2 = EquipDescList::add_equipment_item((EquipDescList *)&DAT_00672960,param_2,bVar1);
  iVar3 = FUN_00446be0();
  if (iVar3 != 0) {
    FUN_004477d0(iVar2,*(undefined4 *)(param_2 + 4),*(undefined2 *)(param_2 + 2),param_2 + 8,
                 *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10));
  }
  return;
}

