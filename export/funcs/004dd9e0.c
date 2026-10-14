
void __fastcall FUN_004dd9e0(int param_1)

{
  undefined2 *puVar1;
  code cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int *piVar11;
  int iVar12;
  CEquip *pCVar13;
  CELauncher *pCVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  code *pcVar20;
  char *pcVar21;
  code *pcVar22;
  char *pcVar23;
  code *pcStack_9c;
  code *local_98;
  CEquipManager *pCStack_94;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined2 auStack_70 [2];
  char *pcStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_60 [4];
  code *pcStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  CEquipManager *pCStack_50;
  int iStack_4c;
  int local_48;
  undefined2 uStack_44;
  undefined2 auStack_40 [2];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_30 [16];
  undefined4 uStack_20;
  CEquipTraverser aCStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be615;
  pvStack_c = ExceptionList;
  local_48 = param_1 + 0x58c;
  ExceptionList = &pvStack_c;
  local_98 = (code *)param_1;
  FUN_004dea90(*(undefined4 *)(param_1 + 0x590),*(undefined4 *)(param_1 + 0x594));
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_4 = 0;
  piVar11 = (int *)FUN_0054baf0();
  if (((piVar11 != (int *)0x0) && (iVar12 = (**(code **)(*piVar11 + 0x150))(), iVar12 != 0)) &&
     ((*(uint *)(iVar12 + 0x4c) & 0x103) == 0x103)) {
    CEquipTraverser::CEquipTraverser(aCStack_1c,0xe0);
    pCStack_94 = (CEquipManager *)(iVar12 + 0xe4);
    pCVar13 = CEquipManager::Traverse(pCStack_94,aCStack_1c);
    pCVar14 = CELauncher::cast(pCVar13);
    while (pCVar14 != (CELauncher *)0x0) {
      iStack_4c = *(int *)(pCVar14 + 0xc);
      EquipDesc::EquipDesc((EquipDesc *)auStack_70);
      cVar9 = (**(code **)(*(int *)pCVar14 + 0x28))(auStack_70);
      pcVar21 = (char *)0x0;
      if (cVar9 != '\0') {
        pcVar21 = pcStack_6c;
      }
      uVar15 = FUN_004dd730(pcVar21);
      local_48 = CONCAT22(local_48._2_2_,*(undefined2 *)(pCVar14 + 8));
      (**(code **)(*(int *)pCVar14 + 4))();
      uVar5 = *(undefined4 *)(pCStack_50 + 0x14);
      uVar16 = (**(code **)(*(int *)pCVar14 + 0xa0))();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(abStack_30,false);
      auStack_40[0] = uStack_44;
      uVar18 = 0xffffffff;
      pcVar23 = pcVar21;
      do {
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        cVar9 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar9 != '\0');
      local_4._0_1_ = 1;
      uStack_3c = uVar16;
      uStack_38 = uVar5;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_30,pcVar21,~uVar18 - 1);
      local_4._0_1_ = 2;
      uStack_20 = uVar15;
      FUN_004de8b0(local_78,auStack_40);
      local_4 = (uint)local_4._1_3_ << 8;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(abStack_30,true);
      pCVar13 = CEquipManager::Traverse(pCStack_94,aCStack_1c);
      pCVar14 = CELauncher::cast(pCVar13);
    }
  }
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_7c == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = (local_78 - local_7c) / 0x24;
  }
  pcStack_9c = (code *)0x0;
  if (0 < iVar12) {
    do {
      FUN_004deb70(local_88,&pcStack_9c);
      pcStack_9c = pcStack_9c + 1;
    } while ((int)pcStack_9c < iVar12);
  }
  local_98 = (code *)(iVar12 + -1);
  iVar12 = local_8c;
  do {
    bVar10 = true;
    pcStack_9c = (code *)0x0;
    pcVar20 = local_98;
    if ((int)local_98 < 1) break;
    do {
      iVar6 = *(int *)(iVar12 + (int)pcStack_9c * 4);
      iVar7 = *(int *)(local_7c + 0x20 + iVar6 * 0x24);
      iVar17 = local_7c + *(int *)(iVar12 + 4 + (int)pcStack_9c * 4) * 0x24;
      iVar8 = *(int *)(iVar17 + 0x20);
      if (iVar7 < iVar8) {
LAB_004ddca4:
        uVar5 = *(undefined4 *)(iVar12 + (int)pcStack_9c * 4);
        *(undefined4 *)(iVar12 + (int)pcStack_9c * 4) =
             *(undefined4 *)(iVar12 + 4 + (int)pcStack_9c * 4);
        *(undefined4 *)(local_8c + 4 + (int)pcStack_9c * 4) = uVar5;
        bVar10 = false;
        iVar12 = local_8c;
      }
      else if (iVar7 == iVar8) {
        pcVar20 = *(code **)(iVar17 + 0x14);
        if (pcVar20 == (code *)0x0) {
          pcVar20 = _C_exref;
        }
        pcVar22 = *(code **)(local_7c + iVar6 * 0x24 + 0x14);
        if (pcVar22 == (code *)0x0) {
          pcVar22 = _C_exref;
        }
        iVar17 = stricmp((char *)pcVar22,(char *)pcVar20);
        iVar12 = local_8c;
        if (iVar17 < 0) goto LAB_004ddca4;
      }
      pcStack_9c = pcStack_9c + 1;
    } while ((int)pcStack_9c < (int)local_98);
    pcVar20 = local_98;
  } while (!bVar10);
  do {
    pcStack_9c = pcVar20;
    if ((int)pcStack_9c < 0) {
      FUN_005b7e1d(iVar12);
      iVar17 = local_78;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      local_4 = 0xffffffff;
      for (iVar12 = local_7c; iVar12 != iVar17; iVar12 = iVar12 + 0x24) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (iVar12 + 0x10),true);
      }
      FUN_005b7e1d(local_7c);
      ExceptionList = pvStack_c;
      return;
    }
    iVar12 = *(int *)(iVar12 + (int)pcStack_9c * 4);
    local_98 = *(code **)(local_7c + 0x14 + iVar12 * 0x24);
    puVar1 = (undefined2 *)(local_7c + iVar12 * 0x24);
    if (local_98 == (code *)0x0) {
      local_98 = _C_exref;
    }
    pCStack_94 = *(CEquipManager **)(puVar1 + 0x10);
    uVar3 = *(undefined1 *)(puVar1 + 6);
    uVar5 = *(undefined4 *)(puVar1 + 4);
    pcVar21 = *(char **)(puVar1 + 2);
    uVar4 = *puVar1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(abStack_60,false);
    pcVar20 = local_98;
    uVar18 = 0xffffffff;
    pcVar22 = local_98;
    do {
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      cVar2 = *pcVar22;
      pcVar22 = pcVar22 + 1;
    } while (cVar2 != (code)0x0);
    uVar18 = ~uVar18 - 1;
    local_4._0_1_ = 4;
    auStack_70[0] = uVar4;
    pcStack_6c = pcVar21;
    uStack_68 = uVar5;
    uStack_64 = uVar3;
    bVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                       (abStack_60,uVar18,true);
    if (bVar10) {
      pcVar22 = pcStack_5c;
      for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar20;
        pcVar20 = pcVar20 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar19 = uVar18 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar22 = *pcVar20;
        pcVar20 = pcVar20 + 1;
        pcVar22 = pcVar22 + 1;
      }
      pcStack_5c[uVar18] = (code)0x0;
      uStack_58 = uVar18;
    }
    pCStack_50 = pCStack_94;
    local_4._0_1_ = 5;
    FUN_004ded10(*(undefined4 *)(local_48 + 8),1,auStack_70);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pcStack_5c != (code *)0x0) {
      cVar2 = pcStack_5c[-1];
      if ((cVar2 == (code)0x0) || (cVar2 == (code)0xff)) {
        FUN_005b7e1d(pcStack_5c + -1);
      }
      else {
        pcStack_5c[-1] = (code)((char)cVar2 + -1);
      }
    }
    pcStack_5c = (code *)0x0;
    uStack_58 = 0;
    uStack_54 = 0;
    iVar12 = local_8c;
    pcVar20 = pcStack_9c + -1;
  } while( true );
}

