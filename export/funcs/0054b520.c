
int * FUN_0054b520(void)

{
  undefined4 *puVar1;
  bool bVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  Ship *this;
  undefined4 *puVar6;
  EquipDescList *pEVar7;
  vector<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *pvVar8;
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *plVar9;
  Root *pRVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  float10 fVar14;
  CObject *local_124;
  allocator<CollisionGroupDesc> aStack_11d;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined *puStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 auStack_a4 [6];
  vector<EquipDesc,std::allocator<EquipDesc>_> avStack_8c [8];
  int iStack_84;
  undefined4 uStack_80;
  EquipDescVector aEStack_7c [4];
  undefined4 uStack_78;
  undefined4 uStack_74;
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> alStack_6c [4];
  undefined4 *puStack_68;
  wchar_t awStack_60 [24];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 uStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c1304;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(400);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00543380();
  }
  local_4 = 0xffffffff;
  uVar5 = FUN_004c3e10();
  this = Archetype::GetShip(uVar5);
  (**(code **)(*(int *)this + 0xc))();
  (**(code **)(*piVar4 + 0x168))();
  Archetype::Root::Release((Root *)this);
  if (((piVar4 == (int *)0xfffffff4) ||
      (local_124 = (CObject *)piVar4[4], local_124 == (CObject *)0x0)) ||
     ((*(uint *)(local_124 + 0x4c) & 0x503) != 0x503)) {
    local_124 = (CObject *)0x0;
  }
  FUN_0052e0a0();
  uStack_bc = 0;
  uStack_b8 = 0xffffffff;
  FUN_004cdc10();
  uStack_80 = 0;
  EquipDescVector::EquipDescVector(aEStack_7c);
  puStack_8 = (undefined1 *)0x1;
  std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::
  list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>(alStack_6c,&aStack_11d);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  puStack_8 = (undefined1 *)0x2;
  uStack_118 = DAT_00673378;
  puStack_114 = PTR_DAT_00613ed0;
  uStack_110 = DAT_00673344;
  uStack_b8 = FUN_004c4670();
  puVar6 = (undefined4 *)FUN_004c3de0();
  uStack_b4 = *puVar6;
  uStack_b0 = puVar6[1];
  uStack_ac = puVar6[2];
  uStack_a8 = puVar6[3];
  iVar13 = 0;
  iStack_84 = puVar6[0xc];
  if (0 < (int)puVar6[0xc]) {
    puVar12 = auStack_a4;
    do {
      *puVar12 = *(undefined4 *)(((int)puVar6 - (int)&uStack_b4) + (int)puVar12);
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar13 < iStack_84);
  }
  uStack_80 = FUN_004c4650();
  fVar14 = (float10)FUN_004c4f70();
  fStack_10c = (float)(fVar14 * (float10)*(float *)(this + 0x1c));
  pEVar7 = (EquipDescList *)FUN_004c4060();
  pvVar8 = (vector<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)
           EquipDescVector::EquipDescVector((EquipDescVector *)&pvStack_20,pEVar7);
  puStack_8._0_1_ = 3;
  std::vector<EquipDesc,std::allocator<EquipDesc>_>::operator=
            ((vector<EquipDesc,std::allocator<EquipDesc>_> *)aEStack_7c,pvVar8);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  FUN_005b7e1d(uStack_1c);
  plVar9 = (list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)FUN_004c3f00();
  if (alStack_6c != plVar9) {
    puVar6 = (undefined4 *)*puStack_68;
    puVar12 = *(undefined4 **)(plVar9 + 4);
    for (puVar1 = (undefined4 *)*puVar12; (puVar6 != puStack_68 && (puVar1 != puVar12));
        puVar1 = (undefined4 *)*puVar1) {
      puVar6[2] = puVar1[2];
      puVar6[3] = puVar1[3];
      puVar6 = (undefined4 *)*puVar6;
    }
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::erase
              (alStack_6c,&stack0xfffffed8,puVar6,puStack_68);
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::insert
              (alStack_6c,puStack_68,puVar1,puVar12);
  }
  FUN_004c4670();
  Reputation::Vibe::GetRank((int *)&stack0xfffffed8,&uStack_11c);
  uStack_28 = uStack_11c;
  wcscpy(awStack_60,(wchar_t *)&DAT_006732f0);
  (**(code **)(*(int *)local_124 + 0x10c))(&uStack_118);
  pRVar10 = CObject::get_archetype(local_124);
  (**(code **)(**(int **)(pRVar10 + 4) + 0x20))(1);
  FUN_004252d0(&iStack_84,1);
  uVar11 = (**(code **)(*piVar4 + 0x1c))();
  FUN_00425480(uVar11);
  (**(code **)(*piVar4 + 0x170))();
  FUN_00540c30(piVar4,1);
  bVar2 = SinglePlayer();
  if (!bVar2) {
    CObject::enable_collisions_r(local_124,true);
  }
  DAT_00679774 = DAT_00673378;
  if ((Watchable *)(piVar4 + 2) != (Watchable *)DAT_00679744) {
    BaseWatcher::set_pointer((BaseWatcher *)&DAT_00679744,(Watchable *)(piVar4 + 2));
  }
  DAT_00678b96 = 0;
  (**(code **)(*DAT_0067ecd0 + 0xc0))(DAT_00673378,DAT_00673344);
  uStack_18 = 4;
  puVar6 = (undefined4 *)
           std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::begin
                     ((list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)aEStack_7c);
  std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::erase
            ((list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)aEStack_7c,
             &stack0xfffffecc,*puVar6,uStack_78);
  FUN_005b7e1d(uStack_78);
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_18 = 0xffffffff;
  std::vector<EquipDesc,std::allocator<EquipDesc>_>::~vector<EquipDesc,std::allocator<EquipDesc>_>
            (avStack_8c);
  ExceptionList = pvStack_20;
  return piVar4;
}

