
void __thiscall
FUN_0044e430(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,int *param_5,
            undefined4 *param_6,undefined4 param_7,undefined1 *param_8)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  undefined3 unaff_EBX;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *unaff_retaddr;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_b0 [4];
  char *local_ac;
  uint local_a8;
  undefined4 local_a4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_a0 [4];
  char *pcStack_9c;
  uint uStack_98;
  code *pcStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [9];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_5c [4];
  char *pcStack_58;
  uint uStack_54;
  undefined1 auStack_44 [48];
  void *pvStack_14;
  void *pvStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_005b9d79;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_3 = 0;
  *param_4 = 0xffffffff;
  *param_5 = -1;
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[0xb] = 0x3f800000;
  param_6[7] = 0x3f800000;
  param_6[3] = 0x3f800000;
  param_6[10] = 0;
  param_6[9] = 0;
  param_6[8] = 0;
  param_6[6] = 0;
  param_6[5] = 0;
  param_6[4] = 0;
  *param_8 = 0;
  local_ac = (char *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))(*(int **)(param_1 + 0x3c),param_2);
  bVar2 = *(byte *)(iVar4 + 4);
  if ((bVar2 & 1) == 0) {
    pcVar7 = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),iStack_4,"category");
    iVar8 = PetalInterfaceDatabase::get_category(pcVar7);
    *param_5 = iVar8;
    if ((iVar8 == 1) &&
       (iVar4 = stricmp(*(char **)(iVar4 + 0x3c),PTR_s_PlayerShip_00611000), iVar4 == 0)) {
      piVar5 = (int *)FUN_00446be0();
      if (piVar5 == (int *)0x0) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: %s",
                   "E:\\FL\\Scratch\\Source\\Client\\Gf\\Script.cpp",0x2d8,"No player ship");
      }
      *unaff_retaddr = piVar5;
      uVar6 = (**(code **)(*piVar5 + 0x18))();
      *param_2 = uVar6;
      *param_3 = -1;
      uVar6 = (**(code **)(*piVar5 + 0x18))();
      uVar6 = FUN_0043d940("HpMount",uVar6);
      puVar9 = (undefined4 *)FUN_004478c0(auStack_44,uVar6);
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_6 = *puVar9;
        puVar9 = puVar9 + 1;
        param_6 = param_6 + 1;
      }
    }
    else {
      *param_5 = 6;
      *(undefined1 *)param_6 = 1;
      iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))(*(int **)(param_1 + 0x3c),iStack_4);
      FUN_00445e20();
      pcVar7 = *(char **)(iVar4 + 0x3c);
      uVar11 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11 - 1;
      pvStack_14 = (void *)0x0;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (abStack_b0,uVar11,true);
      if (bVar3) {
        pcVar14 = local_ac;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar14 = pcVar14 + 1;
        }
        local_ac[uVar11] = '\0';
        local_a8 = uVar11;
      }
      pcVar7 = *(char **)(iVar4 + 0x38);
      uVar11 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11 - 1;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (abStack_a0,uVar11,true);
      pvVar10 = pvStack_c;
      if (bVar3) {
        pcVar14 = pcStack_9c;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcStack_9c[uVar11] = '\0';
        uStack_98 = uVar11;
      }
      uStack_8c = *(undefined4 *)(iVar4 + 8);
      uStack_88 = *(undefined4 *)(iVar4 + 0xc);
      uStack_84 = *(undefined4 *)(iVar4 + 0x10);
      puVar9 = (undefined4 *)(iVar4 + 0x14);
      puVar13 = auStack_80;
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar13 = puVar13 + 1;
      }
      uStack_90 = CONCAT13(bVar2,unaff_EBX) & 0x1ffffff;
      pcVar7 = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),(int)pvVar10,"loadout");
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "";
      }
      uVar11 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11 - 1;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (abStack_5c,uVar11,true);
      if (bVar3) {
        pcVar14 = pcStack_58;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcStack_58[uVar11] = '\0';
        uStack_54 = uVar11;
      }
      pvVar10 = operator_new(0x80);
      pvStack_14._0_1_ = 1;
      if (pvVar10 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_00445f40(*(undefined4 *)(param_1 + 0x30),abStack_b0);
      }
      *puStack_8 = piVar5;
      pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
      uVar6 = (**(code **)(*piVar5 + 0x18))();
      *param_2 = uVar6;
      *param_3 = piVar5[0x16];
      *(undefined1 *)param_6 = 1;
      if (*(char *)(param_1 + 0x5c) == '\0') {
        if (pcStack_94 == (code *)0x0) {
          pcStack_94 = _C_exref;
        }
        FUN_00455b80(piVar5,pcStack_94);
      }
      else {
        FUN_0044a380(piVar5);
      }
      pvStack_c = (void *)0xffffffff;
      FUN_00445ea0();
    }
  }
  else {
    piVar5 = (int *)FUN_0044a2f0(*(undefined4 *)(iVar4 + 0x38));
    if (piVar5 == (int *)0x0) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Cannot find referenced prop %s in the set layer",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\Script.cpp",0x2b4,
                 *(undefined4 *)(iVar4 + 0x38));
    }
    else {
      *unaff_retaddr = piVar5;
      uVar6 = (**(code **)(*piVar5 + 0x18))();
      *param_2 = uVar6;
      *param_3 = piVar5[0x16];
      *param_5 = 6;
      *(undefined1 *)param_6 = 0;
    }
  }
  ExceptionList = pvStack_14;
  return;
}

