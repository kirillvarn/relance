
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_005836a0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Node *p_Var5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  float *local_b8;
  list<EquipDesc,std::allocator<EquipDesc>_> local_b1;
  undefined4 *local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  void *local_94;
  undefined4 *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_6c [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c42fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_90 = param_1;
  FUN_0059f860();
  local_4 = 0;
  ID_String::clear((ID_String *)(param_1 + 0xcb));
  FUN_00420d40();
  local_4._0_1_ = 1;
  FUN_00492250();
  param_1[0xcc] = &PTR_FUN_005d2efc;
  param_1[0xd0] = 0xffffffff;
  local_4._0_1_ = 2;
  FUN_0040f150();
  *(undefined1 *)((int)param_1 + 1099) = 0;
  *(undefined1 *)((int)param_1 + 0x44a) = 0;
  *(undefined1 *)((int)param_1 + 0x449) = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  *(undefined1 *)((int)param_1 + 0x4bf) = 0;
  *(undefined1 *)((int)param_1 + 0x4be) = 0;
  *(undefined1 *)((int)param_1 + 0x4bd) = 0;
  *(undefined1 *)(param_1 + 0x12f) = 0;
  *(undefined1 *)((int)param_1 + 0x4c3) = 0;
  *(undefined1 *)((int)param_1 + 0x4c2) = 0;
  *(undefined1 *)((int)param_1 + 0x4c1) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)((int)param_1 + 0x4c7) = 0;
  *(undefined1 *)((int)param_1 + 0x4c6) = 0;
  *(undefined1 *)((int)param_1 + 0x4c5) = 0;
  *(undefined1 *)(param_1 + 0x131) = 0;
  local_4._0_1_ = 3;
  *(list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x132) = local_b1;
  p_Var5 = std::list<EquipDesc,std::allocator<EquipDesc>_>::_Buynode
                     ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x132),(_Node *)0x0,
                      (_Node *)0x0);
  param_1[0x133] = p_Var5;
  param_1[0x134] = 0;
  *(list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x14e) = local_b1;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  *(list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x153) = local_b1;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  *(list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x158) = local_b1;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  *param_1 = &PTR_FUN_005e4bcc;
  param_1[0x1f] = &PTR_OnReceive_005e4bc0;
  param_1[0x135] = 0;
  param_1[0x129] = 0;
  param_1[0x147] = 2;
  FUN_00583b90();
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xde] = 0x3f800000;
  param_1[0xda] = 0x3f800000;
  param_1[0xd6] = 0x3f800000;
  param_1[0x12f] = DAT_00679bb4;
  param_1[0x130] = DAT_00679bb4;
  param_1[0x139] = 0;
  param_1[0x131] = 0xff20b8c3;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x112] = 0xff000000;
  param_1[0x12d] = 0x41c80000;
  param_1[0x138] = 0;
  puVar6 = (undefined1 *)((int)&local_8c + 2);
  iVar8 = 8;
  do {
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[-1] = 0;
    puVar6[-2] = 0;
    puVar6 = puVar6 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_6c[0] = 1.0;
  local_6c[1] = 1.0;
  local_6c[2] = -1.0;
  local_6c[3] = -0.965;
  local_6c[4] = 0.259;
  local_6c[5] = 0.965;
  local_6c[6] = -1.0;
  local_6c[7] = -1.0;
  local_6c[8] = 1.0;
  local_8c = 0xffffffff;
  local_a4 = &local_8c;
  local_b8 = local_6c;
  local_88 = 0xff644632;
  param_1[0x11b] = 3;
  local_84 = 0xff644632;
  iVar8 = 0;
  puVar9 = param_1 + 0x113;
  do {
    local_94 = operator_new(200);
    local_4._0_1_ = 8;
    if (local_94 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_00410ca0(0xffffffff);
    }
    local_4 = CONCAT31(local_4._1_3_,7);
    *puVar9 = uVar7;
    FUN_004110c0(3,0);
    fVar1 = *local_b8;
    fVar2 = local_b8[1];
    fVar3 = local_b8[2];
    fVar4 = _DAT_005c75dc / SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    local_a0 = -(fVar1 * fVar4);
    local_9c = -(fVar2 * fVar4);
    local_98 = -(fVar3 * fVar4);
    FUN_00411470(&local_a0);
    FUN_004114f0(local_a4);
    (**(code **)(*(int *)*puVar9 + 4))();
    local_b8 = local_b8 + 3;
    iVar8 = iVar8 + 1;
    local_a4 = local_a4 + 1;
    puVar9 = puVar9 + 1;
  } while (iVar8 < (int)param_1[0x11b]);
  *(undefined1 *)(param_1 + 0x157) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

