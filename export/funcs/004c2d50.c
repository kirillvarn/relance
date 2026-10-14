
undefined4 __thiscall FUN_004c2d50(int *param_1,uint param_2,int param_3,int param_4)

{
  EquipDescList *pEVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  EquipDesc *pEVar10;
  CShip *pCVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 unaff_ESI;
  EquipDesc *pEVar14;
  float10 fVar15;
  float fVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  EquipDesc aEStack_5c [2];
  ushort uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  EquipDesc local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  EquipDesc local_30 [2];
  ushort uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  EquipDesc local_28 [2];
  undefined2 local_26;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  EquipDesc local_10;
  undefined4 local_c;
  
  if (0x2d < param_2) {
    if (param_2 == 0x3e) {
      if (param_3 == param_1[0xd3]) {
        if (param_1[0xd9] != param_4) {
          FUN_004c1a10(param_4);
          return 0;
        }
      }
      else {
        iVar9 = *(int *)(param_3 + 0x2f0);
        if ((iVar9 != 0) && (*(int *)(iVar9 + 0x2c) != param_4)) {
          *(int *)(iVar9 + 0x2c) = param_4;
          FUN_004bf850(0xffffffff);
        }
      }
    }
    else if (param_2 == 0xef02) {
      if (((*(char *)((int)param_1 + 0x435) != '\0') && (DAT_00674aa0 != (int *)0x0)) &&
         ((char)DAT_00674aa0[0x134] == '\0')) {
        (**(code **)(*DAT_00674aa0 + 0x30))();
      }
      if ((((char)param_1[0x10d] != '\0') && (DAT_00674b04 != (int *)0x0)) &&
         ((char)DAT_00674b04[0x134] == '\0')) {
        (**(code **)(*DAT_00674b04 + 0x30))();
      }
      FUN_0046b450(0);
      FUN_0059dd00((char)param_1,0);
      iVar9 = param_1[3];
      while (iVar9 != 0) {
        iVar8 = *(int *)(iVar9 + 8);
        FUN_0043d2a0(iVar9);
        iVar9 = iVar8;
      }
      (**(code **)(*param_1 + 0x28))();
      (**(code **)*param_1)(1);
      return 0;
    }
    return 0;
  }
  if (param_2 == 0x2d) {
    iVar9 = *(int *)(param_3 + 0x2f0);
    if (iVar9 == 0) {
      return 0;
    }
    if (param_3 == *(int *)(iVar9 + 0x10)) {
      return 0;
    }
    bVar3 = *(byte *)(*(int *)(iVar9 + 8) + 0x330);
    bVar12 = (*(byte *)(param_3 + 0x330) >> 2 & 1) << 2;
    *(byte *)(*(int *)(iVar9 + 8) + 0x330) = (bVar3 ^ bVar12) & 4 ^ bVar3;
    bVar3 = *(byte *)(*(int *)(iVar9 + 0xc) + 0x330);
    *(byte *)(*(int *)(iVar9 + 0xc) + 0x330) = (bVar3 ^ bVar12) & 4 ^ bVar3;
    *(byte *)(*(int *)(iVar9 + 8) + 0x330) = *(byte *)(*(int *)(iVar9 + 8) + 0x330) & 0xfe;
    pbVar2 = (byte *)(*(int *)(iVar9 + 0xc) + 0x330);
    *pbVar2 = *pbVar2 & 0xfe;
    iVar8 = *(int *)(iVar9 + 8);
    if ((*(byte *)(iVar8 + 0x330) & 0x40) == 0) {
      *(undefined4 *)(iVar8 + 0x70) = 0;
      *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x70) = 0;
      *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x70) = 0;
      *(undefined4 *)(*(int *)(iVar9 + 0x20) + 0x70) = 0;
      *(undefined4 *)(*(int *)(iVar9 + 0x1c) + 0x70) = 0;
      if (*(int *)(iVar9 + 0x10) == 0) {
        return 0;
      }
      *(undefined4 *)(*(int *)(iVar9 + 0x10) + 0x70) = 0;
      return 0;
    }
    *(undefined4 *)(iVar8 + 0x70) = 2;
    *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x70) = 2;
    *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x70) = 2;
    *(undefined4 *)(*(int *)(iVar9 + 0x20) + 0x70) = 2;
    *(undefined4 *)(*(int *)(iVar9 + 0x1c) + 0x70) = 2;
    if (*(int *)(iVar9 + 0x10) == 0) {
      return 0;
    }
    *(undefined4 *)(*(int *)(iVar9 + 0x10) + 0x70) = 2;
    return 0;
  }
  if (param_2 != 0x26) {
    if (param_2 != 0x2c) {
      return 0;
    }
    iVar9 = *(int *)(param_3 + 0x2f0);
    if (iVar9 == 0) {
      return 0;
    }
    if (param_3 == *(int *)(iVar9 + 0x10)) {
      return 0;
    }
    bVar3 = *(byte *)(*(int *)(iVar9 + 8) + 0x330);
    bVar12 = (*(byte *)(param_3 + 0x330) >> 2 & 1) << 2;
    *(byte *)(*(int *)(iVar9 + 8) + 0x330) = (bVar3 ^ bVar12) & 4 ^ bVar3;
    bVar3 = *(byte *)(*(int *)(iVar9 + 0xc) + 0x330);
    *(byte *)(*(int *)(iVar9 + 0xc) + 0x330) = (bVar3 ^ bVar12) & 4 ^ bVar3;
    uVar13 = 1;
    *(byte *)(*(int *)(iVar9 + 8) + 0x330) = *(byte *)(*(int *)(iVar9 + 8) + 0x330) | 1;
    pbVar2 = (byte *)(*(int *)(iVar9 + 0xc) + 0x330);
    *pbVar2 = *pbVar2 | 1;
    if ((*(byte *)(*(int *)(iVar9 + 8) + 0x330) & 0x40) != 0) {
      uVar13 = 2;
    }
    *(undefined4 *)(*(int *)(iVar9 + 8) + 0x70) = uVar13;
    *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x70) = uVar13;
    *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x70) = uVar13;
    *(undefined4 *)(*(int *)(iVar9 + 0x20) + 0x70) = uVar13;
    *(undefined4 *)(*(int *)(iVar9 + 0x1c) + 0x70) = uVar13;
    if (*(int *)(iVar9 + 0x10) == 0) {
      return 0;
    }
    *(undefined4 *)(*(int *)(iVar9 + 0x10) + 0x70) = uVar13;
    return 0;
  }
  if (param_3 == param_1[0xd0]) {
    (**(code **)(*DAT_0067ecd0 + 0x140))(DAT_00673344,0);
    (**(code **)(*(int *)param_1[0xd0] + 0xa8))(2,1,0);
    return 0;
  }
  if (param_3 == param_1[0xdb]) {
    FUN_004c2800(param_1[0xce],0);
    iVar9 = param_1[0xce];
    puVar4 = *(undefined1 **)(iVar9 + 0x58);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(iVar9 + 0x58) = 0;
    }
    FUN_004bf850(0xffffffff);
    return 0;
  }
  if (param_3 == param_1[0xe0]) {
    FUN_004c2800(param_1[0xcc],0);
    iVar9 = param_1[0xcc];
    puVar4 = *(undefined1 **)(iVar9 + 0x58);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(iVar9 + 0x58) = 0;
    }
    FUN_004bf850(0xffffffff);
    return 0;
  }
  if (param_3 != param_1[0xd5]) {
    if (param_3 != param_1[0xd6]) {
      if (param_3 == param_1[0x107]) {
        (**(code **)(*(int *)param_1[0x104] + 0xa8))(0x1e,0x759,0);
        FUN_004a1ad0(0,0xff,0,0xc0);
        *(undefined4 *)(param_1[0x104] + 0x348) = unaff_ESI;
        (**(code **)(*DAT_0067ecd0 + 0x144))(DAT_00673344,1);
        return 0;
      }
      iVar9 = *(int *)(param_3 + 0x2f0);
      if (iVar9 == 0) {
        return 0;
      }
      if (*(char *)(iVar9 + 0x28) == '\0') {
        return 0;
      }
      iVar8 = *(int *)(iVar9 + 4);
      if (param_3 != *(int *)(iVar9 + 0x10)) {
        if (iVar8 == 0) {
          return 0;
        }
        if (*(char *)(iVar8 + 0x5d) == '\0') {
          if (iVar8 == param_1[0xcc]) {
            return 0;
          }
          puVar4 = (undefined1 *)param_1[0x10a];
          if (*(undefined1 **)(iVar9 + 0x24) == puVar4) {
            return 0;
          }
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = 0;
          }
          param_1[0x109] = iVar9;
          puVar4 = *(undefined1 **)(iVar9 + 0x24);
          param_1[0x10a] = (int)puVar4;
          *puVar4 = 1;
          FUN_004bf850(0xffffffff);
          FUN_004c1ae0(3);
          return 0;
        }
      }
      puVar4 = *(undefined1 **)(iVar9 + 0x24);
      if (*(undefined1 **)(iVar8 + 0x58) != (undefined1 *)0x0) {
        **(undefined1 **)(iVar8 + 0x58) = 0;
        *(undefined4 *)(iVar8 + 0x58) = 0;
      }
      if (puVar4 != (undefined1 *)0x0) {
        *(undefined1 **)(iVar8 + 0x58) = puVar4;
        *puVar4 = 1;
      }
      FUN_004c2800(iVar8,1);
      FUN_004bf850(0xffffffff);
      return 0;
    }
    *(undefined1 *)param_1[0x10a] = 0;
    goto LAB_004c3471;
  }
  pEVar14 = (EquipDesc *)param_1[0x10a];
  if (*(int *)(pEVar14 + 4) == 0) {
    iVar9 = param_1[0xcd];
    iVar8 = *(int *)(param_1[0xd3] + 0x664);
    if (*(int *)(param_1[0x109] + 4) == iVar9) {
      if (iVar8 < *(int *)(pEVar14 + 0x14)) {
        iVar8 = *(int *)(pEVar14 + 0x14) - iVar8;
        iVar9 = FUN_004bf620(*(int *)(iVar9 + 0x4c) - iVar8);
        if (iVar9 == 0) {
          pEVar14 = (EquipDesc *)0x0;
        }
        FUN_004bf620(*(int *)(param_1[0xce] + 0x4c) + iVar8);
        (**(code **)(*DAT_0067ecd0 + 0x148))(DAT_00673344,*(undefined4 *)(param_1[0xcd] + 0x4c));
      }
    }
    else if (iVar8 != 0) {
      (**(code **)(*DAT_0067ecd0 + 0x148))(DAT_00673344,*(int *)(iVar9 + 0x4c) + iVar8);
      FUN_004bf620(*(int *)(param_1[0xcd] + 0x4c) + *(int *)(param_1[0xd3] + 0x664));
      iVar9 = FUN_004bf620(*(int *)(param_1[0xce] + 0x4c) - *(int *)(param_1[0xd3] + 0x664));
      if (iVar9 == 0) {
        pEVar14 = (EquipDesc *)0x0;
      }
    }
  }
  else if (*(int *)(param_1[0x109] + 4) == param_1[0xcd]) {
    if (*(int *)(param_1[0xd3] + 0x664) < *(int *)(pEVar14 + 0x14)) {
      local_28[0] = *pEVar14;
      local_26 = *(undefined2 *)(pEVar14 + 2);
      local_24 = *(int *)(pEVar14 + 4);
      local_20 = *(undefined4 *)(pEVar14 + 8);
      local_1c = CONCAT31(local_1c._1_3_,pEVar14[0xc]);
      local_18 = *(undefined4 *)(pEVar14 + 0x10);
      local_14 = *(int *)(pEVar14 + 0x14);
      local_10 = pEVar14[0x18];
      local_c = *(undefined4 *)(pEVar14 + 0x1c);
      iVar9 = *(int *)(param_1[0xd3] + 0x664);
      if (local_24 == DAT_00674a88) {
        param_1[0x103] = iVar9;
      }
      else if (local_24 == DAT_00674a8c) {
        param_1[0x102] = iVar9;
      }
      if (0 < local_14 - iVar9) {
        EquipDesc::set_count(local_28,local_14 - iVar9);
        pEVar14 = local_28;
        (**(code **)(*DAT_0067ecd0 + 0x150))(DAT_00673344);
        iVar9 = param_1[0xcd];
        pEVar1 = (EquipDescList *)(iVar9 + 0x20);
        EquipDescList::find_equipment_item(pEVar1,uStack_2e);
        EquipDescList::remove_equipment_item(pEVar1,uStack_2e,local_1c);
        fVar16 = EquipDescList::get_cargo_space_occupied(pEVar1);
        *(double *)(iVar9 + 0x60) = (double)fVar16;
        pEVar10 = EquipDescList::find_equipment_item(pEVar1,uStack_2e);
        iVar8 = *(int *)(iVar9 + 0x28) - *(int *)(iVar9 + 0x30);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        (**(code **)(**(int **)(iVar9 + 8) + 0xa8))(0x37,0,(char)iVar8);
        FUN_004bf850(0xffffffff);
        iVar9 = param_1[0xce];
        pEVar14 = (EquipDesc *)(-(uint)(pEVar10 != (EquipDesc *)0x0) & (uint)pEVar14);
        EquipDesc::EquipDesc(aEStack_5c,local_3c);
        aEStack_5c[0] = (EquipDesc)0x0;
        bVar7 = arch_is_combinable(CONCAT22(uStack_56,uStack_58));
        EquipDescList::add_equipment_item((EquipDescList *)(iVar9 + 0x20),aEStack_5c,bVar7);
        fVar16 = EquipDescList::get_cargo_space_occupied((EquipDescList *)(iVar9 + 0x20));
        *(double *)(iVar9 + 0x60) = (double)fVar16;
        iVar8 = *(int *)(iVar9 + 0x28) - *(int *)(iVar9 + 0x30);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        (**(code **)(**(int **)(iVar9 + 8) + 0xa8))(0x37,0,iVar8);
        FUN_004bf850(0xffffffff);
        iVar9 = FUN_005416c0(param_1[0x10b],1);
        if (iVar9 != 0) {
          pCVar11 = (CShip *)FUN_00543320();
          uVar13 = *(undefined4 *)(param_1[0xcc] + 0x60);
          uVar22 = *(undefined4 *)(param_1[0xcc] + 100);
          uVar17 = (undefined2)uVar13;
          uVar18 = (undefined2)((uint)uVar13 >> 0x10);
          uVar19 = (undefined1)uVar22;
          uVar20 = (undefined1)((uint)uVar22 >> 8);
          uVar21 = (undefined2)((uint)uVar22 >> 0x10);
          uVar13 = *(undefined4 *)(param_1[0xcd] + 0x60);
          uVar22 = *(undefined4 *)(param_1[0xcd] + 100);
          fVar16 = CShip::get_cargo_hold_remaining(pCVar11);
          fVar16 = (((float)*(double *)(param_1 + 0xfc) - fVar16) -
                   (float)(double)CONCAT26(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT22(uVar18,
                                                  uVar17))))) +
                   (float)(double)CONCAT44(uVar22,uVar13);
          goto LAB_004c3402;
        }
        goto LAB_004c3408;
      }
    }
  }
  else if (*(int *)(param_1[0xd3] + 0x664) != 0) {
    local_48 = CONCAT31(local_48._1_3_,*pEVar14);
    local_48 = CONCAT22(*(undefined2 *)(pEVar14 + 2),(undefined2)local_48);
    local_44 = *(undefined4 *)(pEVar14 + 4);
    local_40 = *(undefined4 *)(pEVar14 + 8);
    local_3c[0] = pEVar14[0xc];
    local_38 = *(undefined4 *)(pEVar14 + 0x10);
    local_34 = *(undefined4 *)(pEVar14 + 0x14);
    local_30[0] = pEVar14[0x18];
    local_2c = (undefined2)*(undefined4 *)(pEVar14 + 0x1c);
    uStack_2a = (undefined2)((uint)*(undefined4 *)(pEVar14 + 0x1c) >> 0x10);
    EquipDesc::set_count((EquipDesc *)&local_48,*(int *)(param_1[0xd3] + 0x664));
    (**(code **)(*DAT_0067ecd0 + 0x14c))(DAT_00673344,&local_48);
    if (iStack_4c == DAT_00674a88) {
      param_1[0x103] = param_1[0x103] + *(int *)(param_1[0xd3] + 0x664);
    }
    else if (iStack_4c == DAT_00674a8c) {
      param_1[0x102] = param_1[0x102] + *(int *)(param_1[0xd3] + 0x664);
    }
    iVar9 = param_1[0xcd];
    EquipDesc::EquipDesc(local_30,(EquipDesc *)&uStack_50);
    local_30[0] = (EquipDesc)0x0;
    bVar7 = arch_is_combinable(CONCAT22(uStack_2a,local_2c));
    EquipDescList::add_equipment_item((EquipDescList *)(iVar9 + 0x20),local_30,bVar7);
    fVar16 = EquipDescList::get_cargo_space_occupied((EquipDescList *)(iVar9 + 0x20));
    *(double *)(iVar9 + 0x60) = (double)fVar16;
    iVar8 = *(int *)(iVar9 + 0x28) - *(int *)(iVar9 + 0x30);
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    uVar17 = 0;
    uVar18 = 0;
    (**(code **)(**(int **)(iVar9 + 8) + 0xa8))(0x37,0,(char)iVar8);
    FUN_004bf850(0xffffffff);
    iVar9 = param_1[0xce];
    pEVar1 = (EquipDescList *)(iVar9 + 0x20);
    EquipDescList::find_equipment_item(pEVar1,uStack_5a);
    EquipDescList::remove_equipment_item(pEVar1,uStack_5a,local_48);
    fVar16 = EquipDescList::get_cargo_space_occupied(pEVar1);
    *(double *)(iVar9 + 0x60) = (double)fVar16;
    pEVar14 = EquipDescList::find_equipment_item(pEVar1,uStack_5a);
    iVar8 = *(int *)(iVar9 + 0x28) - *(int *)(iVar9 + 0x30);
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    (**(code **)(**(int **)(iVar9 + 8) + 0xa8))(0x37,0,iVar8);
    FUN_004bf850(0xffffffff);
    pEVar14 = (EquipDesc *)(-(uint)(pEVar14 != (EquipDesc *)0x0) & CONCAT22(uVar18,uVar17));
    iVar9 = FUN_005416c0(param_1[0x10b],1);
    if (iVar9 != 0) {
      pCVar11 = (CShip *)FUN_00543320();
      uVar13 = *(undefined4 *)(param_1[0xcc] + 0x60);
      uVar22 = *(undefined4 *)(param_1[0xcc] + 100);
      uVar5 = *(undefined4 *)(param_1[0xcd] + 0x60);
      uVar6 = *(undefined4 *)(param_1[0xcd] + 100);
      uVar17 = (undefined2)uVar5;
      uVar18 = (undefined2)((uint)uVar5 >> 0x10);
      uVar19 = (undefined1)uVar6;
      uVar20 = (undefined1)((uint)uVar6 >> 8);
      uVar21 = (undefined2)((uint)uVar6 >> 0x10);
      fVar16 = CShip::get_cargo_hold_remaining(pCVar11);
      fVar16 = (((float)*(double *)(param_1 + 0xfc) - fVar16) -
               (float)(double)CONCAT44(uVar22,uVar13)) +
               (float)(double)CONCAT26(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT22(uVar18,uVar17
                                                                                      ))));
LAB_004c3402:
      *(double *)(param_1 + 0xfa) = (double)fVar16;
    }
LAB_004c3408:
    fVar15 = (float10)FUN_004c4640();
    *(double *)(param_1 + 0xf0) =
         (double)((fVar15 - (float10)(double)CONCAT44(iStack_4c,uStack_50)) +
                 (float10)(double)CONCAT44(uStack_54,CONCAT22(uStack_56,uStack_58)));
  }
  if (pEVar14 != (EquipDesc *)0x0) {
    *pEVar14 = (EquipDesc)0x0;
  }
LAB_004c3471:
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  FUN_004bf850(0xffffffff);
  FUN_004c1ae0(2);
  return 0;
}

