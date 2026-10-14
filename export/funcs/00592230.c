
char FUN_00592230(char *param_1)

{
  code cVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  code *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  byte *pbVar18;
  code *pcVar19;
  byte *pbVar20;
  char *pcVar21;
  char local_8e9;
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined4 local_8e0;
  undefined4 local_8dc;
  undefined4 *local_8d8;
  int local_8d4;
  void *local_8d0;
  FILE *local_8cc;
  undefined4 local_8c8 [2];
  undefined4 local_8c0;
  undefined4 local_8bc [2];
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined1 local_8a8 [4];
  undefined1 local_8a4 [4];
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined1 local_898 [4];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_894 [4];
  code *local_890;
  undefined1 local_884 [8];
  undefined1 local_87c [8];
  undefined1 local_874 [8];
  undefined1 local_86c [8];
  undefined1 local_864 [8];
  undefined1 local_85c [8];
  undefined1 local_854 [8];
  undefined1 local_84c [8];
  undefined1 local_844 [8];
  undefined1 local_83c [8];
  undefined1 local_834 [8];
  undefined1 local_82c [8];
  undefined1 local_824 [8];
  undefined1 local_81c [8];
  undefined1 local_814 [8];
  undefined1 local_80c [8];
  undefined1 local_804 [8];
  undefined1 local_7fc [8];
  undefined1 local_7f4 [8];
  undefined1 local_7ec [8];
  undefined1 local_7e4 [8];
  undefined1 local_7dc [8];
  undefined1 local_7d4 [8];
  undefined1 local_7cc [8];
  undefined1 local_7c4 [8];
  undefined1 local_7bc [8];
  undefined1 local_7b4 [8];
  undefined1 local_7ac [8];
  undefined1 local_7a4 [8];
  undefined1 local_79c [8];
  undefined1 local_794 [8];
  undefined1 local_78c [8];
  undefined1 local_784 [8];
  undefined1 local_77c [8];
  undefined1 local_774 [8];
  undefined1 local_76c [8];
  undefined1 local_764 [8];
  undefined1 local_75c [8];
  undefined1 local_754 [8];
  undefined1 local_74c [8];
  undefined1 local_744 [8];
  undefined1 local_73c [8];
  undefined1 local_734 [8];
  undefined1 local_72c [8];
  undefined1 local_724 [8];
  undefined1 local_71c [8];
  undefined1 local_714 [8];
  undefined1 local_70c [8];
  undefined1 local_704 [8];
  undefined1 local_6fc [8];
  undefined1 local_6f4 [8];
  undefined1 local_6ec [8];
  char local_6e4 [256];
  char local_5e4 [256];
  undefined1 local_4e4 [4];
  undefined1 local_4e0 [4];
  undefined1 local_4dc [4];
  undefined1 local_4d8 [4];
  undefined1 local_4d4 [4];
  undefined1 local_4d0 [4];
  undefined1 local_4cc [4];
  undefined1 local_4c8 [4];
  undefined1 local_4c4 [8];
  undefined1 local_4bc [4];
  undefined1 local_4b8 [4];
  undefined1 local_4b4 [4];
  undefined1 local_4b0 [420];
  char local_30c [256];
  char local_20c [256];
  byte local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4a7c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar5 = (code *)setlocale(4,"C");
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_894,false);
  uVar14 = 0xffffffff;
  pcVar19 = pcVar5;
  do {
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar19 + 1;
  } while (cVar1 != (code)0x0);
  uVar14 = ~uVar14 - 1;
  bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_894,uVar14,true);
  if (bVar3) {
    pcVar19 = local_890;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar19 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar19 = pcVar19 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_894,uVar14);
  }
  iVar8 = local_8d4;
  local_4 = 0;
  local_8e9 = '\0';
  FUN_00594540();
  puVar6 = (undefined4 *)FUN_0053e430();
  FUN_004a2f80(local_8c8,*puVar6);
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(undefined4 *)(iVar8 + 0x10) = 0;
  local_8cc = fopen(param_1,"rt");
  if (local_8cc != (FILE *)0x0) {
    local_8e9 = '\x01';
    pcVar7 = fgets(local_20c,0x100,local_8cc);
    while (pcVar7 != (char *)0x0) {
      if (((local_20c[0] != '#') && (iVar8 = isspace((int)local_20c[0]), iVar8 == 0)) &&
         (iVar8 = sscanf(local_20c,"%s"), iVar8 == 1)) {
        iVar8 = 0xd;
        bVar3 = true;
        pcVar7 = local_6e4;
        pcVar21 = "UIStaticText";
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar3 = *pcVar7 == *pcVar21;
          pcVar7 = pcVar7 + 1;
          pcVar21 = pcVar21 + 1;
        } while (bVar3);
        local_30c[0] = '\0';
        if (bVar3) {
          iVar8 = sscanf(local_20c,"%s %s %f %f %f %f \"%[^\"]",local_6e4,local_5e4,&local_8dc,
                         &local_8e0,&local_8e8,&local_8e4);
          if ((iVar8 == 6) || (iVar8 == 7)) {
            puVar6 = operator_new(0x20);
            local_8d8 = puVar6;
            FUN_0046d170(local_864);
            FUN_0046d660(local_864);
            puVar6[6] = local_8e4;
            puVar6[5] = local_8e8;
            puVar6[3] = local_8dc;
            puVar6[4] = local_8e0;
            puVar6[7] = 0;
            uVar14 = 0xffffffff;
            pcVar7 = local_6e4;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar4 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            pvVar9 = operator_new(~uVar14);
            iVar8 = 0;
            cVar4 = local_6e4[0];
            while (cVar4 != '\0') {
              *(char *)(iVar8 + (int)pvVar9) = cVar4;
              cVar4 = local_6e4[iVar8 + 1];
              iVar8 = iVar8 + 1;
            }
            *(undefined1 *)((int)pvVar9 + iVar8) = 0;
            *puVar6 = pvVar9;
            local_8d8 = (undefined4 *)*puVar6;
            FUN_0046d170(local_7a4);
            FUN_0046d660(local_7a4);
            uVar14 = 0xffffffff;
            pcVar7 = local_5e4;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar4 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            pvVar9 = operator_new(~uVar14);
            iVar8 = 0;
            cVar4 = local_5e4[0];
            while (cVar4 != '\0') {
              *(char *)(iVar8 + (int)pvVar9) = cVar4;
              cVar4 = local_5e4[iVar8 + 1];
              iVar8 = iVar8 + 1;
            }
            *(undefined1 *)((int)pvVar9 + iVar8) = 0;
            puVar6[2] = pvVar9;
            local_8d8 = (undefined4 *)puVar6[2];
            FUN_0046d170(local_854);
            FUN_0046d660(local_854);
            puVar10 = operator_new(0xc);
            local_8d8 = puVar10;
            FUN_0046d170(local_79c);
            FUN_0046d660(local_79c);
            puVar6[1] = puVar10;
            *puVar10 = local_8e8;
            uVar14 = 0xffffffff;
            puVar10[1] = local_8e4;
            pcVar7 = local_30c;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar4 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            local_8d8 = operator_new(~uVar14 * 2);
            iVar8 = 0;
            cVar4 = local_30c[0];
            while (cVar4 != '\0') {
              *(short *)((int)local_8d8 + iVar8 * 2) = (short)cVar4;
              iVar16 = iVar8 + 1;
              iVar8 = iVar8 + 1;
              cVar4 = local_30c[iVar16];
            }
            *(undefined2 *)((int)local_8d8 + iVar8 * 2) = 0;
            puVar10[2] = local_8d8;
            FUN_0046d170(local_844);
            FUN_0046d660(local_844);
            uVar11 = *(undefined4 *)(local_8d4 + 4);
            puVar12 = local_4b4;
            goto LAB_0059442e;
          }
        }
        else {
          iVar8 = 0x10;
          bVar3 = true;
          pcVar7 = local_6e4;
          pcVar21 = "UITextMsgButton";
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar3 = *pcVar7 == *pcVar21;
            pcVar7 = pcVar7 + 1;
            pcVar21 = pcVar21 + 1;
          } while (bVar3);
          if (bVar3) {
            local_10c[0] = 0;
            local_8d8 = (void *)0x0;
            iVar8 = sscanf(local_20c,"%s %s %f %f %f %f \"%[^\"]\" %f \"%[^\"]\" %d",local_6e4,
                           local_5e4,&local_8dc,&local_8e0,&local_8e8,&local_8e4,local_30c,local_8a4
                           ,local_10c);
            if ((((iVar8 == 7) || (iVar8 == 8)) || (iVar8 == 9)) || (iVar8 == 10)) {
              puVar6 = operator_new(0x20);
              FUN_0046d170(local_714);
              FUN_0046d660(local_714);
              puVar6[6] = local_8e4;
              puVar6[5] = local_8e8;
              puVar6[3] = local_8dc;
              puVar6[4] = local_8e0;
              puVar6[7] = 0;
              uVar14 = 0xffffffff;
              pcVar7 = local_6e4;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar4 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar4 != '\0');
              pvVar9 = operator_new(~uVar14);
              iVar8 = 0;
              cVar4 = local_6e4[0];
              while (cVar4 != '\0') {
                *(char *)(iVar8 + (int)pvVar9) = cVar4;
                cVar4 = local_6e4[iVar8 + 1];
                iVar8 = iVar8 + 1;
              }
              *(undefined1 *)((int)pvVar9 + iVar8) = 0;
              *puVar6 = pvVar9;
              FUN_0046d170(local_834);
              FUN_0046d660(local_834);
              uVar14 = 0xffffffff;
              pcVar7 = local_5e4;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar4 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar4 != '\0');
              pvVar9 = operator_new(~uVar14);
              iVar8 = 0;
              cVar4 = local_5e4[0];
              while (cVar4 != '\0') {
                *(char *)(iVar8 + (int)pvVar9) = cVar4;
                cVar4 = local_5e4[iVar8 + 1];
                iVar8 = iVar8 + 1;
              }
              *(undefined1 *)((int)pvVar9 + iVar8) = 0;
              puVar6[2] = pvVar9;
              FUN_0046d170(local_784);
              FUN_0046d660(local_784);
              puVar10 = operator_new(0x18);
              FUN_0046d170(local_824);
              FUN_0046d660(local_824);
              puVar6[1] = puVar10;
              *puVar10 = local_8e8;
              uVar14 = 0xffffffff;
              puVar10[1] = local_8e4;
              pcVar7 = local_30c;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar4 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar4 != '\0');
              pvVar9 = operator_new(~uVar14 * 2);
              iVar8 = 0;
              if (local_30c[0] != '\0') {
                iVar8 = 0;
                cVar4 = local_30c[0];
                do {
                  *(short *)((int)pvVar9 + iVar8 * 2) = (short)cVar4;
                  cVar4 = local_30c[iVar8 + 1];
                  iVar8 = iVar8 + 1;
                } while (cVar4 != '\0');
              }
              *(undefined2 *)((int)pvVar9 + iVar8 * 2) = 0;
              puVar10[2] = pvVar9;
              FUN_0046d170(local_734);
              FUN_0046d660(local_734);
              uVar11 = ftol();
              puVar10[3] = uVar11;
              puVar10[4] = local_8d8;
              iVar8 = 7;
              bVar3 = true;
              pbVar18 = local_10c;
              pbVar20 = &DAT_005e54c0;
              do {
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                bVar3 = *pbVar18 == *pbVar20;
                pbVar18 = pbVar18 + 1;
                pbVar20 = pbVar20 + 1;
              } while (bVar3);
              if (bVar3) {
                puVar10[5] = 0;
              }
              else {
                if (local_10c[0] != 0) {
                  pcVar7 = s_<default>_006155f0;
                  pbVar18 = local_10c;
                  do {
                    bVar2 = *pbVar18;
                    bVar3 = bVar2 < (byte)*pcVar7;
                    if (bVar2 != *pcVar7) {
LAB_005929f8:
                      iVar8 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                      goto LAB_005929fd;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar18[1];
                    bVar3 = bVar2 < (byte)pcVar7[1];
                    if (bVar2 != pcVar7[1]) goto LAB_005929f8;
                    pbVar18 = pbVar18 + 2;
                    pcVar7 = pcVar7 + 2;
                  } while (bVar2 != 0);
                  iVar8 = 0;
LAB_005929fd:
                  if (iVar8 != 0) {
                    uVar14 = 0xffffffff;
                    pbVar18 = local_10c;
                    do {
                      if (uVar14 == 0) break;
                      uVar14 = uVar14 - 1;
                      bVar2 = *pbVar18;
                      pbVar18 = pbVar18 + 1;
                    } while (bVar2 != 0);
                    pvVar9 = operator_new(~uVar14);
                    iVar8 = 0;
                    bVar2 = local_10c[0];
                    while (bVar2 != 0) {
                      *(byte *)(iVar8 + (int)pvVar9) = bVar2;
                      bVar2 = local_10c[iVar8 + 1];
                      iVar8 = iVar8 + 1;
                    }
                    *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                    puVar10[5] = pvVar9;
                    FUN_0046d170(local_814);
                    FUN_0046d660(local_814);
                    goto LAB_00592a99;
                  }
                }
                puVar10[5] = s_<default>_006155f0;
              }
LAB_00592a99:
              uVar11 = *(undefined4 *)(local_8d4 + 4);
              puVar12 = local_4b8;
LAB_0059442e:
              FUN_005947a0(puVar12,uVar11);
              goto LAB_00594434;
            }
          }
          else {
            iVar8 = 0xb;
            bVar3 = true;
            pcVar7 = local_6e4;
            pcVar21 = "UITextEdit";
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar3 = *pcVar7 == *pcVar21;
              pcVar7 = pcVar7 + 1;
              pcVar21 = pcVar21 + 1;
            } while (bVar3);
            if (bVar3) {
              iVar8 = sscanf(local_20c,"%s %s %f %f %f %f \"%[^\"]",local_6e4,local_5e4,&local_8dc,
                             &local_8e0,&local_8e8,&local_8e4);
              if ((iVar8 == 6) || (iVar8 == 7)) {
                puVar6 = operator_new(0x20);
                FUN_0046d170(local_774);
                FUN_0046d660(local_774);
                puVar6[6] = local_8e4;
                puVar6[5] = local_8e8;
                puVar6[3] = local_8dc;
                puVar6[4] = local_8e0;
                puVar6[7] = 0;
                uVar14 = 0xffffffff;
                pcVar7 = local_6e4;
                do {
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  cVar4 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar4 != '\0');
                pvVar9 = operator_new(~uVar14);
                iVar8 = 0;
                cVar4 = local_6e4[0];
                while (cVar4 != '\0') {
                  *(char *)(iVar8 + (int)pvVar9) = cVar4;
                  cVar4 = local_6e4[iVar8 + 1];
                  iVar8 = iVar8 + 1;
                }
                *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                *puVar6 = pvVar9;
                FUN_0046d170(local_804);
                FUN_0046d660(local_804);
                uVar14 = 0xffffffff;
                pcVar7 = local_5e4;
                do {
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  cVar4 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar4 != '\0');
                pvVar9 = operator_new(~uVar14);
                iVar8 = 0;
                cVar4 = local_5e4[0];
                while (cVar4 != '\0') {
                  *(char *)(iVar8 + (int)pvVar9) = cVar4;
                  cVar4 = local_5e4[iVar8 + 1];
                  iVar8 = iVar8 + 1;
                }
                *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                puVar6[2] = pvVar9;
                FUN_0046d170(local_6f4);
                FUN_0046d660(local_6f4);
                puVar10 = operator_new(0xc);
                FUN_0046d170(local_7f4);
                FUN_0046d660(local_7f4);
                puVar6[1] = puVar10;
                *puVar10 = local_8e8;
                uVar14 = 0xffffffff;
                puVar10[1] = local_8e4;
                pcVar7 = local_30c;
                do {
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  cVar4 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar4 != '\0');
                pvVar9 = operator_new(~uVar14 * 2);
                iVar8 = 0;
                cVar4 = local_30c[0];
                while (cVar4 != '\0') {
                  *(short *)((int)pvVar9 + iVar8 * 2) = (short)cVar4;
                  iVar16 = iVar8 + 1;
                  iVar8 = iVar8 + 1;
                  cVar4 = local_30c[iVar16];
                }
                *(undefined2 *)((int)pvVar9 + iVar8 * 2) = 0;
                puVar10[2] = pvVar9;
                FUN_0046d170(local_764);
                FUN_0046d660(local_764);
                uVar11 = *(undefined4 *)(local_8d4 + 4);
                puVar12 = local_4e4;
                goto LAB_0059442e;
              }
            }
            else {
              iVar8 = 10;
              bVar3 = true;
              pcVar7 = local_6e4;
              pcVar21 = "UIListBox";
              do {
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                bVar3 = *pcVar7 == *pcVar21;
                pcVar7 = pcVar7 + 1;
                pcVar21 = pcVar21 + 1;
              } while (bVar3);
              if (bVar3) {
                iVar8 = sscanf(local_20c,"%s %s %f %f %f %f",local_6e4,local_5e4,&local_8dc,
                               &local_8e0,&local_8e8);
                if (iVar8 == 6) {
                  puVar6 = operator_new(0x20);
                  FUN_0046d170(local_7e4);
                  FUN_0046d660(local_7e4);
                  puVar6[6] = local_8e4;
                  puVar6[5] = local_8e8;
                  puVar6[3] = local_8dc;
                  uVar14 = 0xffffffff;
                  puVar6[4] = local_8e0;
                  puVar6[7] = 0;
                  pcVar7 = local_6e4;
                  do {
                    if (uVar14 == 0) break;
                    uVar14 = uVar14 - 1;
                    cVar4 = *pcVar7;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar4 != '\0');
                  pvVar9 = operator_new(~uVar14);
                  iVar8 = 0;
                  cVar4 = local_6e4[0];
                  while (cVar4 != '\0') {
                    *(char *)(iVar8 + (int)pvVar9) = cVar4;
                    cVar4 = local_6e4[iVar8 + 1];
                    iVar8 = iVar8 + 1;
                  }
                  *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                  *puVar6 = pvVar9;
                  FUN_0046d170(local_724);
                  FUN_0046d660(local_724);
                  uVar14 = 0xffffffff;
                  pcVar7 = local_5e4;
                  do {
                    if (uVar14 == 0) break;
                    uVar14 = uVar14 - 1;
                    cVar4 = *pcVar7;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar4 != '\0');
                  pvVar9 = operator_new(~uVar14);
                  iVar8 = 0;
                  cVar4 = local_5e4[0];
                  while (cVar4 != '\0') {
                    *(char *)(iVar8 + (int)pvVar9) = cVar4;
                    cVar4 = local_5e4[iVar8 + 1];
                    iVar8 = iVar8 + 1;
                  }
                  *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                  puVar6[2] = pvVar9;
                  FUN_0046d170(local_7d4);
                  FUN_0046d660(local_7d4);
                  puVar10 = operator_new(8);
                  FUN_0046d170(local_754);
                  FUN_0046d660(local_754);
                  puVar6[1] = puVar10;
                  *puVar10 = local_8e8;
                  puVar10[1] = local_8e4;
                  uVar11 = *(undefined4 *)(local_8d4 + 4);
                  puVar12 = local_4dc;
                  goto LAB_0059442e;
                }
              }
              else {
                iVar8 = 0xc;
                bVar3 = true;
                pcVar7 = local_6e4;
                pcVar21 = "UIWinObject";
                do {
                  if (iVar8 == 0) break;
                  iVar8 = iVar8 + -1;
                  bVar3 = *pcVar7 == *pcVar21;
                  pcVar7 = pcVar7 + 1;
                  pcVar21 = pcVar21 + 1;
                } while (bVar3);
                if (bVar3) {
                  iVar8 = sscanf(local_20c,"%s %s %f %f %f %f %f %s",local_6e4,local_5e4,&local_8dc,
                                 &local_8e0,&local_8e8,&local_8e4,&local_89c);
                  if (iVar8 == 8) {
                    puVar6 = operator_new(0x20);
                    FUN_0046d170(local_7c4);
                    FUN_0046d660(local_7c4);
                    puVar6[6] = local_8e4;
                    puVar6[5] = local_8e8;
                    puVar6[3] = local_8dc;
                    puVar6[4] = local_8e0;
                    uVar14 = 0xffffffff;
                    puVar6[7] = 0;
                    pcVar7 = local_6e4;
                    do {
                      if (uVar14 == 0) break;
                      uVar14 = uVar14 - 1;
                      cVar4 = *pcVar7;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar4 != '\0');
                    pvVar9 = operator_new(~uVar14);
                    iVar8 = 0;
                    cVar4 = local_6e4[0];
                    while (cVar4 != '\0') {
                      *(char *)(iVar8 + (int)pvVar9) = cVar4;
                      cVar4 = local_6e4[iVar8 + 1];
                      iVar8 = iVar8 + 1;
                    }
                    *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                    *puVar6 = pvVar9;
                    FUN_0046d170(local_704);
                    FUN_0046d660(local_704);
                    uVar14 = 0xffffffff;
                    pcVar7 = local_5e4;
                    do {
                      if (uVar14 == 0) break;
                      uVar14 = uVar14 - 1;
                      cVar4 = *pcVar7;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar4 != '\0');
                    pvVar9 = operator_new(~uVar14);
                    iVar8 = 0;
                    cVar4 = local_5e4[0];
                    while (cVar4 != '\0') {
                      *(char *)(iVar8 + (int)pvVar9) = cVar4;
                      cVar4 = local_5e4[iVar8 + 1];
                      iVar8 = iVar8 + 1;
                    }
                    *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                    puVar6[2] = pvVar9;
                    FUN_0046d170(local_7b4);
                    FUN_0046d660(local_7b4);
                    puVar10 = operator_new(0x10);
                    FUN_0046d170(local_744);
                    FUN_0046d660(local_744);
                    puVar6[1] = puVar10;
                    *puVar10 = local_8e8;
                    puVar10[1] = local_8e4;
                    uVar14 = 0xffffffff;
                    pcVar7 = local_30c;
                    do {
                      if (uVar14 == 0) break;
                      uVar14 = uVar14 - 1;
                      cVar4 = *pcVar7;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar4 != '\0');
                    pvVar9 = operator_new(~uVar14);
                    iVar8 = 0;
                    cVar4 = local_30c[0];
                    while (cVar4 != '\0') {
                      *(char *)(iVar8 + (int)pvVar9) = cVar4;
                      cVar4 = local_30c[iVar8 + 1];
                      iVar8 = iVar8 + 1;
                    }
                    *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                    puVar10[2] = pvVar9;
                    FUN_0046d170(local_874);
                    FUN_0046d660(local_874);
                    puVar10[3] = local_89c;
                    uVar11 = *(undefined4 *)(local_8d4 + 4);
                    puVar12 = local_4d4;
                    goto LAB_0059442e;
                  }
                }
                else {
                  iVar8 = 0xc;
                  bVar3 = true;
                  pcVar7 = local_6e4;
                  pcVar21 = "UIWinDeform";
                  do {
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    bVar3 = *pcVar7 == *pcVar21;
                    pcVar7 = pcVar7 + 1;
                    pcVar21 = pcVar21 + 1;
                  } while (bVar3);
                  if (bVar3) {
                    iVar8 = sscanf(local_20c,"%s %s %f %f %f %f",local_6e4,local_5e4,&local_8dc,
                                   &local_8e0,&local_8e8);
                    if (iVar8 == 6) {
                      puVar6 = operator_new(0x20);
                      FUN_0046d170(local_86c);
                      FUN_0046d660(local_86c);
                      puVar6[6] = local_8e4;
                      puVar6[5] = local_8e8;
                      puVar6[3] = local_8dc;
                      uVar14 = 0xffffffff;
                      puVar6[4] = local_8e0;
                      puVar6[7] = 0;
                      pcVar7 = local_6e4;
                      do {
                        if (uVar14 == 0) break;
                        uVar14 = uVar14 - 1;
                        cVar4 = *pcVar7;
                        pcVar7 = pcVar7 + 1;
                      } while (cVar4 != '\0');
                      pvVar9 = operator_new(~uVar14);
                      iVar8 = 0;
                      cVar4 = local_6e4[0];
                      while (cVar4 != '\0') {
                        *(char *)(iVar8 + (int)pvVar9) = cVar4;
                        cVar4 = local_6e4[iVar8 + 1];
                        iVar8 = iVar8 + 1;
                      }
                      *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                      *puVar6 = pvVar9;
                      FUN_0046d170(local_85c);
                      FUN_0046d660(local_85c);
                      uVar14 = 0xffffffff;
                      pcVar7 = local_5e4;
                      do {
                        if (uVar14 == 0) break;
                        uVar14 = uVar14 - 1;
                        cVar4 = *pcVar7;
                        pcVar7 = pcVar7 + 1;
                      } while (cVar4 != '\0');
                      pvVar9 = operator_new(~uVar14);
                      iVar8 = 0;
                      cVar4 = local_5e4[0];
                      while (cVar4 != '\0') {
                        *(char *)(iVar8 + (int)pvVar9) = cVar4;
                        cVar4 = local_5e4[iVar8 + 1];
                        iVar8 = iVar8 + 1;
                      }
                      *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                      puVar6[2] = pvVar9;
                      FUN_0046d170(local_84c);
                      FUN_0046d660(local_84c);
                      puVar10 = operator_new(8);
                      FUN_0046d170(local_83c);
                      FUN_0046d660(local_83c);
                      puVar6[1] = puVar10;
                      *puVar10 = local_8e8;
                      puVar10[1] = local_8e4;
                      uVar11 = *(undefined4 *)(local_8d4 + 4);
                      puVar12 = local_4b0;
                      goto LAB_0059442e;
                    }
                  }
                  else {
                    iVar8 = 0xe;
                    bVar3 = true;
                    pcVar7 = local_6e4;
                    pcVar21 = "UIRichTextWin";
                    do {
                      if (iVar8 == 0) break;
                      iVar8 = iVar8 + -1;
                      bVar3 = *pcVar7 == *pcVar21;
                      pcVar7 = pcVar7 + 1;
                      pcVar21 = pcVar21 + 1;
                    } while (bVar3);
                    if (bVar3) {
                      iVar8 = sscanf(local_20c,"%s %s %f %f %f %f",local_6e4,local_5e4,&local_8dc,
                                     &local_8e0,&local_8e8);
                      if (iVar8 == 6) {
                        puVar6 = operator_new(0x20);
                        FUN_0046d170(local_82c);
                        FUN_0046d660(local_82c);
                        puVar6[6] = local_8e4;
                        puVar6[5] = local_8e8;
                        puVar6[3] = local_8dc;
                        uVar14 = 0xffffffff;
                        puVar6[4] = local_8e0;
                        puVar6[7] = 0;
                        pcVar7 = local_6e4;
                        do {
                          if (uVar14 == 0) break;
                          uVar14 = uVar14 - 1;
                          cVar4 = *pcVar7;
                          pcVar7 = pcVar7 + 1;
                        } while (cVar4 != '\0');
                        pvVar9 = operator_new(~uVar14);
                        iVar8 = 0;
                        cVar4 = local_6e4[0];
                        while (cVar4 != '\0') {
                          *(char *)(iVar8 + (int)pvVar9) = cVar4;
                          cVar4 = local_6e4[iVar8 + 1];
                          iVar8 = iVar8 + 1;
                        }
                        *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                        *puVar6 = pvVar9;
                        FUN_0046d170(local_81c);
                        FUN_0046d660(local_81c);
                        uVar14 = 0xffffffff;
                        pcVar7 = local_5e4;
                        do {
                          if (uVar14 == 0) break;
                          uVar14 = uVar14 - 1;
                          cVar4 = *pcVar7;
                          pcVar7 = pcVar7 + 1;
                        } while (cVar4 != '\0');
                        pvVar9 = operator_new(~uVar14);
                        iVar8 = 0;
                        cVar4 = local_5e4[0];
                        while (cVar4 != '\0') {
                          *(char *)(iVar8 + (int)pvVar9) = cVar4;
                          cVar4 = local_5e4[iVar8 + 1];
                          iVar8 = iVar8 + 1;
                        }
                        *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                        puVar6[2] = pvVar9;
                        FUN_0046d170(local_80c);
                        FUN_0046d660(local_80c);
                        puVar10 = operator_new(8);
                        FUN_0046d170(local_7fc);
                        FUN_0046d660(local_7fc);
                        puVar6[1] = puVar10;
                        *puVar10 = local_8e8;
                        puVar10[1] = local_8e4;
                        uVar11 = *(undefined4 *)(local_8d4 + 4);
                        puVar12 = local_4c8;
                        goto LAB_0059442e;
                      }
                    }
                    else {
                      iVar8 = 0x12;
                      bVar3 = true;
                      pcVar7 = local_6e4;
                      pcVar21 = "UIShipViewControl";
                      do {
                        if (iVar8 == 0) break;
                        iVar8 = iVar8 + -1;
                        bVar3 = *pcVar7 == *pcVar21;
                        pcVar7 = pcVar7 + 1;
                        pcVar21 = pcVar21 + 1;
                      } while (bVar3);
                      if (bVar3) {
                        iVar8 = sscanf(local_20c,"%s %s %f %f %f %f",local_6e4,local_5e4,&local_8dc,
                                       &local_8e0,&local_8e8);
                        if (iVar8 == 6) {
                          puVar6 = operator_new(0x20);
                          FUN_0046d170(local_7ec);
                          FUN_0046d660(local_7ec);
                          puVar6[6] = local_8e4;
                          puVar6[5] = local_8e8;
                          puVar6[3] = local_8dc;
                          uVar14 = 0xffffffff;
                          puVar6[4] = local_8e0;
                          puVar6[7] = 0;
                          pcVar7 = local_6e4;
                          do {
                            if (uVar14 == 0) break;
                            uVar14 = uVar14 - 1;
                            cVar4 = *pcVar7;
                            pcVar7 = pcVar7 + 1;
                          } while (cVar4 != '\0');
                          pvVar9 = operator_new(~uVar14);
                          iVar8 = 0;
                          if (local_6e4[0] != '\0') {
                            iVar16 = 0;
                            cVar4 = local_6e4[0];
                            do {
                              iVar8 = iVar16 + 1;
                              *(char *)(iVar16 + (int)pvVar9) = cVar4;
                              cVar4 = local_6e4[iVar16 + 1];
                              iVar16 = iVar8;
                            } while (cVar4 != '\0');
                          }
                          *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                          *puVar6 = pvVar9;
                          FUN_0046d170(local_7dc);
                          FUN_0046d660(local_7dc);
                          uVar14 = 0xffffffff;
                          pcVar7 = local_5e4;
                          do {
                            if (uVar14 == 0) break;
                            uVar14 = uVar14 - 1;
                            cVar4 = *pcVar7;
                            pcVar7 = pcVar7 + 1;
                          } while (cVar4 != '\0');
                          pvVar9 = operator_new(~uVar14);
                          iVar8 = 0;
                          cVar4 = local_5e4[0];
                          while (cVar4 != '\0') {
                            *(char *)(iVar8 + (int)pvVar9) = cVar4;
                            cVar4 = local_5e4[iVar8 + 1];
                            iVar8 = iVar8 + 1;
                          }
                          *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                          puVar6[2] = pvVar9;
                          FUN_0046d170(local_7cc);
                          FUN_0046d660(local_7cc);
                          puVar10 = operator_new(8);
                          FUN_0046d170(local_7bc);
                          FUN_0046d660(local_7bc);
                          puVar6[1] = puVar10;
                          *puVar10 = local_8e8;
                          puVar10[1] = local_8e4;
                          uVar11 = *(undefined4 *)(local_8d4 + 4);
                          puVar12 = local_4cc;
                          goto LAB_0059442e;
                        }
                      }
                      else {
                        iVar8 = 8;
                        bVar3 = true;
                        pcVar7 = local_6e4;
                        pcVar21 = "UITable";
                        do {
                          if (iVar8 == 0) break;
                          iVar8 = iVar8 + -1;
                          bVar3 = *pcVar7 == *pcVar21;
                          pcVar7 = pcVar7 + 1;
                          pcVar21 = pcVar21 + 1;
                        } while (bVar3);
                        if (bVar3) {
                          iVar8 = sscanf(local_20c,"%s %s %f %f %f %f %f %f",local_6e4,local_5e4,
                                         &local_8dc,&local_8e0,&local_8e8,&local_8e4,local_8a8);
                          if (iVar8 == 8) {
                            puVar6 = operator_new(0x20);
                            FUN_0046d170(local_884);
                            FUN_0046d660(local_884);
                            puVar6[6] = local_8e4;
                            puVar6[5] = local_8e8;
                            puVar6[3] = local_8dc;
                            puVar6[4] = local_8e0;
                            uVar14 = 0xffffffff;
                            puVar6[7] = 0;
                            pcVar7 = local_6e4;
                            do {
                              if (uVar14 == 0) break;
                              uVar14 = uVar14 - 1;
                              cVar4 = *pcVar7;
                              pcVar7 = pcVar7 + 1;
                            } while (cVar4 != '\0');
                            pvVar9 = operator_new(~uVar14);
                            iVar8 = 0;
                            cVar4 = local_6e4[0];
                            while (cVar4 != '\0') {
                              *(char *)(iVar8 + (int)pvVar9) = cVar4;
                              cVar4 = local_6e4[iVar8 + 1];
                              iVar8 = iVar8 + 1;
                            }
                            *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                            *puVar6 = pvVar9;
                            FUN_0046d170(local_7ac);
                            FUN_0046d660(local_7ac);
                            uVar14 = 0xffffffff;
                            pcVar7 = local_5e4;
                            do {
                              if (uVar14 == 0) break;
                              uVar14 = uVar14 - 1;
                              cVar4 = *pcVar7;
                              pcVar7 = pcVar7 + 1;
                            } while (cVar4 != '\0');
                            pvVar9 = operator_new(~uVar14);
                            iVar8 = 0;
                            cVar4 = local_5e4[0];
                            while (cVar4 != '\0') {
                              *(char *)(iVar8 + (int)pvVar9) = cVar4;
                              cVar4 = local_5e4[iVar8 + 1];
                              iVar8 = iVar8 + 1;
                            }
                            *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                            puVar6[2] = pvVar9;
                            FUN_0046d170(local_78c);
                            FUN_0046d660(local_78c);
                            puVar10 = operator_new(0x10);
                            FUN_0046d170(local_77c);
                            FUN_0046d660(local_77c);
                            puVar6[1] = puVar10;
                            *puVar10 = local_8e8;
                            puVar10[1] = local_8e4;
                            uVar11 = ftol();
                            puVar10[3] = uVar11;
                            uVar11 = ftol();
                            puVar10[2] = uVar11;
                            uVar11 = *(undefined4 *)(local_8d4 + 4);
                            puVar12 = local_4d8;
                            goto LAB_0059442e;
                          }
                        }
                        else {
                          iVar8 = 0xc;
                          bVar3 = true;
                          pcVar7 = local_6e4;
                          pcVar21 = "UIFastTable";
                          do {
                            if (iVar8 == 0) break;
                            iVar8 = iVar8 + -1;
                            bVar3 = *pcVar7 == *pcVar21;
                            pcVar7 = pcVar7 + 1;
                            pcVar21 = pcVar21 + 1;
                          } while (bVar3);
                          if (bVar3) {
                            iVar8 = sscanf(local_20c,"%s %s %f %f %f %f %f %f",local_6e4,local_5e4,
                                           &local_8dc,&local_8e0,&local_8e8,&local_8e4,local_898);
                            if (iVar8 == 8) {
                              puVar6 = operator_new(0x20);
                              FUN_0046d170(local_76c);
                              FUN_0046d660(local_76c);
                              puVar6[6] = local_8e4;
                              puVar6[5] = local_8e8;
                              puVar6[3] = local_8dc;
                              puVar6[4] = local_8e0;
                              uVar14 = 0xffffffff;
                              puVar6[7] = 0;
                              pcVar7 = local_6e4;
                              do {
                                if (uVar14 == 0) break;
                                uVar14 = uVar14 - 1;
                                cVar4 = *pcVar7;
                                pcVar7 = pcVar7 + 1;
                              } while (cVar4 != '\0');
                              pvVar9 = operator_new(~uVar14);
                              iVar8 = 0;
                              cVar4 = local_6e4[0];
                              while (cVar4 != '\0') {
                                *(char *)(iVar8 + (int)pvVar9) = cVar4;
                                cVar4 = local_6e4[iVar8 + 1];
                                iVar8 = iVar8 + 1;
                              }
                              *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                              *puVar6 = pvVar9;
                              FUN_0046d170(local_75c);
                              FUN_0046d660(local_75c);
                              uVar14 = 0xffffffff;
                              pcVar7 = local_5e4;
                              do {
                                if (uVar14 == 0) break;
                                uVar14 = uVar14 - 1;
                                cVar4 = *pcVar7;
                                pcVar7 = pcVar7 + 1;
                              } while (cVar4 != '\0');
                              pvVar9 = operator_new(~uVar14);
                              iVar8 = 0;
                              cVar4 = local_5e4[0];
                              while (cVar4 != '\0') {
                                *(char *)(iVar8 + (int)pvVar9) = cVar4;
                                cVar4 = local_5e4[iVar8 + 1];
                                iVar8 = iVar8 + 1;
                              }
                              *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                              puVar6[2] = pvVar9;
                              FUN_0046d170(local_74c);
                              FUN_0046d660(local_74c);
                              puVar10 = operator_new(0x10);
                              FUN_0046d170(local_73c);
                              FUN_0046d660(local_73c);
                              puVar6[1] = puVar10;
                              *puVar10 = local_8e8;
                              puVar10[1] = local_8e4;
                              uVar11 = ftol();
                              puVar10[3] = uVar11;
                              uVar11 = ftol();
                              puVar10[2] = uVar11;
                              uVar11 = *(undefined4 *)(local_8d4 + 4);
                              puVar12 = local_4d0;
                              goto LAB_0059442e;
                            }
                          }
                          else {
                            iVar8 = 9;
                            bVar3 = true;
                            pcVar7 = local_6e4;
                            pcVar21 = "UIScroll";
                            do {
                              if (iVar8 == 0) break;
                              iVar8 = iVar8 + -1;
                              bVar3 = *pcVar7 == *pcVar21;
                              pcVar7 = pcVar7 + 1;
                              pcVar21 = pcVar21 + 1;
                            } while (bVar3);
                            if (bVar3) {
                              local_8d8 = (void *)0x0;
                              iVar8 = sscanf(local_20c,"%s %s %f %f %f %f %f %f %f %f %d",local_6e4,
                                             local_5e4,&local_8dc,&local_8e0,&local_8e8,&local_8e4,
                                             &local_8b0,&local_8a0,&local_8c0,local_8bc);
                              if ((iVar8 == 10) || (iVar8 == 0xb)) {
                                puVar6 = operator_new(0x20);
                                FUN_0046d170(local_72c);
                                FUN_0046d660(local_72c);
                                puVar6[6] = local_8e4;
                                puVar6[5] = local_8e8;
                                puVar6[3] = local_8dc;
                                puVar6[4] = local_8e0;
                                uVar14 = 0xffffffff;
                                puVar6[7] = 0;
                                pcVar7 = local_6e4;
                                do {
                                  if (uVar14 == 0) break;
                                  uVar14 = uVar14 - 1;
                                  cVar4 = *pcVar7;
                                  pcVar7 = pcVar7 + 1;
                                } while (cVar4 != '\0');
                                pvVar9 = operator_new(~uVar14);
                                iVar8 = 0;
                                cVar4 = local_6e4[0];
                                while (cVar4 != '\0') {
                                  *(char *)(iVar8 + (int)pvVar9) = cVar4;
                                  cVar4 = local_6e4[iVar8 + 1];
                                  iVar8 = iVar8 + 1;
                                }
                                *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                                *puVar6 = pvVar9;
                                FUN_0046d170(local_71c);
                                FUN_0046d660(local_71c);
                                uVar14 = 0xffffffff;
                                pcVar7 = local_5e4;
                                do {
                                  if (uVar14 == 0) break;
                                  uVar14 = uVar14 - 1;
                                  cVar4 = *pcVar7;
                                  pcVar7 = pcVar7 + 1;
                                } while (cVar4 != '\0');
                                pvVar9 = operator_new(~uVar14);
                                iVar8 = 0;
                                cVar4 = local_5e4[0];
                                while (cVar4 != '\0') {
                                  *(char *)(iVar8 + (int)pvVar9) = cVar4;
                                  cVar4 = local_5e4[iVar8 + 1];
                                  iVar8 = iVar8 + 1;
                                }
                                *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                                puVar6[2] = pvVar9;
                                FUN_0046d170(local_70c);
                                FUN_0046d660(local_70c);
                                puVar10 = operator_new(0x1c);
                                FUN_0046d170(local_6fc);
                                FUN_0046d660(local_6fc);
                                puVar6[1] = puVar10;
                                *puVar10 = local_8e8;
                                puVar10[1] = local_8e4;
                                puVar10[2] = local_8b0;
                                puVar10[3] = local_8a0;
                                puVar10[4] = local_8c0;
                                puVar10[5] = local_8bc[0];
                                *(bool *)(puVar10 + 6) = local_8d8 != (void *)0x0;
                                uVar11 = *(undefined4 *)(local_8d4 + 4);
                                puVar12 = local_4bc;
                                goto LAB_0059442e;
                              }
                            }
                            else {
                              iVar8 = 8;
                              bVar3 = true;
                              pcVar7 = local_6e4;
                              pcVar21 = "UICycle";
                              do {
                                if (iVar8 == 0) break;
                                iVar8 = iVar8 + -1;
                                bVar3 = *pcVar7 == *pcVar21;
                                pcVar7 = pcVar7 + 1;
                                pcVar21 = pcVar21 + 1;
                              } while (bVar3);
                              if (bVar3) {
                                local_8d8 = (void *)0x0;
                                iVar8 = sscanf(local_20c,"%s %s %f %f %f %f %f %f %f %f %d",
                                               local_6e4,local_5e4,&local_8dc,&local_8e0,&local_8e8,
                                               &local_8e4,&local_8b4,&local_8ac,local_8c8,&local_8d0
                                              );
                                if ((iVar8 == 10) || (iVar8 == 0xb)) {
                                  puVar6 = operator_new(0x20);
                                  FUN_0046d170(local_6ec);
                                  FUN_0046d660(local_6ec);
                                  puVar6[6] = local_8e4;
                                  puVar6[5] = local_8e8;
                                  puVar6[3] = local_8dc;
                                  puVar6[4] = local_8e0;
                                  uVar14 = 0xffffffff;
                                  puVar6[7] = 0;
                                  pcVar7 = local_6e4;
                                  do {
                                    if (uVar14 == 0) break;
                                    uVar14 = uVar14 - 1;
                                    cVar4 = *pcVar7;
                                    pcVar7 = pcVar7 + 1;
                                  } while (cVar4 != '\0');
                                  pvVar9 = operator_new(~uVar14);
                                  iVar8 = 0;
                                  cVar4 = local_6e4[0];
                                  while (cVar4 != '\0') {
                                    *(char *)(iVar8 + (int)pvVar9) = cVar4;
                                    cVar4 = local_6e4[iVar8 + 1];
                                    iVar8 = iVar8 + 1;
                                  }
                                  *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                                  *puVar6 = pvVar9;
                                  FUN_0046d170(local_87c);
                                  FUN_0046d660(local_87c);
                                  uVar14 = 0xffffffff;
                                  pcVar7 = local_5e4;
                                  do {
                                    if (uVar14 == 0) break;
                                    uVar14 = uVar14 - 1;
                                    cVar4 = *pcVar7;
                                    pcVar7 = pcVar7 + 1;
                                  } while (cVar4 != '\0');
                                  pvVar9 = operator_new(~uVar14);
                                  iVar8 = 0;
                                  cVar4 = local_5e4[0];
                                  while (cVar4 != '\0') {
                                    *(char *)(iVar8 + (int)pvVar9) = cVar4;
                                    cVar4 = local_5e4[iVar8 + 1];
                                    iVar8 = iVar8 + 1;
                                  }
                                  *(undefined1 *)((int)pvVar9 + iVar8) = 0;
                                  puVar6[2] = pvVar9;
                                  FUN_0046d170(local_794);
                                  FUN_0046d660(local_794);
                                  puVar10 = operator_new(0x1c);
                                  FUN_0046d170(local_4c4);
                                  puVar6[1] = puVar10;
                                  *puVar10 = local_8e8;
                                  puVar10[1] = local_8e4;
                                  puVar10[2] = local_8b4;
                                  puVar10[3] = local_8ac;
                                  puVar10[4] = local_8c8[0];
                                  puVar10[5] = local_8d0;
                                  *(bool *)(puVar10 + 6) = local_8d8 != (void *)0x0;
                                  uVar11 = *(undefined4 *)(local_8d4 + 4);
                                  puVar12 = local_4e0;
                                  goto LAB_0059442e;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_8e9 = '\0';
        break;
      }
LAB_00594434:
      pcVar7 = fgets(local_20c,0x100,local_8cc);
    }
    fclose(local_8cc);
    if (local_8e9 != '\0') {
      *(undefined4 *)(local_8d4 + 0xc) = 0x3faaa993;
      local_8d0 = operator_new(*(int *)(local_8d4 + 8) * 4 + 4);
      *(void **)(local_8d4 + 0x10) = local_8d0;
      FUN_0046d170(local_4c4);
      piVar13 = (int *)**(int **)(local_8d4 + 4);
      piVar17 = *(int **)(local_8d4 + 0x10);
      if (piVar13 != *(int **)(local_8d4 + 4)) {
        do {
          *piVar17 = piVar13[2];
          piVar13 = (int *)*piVar13;
          piVar17 = piVar17 + 1;
        } while (piVar13 != (int *)*(int *)(local_8d4 + 4));
      }
      *piVar17 = 0;
    }
  }
  pcVar5 = local_890;
  if (local_890 == (code *)0x0) {
    pcVar5 = _C_exref;
  }
  setlocale(4,(char *)pcVar5);
  if (local_890 != (code *)0x0) {
    cVar1 = local_890[-1];
    if ((cVar1 == (code)0x0) || (cVar1 == (code)0xff)) {
      FUN_005b7e1d();
    }
    else {
      local_890[-1] = (code)((char)cVar1 + -1);
    }
  }
  ExceptionList = local_c;
  return local_8e9;
}

