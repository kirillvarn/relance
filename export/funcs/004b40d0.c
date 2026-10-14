
void __fastcall FUN_004b40d0(int param_1)

{
  _Node *p_Var1;
  bool bVar2;
  bool bVar3;
  _Node *p_Var4;
  int iVar5;
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *this;
  undefined4 *puVar6;
  undefined4 *puVar7;
  list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *plVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint local_234;
  int local_230;
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> local_22c [4];
  _Node *local_228;
  undefined4 local_224;
  list<EquipDesc,std::allocator<EquipDesc>_> local_220 [4];
  undefined4 *local_21c;
  undefined4 uStack_218;
  undefined1 local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd088;
  local_c = ExceptionList;
  iVar13 = 0;
  iVar12 = 0;
  for (uVar11 = 0;
      (*(int *)(param_1 + 0x334) != 0 &&
      (uVar11 < (uint)(*(int *)(param_1 + 0x338) - *(int *)(param_1 + 0x334) >> 5)));
      uVar11 = uVar11 + 1) {
    iVar5 = *(int *)(param_1 + 0x334) + iVar12;
    if (*(char *)(iVar5 + 0x1c) != '\0') {
      iVar13 = iVar13 + *(int *)(iVar5 + 0xc);
    }
    iVar12 = iVar12 + 0x20;
  }
  ExceptionList = &local_c;
  local_230 = param_1;
  iVar12 = FUN_004c4ce0();
  if (iVar13 <= iVar12) {
    FUN_004c4d50(iVar13);
    this = (list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)FUN_004c3f00();
    local_22c[0] = *this;
    local_228 = std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::_Buynode
                          (local_22c,(_Node *)0x0,(_Node *)0x0);
    local_224 = 0;
    uVar9 = *(undefined4 *)(this + 4);
    puVar6 = (undefined4 *)
             std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::begin(this);
    puVar7 = (undefined4 *)
             std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::begin(local_22c);
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::insert
              (local_22c,*puVar7,*puVar6,uVar9);
    local_4 = 0;
    plVar8 = (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)FUN_004c4060();
    std::list<EquipDesc,std::allocator<EquipDesc>_>::list<EquipDesc,std::allocator<EquipDesc>_>
              (local_220,plVar8);
    bVar2 = false;
    iVar12 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    bVar3 = false;
    for (local_234 = 0;
        (puVar6 = local_21c, *(int *)(param_1 + 0x334) != 0 &&
        (local_234 < (uint)(*(int *)(param_1 + 0x338) - *(int *)(param_1 + 0x334) >> 5)));
        local_234 = local_234 + 1) {
      piVar14 = (int *)(*(int *)(param_1 + 0x334) + iVar12);
      if (*(char *)(*(int *)(param_1 + 0x334) + 0x1c + iVar12) != '\0') {
        iVar13 = *piVar14;
        if (iVar13 == 0) {
          FUN_004c4f50(0x3f800000);
        }
        else if (iVar13 == 1) {
          for (p_Var1 = *(_Node **)local_228; p_Var1 != local_228; p_Var1 = *(_Node **)p_Var1) {
            if (*(short *)(p_Var1 + 8) == (short)piVar14[1]) {
              *(undefined4 *)(p_Var1 + 0xc) = 0x3f800000;
              bVar3 = true;
              param_1 = local_230;
            }
          }
        }
        else if (iVar13 == 2) {
          param_1 = local_230;
          for (puVar7 = (undefined4 *)*local_21c; local_230 = param_1, puVar7 != puVar6;
              puVar7 = (undefined4 *)*puVar7) {
            if (*(short *)((int)puVar7 + 10) == (short)piVar14[1]) {
              EquipDesc::set_status((EquipDesc *)(puVar7 + 2),1.0);
              bVar2 = true;
            }
            param_1 = local_230;
          }
        }
      }
      iVar12 = iVar12 + 0x20;
    }
    if (bVar3) {
      FUN_004c3f10(local_22c);
    }
    if (bVar2) {
      FUN_004c4040(local_220);
    }
    uVar9 = FUN_004c4ce0(0x476);
    FUN_004779a0(local_20c,uVar9);
    (**(code **)(**(int **)(param_1 + 0x47c) + 0xa8))(0x1d,local_20c,0);
    puVar7 = local_21c;
    puVar6 = (undefined4 *)*local_21c;
    local_4 = local_4 & 0xffffff00;
    while (puVar6 != puVar7) {
      puVar10 = (undefined4 *)FUN_0053ab20(&local_234,0);
      std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(local_220,&local_230,*puVar10);
    }
    FUN_005b7e1d(local_21c);
    p_Var4 = local_228;
    local_21c = (undefined4 *)0x0;
    uStack_218 = 0;
    p_Var1 = *(_Node **)local_228;
    local_4 = 0xffffffff;
    while (p_Var1 != p_Var4) {
      puVar6 = (undefined4 *)FUN_0053ab20(&local_234,0);
      std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::erase
                (local_22c,&local_230,*puVar6);
    }
    FUN_005b7e1d(local_228);
  }
  ExceptionList = local_c;
  return;
}

