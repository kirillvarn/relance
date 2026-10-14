
void __fastcall FUN_0043f2e0(int *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  uchar *puVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  byte *pbVar17;
  char *pcVar18;
  code *pcVar19;
  int *piVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  byte *local_240;
  int *local_23c;
  int local_238;
  int local_234;
  int local_230;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_22c [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_21c [16];
  char local_20c [256];
  char local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9688;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00456b40(&local_23c,*(undefined4 *)param_1[0xe0],(undefined4 *)param_1[0xe0]);
  local_23c = param_1 + 0xe8;
  iVar14 = 1;
  do {
    sprintf(local_20c,"RoomControl%d",iVar14);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_22c,false);
    uVar12 = 0xffffffff;
    pcVar16 = local_20c;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar6 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar6 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_22c,local_20c,~uVar12 - 1);
    local_4 = 0;
    FUN_00442d40(&local_240,local_23c[1],local_22c);
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_22c,true);
    sprintf(local_10c,"ButtonControl%d",iVar14);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_21c,false);
    uVar12 = 0xffffffff;
    pcVar16 = local_10c;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar6 = *pcVar16;
      pcVar16 = pcVar16 + 1;
    } while (cVar6 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_21c,local_10c,~uVar12 - 1);
    local_4 = 1;
    FUN_00442d40(&local_234,param_1[0xec],local_21c);
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_21c,true);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 10);
  iVar14 = FUN_0043a460();
  local_234 = *(int *)(iVar14 + 0x40);
  local_238 = 0;
  while( true ) {
    if (*(int *)(local_234 + 0x198) == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(local_234 + 0x19c) - *(int *)(local_234 + 0x198) >> 2;
    }
    if (iVar14 <= local_238) break;
    puVar2 = *(undefined4 **)(*(int *)(local_234 + 0x198) + local_238 * 4);
    pcVar16 = (char *)puVar2[2];
    if (pcVar16 == (char *)0x0) {
LAB_0043f4ef:
      if (puVar2[4] == 2) {
        iVar14 = FUN_0043a460();
        FUN_0043a630(*(undefined4 *)(iVar14 + 0x34));
        local_230 = 0;
        local_240 = (byte *)0x0;
        cVar6 = FUN_0043ce90(&local_240,1);
        if (cVar6 != '\0') {
          do {
            local_230 = local_230 + 1;
            cVar6 = FUN_0043ce90(&local_240,1);
          } while (cVar6 != '\0');
          if (local_230 != 0) goto LAB_0043f55b;
        }
      }
      else {
LAB_0043f55b:
        if ((puVar2[3] == 0) || (pcVar16 = (char *)puVar2[1], pcVar16 == (char *)0x0)) {
          local_240 = (byte *)puVar2[1];
          if (local_240 == (byte *)0x0) {
            uVar24 = *puVar2;
            uVar12 = puVar2[4];
            uVar23 = 0;
            uVar22 = 0;
            uVar25 = uVar24;
          }
          else {
            pbVar13 = *(byte **)(local_234 + 0xc);
            pbVar17 = local_240;
            do {
              bVar1 = *pbVar17;
              bVar21 = bVar1 < *pbVar13;
              if (bVar1 != *pbVar13) {
LAB_0043f5c9:
                iVar14 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                goto LAB_0043f5ce;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar17[1];
              bVar21 = bVar1 < pbVar13[1];
              if (bVar1 != pbVar13[1]) goto LAB_0043f5c9;
              pbVar17 = pbVar17 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar1 != 0);
            iVar14 = 0;
LAB_0043f5ce:
            puVar7 = (uint *)FUN_0043b630();
            uVar12 = MakeLocationID(*puVar7,(char *)local_240);
            uVar24 = puVar2[1];
            uVar22 = CONCAT31((int3)((uint)*puVar2 >> 8),iVar14 == 0);
            uVar23 = 1;
            uVar25 = *puVar2;
          }
        }
        else {
          puVar7 = (uint *)FUN_0043b630();
          uVar12 = MakeLocationID(*puVar7,pcVar16);
          uVar24 = puVar2[3];
          uVar23 = 1;
          uVar22 = 0;
          uVar25 = *puVar2;
        }
        iVar14 = FUN_0043f8e0(uVar12,uVar22,uVar23,uVar24,uVar25);
        if (iVar14 != 0) {
          *(undefined4 **)(iVar14 + 0x1c) = puVar2;
          pcVar16 = (char *)puVar2[1];
          if (pcVar16 != (char *)0x0) {
            uVar12 = 0xffffffff;
            pcVar15 = pcVar16;
            do {
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              cVar6 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar6 != '\0');
            iVar8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               (param_1 + 0xdb),0,param_1[0xdd],pcVar16,~uVar12 - 1);
            if (iVar8 == 0) {
              param_1[0xee] = iVar14;
            }
          }
        }
      }
    }
    else {
      uVar12 = 0xffffffff;
      pcVar15 = pcVar16;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar6 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar6 != '\0');
      iVar14 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (param_1 + 0xdb),0,param_1[0xdd],pcVar16,~uVar12 - 1);
      if ((iVar14 == 0) ||
         (((iVar14 = stricmp((char *)puVar2[2],"Deck"), iVar14 == 0 ||
           (iVar14 = stricmp((char *)puVar2[2],"Planetscape"), iVar14 == 0)) && (param_1[0xdd] == 0)
          ))) goto LAB_0043f4ef;
    }
    local_238 = local_238 + 1;
  }
  pcVar16 = *(char **)(local_234 + 0xc);
  iVar14 = 10;
  bVar21 = true;
  pcVar15 = pcVar16;
  pcVar18 = "Cityscape";
  do {
    if (iVar14 == 0) break;
    iVar14 = iVar14 + -1;
    bVar21 = *pcVar15 == *pcVar18;
    pcVar15 = pcVar15 + 1;
    pcVar18 = pcVar18 + 1;
  } while (bVar21);
  if (!bVar21) {
    iVar14 = 5;
    bVar21 = true;
    pcVar15 = pcVar16;
    pcVar18 = "Deck";
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar21 = *pcVar15 == *pcVar18;
      pcVar15 = pcVar15 + 1;
      pcVar18 = pcVar18 + 1;
    } while (bVar21);
    if (!bVar21) {
      iVar14 = 0xc;
      bVar21 = true;
      pcVar15 = "Planetscape";
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        bVar21 = *pcVar16 == *pcVar15;
        pcVar16 = pcVar16 + 1;
        pcVar15 = pcVar15 + 1;
      } while (bVar21);
      if (!bVar21) goto LAB_0043f706;
    }
  }
  if (param_1[0xdd] != 0) {
    pcVar9 = (code *)param_1[0xdc];
    if ((code *)param_1[0xdc] == (code *)0x0) {
      pcVar9 = _C_exref;
    }
    iVar14 = 5;
    bVar21 = true;
    pcVar19 = (code *)&DAT_005cb804;
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar21 = *pcVar9 == *pcVar19;
      pcVar9 = pcVar9 + 1;
      pcVar19 = pcVar19 + 1;
    } while (bVar21);
    if (!bVar21) {
      pcVar9 = (code *)param_1[0xdc];
      if ((code *)param_1[0xdc] == (code *)0x0) {
        pcVar9 = _C_exref;
      }
      iVar14 = 0xc;
      bVar21 = true;
      pcVar19 = (code *)"Planetscape";
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        bVar21 = *pcVar9 == *pcVar19;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      } while (bVar21);
      if (!bVar21) goto LAB_0043f706;
    }
  }
  iVar14 = FUN_004c3e10();
  if (iVar14 != 0) {
    FUN_0043f8e0(4,0,0,"IDS_HOTSPOT_LAUNCH","IDS_HOTSPOT_LAUNCH");
  }
LAB_0043f706:
  piVar20 = *(int **)param_1[0xec];
  if (piVar20 != (int *)param_1[0xec]) {
    do {
      pcVar9 = (code *)piVar20[3];
      if ((code *)piVar20[3] == (code *)0x0) {
        pcVar9 = _C_exref;
      }
      piVar10 = (int *)(**(code **)(*param_1 + 0x94))(pcVar9);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 0xa8))(4,param_1[0xe7],0);
        (**(code **)(*piVar10 + 0xa8))(3,0,0);
        (**(code **)(*piVar10 + 0xa8))(1,1,0);
        (**(code **)(*piVar10 + 0xa8))(2,1,0);
      }
      piVar20 = (int *)*piVar20;
    } while (piVar20 != (int *)param_1[0xec]);
  }
  puVar2 = (undefined4 *)param_1[0xec];
  puVar5 = (undefined4 *)*puVar2;
  while (puVar5 != puVar2) {
    puVar3 = (undefined4 *)*puVar5;
    FUN_004324c0(&local_238,puVar5);
    puVar5 = puVar3;
  }
  piVar20 = *(int **)param_1[0xe9];
  if (piVar20 != (int *)param_1[0xe9]) {
    do {
      pcVar9 = (code *)piVar20[3];
      if ((code *)piVar20[3] == (code *)0x0) {
        pcVar9 = _C_exref;
      }
      piVar10 = (int *)(**(code **)(*param_1 + 0x94))(pcVar9);
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 0xa8))(4,param_1[0xe7],0);
        (**(code **)(*piVar10 + 0xa8))(3,0,0);
        (**(code **)(*piVar10 + 0xa8))(1,1,0);
        (**(code **)(*piVar10 + 0xa8))(2,1,0);
      }
      piVar20 = (int *)*piVar20;
    } while (piVar20 != (int *)param_1[0xe9]);
  }
  piVar20 = local_23c;
  local_23c = (int *)local_23c[1];
  piVar10 = (int *)*local_23c;
  if ((int *)*local_23c != local_23c) {
    do {
      piVar4 = (int *)*piVar10;
      *(int *)piVar10[1] = *piVar10;
      this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar10 + 2);
      *(int *)(*piVar10 + 4) = piVar10[1];
      if ((char *)piVar10[3] != (char *)0x0) {
        puVar11 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Refcnt
                            (this,(char *)piVar10[3]);
        if ((*puVar11 == '\0') ||
           (puVar11 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Refcnt
                                (this,(char *)piVar10[3]), *puVar11 == 0xff)) {
          FUN_00442da0(piVar10[3] + -1,piVar10[5] + 2);
        }
        else {
          puVar11 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Refcnt
                              (this,(char *)piVar10[3]);
          *puVar11 = *puVar11 + 0xff;
        }
      }
      piVar10[3] = 0;
      piVar10[4] = 0;
      piVar10[5] = 0;
      FUN_005b7e1d(piVar10);
      piVar20[2] = piVar20[2] + -1;
      piVar10 = piVar4;
    } while (piVar4 != local_23c);
  }
  ExceptionList = pvStack_c;
  return;
}

