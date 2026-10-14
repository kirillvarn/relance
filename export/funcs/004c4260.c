
undefined1 FUN_004c4260(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  EquipDesc *pEVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  
  (**(code **)(*DAT_0067ecd0 + 0x7c))(param_1,param_2,DAT_00673344);
  uVar6 = 0;
  pEVar3 = EquipDescList::find_equipment_item((EquipDescList *)&DAT_00672960,(ushort)param_1);
  if (pEVar3 != (EquipDesc *)0x0) {
    uVar1 = *(undefined4 *)(pEVar3 + 4);
    uVar2 = *(undefined4 *)(pEVar3 + 2);
    DAT_00673384 = DAT_00673384 + 1;
    uVar6 = 1;
    iVar4 = EquipDescList::remove_equipment_item
                      ((EquipDescList *)&DAT_00672960,(ushort)param_1,param_2);
    iVar5 = FUN_00446be0();
    if (iVar5 != 0) {
      FUN_00447850(iVar4,uVar1,uVar2,&stack0xffffffdc,param_2);
    }
  }
  return uVar6;
}

