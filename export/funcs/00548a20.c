
undefined4 FUN_00548a20(INI_Reader *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  CSolar *this;
  int unaff_EBX;
  Solar *local_d14;
  undefined1 local_d0e;
  allocator<CollisionGroupDesc> local_d0d;
  int *local_d0c;
  CreateParms local_d08 [4];
  CreateParms local_d04 [4];
  undefined *local_d00;
  undefined4 local_ca8;
  undefined4 local_ca4;
  undefined1 auStack_c70 [4];
  undefined4 local_c6c;
  EquipDescVector local_c68 [16];
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> local_c58 [12];
  ID_String local_c4c [4];
  undefined1 local_c48;
  ID_String local_c44 [4];
  undefined1 local_c40;
  undefined1 local_c3f;
  undefined4 local_c3c;
  ID_String local_c38 [4];
  undefined4 local_c34;
  undefined4 local_c30;
  undefined4 local_c2c;
  undefined4 local_c28;
  undefined4 local_c24;
  undefined4 local_c1c;
  undefined4 local_c18;
  State local_c14 [3080];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c1070;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  INI_Reader::get_state(param_1,local_c14);
  local_d14 = (Solar *)0x0;
  FUN_0052e0a0();
  local_ca8 = 0;
  local_ca4 = 0xffffffff;
  FUN_004cdc10();
  local_c6c = 0;
  EquipDescVector::EquipDescVector(local_c68);
  local_4 = 0;
  std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>(local_c58,&local_d0d);
  local_4 = 1;
  ID_String::clear(local_c4c);
  local_c48 = 0;
  ID_String::clear(local_c44);
  local_c40 = 0;
  local_c3f = 0;
  local_c3c = 0;
  ID_String::clear(local_c38);
  local_c34 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c24 = 0;
  FUN_0046ba60(&local_d0e);
  local_4 = 2;
  CSolar::ReadObj(param_1,&local_d14,local_d04);
  local_d00 = PTR_DAT_00613ed0;
  if (local_d14 == (Solar *)0x0) {
    local_4 = 7;
    puVar3 = (undefined4 *)FUN_0053e430(local_d08);
    FUN_004a2f80(&local_d0c,*puVar3,local_c1c);
    FUN_005b7e1d(local_c1c);
    local_c1c = 0;
    local_c18 = 0;
    local_4 = 0xffffffff;
    FUN_004f4a10();
    uVar2 = 0;
  }
  else {
    (**(code **)(*(int *)local_d14 + 0xc))();
    piVar1 = operator_new(0x208);
    local_4._0_1_ = 3;
    local_d0c = piVar1;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_00532bc0(2);
      piVar1[0x39] = 0;
      piVar1[0x3a] = 0;
      *(undefined1 *)(piVar1 + 0x3b) = 0;
      *(undefined1 *)(piVar1 + 0x7c) = 1;
      local_4._0_1_ = 4;
      piVar1[0x7d] = 0x3f800000;
      piVar1[0x7e] = 0x3f800000;
      piVar1[0x7f] = 0x3f800000;
      ID_String::clear((ID_String *)(piVar1 + 0x80));
      piVar1[0x81] = 0;
      *piVar1 = (int)&PTR_LAB_005e0304;
      piVar1[1] = (int)&PTR_LAB_005e0284;
      piVar1[3] = (int)&PTR_FUN_005e0278;
      piVar1[0x2b] = (int)&PTR_FUN_005e0270;
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    (**(code **)(*piVar1 + 0x168))(local_d14);
    if (((piVar1 == (int *)0xfffffff4) || (this = (CSolar *)piVar1[4], this == (CSolar *)0x0)) ||
       ((*(uint *)(this + 0x4c) & 0x303) != 0x303)) {
      this = (CSolar *)0x0;
    }
    CSolar::init(this,local_d08);
    (**(code **)(**(int **)(unaff_EBX + 4) + 0x20))(1);
    FUN_004252d0(auStack_c70,1);
    uVar2 = (**(code **)(*piVar1 + 0x1c))();
    FUN_00425480(uVar2);
    INI_Reader::set_state(param_1,local_c14);
    FUN_005485c0(param_1);
    FUN_00540c30(piVar1,0);
    Archetype::Root::Release((Root *)local_d14);
    local_4 = 5;
    puVar3 = (undefined4 *)FUN_0053e430(&local_d0c);
    FUN_004a2f80(local_d08,*puVar3,local_c1c);
    FUN_005b7e1d(local_c1c);
    local_c1c = 0;
    local_c18 = 0;
    local_4 = 6;
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::
    ~list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>(local_c58);
    local_4 = 0xffffffff;
    std::vector<EquipDesc,std::allocator<EquipDesc>_>::~vector<EquipDesc,std::allocator<EquipDesc>_>
              ((vector<EquipDesc,std::allocator<EquipDesc>_> *)local_c68);
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}

