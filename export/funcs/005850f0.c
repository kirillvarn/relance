
void __thiscall
FUN_005850f0(int param_1,list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *param_2)

{
  list<EquipDesc,std::allocator<EquipDesc>_> *this;
  HardpointSummary *this_00;
  undefined4 *puVar1;
  list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *plVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4396;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    ExceptionList = &local_c;
    FUN_00457e30();
    iVar5 = *(int *)(param_1 + 0x4d4);
    if (iVar5 != 0) {
      FUN_00457dc0();
      FUN_005b7e1d(iVar5);
    }
    *(undefined4 *)(param_1 + 0x4d4) = 0;
  }
  plVar2 = param_2;
  if (param_2 != (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)0x0) {
    this = (list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x4c8);
    std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
              (this,&param_2,**(undefined4 **)(param_1 + 0x4cc),*(undefined4 **)(param_1 + 0x4cc));
    std::list<EquipDesc,std::allocator<EquipDesc>_>::operator=(this,plVar2);
    param_2 = operator_new(0x2c);
    local_4 = 0;
    if (param_2 == (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00457d60();
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4d4) = uVar4;
    FUN_00457f10(*(undefined4 *)(param_1 + 0x4b8));
    this_00 = (HardpointSummary *)**(undefined4 **)(param_1 + 0x4d4);
    local_10 = *(int **)(param_1 + 0x4cc);
    piVar8 = (int *)*local_10;
    if (piVar8 != local_10) {
      do {
        param_2 = (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)piVar8[4];
        bVar3 = EquipDesc::is_internal((EquipDesc *)(piVar8 + 2));
        if ((bVar3) ||
           (iVar5 = HardpointSummary::find_name(this_00,(char *)param_2), piVar10 = piVar8,
           iVar5 == -1)) {
          piVar10 = (int *)piVar8[1];
          *piVar10 = *piVar8;
          *(int *)(*piVar8 + 4) = piVar8[1];
          FUN_005b7e1d(piVar8);
          *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + -1;
        }
        piVar8 = (int *)*piVar10;
      } while (piVar8 != local_10);
    }
    FUN_004581b0(this);
    for (uVar9 = 0;
        (*(int *)(param_1 + 0x53c) != 0 &&
        (uVar9 < (uint)(*(int *)(param_1 + 0x540) - *(int *)(param_1 + 0x53c) >> 2)));
        uVar9 = uVar9 + 1) {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x53c) + uVar9 * 4);
      if (puVar1[1] != -1) {
        FUN_0059eee0();
      }
      (**(code **)*puVar1)(1);
    }
    FUN_0042ec80();
    uVar9 = *(uint *)(*(int *)(param_1 + 0x4d4) + 4);
    if (*(int *)(param_1 + 0x53c) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 0x544) - *(int *)(param_1 + 0x53c) >> 2;
    }
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
      if ((int)uVar9 < 0) {
        uVar6 = 0;
      }
      pvVar7 = operator_new(uVar6 * 4);
      FUN_00597c70(*(undefined4 *)(param_1 + 0x53c),*(undefined4 *)(param_1 + 0x540),pvVar7);
      IDPMsgHandler::OnReceive
                ((IDPMsgHandler *)(param_1 + 0x538),*(uchar **)(param_1 + 0x53c),
                 *(ulong *)(param_1 + 0x540));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x53c));
      *(void **)(param_1 + 0x544) = (void *)((int)pvVar7 + uVar9 * 4);
      iVar5 = FUN_005ad970();
      *(void **)(param_1 + 0x540) = (void *)((int)pvVar7 + iVar5 * 4);
      *(void **)(param_1 + 0x53c) = pvVar7;
    }
    if (0 < (int)uVar9) {
      do {
        piVar8 = operator_new(0x28);
        local_4 = 1;
        param_2 = (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)piVar8;
        if (piVar8 == (int *)0x0) {
          local_10 = (int *)0x0;
        }
        else {
          FUN_00420d40();
          FUN_00492250();
          *piVar8 = (int)&PTR_FUN_005d2efc;
          piVar8[4] = -1;
          local_10 = piVar8;
        }
        local_4 = 0xffffffff;
        FUN_0059ec80("Interface\\NeuroNet\\Inventory\\mountpoint.3db",0,1);
        FUN_004deb70(*(undefined4 *)(param_1 + 0x540),&local_10);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  ExceptionList = local_c;
  return;
}

