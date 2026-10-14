
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0047d2f0(int param_1,EquipDescList *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  Ship *pSVar10;
  code *pcVar11;
  EquipDesc *pEVar12;
  EquipDesc *pEVar13;
  Equipment *pEVar14;
  uint uVar15;
  uchar *puVar16;
  uint uVar17;
  _DPNMSG_ENUM_HOSTS_RESPONSE *p_Var18;
  EquipDesc EVar19;
  GoodInfo *pGVar20;
  uint *puVar21;
  EquipDesc EStack_6a;
  Equipment EStack_69;
  int local_68;
  uint local_64;
  EquipDesc *local_60;
  uint uStack_5c;
  uint uStack_58;
  int *piStack_54;
  EquipDesc *local_50;
  GoodInfo *local_4c;
  uint uStack_48;
  uint uStack_44;
  int *piStack_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  int iStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  int iStack_20;
  IDPMsgHandler aIStack_1c [4];
  uchar *puStack_18;
  uint *puStack_14;
  uchar *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bc028;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0x360) == 0) {
    local_3c = 0;
  }
  else {
    local_3c = *(int *)(*(int *)(param_1 + 0x360) + 0x978);
  }
  ExceptionList = &pvStack_c;
  if (((char)param_4 != '\0') && (ExceptionList = &pvStack_c, iVar6 = FUN_004c3e10(), iVar6 != 0)) {
    iVar6 = FUN_004c4f90();
    if (*(int *)(param_1 + 0x908) != iVar6) {
      *(undefined1 *)(param_1 + 0x3b8) = 0;
      uVar7 = FUN_004c4f90();
      *(undefined4 *)(param_1 + 0x908) = uVar7;
      if (*(int *)(param_1 + 0x330) != 0) {
        uVar7 = FUN_004c4060();
        FUN_005850f0(uVar7);
      }
      uVar7 = FUN_004c4060();
      FUN_004c6b80(uVar7);
      iVar6 = *(int *)(param_1 + 0x360);
      *(undefined4 *)(param_1 + 0x4f4) = 0;
      if (((iVar6 != 0) && (*(int *)(iVar6 + 0x978) == 3)) && (*(int *)(iVar6 + 0x974) != 0)) {
        CacheString::clear((CacheString *)(*(int *)(iVar6 + 0x974) + 0x394));
        iVar8 = FUN_00483580();
        if (((iVar8 != 0) && ((*(int *)(iVar6 + 0x32c) == 0 || (*(int *)(iVar6 + 0x32c) == 2)))) &&
           (pcVar9 = (char *)FUN_00585f20(iVar8,0), pcVar9 != (char *)0x0)) {
          pcVar9 = StringAlloc(pcVar9,false);
          *(char **)(*(int *)(iVar6 + 0x974) + 0x394) = pcVar9;
        }
      }
      if (*(char *)(param_1 + 0x3b9) != '\0') {
        *(undefined1 *)(param_1 + 0x3b9) = 0;
        iVar6 = FUN_00585f20(*(undefined4 *)(param_1 + 0x3bc),0);
        if ((iVar6 == 0) && (iVar6 = *(int *)(param_1 + 0x360), iVar6 != 0)) {
          *(undefined4 *)(iVar6 + 0x3a4) = 0xffffffff;
          *(undefined4 *)(iVar6 + 0x4f4) = 0;
          FUN_004c6a50(0,0,5);
          FUN_004795f0(0);
          if (*(int *)(iVar6 + 0x360) != 0) {
            *(undefined4 *)(*(int *)(iVar6 + 0x360) + 0x4e8) = 0;
            *(undefined4 *)(*(int *)(iVar6 + 0x360) + 0x4ec) = 0;
          }
        }
      }
      if (*(char *)(param_1 + 0x3c0) != '\0') {
        *(undefined1 *)(param_1 + 0x3c0) = 0;
        *(undefined1 *)(param_1 + 0x3c1) = 1;
      }
    }
    iVar6 = FUN_004c4fa0();
    if (*(int *)(param_1 + 0x90c) != iVar6) {
      uVar7 = FUN_004c4fa0();
      *(undefined4 *)(param_1 + 0x90c) = uVar7;
      pSVar10 = Archetype::GetShip(*(uint *)(param_1 + 0x348));
      if ((pSVar10 != (Ship *)0x0) && (*(int *)(param_1 + 0x330) != 0)) {
        FUN_005850f0(0);
        FUN_00585380(0xffffffff,1);
        FUN_00585a90(pSVar10 + 8,1,1);
      }
      if (*(int *)(param_1 + 0x330) != 0) {
        uVar7 = FUN_004c4060();
        FUN_005850f0(uVar7);
      }
      uVar7 = FUN_004c4060();
      FUN_004c6b80(uVar7);
      if ((local_3c == 3) && (iVar6 = FUN_00446be0(), iVar6 != 0)) {
        FUN_00448540(param_1 + 0x34c);
        FUN_00447210();
      }
    }
  }
  if (*(int *)(param_1 + 0x3b4) != 0) {
    uVar7 = FUN_004c4ce0(0x476);
    FUN_004779a0(param_1 + 0x508,uVar7);
    (**(code **)(**(int **)(param_1 + 0x3b4) + 0xa8))(0x1d,param_1 + 0x508,0);
  }
  local_64 = 0;
  local_60 = (EquipDesc *)0x0;
  local_4c = (GoodInfo *)0x0;
  local_50 = (EquipDesc *)0x0;
  local_68 = 0;
  if (DAT_0066873c != 0) {
    local_68 = FUN_0043a510(DAT_0066873c);
  }
  bVar1 = false;
  if ((*(char *)(param_1 + 0x35c) != '\0') && (*(int *)(param_1 + 0x978) == 2)) {
    bVar1 = true;
  }
  local_3c = 0xffffffff;
  iStack_2c = -1;
  if (*(char *)(param_1 + 0x35c) == '\0') {
    iStack_20 = FUN_00587050();
    iStack_30 = 0;
    if (0 < iStack_20) {
      do {
        puStack_34 = (undefined4 *)FUN_00587070(iStack_30);
        if (puStack_34 != (undefined4 *)0x0) {
          iVar6 = 0;
          uStack_5c = 0;
          piStack_54 = (int *)0x0;
          uStack_38 = 0;
          uStack_48 = uStack_48 & 0xffffff00;
          uStack_44 = uStack_44 & 0xffffff00;
          piStack_40 = (int *)((uint)piStack_40 & 0xffffff00);
          uStack_58 = 0;
          if (puStack_34[6] == 1) {
            iVar6 = 2;
            uStack_58 = 2;
          }
          pcVar11 = (code *)puStack_34[2];
          if ((code *)puStack_34[2] == (code *)0x0) {
            pcVar11 = _C_exref;
          }
          pcStack_28 = StringAlloc((char *)pcVar11,false);
          pEVar12 = EquipDescList::find_equipment_item(param_2,(CacheString *)&pcStack_28);
          pGVar20 = (GoodInfo *)0x0;
          if (pEVar12 != (EquipDesc *)0x0) {
            uVar15 = *(uint *)(pEVar12 + 4);
            piStack_40 = (int *)CONCAT31(piStack_40._1_3_,pEVar12[0x18]);
            uStack_48 = CONCAT31(uStack_48._1_3_,1);
            uStack_44 = CONCAT31(uStack_44._1_3_,1);
            uStack_5c = uVar15;
            uStack_38 = ftol();
            pGVar20 = GoodList::find_by_archetype(uVar15);
            if ((((iVar6 == *(int *)(param_1 + 0x32c)) || (bVar1)) &&
                (local_64 == *(uint *)(param_1 + 0x3cc))) && (local_50 == (EquipDesc *)0x0)) {
              local_50 = pEVar12;
            }
            piStack_54 = (int *)0x0;
            if (((pGVar20 != (GoodInfo *)0x0) && (local_68 != 0)) &&
               ((iVar6 = FUN_00438100(*(undefined4 *)(pGVar20 + 0x48)), iVar6 == 0 || (iVar6 == 1)))
               ) {
              uStack_24 = *(undefined4 *)(pEVar12 + 0x10);
              FUN_00438060(*(undefined4 *)(pGVar20 + 0x48));
              piStack_54 = (int *)ftol();
              if (((iVar6 == 0) && (pGVar20[0x70] == (GoodInfo)0x0)) &&
                 (pEVar13 = EquipDescList::find_equipment_item
                                      ((EquipDescList *)(param_1 + 0x3a8),*(ushort *)(pEVar12 + 2)),
                 pEVar13 != (EquipDesc *)0x0)) {
                piStack_54 = (int *)ftol();
              }
            }
            if ((*(short *)(param_1 + 0x948) != *(short *)SUBOBJ_ID_NONE_exref) &&
               (*(short *)(pEVar12 + 2) == *(short *)(param_1 + 0x948))) {
              local_3c = local_64;
            }
          }
          cVar3 = FUN_0047c740(&local_64,uStack_5c,uStack_58,1,piStack_54,uStack_38,uStack_48,
                               uStack_44,piStack_40,1,*puStack_34,puStack_34[7],0);
          if (((local_60 == (EquipDesc *)0x0) && (cVar3 != '\0')) &&
             (local_60 = pEVar12, local_4c = pGVar20, uStack_5c == 0)) {
            iStack_2c = puStack_34[7];
          }
        }
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < iStack_20);
    }
  }
  piStack_40 = *(int **)(param_2 + 4);
  piStack_54 = (int *)*piStack_40;
  if (piStack_54 != piStack_40) {
    do {
      piVar2 = piStack_54;
      pEVar12 = (EquipDesc *)(piStack_54 + 2);
      pGVar20 = GoodList::find_by_archetype(piStack_54[3]);
      uStack_5c = FUN_0047e460(piVar2[3]);
      uStack_58 = 0;
      if (((pGVar20 != (GoodInfo *)0x0) && (local_68 != 0)) &&
         ((iVar6 = FUN_00438100(*(undefined4 *)(pGVar20 + 0x48)), iVar6 == 0 || (iVar6 == 1)))) {
        if (uStack_5c == 4) {
          FUN_00438060(*(undefined4 *)(pGVar20 + 0x48));
        }
        else {
          iStack_20 = piVar2[6];
          FUN_00438060(*(undefined4 *)(pGVar20 + 0x48));
        }
        uStack_58 = ftol();
        if ((((iVar6 == 0) && (uStack_5c != 4)) &&
            ((pGVar20[0x70] == (GoodInfo)0x0 &&
             (pEVar13 = EquipDescList::find_equipment_item
                                  ((EquipDescList *)(param_1 + 0x3a8),*(ushort *)((int)piVar2 + 10))
             , pEVar13 != (EquipDesc *)0x0)))) ||
           ((((*(char *)(param_1 + 0x35c) != '\0' && (*(int *)(param_1 + 0x978) == 2)) &&
             (uStack_5c != 4)) &&
            (((pGVar20[0x70] == (GoodInfo)0x0 && (*(int *)(param_1 + 0x974) != 0)) &&
             (pEVar13 = EquipDescList::find_equipment_item
                                  ((EquipDescList *)(*(int *)(param_1 + 0x974) + 0x3a8),
                                   *(ushort *)((int)piVar2 + 10)), pEVar13 != (EquipDesc *)0x0))))))
        {
          uStack_58 = ftol();
        }
      }
      iStack_30 = ftol();
      cVar3 = '\0';
      uVar15 = uStack_44 >> 8;
      uStack_44 = uStack_44 & 0xffffff00;
      uVar17 = uStack_48 >> 8;
      uStack_48 = uStack_48 & 0xffffff00;
      if ((pGVar20 != (GoodInfo *)0x0) &&
         ((uStack_5c == 3 || ((uStack_5c != 1 && (uStack_5c != 4)))))) {
        cVar3 = (char)piVar2[5];
        uStack_44 = CONCAT31((int3)uVar15,1);
        uStack_48 = CONCAT31((int3)uVar17,cVar3);
      }
      if (bVar1) {
        uStack_5c = 0xffffffff;
      }
      cVar4 = '\0';
      if (((uStack_5c != 0) && (uStack_5c != 2)) || (cVar3 == '\0')) {
        if ((*(short *)(param_1 + 0x948) != *(short *)SUBOBJ_ID_NONE_exref) &&
           (*(short *)((int)piVar2 + 10) == *(short *)(param_1 + 0x948))) {
          local_3c = local_64;
        }
        cVar4 = '\0';
        if (((cVar3 == '\0') && (*(char *)(param_1 + 0x35c) == '\0')) &&
           ((pGVar20 != (GoodInfo *)0x0 &&
            ((*(int *)(param_1 + 0x32c) == 0 || (*(int *)(param_1 + 0x32c) == 2)))))) {
          iVar6 = FUN_00585f20(*(undefined4 *)(pGVar20 + 0x48),1);
          if (iVar6 == 0) {
            cVar4 = '\x01';
          }
        }
        else if (*(int *)(param_1 + 0x32c) == 1) {
          cVar3 = FUN_00482d80(param_2,piVar2[3]);
          cVar4 = '\x01' - (cVar3 != '\0');
        }
        if ((((uStack_5c == *(uint *)(param_1 + 0x32c)) || (bVar1)) &&
            (local_64 == *(uint *)(param_1 + 0x3cc))) && (local_50 == (EquipDesc *)0x0)) {
          local_50 = pEVar12;
        }
        uStack_24 = CONCAT31(uStack_24._1_3_,(char)piVar2[8]);
        cVar4 = FUN_0047c740(&local_64,piVar2[3],uStack_5c,piVar2[7],uStack_58,iStack_30,uStack_44,
                             uStack_48,uStack_24,cVar4 == '\0',0,0,0);
      }
      if ((local_60 == (EquipDesc *)0x0) && (cVar4 != '\0')) {
        local_60 = pEVar12;
        local_4c = pGVar20;
      }
      piStack_54 = (int *)*piStack_54;
    } while (piStack_54 != piStack_40);
  }
  aIStack_1c[0] = param_2._0_1_;
  puStack_18 = (uchar *)0x0;
  puStack_14 = (uint *)0x0;
  puStack_10 = (uchar *)0x0;
  uStack_4 = 0;
  piStack_54 = (int *)**(undefined4 **)(param_2 + 4);
  if (piStack_54 != piStack_40) {
    do {
      pEVar12 = (EquipDesc *)(piStack_54 + 2);
      pEVar14 = Archetype::GetEquipment(piStack_54[3]);
      uVar15 = 0;
      if (pEVar14 != (Equipment *)0x0) {
        iVar6 = (**(code **)(*(int *)pEVar14 + 0x10))();
        if (((iVar6 == 0x11) || (iVar6 == 0x12)) || (iVar6 == 0x13)) {
          bVar5 = ID_String::IsEmpty((ID_String *)(pEVar14 + 0x98));
          if (bVar5) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(uint *)(pEVar14 + 0x98);
          }
        }
        else {
          uVar15 = 0;
        }
      }
      uStack_58 = uVar15;
      if ((uVar15 != 0) &&
         (pEVar13 = EquipDescList::find_matching_cargo(param_2,uVar15,0,1.0),
         pEVar13 == (EquipDesc *)0x0)) {
        if (puStack_18 == (uchar *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)puStack_14 - (int)puStack_18 >> 2;
        }
        iVar8 = 0;
        if (0 < iVar6) {
          do {
            if (*(uint *)(puStack_18 + iVar8 * 4) == uStack_58) goto LAB_0047dd21;
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar6);
        }
        iVar6 = 1;
        if ((((*(int *)(param_1 + 0x32c) == 1) || (bVar1)) &&
            (local_64 == *(uint *)(param_1 + 0x3cc))) && (local_50 == (EquipDesc *)0x0)) {
          local_50 = pEVar12;
        }
        cVar3 = FUN_0047c740(&local_64,uStack_58,1,0,0,100,0,0,0,0,0,0,1);
        puVar21 = puStack_14;
        if ((int)puStack_10 - (int)puStack_14 >> 2 == 0) {
          if ((puStack_18 != (uchar *)0x0) && (1 < (uint)((int)puStack_14 - (int)puStack_18 >> 2)))
          {
            iVar6 = FUN_005ad970();
          }
          iStack_20 = FUN_005ad970();
          iStack_20 = iStack_20 + iVar6;
          iVar6 = iStack_20;
          if (iStack_20 < 0) {
            iVar6 = 0;
          }
          puVar16 = operator_new(iVar6 << 2);
          iVar6 = FUN_00597c70(puStack_18,puVar21,puVar16);
          FUN_00427730(iVar6,1,&uStack_58);
          FUN_00597c70(puVar21,puStack_14,iVar6 + 4);
          IDPMsgHandler::OnReceive(aIStack_1c,puStack_18,(ulong)puStack_14);
          FUN_005b7e1d(puStack_18);
          puStack_10 = puVar16 + iStack_20 * 4;
          iVar6 = FUN_005ad970();
          puStack_14 = (uint *)(puVar16 + iVar6 * 4 + 4);
          puStack_18 = puVar16;
        }
        else {
          FUN_00597c70(puStack_14,puStack_14,puStack_14 + 1);
          FUN_00427730(puStack_14,1 - ((int)puStack_14 - (int)puVar21 >> 2),&uStack_58);
          for (; puVar21 != puStack_14; puVar21 = puVar21 + 1) {
            *puVar21 = uStack_58;
          }
          puStack_14 = puStack_14 + 1;
        }
        if ((local_60 == (EquipDesc *)0x0) && (cVar3 != '\0')) {
          EquipDesc::set_arch_id((EquipDesc *)(param_1 + 0x94c),uStack_58);
          local_60 = (EquipDesc *)(param_1 + 0x94c);
          local_4c = GoodList::find_by_archetype(uStack_58);
        }
      }
LAB_0047dd21:
      piStack_54 = (int *)*piStack_54;
    } while (piStack_54 != piStack_40);
  }
  *(undefined1 *)(param_1 + 0x4e6) = 0;
  if ((((local_60 != (EquipDesc *)0x0) && (local_60[0xc] == (EquipDesc)0x0)) && (local_68 != 0)) &&
     ((iVar6 = FUN_00438100(*(undefined4 *)(local_4c + 0x48)), iVar6 == 0 || (iVar6 == 1)))) {
    *(undefined1 *)(param_1 + 0x4e6) = 1;
  }
  pEVar12 = local_50;
  *(undefined4 *)(param_1 + 0x910) = 0;
  if (local_50 != (EquipDesc *)0x0) {
    EquipDesc::get_cargo_space_occupied(local_50);
    uVar7 = ftol();
    *(undefined4 *)(param_1 + 0x910) = uVar7;
    if (((*(int *)(param_1 + 0x32c) == 0) || (*(int *)(param_1 + 0x32c) == 2)) &&
       ((*(char *)(param_1 + 0x35c) != '\0' || (pEVar12[0xc] != (EquipDesc)0x0)))) {
      *(undefined4 *)(param_1 + 0x910) = 0;
    }
  }
  uVar15 = local_64;
  uVar17 = FUN_0047f3e0(local_64);
  if (*(char *)(param_1 + 0x4e1) == '\0') {
    p_Var18 = (_DPNMSG_ENUM_HOSTS_RESPONSE *)(uint)*(byte *)(param_1 + 0x4e2);
  }
  else {
    p_Var18 = (_DPNMSG_ENUM_HOSTS_RESPONSE *)(uVar17 & 0xffffff00);
  }
  IDPMsgHandler::OnAddHost((IDPMsgHandler *)(param_1 + 0x330),p_Var18);
  pEVar12 = local_60;
  if (*(int *)(param_1 + 0x4b0) != 0) {
    EVar19 = (EquipDesc)0x0;
    EStack_6a = (EquipDesc)0x0;
    EStack_69 = (Equipment)0x0;
    if (local_60 != (EquipDesc *)0x0) {
      EStack_6a = local_60[0x18];
      EVar19 = local_60[0xc];
      pEVar14 = Archetype::GetEquipment(*(uint *)(local_60 + 4));
      if (pEVar14 != (Equipment *)0x0) {
        EStack_69 = pEVar14[0x6c];
      }
    }
    if (((((*(int *)(param_1 + 0x3a4) == -1) || (EVar19 != (EquipDesc)0x0)) ||
         (_DAT_005c7474 < *(float *)(param_1 + 0x914))) ||
        ((EStack_6a != (EquipDesc)0x0 || (EStack_69 == (Equipment)0x0)))) ||
       (pEVar12 == (EquipDesc *)(param_1 + 0x94c))) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x4b0) + 0xa8))(2,uVar7,0);
  }
  if (*(int **)(param_1 + 0x338) != (int *)0x0) {
    iVar6 = **(int **)(param_1 + 0x338);
    FUN_004c4f70();
    uVar7 = ftol();
    (**(code **)(iVar6 + 0xa8))(0x40,100,uVar7);
  }
  uVar17 = local_3c;
  if (uVar15 != *(uint *)(param_1 + 0x3c8)) {
    *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
    if (local_3c != 0xffffffff) {
      *(uint *)(param_1 + 0x3a4) = local_3c;
    }
    if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x37,0,uVar15 - 1);
    }
    if (uVar17 != 0xffffffff) {
      if (*(int *)(param_1 + 0x3c4) + 4U < uVar17) {
        *(uint *)(param_1 + 0x3c4) = uVar17 - 4;
      }
      if (uVar17 < *(uint *)(param_1 + 0x3c4)) {
        *(uint *)(param_1 + 0x3c4) = uVar17;
      }
      if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x3c4),0);
      }
    }
    if ((*(int *)(param_1 + 0x3c4) != 0) && (uVar15 < *(int *)(param_1 + 0x3c4) + 5U)) {
      if (uVar15 < 6) {
        *(undefined4 *)(param_1 + 0x3c4) = 0;
      }
      else {
        *(uint *)(param_1 + 0x3c4) = uVar15 - 5;
      }
      if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x3c4),0);
      }
    }
    *(uint *)(param_1 + 0x3c8) = uVar15;
    FUN_0047d2f0(param_2,param_3,param_4);
  }
  if ((*(int *)(param_1 + 0x3a4) == -1) &&
     ((*(int *)(param_1 + 0x360) == 0 || (*(int *)(*(int *)(param_1 + 0x360) + 0x3a4) == -1)))) {
LAB_0047dfe2:
    if (*(char *)(param_1 + 0x35c) == '\0') goto LAB_0047dfec;
  }
  else {
    *(undefined1 *)(param_1 + 0x4e0) = 0;
    if (*(int *)(param_1 + 0x360) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x360) + 0x4e0) = 0;
    }
    if (*(char *)(param_1 + 0x35c) != '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x974) + 0x4e0) = 0;
      goto LAB_0047dfe2;
    }
LAB_0047dfec:
    if ((*(int *)(param_1 + 0x360) == 0) && (*(int *)(param_1 + 0x3a4) == -1)) {
      *(undefined1 *)(param_1 + 0x4e0) = 1;
    }
  }
  if (*(char *)(param_1 + 0x4e0) == '\0') {
    if (bVar1) {
      if (*(int *)(param_1 + 0x3a4) != -1) goto LAB_0047e0a9;
    }
    else if (*(int *)(param_1 + 0x3a4) != -1) {
      if (iStack_2c == -1) {
        if (local_60 == (EquipDesc *)0x0) {
          FUN_0047ba90(0,0);
        }
        else {
          FUN_0047ba90(*(undefined4 *)(local_60 + 4),0);
        }
      }
      else {
        FUN_0047ba90(0,*(undefined4 *)(&DAT_00611a24 + iStack_2c * 4));
      }
      goto LAB_0047e0a9;
    }
    iVar6 = *(int *)(param_1 + 0x360);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x3a4) == -1)) {
      if (*(int *)(iVar6 + 0x978) == 2) {
        FUN_0047ba90(0,0x487);
      }
      else {
        FUN_0047e9e0();
      }
    }
  }
  else {
    FUN_0047ba90(*(undefined4 *)(param_1 + 0x348),0);
  }
LAB_0047e0a9:
  *(undefined2 *)(param_1 + 0x948) = *(undefined2 *)SUBOBJ_ID_NONE_exref;
  FUN_005b7e1d(puStack_18);
  ExceptionList = pvStack_c;
  return;
}

