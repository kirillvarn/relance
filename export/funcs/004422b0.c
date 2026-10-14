
undefined4 FUN_004422b0(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *plVar6;
  Equipment *pEVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  list<EquipDesc,std::allocator<EquipDesc>_> local_18 [4];
  int *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b96d9;
  pvStack_c = ExceptionList;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  ExceptionList = &pvStack_c;
  plVar6 = (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)FUN_004c4060();
  std::list<EquipDesc,std::allocator<EquipDesc>_>::list<EquipDesc,std::allocator<EquipDesc>_>
            (local_18,plVar6);
  piVar10 = (int *)*local_14;
  local_4 = 0;
  if (piVar10 != local_14) {
    do {
      if (((char)piVar10[5] != '\0') &&
         (pEVar7 = Archetype::GetEquipment(piVar10[3]), pEVar7 != (Equipment *)0x0)) {
        iVar8 = (**(code **)(*(int *)pEVar7 + 0x10))();
        if (iVar8 == 0xb) {
          bVar3 = true;
        }
        else if (iVar8 == 0xc) {
          bVar2 = true;
        }
        else if (iVar8 == 0x14) {
          bVar4 = true;
        }
      }
      piVar5 = local_14;
      piVar10 = (int *)*piVar10;
    } while (piVar10 != local_14);
    if (bVar2) {
      if (!bVar3) {
        FUN_00489e80(DAT_00668814,0);
        FUN_004b62f0(0x49e,0x41000000);
        local_4 = 0xffffffff;
        std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
                  (local_18,&piStack_28,*local_14,local_14);
        FUN_005b7e1d(local_14);
        ExceptionList = pvStack_c;
        return 0;
      }
      if (!bVar4) {
        FUN_00489e80(DAT_00668810,0);
        FUN_004b62f0(0x49f,0x41000000);
        piVar10 = local_14;
        piStack_28 = (int *)*local_14;
        local_4 = 0xffffffff;
        while (piStack_28 != piVar10) {
          puVar9 = (undefined4 *)FUN_0053ab20(auStack_24,0);
          std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(local_18,auStack_20,*puVar9);
        }
        FUN_005b7e1d(local_14);
        ExceptionList = pvStack_c;
        return 0;
      }
      piVar10 = (int *)*local_14;
      local_4 = 0xffffffff;
      while (piVar10 != piVar5) {
        piVar1 = (int *)*piVar10;
        std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(local_18,auStack_1c,piVar10);
        piVar10 = piVar1;
      }
      FUN_005b7e1d(local_14);
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  FUN_00489e80(DAT_00668818,0);
  FUN_004b62f0(0x49d,0x41000000);
  local_4 = 0xffffffff;
  std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(local_18,&piStack_28,*local_14,local_14);
  FUN_005b7e1d(local_14);
  ExceptionList = pvStack_c;
  return 0;
}

