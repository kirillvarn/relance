
undefined1 FUN_004c43d0(ushort param_1,CacheString *param_2,int param_3,float param_4,bool param_5)

{
  bool bVar1;
  EquipDesc *this;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  EquipDesc local_20 [2];
  ushort local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int local_18;
  EquipDesc local_14;
  undefined4 local_10;
  undefined4 local_c;
  EquipDesc local_8;
  undefined4 local_4;
  
  uVar5 = 0;
  this = EquipDescList::find_equipment_item((EquipDescList *)&DAT_00672960,param_1);
  if (this != (EquipDesc *)0x0) {
    DAT_00673384 = DAT_00673384 + 1;
    local_18 = *(int *)(this + 8);
    uVar5 = 1;
    if (local_18 != *(int *)param_2) {
      local_20[0] = *this;
      local_1e = *(ushort *)(this + 2);
      local_14 = this[0xc];
      local_c = *(undefined4 *)(this + 0x14);
      uStack_1c = (undefined2)*(undefined4 *)(this + 4);
      uStack_1a = (undefined2)((uint)*(undefined4 *)(this + 4) >> 0x10);
      local_10 = *(undefined4 *)(this + 0x10);
      local_4 = *(undefined4 *)(this + 0x1c);
      local_8 = this[0x18];
      iVar2 = EquipDescList::remove_equipment_item((EquipDescList *)&DAT_00672960,local_1e,-1);
      EquipDesc::set_hardpoint(local_20,param_2);
      EquipDesc::set_count(local_20,param_3);
      EquipDesc::set_status(local_20,param_4);
      EquipDesc::set_equipped(local_20,param_5);
      bVar1 = arch_is_combinable(CONCAT22(uStack_1a,uStack_1c));
      iVar3 = EquipDescList::add_equipment_item((EquipDescList *)&DAT_00672960,local_20,bVar1);
      iVar4 = FUN_00446be0();
      if (iVar4 != 0) {
        FUN_00447850(iVar2,CONCAT22(uStack_1a,uStack_1c),CONCAT22(uStack_1c,local_1e),&local_18,
                     local_c);
        FUN_004477d0(iVar3,CONCAT22(uStack_1a,uStack_1c),CONCAT22(uStack_1c,local_1e),param_2,
                     param_3,param_4);
      }
      return 1;
    }
    EquipDesc::set_count(this,param_3);
    EquipDesc::set_status(this,param_4);
    EquipDesc::set_equipped(this,param_5);
  }
  return uVar5;
}

