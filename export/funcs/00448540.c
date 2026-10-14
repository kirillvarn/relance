
void __thiscall FUN_00448540(int param_1,list<EquipDesc,std::allocator<EquipDesc>_> *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  list<EquipDesc,std::allocator<EquipDesc>_> *plVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  list<EquipDesc,std::allocator<EquipDesc>_> *local_18;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9a2b;
  local_c = ExceptionList;
  plVar6 = *(list<EquipDesc,std::allocator<EquipDesc>_> **)(param_1 + 0x6c);
  ppvVar5 = &local_c;
  local_14 = param_1;
  if (plVar6 != (list<EquipDesc,std::allocator<EquipDesc>_> *)0x0) {
    puVar1 = *(undefined4 **)(plVar6 + 4);
    ppvVar5 = &local_c;
    puVar3 = (undefined4 *)*puVar1;
    while (ExceptionList = ppvVar5, puVar3 != puVar1) {
      puVar2 = (undefined4 *)*puVar3;
      std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(plVar6,&local_18,puVar3);
      ppvVar5 = ExceptionList;
      puVar3 = puVar2;
    }
    FUN_005b7e1d(*(undefined4 *)(plVar6 + 4));
    *(undefined4 *)(plVar6 + 4) = 0;
    *(undefined4 *)(plVar6 + 8) = 0;
    FUN_005b7e1d(plVar6);
    ppvVar5 = ExceptionList;
  }
  ExceptionList = ppvVar5;
  plVar6 = operator_new(0xc);
  local_4 = 0;
  if (plVar6 == (list<EquipDesc,std::allocator<EquipDesc>_> *)0x0) {
    local_18 = (list<EquipDesc,std::allocator<EquipDesc>_> *)0x0;
  }
  else {
    *plVar6 = param_2._0_1_;
    local_18 = plVar6;
    pvVar7 = operator_new(0x28);
    *(void **)pvVar7 = pvVar7;
    *(void **)((int)pvVar7 + 4) = pvVar7;
    *(void **)(plVar6 + 4) = pvVar7;
    *(undefined4 *)(plVar6 + 8) = 0;
    local_18 = plVar6;
  }
  plVar6 = local_18;
  local_4 = 0xffffffff;
  *(list<EquipDesc,std::allocator<EquipDesc>_> **)(local_14 + 0x6c) = local_18;
  if (local_18 != param_2) {
    puVar1 = *(undefined4 **)(local_18 + 4);
    puVar3 = (undefined4 *)*puVar1;
    puVar2 = *(undefined4 **)(param_2 + 4);
    for (puVar4 = (undefined4 *)*puVar2; (puVar3 != puVar1 && (puVar4 != puVar2));
        puVar4 = (undefined4 *)*puVar4) {
      puVar10 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      puVar9 = puVar4 + 2;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    while (puVar3 != puVar1) {
      puVar10 = (undefined4 *)*puVar3;
      std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(plVar6,&local_14,puVar3);
      puVar3 = puVar10;
    }
    for (; puVar4 != puVar2; puVar4 = (undefined4 *)*puVar4) {
      std::list<EquipDesc,std::allocator<EquipDesc>_>::insert(plVar6,local_10,puVar1,puVar4 + 2);
    }
  }
  ExceptionList = local_c;
  return;
}

