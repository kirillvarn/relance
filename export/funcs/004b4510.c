
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b4510(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *plVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  list<EquipDesc,std::allocator<EquipDesc>_> local_18 [4];
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd0a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fVar6 = (float10)FUN_004c4f70();
  if (fVar6 != (float10)_DAT_005c75dc) {
    ExceptionList = local_c;
    return 1;
  }
  iVar3 = FUN_004c3f00();
  for (puVar1 = (undefined4 *)**(undefined4 **)(iVar3 + 4); puVar1 != *(undefined4 **)(iVar3 + 4);
      puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[3] != 0x3f800000) {
      ExceptionList = local_c;
      return 1;
    }
  }
  plVar4 = (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)FUN_004c4060();
  std::list<EquipDesc,std::allocator<EquipDesc>_>::list<EquipDesc,std::allocator<EquipDesc>_>
            (local_18,plVar4);
  puVar2 = local_14;
  puVar1 = (undefined4 *)*local_14;
  local_4 = 0;
  puVar5 = local_14;
  do {
    if (puVar1 == puVar2) {
      local_4 = 0xffffffff;
      puVar1 = (undefined4 *)*puVar5;
      puVar2 = puVar5;
      while (puVar1 != puVar5) {
        puVar2 = (undefined4 *)*puVar1;
        std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(local_18,local_1c,puVar1);
        puVar1 = puVar2;
        puVar2 = local_14;
      }
      FUN_005b7e1d(puVar2);
      ExceptionList = local_c;
      return 0;
    }
    if ((float)puVar1[6] != _DAT_005c75dc) {
      local_24 = 0;
      local_28 = 0;
      iVar3 = FUN_005835f0(puVar1[3],&local_24,&local_28);
      puVar5 = local_14;
      if (iVar3 != 1) {
        local_4 = 0xffffffff;
        puVar1 = (undefined4 *)*local_14;
        while (puVar1 != puVar5) {
          puVar2 = (undefined4 *)*puVar1;
          std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(local_18,local_20,puVar1);
          puVar1 = puVar2;
        }
        FUN_005b7e1d(local_14);
        ExceptionList = local_c;
        return 1;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

