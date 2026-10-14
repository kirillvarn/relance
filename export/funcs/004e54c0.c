
void FUN_004e54c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  CObject *this;
  Root *pRVar6;
  undefined4 uVar7;
  int *local_34;
  uint uStack_30;
  undefined1 auStack_2c [4];
  EquipDescList aEStack_28 [4];
  undefined4 *puStack_24;
  EquipDescVector aEStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &DAT_005be862;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_0054baf0();
  if (piVar4 != (int *)0x0) {
    local_34 = (int *)0x0;
    (**(code **)(*piVar4 + 0x74))(&local_34);
    if (((local_34 != (int *)0x0) &&
        (iVar5 = (**(code **)(*local_34 + 0x88))(&uStack_30), iVar5 == 0)) &&
       ((uStack_30 & 0x7f0000) != 0)) {
      FUN_00489e80(DAT_00674ad4,0);
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      iStack_4 = 0;
      iVar5 = (**(code **)(*piVar4 + 0x120))(local_34,aEStack_1c);
      if (iVar5 == 0) {
        uVar7 = 0;
        this = (CObject *)(**(code **)(*local_34 + 0x150))();
        if ((this != (CObject *)0x0) && (((byte)*(undefined4 *)(this + 0x4c) & 1) == 1)) {
          pRVar6 = CObject::get_archetype(this);
          uVar7 = *(undefined4 *)(pRVar6 + 8);
        }
        EquipDescList::EquipDescList(aEStack_28,aEStack_1c);
        iStack_4._0_1_ = 1;
        FUN_004b6b60(aEStack_28,uVar7);
        puVar3 = puStack_24;
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        puVar2 = (undefined4 *)*puStack_24;
        while (puVar2 != puVar3) {
          puVar1 = (undefined4 *)*puVar2;
          std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
                    ((list<EquipDesc,std::allocator<EquipDesc>_> *)aEStack_28,auStack_2c,puVar2);
          puVar2 = puVar1;
        }
        FUN_005b7e1d(puStack_24);
      }
      FUN_005b7e1d(uStack_18);
    }
  }
  ExceptionList = local_c;
  return;
}

