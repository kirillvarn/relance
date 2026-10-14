
void __fastcall FUN_00446fb0(undefined4 *param_1)

{
  list<EquipDesc,std::allocator<EquipDesc>_> *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_005b99a3;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005cbdf0;
  plVar1 = (list<EquipDesc,std::allocator<EquipDesc>_> *)param_1[0x1b];
  local_4 = 1;
  if (plVar1 != (list<EquipDesc,std::allocator<EquipDesc>_> *)0x0) {
    puVar2 = *(undefined4 **)(plVar1 + 4);
    puVar4 = (undefined4 *)*puVar2;
    while (puVar4 != puVar2) {
      puVar3 = (undefined4 *)*puVar4;
      std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(plVar1,local_10,puVar4);
      puVar4 = puVar3;
    }
    FUN_005b7e1d(*(undefined4 *)(plVar1 + 4));
    *(undefined4 *)(plVar1 + 4) = 0;
    *(undefined4 *)(plVar1 + 8) = 0;
    FUN_005b7e1d(plVar1);
  }
  malloc_strfree((char **)(param_1 + 0x19));
  iVar5 = 0;
  if (0 < (int)param_1[0x1e]) {
    do {
      FUN_00458160(iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[0x1e]);
  }
  iVar5 = param_1[0x28];
  if (iVar5 != 0) {
    FUN_005b7ec6(iVar5,0x44,*(undefined4 *)(iVar5 + -4),FUN_00446c80);
    FUN_005b7e1d(iVar5 + -4);
  }
  iVar5 = param_1[0x29];
  if (iVar5 != 0) {
    FUN_005b7ec6(iVar5,8,*(undefined4 *)(iVar5 + -4),FUN_00446ec0);
    FUN_005b7e1d(iVar5 + -4);
  }
  if (param_1[0x2a] != 0) {
    FUN_00447620(3);
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_00457e30();
  if (param_1[0x1c] != -1) {
    (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,param_1[0x1c]);
  }
  DAT_00668a9c = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00457dc0();
  local_4 = 0xffffffff;
  FUN_005594b0();
  ExceptionList = pvStack_c;
  return;
}

