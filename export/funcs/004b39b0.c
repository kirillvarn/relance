
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b39b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  CollisionGroup *pCVar6;
  list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *plVar7;
  Equipment *pEVar8;
  GoodInfo *pGVar9;
  undefined4 uVar10;
  void *pvVar11;
  int iVar12;
  int *piVar13;
  float10 fVar14;
  undefined4 local_88;
  EqObj *local_84;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int *local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int *local_60;
  int iStack_5c;
  list<EquipDesc,std::allocator<EquipDesc>_> local_58 [4];
  int *local_54;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd059;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_6c = param_1;
  FUN_004b4b50(*(undefined4 *)(param_1 + 0x334),*(undefined4 *)(param_1 + 0x338));
  FUN_0043b630();
  fVar14 = (float10)FUN_004c4f70();
  iVar12 = 0;
  local_84 = (EqObj *)0x0;
  uVar5 = FUN_004c3e10();
  if ((uVar5 != 0) && (local_84 = (EqObj *)Archetype::GetShip(uVar5), local_84 != (EqObj *)0x0)) {
    iVar12 = ftol();
  }
  if (((float)fVar14 == _DAT_005c75dc) || (iVar12 != 0)) {
    if (iVar12 < 1) goto LAB_004b3aa1;
  }
  else {
    iVar12 = 1;
  }
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x428;
  local_38 = 0;
  local_34 = 0;
  local_40 = iVar12;
  local_3c = ftol();
  local_30 = 1;
  FUN_004b49a0(*(undefined4 *)(param_1 + 0x338),&local_4c);
LAB_004b3aa1:
  iVar12 = FUN_004c3f00();
  puVar1 = *(undefined4 **)(iVar12 + 4);
  puVar2 = (undefined4 *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      plVar7 = (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)FUN_004c4060();
      std::list<EquipDesc,std::allocator<EquipDesc>_>::list<EquipDesc,std::allocator<EquipDesc>_>
                (local_58,plVar7);
      local_4 = 0;
      FUN_0043a510(DAT_0066873c);
      piVar13 = (int *)*local_54;
      local_70 = local_54;
      if (piVar13 != local_54) {
        do {
          local_78 = 0;
          local_7c = 0;
          iVar12 = FUN_005835f0(piVar13[3],&local_78,&local_7c);
          if (iVar12 != 1) {
            uVar5 = Arch2Good(piVar13[3]);
            FUN_00438060(uVar5);
            local_68 = ftol();
            uStack_64 = 0;
            local_60 = (int *)ftol();
            iStack_5c = 0;
            pEVar8 = Archetype::GetEquipment(piVar13[3]);
            if (((pEVar8 != (Equipment *)0x0) && (local_74 = *(int *)(pEVar8 + 0x14), local_74 != 0)
                ) && ((float)piVar13[6] != _DAT_005c75dc)) {
              local_88 = 0;
              pGVar9 = GoodList::find_by_id(uVar5);
              if (pGVar9 == (GoodInfo *)0x0) {
                pvVar11 = *(void **)(pEVar8 + 0xc);
                iVar12 = *(int *)(pEVar8 + 4);
                if (((iVar12 != 0) &&
                    (puVar1 = *(undefined4 **)(iVar12 + 0x24), puVar1 != (undefined4 *)0x0)) &&
                   (*(int *)(iVar12 + 0x28) - (int)puVar1 >> 3 != 0)) {
                  local_88 = *puVar1;
                }
              }
              else {
                pvVar11 = *(void **)(pGVar9 + 0x78);
                if (pvVar11 == (void *)0x0) {
                  iVar12 = *(int *)(pEVar8 + 4);
                  pvVar11 = *(void **)(pGVar9 + 0x74);
                  if (((iVar12 != 0) &&
                      (puVar1 = *(undefined4 **)(iVar12 + 0x24), puVar1 != (undefined4 *)0x0)) &&
                     (*(int *)(iVar12 + 0x28) - (int)puVar1 >> 3 != 0)) {
                    local_88 = *puVar1;
                  }
                }
              }
              local_20 = ftol();
              if (local_20 == 0) {
                local_20 = 1;
              }
              local_28 = *(undefined2 *)((int)piVar13 + 10);
              local_2c = 2;
              local_24 = local_74;
              local_14 = local_88;
              local_18 = pvVar11;
              local_1c = ftol();
              local_10 = 1;
              FUN_004b4ba0(*(undefined4 *)(param_1 + 0x338),1,&local_2c);
            }
          }
          piVar13 = (int *)*piVar13;
        } while (piVar13 != local_70);
      }
      if (*(int *)(param_1 + 0x334) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(param_1 + 0x338) - *(int *)(param_1 + 0x334) >> 5;
      }
      (**(code **)(**(int **)(local_6c + 0x46c) + 0xa8))(0x37,0,iVar12 + -1);
      piVar4 = local_60;
      piVar13 = (int *)*local_60;
      while (piVar13 != piVar4) {
        piVar3 = (int *)*piVar13;
        *(int *)piVar13[1] = *piVar13;
        *(int *)(*piVar13 + 4) = piVar13[1];
        FUN_005b7e1d(piVar13);
        iStack_5c = iStack_5c + -1;
        piVar13 = piVar3;
      }
      FUN_005b7e1d(local_60);
      ExceptionList = local_18;
      return;
    }
    if (puVar2[3] != 0x3f800000) {
      uVar10 = 0x429;
      if (local_84 == (EqObj *)0x0) {
LAB_004b3b0a:
        iVar12 = 1;
      }
      else {
        pCVar6 = Archetype::EqObj::get_group_by_id(local_84,*(ushort *)(puVar2 + 2));
        uVar10 = FUN_0045a7c0(*(undefined4 *)(pCVar6 + 0xc));
        iVar12 = ftol();
        if (iVar12 == 0) goto LAB_004b3b0a;
      }
      local_3c = ftol();
      local_48 = *(undefined2 *)(puVar2 + 2);
      local_38 = 0;
      local_34 = 0;
      local_4c = 1;
      local_30 = 1;
      local_44 = uVar10;
      local_40 = iVar12;
      FUN_004b49a0(*(undefined4 *)(param_1 + 0x338),&local_4c);
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

