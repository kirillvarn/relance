
EquipDesc * FUN_004c45d0(uint param_1)

{
  EquipDesc *pEVar1;
  
  pEVar1 = EquipDescList::traverse_equipment_type
                     ((EquipDescList *)&DAT_00672960,param_1,(EquipDesc *)0x0);
  while( true ) {
    if (pEVar1 == (EquipDesc *)0x0) {
      return (EquipDesc *)0x0;
    }
    if (pEVar1[0x18] == (EquipDesc)0x0) break;
    pEVar1 = EquipDescList::traverse_equipment_type((EquipDescList *)&DAT_00672960,param_1,pEVar1);
  }
  return pEVar1;
}

