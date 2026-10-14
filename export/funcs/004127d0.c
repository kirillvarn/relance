
uint __thiscall FUN_004127d0(int *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  HGDIOBJ h;
  size_t sVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  undefined4 uVar17;
  char *pcVar18;
  uint uStack_68;
  undefined4 *puStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_44;
  HDC local_38;
  HGDIOBJ pvStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [8];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b87f8;
  local_c = ExceptionList;
  if (param_1[3] == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  puVar6 = (uint *)(**(code **)(*param_1 + 0x18))(&local_38);
  uStack_44 = puVar6[1];
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  uVar11 = uVar2;
  if ((char)param_2 == '\0') {
    if ((uVar2 & uVar2 - 1) != 0) {
      for (uVar11 = (-(uint)(0x40 < uVar2) & 0x7f) + 1; uVar11 < uVar2; uVar11 = uVar11 << 1) {
      }
    }
    uStack_44 = uVar3;
    if ((uVar3 & uVar3 - 1) != 0) {
      for (uStack_44 = (-(uint)(0x40 < uVar3) & 0x7f) + 1; uStack_44 < uVar3;
          uStack_44 = uStack_44 << 1) {
      }
    }
    if ((DAT_00616668 < uVar11) || (DAT_0061666c < uStack_44)) {
      DAT_00616698 = 1;
      ExceptionList = local_c;
      return 0;
    }
  }
  uVar16 = param_1[5];
  if (uVar16 != 0) {
    uVar12 = 0;
    for (uVar14 = uVar16; uVar14 != 0; uVar14 = *(uint *)(uVar14 + 0x20)) {
      uVar12 = uVar12 + *(int *)(uVar14 + 4);
    }
    if (uVar11 <= uVar12) {
      uVar12 = 0;
      for (uVar14 = uVar16; uVar14 != 0; uVar14 = *(uint *)(uVar14 + 0x24)) {
        uVar12 = uVar12 + *(int *)(uVar14 + 8);
      }
      if (uStack_44 <= uVar12) {
        if (*(uint *)(uVar16 + 0xc) == uVar3) {
          ExceptionList = local_c;
          return 1;
        }
        goto LAB_0041292f;
      }
    }
    while (uVar16 != 0) {
      uVar14 = *(uint *)(uVar16 + 0x24);
      uVar12 = uVar16;
      do {
        uVar4 = *(uint *)(uVar12 + 0x20);
        *(undefined4 *)(uVar12 + 0x24) = 0;
        *(undefined4 *)(uVar12 + 0x20) = 0;
        param_2 = uVar12;
        FUN_004deb70(DAT_00616648,&param_2);
        uVar12 = uVar4;
        uVar16 = uVar14;
      } while (uVar4 != 0);
    }
    param_1[5] = 0;
  }
LAB_0041292f:
  if (param_1[5] == 0) {
    uStack_68 = 0;
    uStack_54 = 0;
    uVar16 = DAT_00616668;
    for (param_2 = uStack_44; 0 < (int)param_2; param_2 = param_2 - DAT_0061666c) {
      uVar14 = param_2;
      if (DAT_0061666c <= param_2) {
        uVar14 = DAT_0061666c;
      }
      if (0 < (int)uVar11) {
        iVar13 = uStack_44 - param_2;
        uVar12 = uVar11;
        iVar9 = 0;
        do {
          if (uVar12 < uVar16) {
            uVar16 = uVar12;
          }
          iVar7 = FUN_00412cc0(uVar16,uVar14);
          if (iVar9 == 0) {
            uVar16 = iVar7;
            uVar4 = iVar7;
            if (uStack_68 != 0) {
              *(int *)(uStack_54 + 0x24) = iVar7;
              uVar16 = uStack_68;
            }
          }
          else {
            *(int *)(iVar9 + 0x20) = iVar7;
            uVar16 = uStack_68;
            uVar4 = uStack_54;
          }
          uStack_54 = uVar4;
          uStack_68 = uVar16;
          *(uint *)(iVar7 + 0x10) = uVar11 - uVar12;
          *(int *)(iVar7 + 0x14) = iVar13;
          uVar12 = uVar12 - DAT_00616668;
          uVar16 = DAT_00616668;
          iVar9 = iVar7;
        } while (0 < (int)uVar12);
      }
    }
    param_1[5] = uStack_68;
    if (uStack_68 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  puStack_58 = (undefined4 *)param_1[5];
  param_2 = CONCAT31(param_2._1_3_,1);
  h = (HGDIOBJ)(**(code **)(*(int *)param_1[3] + 0xc))();
  local_38 = DAT_00616664;
  pvStack_34 = SelectObject(DAT_00616664,h);
  uStack_4 = 0;
  uVar11 = DAT_00616668;
  uVar16 = DAT_0061666c;
  uStack_54 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uStack_68 = uStack_54;
      uVar14 = uVar2;
      puVar5 = puStack_58;
      if (uVar16 <= uStack_54) {
        uStack_68 = uVar16;
      }
      for (; 0 < (int)uVar14; uVar14 = uVar14 - DAT_00616668) {
        if (uVar14 < uVar11) {
          uVar11 = uVar14;
        }
        iVar9 = puVar5[4];
        iVar13 = puVar5[5];
        puVar5[6] = uVar11;
        puVar5[7] = uStack_68;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_24 = uStack_68;
        uStack_28 = uVar11;
        if ((wchar_t *)param_1[1] == (wchar_t *)0x0) {
          sVar8 = 0;
        }
        else {
          sVar8 = wcslen((wchar_t *)param_1[1]);
        }
        iVar9 = (*(code *)PTR_FUN_0061640c)
                          (DAT_00616664,-iVar9,-iVar13,2,&uStack_30,param_1[1],sVar8,0);
        uVar16 = DAT_0061666c;
        if (iVar9 == 0) {
          pcVar18 = "FontString - ExtTextOutW failed.\n";
          uVar17 = 0x329;
LAB_00412c0f:
          (**(code **)FDUMP_exref)
                    (0x100002,"%s(%d) : *** WARNING: %s",
                     "E:\\FL\\Scratch\\Source\\Client\\cmn\\Font.cpp",uVar17,pcVar18);
          param_2 = param_2 & 0xffffff00;
        }
        else if ((char)param_2 != '\0') {
          SelectObject(DAT_00616664,DAT_00616658);
          GetDIBits(DAT_00616664,DAT_00616654,0,uVar16,DAT_0061665c,DAT_00616660,0);
          SelectObject(DAT_00616664,DAT_00616654);
          puVar15 = DAT_0061665c;
          uStack_10 = FUN_005b7010(0);
          iVar9 = (**(code **)(**(int **)Pipeline_exref + 0xc0))
                            (*(int **)Pipeline_exref,*puVar5,0,auStack_20);
          if (iVar9 != 0) {
            pcVar18 = "FontString - Could not lock texture.";
            uVar17 = 0x34c;
            goto LAB_00412c0f;
          }
          if (uStack_68 != 0) {
            uStack_50 = uStack_68;
            iVar9 = iStack_14;
            do {
              if (uVar11 != 0) {
                puVar10 = puVar15;
                uVar16 = uVar11;
                do {
                  uVar1 = *puVar10;
                  puVar10 = puVar10 + 1;
                  uVar16 = uVar16 - 1;
                  *(ushort *)((iVar9 - (int)puVar15) + -2 + (int)puVar10) =
                       (ushort)(uVar1 != 0) << 0xf | uVar1;
                } while (uVar16 != 0);
              }
              puVar15 = puVar15 + DAT_00616668;
              iVar9 = iVar9 + iStack_18;
              uStack_50 = uStack_50 - 1;
            } while (uStack_50 != 0);
          }
          (**(code **)(**(int **)Pipeline_exref + 0xc4))(*(int **)Pipeline_exref,*puVar5,0);
        }
        uVar11 = DAT_00616668;
        uVar16 = DAT_0061666c;
        puVar5 = (undefined4 *)puVar5[8];
      }
      puStack_58 = (undefined4 *)puStack_58[9];
      uStack_54 = uStack_54 - uVar16;
    } while (0 < (int)uStack_54);
    if ((char)param_2 == '\0') goto LAB_00412c86;
  }
  *(uint *)(param_1[5] + 0xc) = uVar3;
LAB_00412c86:
  SelectObject(local_38,pvStack_34);
  ExceptionList = local_c;
  return param_2 & 0xff;
}

