
int * __thiscall FUN_004b7270(void *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd2a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar5 = operator_new(0x984);
  local_4 = 0;
  if (piVar5 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    FUN_00477cf0();
    piVar5[0x25d] = (int)&PTR_LAB_005cbed8;
    local_4._0_1_ = 2;
    *(list<EquipDesc,std::allocator<EquipDesc>_> *)(piVar5 + 0x25e) = param_3._0_1_;
    pvVar6 = operator_new(0x28);
    *(void **)pvVar6 = pvVar6;
    *(void **)((int)pvVar6 + 4) = pvVar6;
    piVar5[0x25f] = (int)pvVar6;
    piVar5[0x260] = 0;
    *piVar5 = (int)&PTR_FUN_005d561c;
    piVar5[0x1f] = (int)&PTR_OnReceive_005d560c;
    piVar5[0x25d] = (int)&PTR_FUN_005d5604;
    puVar1 = (undefined4 *)piVar5[0x25f];
    local_4 = CONCAT31(local_4._1_3_,3);
    puVar3 = (undefined4 *)*puVar1;
    while (piVar7 = piVar5, puVar3 != puVar1) {
      puVar2 = (undefined4 *)*puVar3;
      std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
                ((list<EquipDesc,std::allocator<EquipDesc>_> *)(piVar5 + 0x25e),local_10,puVar3);
      puVar3 = puVar2;
    }
  }
  piVar7[4] = (int)param_1 + 0xc;
  local_4 = 0xffffffff;
  cVar4 = (**(code **)(*piVar7 + 0x24))(param_2,param_3);
  if (cVar4 == '\0') {
    (**(code **)*piVar7)(1);
    ExceptionList = param_1;
    return (int *)0x0;
  }
  ExceptionList = piVar5;
  return piVar7;
}

