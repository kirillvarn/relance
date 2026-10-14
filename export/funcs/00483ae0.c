
void __fastcall FUN_00483ae0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *this;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_28 [4];
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> local_24 [4];
  undefined4 *local_20;
  undefined4 local_1c;
  list<EquipDesc,std::allocator<EquipDesc>_> local_18 [4];
  undefined4 *puStack_14;
  void *local_c;
  undefined *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bc072;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_004c6f70(param_1 + 0x34c,param_1 + 0x330,*(int *)(param_1 + 0x974) + 0x3a8);
  iVar5 = *(int *)(param_1 + 0x974);
  iVar5 = FUN_004c6f70(iVar5 + 0x34c,iVar5 + 0x330,iVar5 + 0x3a8);
  iVar5 = ((*(int *)(param_1 + 0x9f8) - *(int *)(param_1 + 0x9fc)) - iVar4) + iVar5;
  iVar4 = FUN_004c4ce0();
  uVar1 = DAT_0066873c;
  if (iVar5 <= iVar4) {
    FUN_0043a510(DAT_0066873c);
    FUN_00438220(uVar1,*(undefined4 *)(param_1 + 0x97c),1);
    std::list<EquipDesc,std::allocator<EquipDesc>_>::list<EquipDesc,std::allocator<EquipDesc>_>
              (local_18,(list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)
                        (*(int *)(param_1 + 0x974) + 0x34c));
    uVar1 = *(undefined4 *)(param_1 + 0x348);
    local_4 = 0;
    this = (list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)FUN_004c3f00();
    local_24[0] = *this;
    local_20 = operator_new(0x10);
    *local_20 = local_20;
    local_20[1] = local_20;
    local_1c = 0;
    uVar2 = *(undefined4 *)(this + 4);
    puVar6 = (undefined4 *)
             std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::begin(this);
    puVar7 = (undefined4 *)
             std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::begin(local_24);
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::insert
              (local_24,*puVar7,*puVar6,uVar2);
    puVar6 = (undefined4 *)*local_20;
    local_4._0_1_ = 1;
    for (; puVar6 != local_20; puVar6 = (undefined4 *)*puVar6) {
      puVar6[3] = 0x3f800000;
    }
    FUN_004c3f10(local_24);
    FUN_004c6250();
    FUN_004c6250();
    iVar4 = FUN_004c4ce0();
    FUN_004c4cc0(iVar4 - iVar5);
    FUN_004c4040(local_18);
    FUN_004c3df0(uVar1);
    FUN_004c4f50(0x3f800000);
    FUN_004427e0(1);
    FUN_004f6190();
    FUN_005763b0(0x6b,0);
    FUN_00489e80(DAT_00671c60,0);
    puVar7 = local_20;
    local_4 = (uint)local_4._1_3_ << 8;
    puVar6 = (undefined4 *)*local_20;
    while (puVar6 != puVar7) {
      puVar3 = (undefined4 *)*puVar6;
      std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::erase
                (local_24,local_28,puVar6);
      puVar6 = puVar3;
    }
    FUN_005b7e1d(local_20);
    puVar7 = puStack_14;
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
    local_4 = 0xffffffff;
    puVar6 = (undefined4 *)*puStack_14;
    while (puVar6 != puVar7) {
      puVar3 = (undefined4 *)*puVar6;
      std::list<EquipDesc,std::allocator<EquipDesc>_>::erase(local_18,local_28,puVar6);
      puVar6 = puVar3;
    }
    FUN_005b7e1d(puStack_14);
    ExceptionList = local_c;
    return;
  }
  FUN_00489e80(DAT_00671c74,0);
  ExceptionList = local_c;
  return;
}

