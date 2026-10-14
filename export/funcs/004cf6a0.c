
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_004cf6a0(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined **ppuVar8;
  uint uVar9;
  char *pcVar10;
  int **ppiVar11;
  char *pcStack_164;
  int **ppiStack_160;
  undefined4 *puStack_15c;
  undefined4 *puStack_158;
  undefined4 local_128;
  int *local_124;
  char *local_120;
  float local_11c;
  undefined4 local_118;
  float local_114;
  undefined4 local_110;
  char acStack_10c [12];
  char local_100 [232];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  ppuVar8 = &PTR_s_interface_HUD_HUD_contactship_3d_00612438;
  do {
    FUN_0059e980();
    ppuVar8 = ppuVar8 + 1;
  } while ((int)ppuVar8 < 0x612478);
  puStack_158 = (undefined4 *)0x0;
  puStack_15c = &local_128;
  ppiStack_160 = (int **)0x5ce91c;
  pcStack_164 = "FormationTitle";
  local_128 = -0.189;
  local_124 = (int *)0x3d3020c5;
  local_120 = (char *)0x0;
  iVar4 = FUN_005a0e30();
  param_1[0x104] = iVar4;
  *(byte *)(iVar4 + 0x6c) = *(byte *)(iVar4 + 0x6c) & 0xfc;
  local_11c = 0.0;
  piVar6 = param_1 + 0xed;
  do {
    fVar2 = local_11c;
    _snprintf(local_100,0x100,"ContactListRangeText%d");
    local_11c = _DAT_005d7bc4 - (float)(int)local_11c * _DAT_005d3ee8;
    puStack_158 = (undefined4 *)0x0;
    local_114 = local_11c + _DAT_005d7bc0;
    puStack_15c = &local_118;
    ppiStack_160 = (int **)0x5d4ddc;
    pcStack_164 = local_100;
    local_118 = 0xbe010625;
    local_110 = 0;
    piVar5 = (int *)FUN_005a0e30();
    piVar6[-8] = (int)piVar5;
    (**(code **)(*piVar5 + 0xa8))();
    puStack_158 = (undefined4 *)0x4cf7cd;
    _snprintf(acStack_10c,0x100,"ContactListNameText%d");
    fVar1 = local_128 + _DAT_005d1f04;
    puStack_158 = DAT_005d7960;
    puStack_15c = (undefined4 *)0x3c9374bc;
    ppiStack_160 = (int **)DAT_005d795c;
    pcStack_164 = (char *)0x0;
    iVar4 = FUN_005a0e30(acStack_10c,"HudSmall",&stack0xfffffecc);
    *piVar6 = iVar4;
    *(undefined4 *)(iVar4 + 0x2d4) = 0xbddb22d1;
    *(float *)(iVar4 + 0x2d8) = fVar1;
    *(undefined4 *)(iVar4 + 0x2dc) = 0;
    (**(code **)(*(int *)*piVar6 + 0xa8))();
    FUN_0058b770();
    local_11c = (float)((int)fVar2 + 1);
    piVar6 = piVar6 + 1;
  } while ((int)local_11c < 8);
  local_11c = 0.0;
  piVar6 = param_1 + 0xdd;
  do {
    fVar1 = local_11c;
    _snprintf(local_100,0x100,"ContactListIcon%d");
    local_124 = (int *)(_DAT_005d7b90 - (float)(int)local_11c * _DAT_005d3ee8);
    puStack_158 = &local_118;
    puStack_15c = (undefined4 *)0x0;
    ppiStack_160 = (int **)&local_128;
    pcStack_164 = (char *)0x0;
    local_118 = 0x3bc49ba6;
    local_114 = 0.006;
    local_110 = 0;
    local_128 = -0.17;
    local_120 = (char *)0x0;
    iVar4 = FUN_005a0c90(local_100,"Interface\\hud\\HUD_contactwaypoint.3db",0,"ui_select_item");
    local_11c = (float)((int)fVar1 + 1);
    *piVar6 = iVar4;
    piVar6 = piVar6 + 1;
  } while ((int)local_11c < 8);
  puStack_158 = &local_118;
  puStack_15c = (undefined4 *)0x0;
  ppiStack_160 = (int **)&local_128;
  pcStack_164 = (char *)0x0;
  local_118 = 0x3c656042;
  local_114 = 0.014;
  local_110 = 0;
  local_128 = -0.128;
  local_124 = (int *)0x3cc49ba6;
  local_120 = (char *)0x0;
  iVar4 = FUN_005a0c90("ImportantFilterButton","interface\\HUD\\HUD_contactimportant.3db",0,
                       "ui_filter_select");
  puStack_158 = &local_118;
  puStack_15c = (undefined4 *)0x0;
  ppiStack_160 = (int **)&local_128;
  pcStack_164 = (char *)0x0;
  param_1[0xfb] = iVar4;
  local_118 = 0x3c656042;
  local_114 = 0.014;
  local_110 = 0;
  local_128 = -0.094;
  local_124 = (int *)0x3cc49ba6;
  local_120 = (char *)0x0;
  iVar4 = FUN_005a0c90("ShipsFilterButton","interface\\HUD\\HUD_contactship.3db",0,
                       "ui_filter_select");
  param_1[0xfc] = iVar4;
  puStack_158 = &local_118;
  puStack_15c = (undefined4 *)0x0;
  ppiStack_160 = (int **)&local_128;
  pcStack_164 = (char *)0x0;
  local_118 = 0x3c656042;
  local_114 = 0.014;
  local_110 = 0;
  local_128 = -0.06;
  local_124 = (int *)0x3cc49ba6;
  local_120 = (char *)0x0;
  iVar4 = FUN_005a0c90("SolarFilterButton","interface\\HUD\\HUD_contactstation.3db",0,
                       "ui_filter_select");
  param_1[0xfd] = iVar4;
  local_118 = 0x3c656042;
  local_114 = 0.014;
  local_110 = 0;
  puStack_158 = &local_118;
  puStack_15c = (undefined4 *)0x0;
  ppiStack_160 = (int **)&local_128;
  pcStack_164 = (char *)0x0;
  local_128 = -0.026;
  local_124 = (int *)0x3cc49ba6;
  local_120 = (char *)0x0;
  iVar4 = FUN_005a0c90("LootFilterButton","interface\\HUD\\HUD_contactloot.3db",0,"ui_filter_select"
                      );
  puStack_158 = &local_118;
  puStack_15c = (undefined4 *)0x0;
  ppiStack_160 = (int **)&local_128;
  pcStack_164 = (char *)0x0;
  param_1[0xfe] = iVar4;
  local_118 = 0x3c656042;
  local_114 = 0.014;
  local_110 = 0;
  local_128 = 0.008;
  local_124 = (int *)0x3cc49ba6;
  local_120 = (char *)0x0;
  piVar6 = (int *)FUN_005a0c90("AllFilterButton","interface\\HUD\\HUD_contactall.3db",0,
                               "ui_filter_select");
  param_1[0xff] = (int)piVar6;
  iVar4 = *piVar6;
  SinglePlayer();
  (**(code **)(iVar4 + 0xa8))();
  puStack_158 = (undefined4 *)0x3df1a9fc;
  puStack_15c = (undefined4 *)0x3c83126f;
  ppiStack_160 = &local_124;
  pcStack_164 = "ContactListScroll";
  local_124 = (int *)0xbe88b439;
  local_120 = (char *)0xbe6f9db2;
  local_11c = -1.0;
  iVar4 = FUN_005a17e0();
  param_1[0xf5] = iVar4;
  (**(code **)(*param_1 + 0x7c))();
  puStack_158 = (undefined4 *)0x4cfbcd;
  (**(code **)(*param_1 + 0x14))();
  puStack_158 = (undefined4 *)0x1;
  puStack_15c = (undefined4 *)0x4cfbd6;
  FUN_005a0c30();
  uVar9 = 0;
  do {
    puStack_158 = *(undefined4 **)(&stack0xfffffebc + uVar9 * 4);
    puStack_15c = (undefined4 *)0x4cfbfc;
    FUN_005760d0();
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  local_124 = param_1 + 0xcc;
  ppuVar8 = &PTR_s_interface_HUD_HUD_contactship_3d_00612438;
  do {
    local_120 = *ppuVar8;
    uVar9 = 0xffffffff;
    pcStack_164 = (char *)CONCAT31(pcStack_164._1_3_,local_128._3_1_);
    ppiStack_160 = (int **)0x0;
    puStack_15c = (undefined4 *)0x0;
    puStack_158 = (undefined4 *)0x0;
    pcVar10 = local_120;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    uVar7 = ~uVar9 - 1;
    uVar9 = uVar7;
    if (0xfffffffd < uVar7) {
      std::_Xlen();
    }
    if (((ppiStack_160 == (int **)0x0) || (cVar3 = *(char *)((int)ppiStack_160 + -1), cVar3 == '\0')
        ) || (cVar3 == -1)) {
      if (uVar7 != 0) {
        if ((0x1f < puStack_158) || (puStack_158 < uVar7)) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_164
                     ,true);
          goto LAB_004cfc9f;
        }
        goto LAB_004cfca8;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_164,
                 true);
    }
    else if (uVar7 == 0) {
      *(char *)((int)ppiStack_160 + -1) = cVar3 + -1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_164,
                 false);
    }
    else {
LAB_004cfc9f:
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_164,
                 uVar7);
LAB_004cfca8:
      puStack_15c = (undefined4 *)uVar9;
      pcVar10 = local_120;
      ppiVar11 = ppiStack_160;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *ppiVar11 = (int *)*(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        ppiVar11 = (int **)((int)ppiVar11 + 4);
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)ppiVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        ppiVar11 = (int **)((int)ppiVar11 + 1);
      }
      *(char *)((int)ppiStack_160 + (int)puStack_15c) = '\0';
    }
    iVar4 = FUN_0055a360();
    ppuVar8 = ppuVar8 + 1;
    *local_124 = iVar4;
    local_124 = local_124 + 1;
  } while ((int)ppuVar8 < 0x612478);
  uVar9 = 0xffffffff;
  pcStack_164 = (char *)CONCAT31(pcStack_164._1_3_,local_128._3_1_);
  ppiStack_160 = (int **)0x0;
  puStack_15c = (undefined4 *)0x0;
  puStack_158 = (undefined4 *)0x0;
  pcVar10 = "interface\\HUD\\HUD_chat.3db";
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  uVar7 = ~uVar9 - 1;
  uVar9 = uVar7;
  if (0xfffffffd < uVar7) {
    std::_Xlen();
  }
  if (((ppiStack_160 == (int **)0x0) || (cVar3 = *(char *)((int)ppiStack_160 + -1), cVar3 == '\0'))
     || (cVar3 == -1)) {
    if (uVar7 == 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_164,
                 true);
      goto LAB_004cfdaf;
    }
    if ((0x1f < puStack_158) || (puStack_158 < uVar7)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_164,
                 true);
      goto LAB_004cfd80;
    }
  }
  else {
    if (uVar7 == 0) {
      *(char *)((int)ppiStack_160 + -1) = cVar3 + -1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_164,
                 false);
      goto LAB_004cfdaf;
    }
LAB_004cfd80:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_164,uVar7
              );
  }
  puStack_15c = (undefined4 *)uVar9;
  pcVar10 = "interface\\HUD\\HUD_chat.3db";
  ppiVar11 = ppiStack_160;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *ppiVar11 = (int *)*(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    ppiVar11 = (int **)((int)ppiVar11 + 4);
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)ppiVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    ppiVar11 = (int **)((int)ppiVar11 + 1);
  }
  *(char *)((int)ppiStack_160 + (int)puStack_15c) = '\0';
LAB_004cfdaf:
  iVar4 = FUN_0055a360();
  param_1[0xdc] = iVar4;
  puStack_158 = (undefined4 *)uStack_14;
  puStack_15c = (undefined4 *)uStack_18;
  ppiStack_160 = (int **)0x4cfdd4;
  cVar3 = FUN_004b5060();
  return cVar3 != '\0';
}

