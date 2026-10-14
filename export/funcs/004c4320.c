
undefined1 FUN_004c4320(undefined4 param_1,ushort param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  EquipDesc *pEVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 local_18;
  EquipDesc local_14;
  undefined4 local_10;
  undefined4 local_c;
  EquipDesc local_8;
  undefined4 local_4;
  
  uVar6 = 0;
  pEVar3 = EquipDescList::find_equipment_item((EquipDescList *)&DAT_00672960,param_2);
  if (pEVar3 != (EquipDesc *)0x0) {
    uVar1 = *(undefined4 *)(pEVar3 + 4);
    uVar2 = *(undefined4 *)(pEVar3 + 2);
    local_14 = pEVar3[0xc];
    local_18 = *(undefined4 *)(pEVar3 + 8);
    local_c = *(undefined4 *)(pEVar3 + 0x14);
    local_10 = *(undefined4 *)(pEVar3 + 0x10);
    local_8 = pEVar3[0x18];
    local_4 = *(undefined4 *)(pEVar3 + 0x1c);
    DAT_00673384 = DAT_00673384 + 1;
    uVar6 = 1;
    iVar4 = EquipDescList::remove_equipment_item((EquipDescList *)&DAT_00672960,param_2,param_3);
    iVar5 = FUN_00446be0();
    if (iVar5 != 0) {
      FUN_00447850(iVar4,uVar1,uVar2,&local_18,param_3);
    }
  }
  return uVar6;
}

