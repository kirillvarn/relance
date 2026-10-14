
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f42e0(int param_1,float *param_2,char param_3,int param_4,int param_5)

{
  BaseWatcher *this;
  undefined4 *puVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  Solar *this_00;
  void *pvVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *unaff_retaddr;
  CSolar *this_01;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  undefined1 uStack_204;
  undefined1 uStack_203;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined1 uStack_200;
  undefined1 uStack_1ff;
  undefined1 uStack_1fe;
  undefined1 uStack_1fd;
  undefined1 uStack_1fc;
  undefined1 uStack_1fb;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined1 uStack_1e2;
  undefined1 uStack_1e1;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined1 uStack_1de;
  undefined1 uStack_1dd;
  undefined1 uStack_1dc;
  undefined1 uStack_1db;
  undefined1 uStack_1da;
  undefined1 uStack_1d9;
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  CreateParms aCStack_1d4 [4];
  uint uStack_1d0;
  undefined *puStack_1cc;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  uint auStack_170 [17];
  undefined4 uStack_12c;
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> alStack_120 [4];
  undefined4 *puStack_11c;
  uint uStack_118;
  undefined1 uStack_114;
  ID_String aIStack_110 [4];
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined4 uStack_108;
  ID_String aIStack_104 [4];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined4 uStack_e8;
  undefined4 *puStack_e4;
  undefined4 uStack_e0;
  undefined4 auStack_dc [4];
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined4 uStack_bc;
  undefined1 uStack_b6;
  undefined1 auStack_b4 [16];
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined1 uStack_96;
  char acStack_90 [132];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bf2a3;
  pvStack_c = ExceptionList;
  this = (BaseWatcher *)(param_1 + 0x364);
  ExceptionList = &pvStack_c;
  if ((((*(int *)(param_1 + 0x364) != 0) &&
       (ExceptionList = &pvStack_c, *(int *)(param_1 + 0x364) != 8)) &&
      (ExceptionList = &pvStack_c, param_3 == *(char *)(param_1 + 0x374))) &&
     ((ExceptionList = &pvStack_c, param_4 == *(int *)(param_1 + 0x378) &&
      (ExceptionList = &pvStack_c, param_5 == *(int *)(param_1 + 900))))) {
    if (*(int *)this == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)(*(int *)this + -8);
    }
    ExceptionList = &pvStack_c;
    pfVar3 = (float *)(**(code **)*puVar6)();
    fStack_1f4 = *pfVar3;
    fStack_1f0 = pfVar3[1] - param_2[1];
    fStack_1ec = pfVar3[2] - param_2[2];
    if (((ABS(fStack_1f4 - *param_2) < (float)_DAT_005ca228) &&
        (ABS(fStack_1f0) < (float)_DAT_005ca228)) && (ABS(fStack_1ec) < (float)_DAT_005ca228)) {
      *(undefined1 *)(param_1 + 0x38c) = 1;
      iVar10 = *(int *)this;
      puVar6 = auStack_dc;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      uStack_b6 = 1;
      auStack_dc[0] = 0x1c;
      if (iVar10 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)(iVar10 + -8);
      }
      uStack_cc = (**(code **)(*piVar9 + 0x20))();
      uStack_c8 = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
      FUN_0054bcb0(auStack_dc);
      ExceptionList = pvStack_c;
      return;
    }
  }
  if ((*(int *)this != 0) && (*(int *)this != 8)) {
    if (*(int *)this == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)(*(int *)this + -8);
    }
    (**(code **)(*piVar9 + 0x15c))(1);
    if (*(int *)this != 0) {
      BaseWatcher::set_pointer(this,(Watchable *)0x0);
    }
  }
  *(char *)(param_1 + 0x374) = param_3;
  *(int *)(param_1 + 0x378) = param_4;
  *(int *)(param_1 + 900) = param_5;
  uStack_214 = CreateID("waypoint");
  uVar4 = Archetype::GetSolarID((ID_String *)&uStack_214);
  this_00 = Archetype::GetSolar(uVar4);
  (**(code **)(*(int *)this_00 + 0xc))();
  (**(code **)(**(int **)(this_00 + 4) + 0x20))(0);
  FUN_004f4930();
  puStack_8 = (undefined *)0x0;
  ID_String::clear((ID_String *)&uStack_118);
  uStack_114 = 0;
  ID_String::clear(aIStack_110);
  uStack_10c = 0;
  uStack_10b = 0;
  uStack_108 = 0;
  ID_String::clear(aIStack_104);
  uStack_ec = uStack_214._3_1_;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_e8 = FUN_0042a7e0(0,0);
  puStack_e4 = (undefined4 *)0x0;
  iVar10 = *(int *)(param_1 + 0x36c);
  puStack_1cc = PTR_DAT_00613ed0;
  puStack_8 = (undefined *)0x1;
  *(int *)(param_1 + 0x36c) = iVar10 + 1;
  sprintf(acStack_90,"waypoint_target%d",iVar10);
  uStack_1d0 = CreateID(acStack_90);
  auStack_170[0] = uStack_1d0;
  uStack_118 = uStack_1d0;
  Reputation::Vibe::Alloc((int *)auStack_170);
  Reputation::Vibe::SetAffiliation((int *)auStack_170,0xffffffff,false);
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_207 = 0;
  uStack_206 = 0;
  uStack_205 = 0;
  uStack_204 = 0;
  uStack_203 = 0;
  uStack_202 = 0;
  uStack_201 = 0;
  uStack_200 = 0;
  uStack_1ff = 0;
  uStack_1fe = 0;
  uStack_1fd = 0;
  uStack_1fc = 0;
  uStack_1fb = 0;
  fStack_1ec = 0.0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uStack_1e3 = 0;
  uStack_1e2 = 0;
  uStack_1e1 = 0;
  uStack_1e0 = 0;
  uStack_1df = 0;
  uStack_1de = 0;
  uStack_1dd = 0;
  uStack_1dc = 0;
  uStack_1db = 0;
  uStack_1da = 0;
  uStack_1d9 = 0;
  uStack_1d8 = 0;
  uStack_1d7 = 0;
  puStack_8._0_1_ = 3;
  FmtStr::begin_mad_lib((FmtStr *)&uStack_210,0x442);
  FmtStr::end_mad_lib((FmtStr *)&uStack_210);
  Reputation::Vibe::SetName
            ((int *)auStack_170,(FmtStr *)&uStack_210,(FmtStr *)&fStack_1ec,(ushort *)0x0);
  Reputation::Vibe::SetInfocard((int *)auStack_170,0);
  uStack_1c0 = *unaff_retaddr;
  uStack_1bc = unaff_retaddr[1];
  uStack_1b8 = unaff_retaddr[2];
  pvVar5 = operator_new(0x208);
  puStack_8._0_1_ = 4;
  if (pvVar5 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_005475b0();
  }
  puStack_8 = (undefined *)CONCAT31(puStack_8._1_3_,3);
  (**(code **)(*piVar9 + 0x168))(this_00);
  if (((piVar9 == (int *)0xfffffff4) || (this_01 = (CSolar *)piVar9[4], this_01 == (CSolar *)0x0))
     || ((*(uint *)(this_01 + 0x4c) & 0x303) != 0x303)) {
    this_01 = (CSolar *)0x0;
  }
  CSolar::init(this_01,aCStack_1d4);
  (**(code **)(*piVar9 + 0x170))();
  FUN_00540c30(piVar9,0);
  Archetype::Root::Release((Root *)this_00);
  CObject::enable_collisions_r((CObject *)this_01,false);
  puVar6 = &uStack_bc;
  for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uStack_96 = 1;
  uStack_bc = 0x1c;
  uStack_a4 = (**(code **)(*piVar9 + 0x20))();
  uStack_a0 = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
  FUN_0054bcb0(auStack_b4);
  if ((Watchable *)(piVar9 + 2) != *(Watchable **)(param_1 + 0x364)) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x364),(Watchable *)(piVar9 + 2));
  }
  *(undefined1 *)(param_1 + 0x38c) = 1;
  *(undefined1 *)(param_1 + 0x380) = 0;
  puVar6 = (undefined4 *)FUN_0054baf0();
  if (puVar6 != (undefined4 *)0x0) {
    iVar10 = *(int *)(param_1 + 0x364);
    if (iVar10 == 0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)(iVar10 + -8);
    }
    pfVar3 = (float *)(**(code **)*puVar11)();
    pfVar7 = (float *)(**(code **)*puVar6)();
    fVar2 = SQRT((pfVar7[2] - pfVar3[2]) * (pfVar7[2] - pfVar3[2]) +
                 (pfVar7[1] - pfVar3[1]) * (pfVar7[1] - pfVar3[1]) +
                 (*pfVar7 - *pfVar3) * (*pfVar7 - *pfVar3));
    if (fVar2 < _DAT_005ca230 != (fVar2 == _DAT_005ca230)) {
      *(undefined1 *)(param_1 + 0x380) = 1;
    }
  }
  uStack_4._0_1_ = 2;
  FmtStr::~FmtStr((FmtStr *)&uStack_1e8);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  FmtStr::~FmtStr((FmtStr *)&uStack_20c);
  puVar11 = puStack_e4;
  uStack_4 = 5;
  puVar6 = (undefined4 *)*puStack_e4;
  while (puVar6 != puVar11) {
    puVar1 = (undefined4 *)*puVar6;
    FUN_00516f70(&uStack_214,puVar6);
    puVar6 = puVar1;
  }
  FUN_005b7e1d(puStack_e4);
  puStack_e4 = (undefined4 *)0x0;
  uStack_e0 = 0;
  uStack_4 = 6;
  std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::erase
            (alStack_120,&uStack_1d0,*puStack_11c,puStack_11c);
  FUN_005b7e1d(puStack_11c);
  puStack_11c = (undefined4 *)0x0;
  uStack_118 = 0;
  FUN_005b7e1d(uStack_12c);
  ExceptionList = pvStack_c;
  return;
}

