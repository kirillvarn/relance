
undefined4 __thiscall
FUN_00569670(int *param_1,CHARACTER_ID *param_2,CHARACTER_ID *param_3,uint param_4)

{
  size_t sVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  CHARACTER_ID *pCVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  undefined4 *puVar13;
  CHARACTER_ID *pCVar14;
  int *piVar15;
  CHARACTER_ID local_20c [512];
  undefined4 local_c;
  uint local_8;
  
  if (param_2 == (CHARACTER_ID *)0x3004) {
    FUN_005645c0(0);
    if ((int)param_3 < 0x3002) {
      if (param_3 == (CHARACTER_ID *)0x3001) {
        *(undefined1 *)(param_1 + 0x17c) = 1;
        param_1[0x17a] = 0;
        param_1[0x17b] = 0;
        *(undefined1 *)(param_1[0xb0] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb1] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb2] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb3] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb4] + 0x498) = 0;
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        *(byte *)(param_1[0xb9] + 0x6c) = *(byte *)(param_1[0xb9] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xba] + 0x6c) = *(byte *)(param_1[0xba] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xb8] + 0x6c) = *(byte *)(param_1[0xb8] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xae] + 0x6c) = *(byte *)(param_1[0xae] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xaf] + 0x6c) = *(byte *)(param_1[0xaf] + 0x6c) & 0xfc;
        FUN_00564570(0x1b);
        FUN_0056a150();
        param_1[0x17d] = 2;
        return 1;
      }
      if (param_3 == (CHARACTER_ID *)0x3e9) {
        *(undefined1 *)(param_1 + 0x17c) = 1;
        param_1[0x17a] = 0;
        param_1[0x17b] = 0;
        *(undefined1 *)(param_1[0xb0] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb1] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb2] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb3] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb4] + 0x498) = 0;
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        *(byte *)(param_1[0xb9] + 0x6c) = *(byte *)(param_1[0xb9] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xba] + 0x6c) = *(byte *)(param_1[0xba] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xb8] + 0x6c) = *(byte *)(param_1[0xb8] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xae] + 0x6c) = *(byte *)(param_1[0xae] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xaf] + 0x6c) = *(byte *)(param_1[0xaf] + 0x6c) & 0xfc;
        FUN_00564570(0x1b);
        FUN_0056a150();
        param_1[0x17d] = -1;
        return 1;
      }
      if (param_3 == (CHARACTER_ID *)0x3ea) {
        *(undefined1 *)(param_1 + 0x17c) = 1;
        param_1[0x17a] = 0;
        param_1[0x17b] = 0;
        *(undefined1 *)(param_1[0xb0] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb1] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb2] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb3] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb4] + 0x498) = 0;
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        *(byte *)(param_1[0xb9] + 0x6c) = *(byte *)(param_1[0xb9] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xba] + 0x6c) = *(byte *)(param_1[0xba] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xb8] + 0x6c) = *(byte *)(param_1[0xb8] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xae] + 0x6c) = *(byte *)(param_1[0xae] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xaf] + 0x6c) = *(byte *)(param_1[0xaf] + 0x6c) & 0xfc;
        FUN_00564570(0x1b);
        FUN_0056a150();
        param_1[0x17d] = -2;
        return 1;
      }
    }
    else {
      if (param_3 == (CHARACTER_ID *)0x3002) {
        cVar3 = FUN_0058d540(&param_3);
        if (cVar3 != '\0') {
          iVar5 = FUN_0058d0b0(param_3);
          if (*(int *)(iVar5 + 8) != 0) {
            iVar5 = FUN_005aace0(*(int *)(iVar5 + 8) + 8);
            pcVar6 = *(code **)(iVar5 + 0x208);
            if (*(code **)(iVar5 + 0x208) == (code *)0x0) {
              pcVar6 = _C_exref;
            }
            FUN_00488a80(param_1,pcVar6,0);
          }
        }
        return 1;
      }
      if (param_3 == (CHARACTER_ID *)0x3003) {
        *(undefined1 *)(param_1 + 0x17c) = 1;
        param_1[0x17a] = 0;
        param_1[0x17b] = 0;
        *(undefined1 *)(param_1[0xb0] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb1] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb2] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb3] + 0x498) = 0;
        *(undefined1 *)(param_1[0xb4] + 0x498) = 0;
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        FUN_00579a90(1);
        *(byte *)(param_1[0xb9] + 0x6c) = *(byte *)(param_1[0xb9] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xba] + 0x6c) = *(byte *)(param_1[0xba] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xb8] + 0x6c) = *(byte *)(param_1[0xb8] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xae] + 0x6c) = *(byte *)(param_1[0xae] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xaf] + 0x6c) = *(byte *)(param_1[0xaf] + 0x6c) & 0xfc;
        FUN_00564570(0x1b);
        FUN_0056a150();
        param_1[0x17d] = 1;
        return 1;
      }
    }
    return 0;
  }
  if (0xf001 < (int)param_2) {
    if (param_2 == (CHARACTER_ID *)0xf002) {
      if (param_3 != (CHARACTER_ID *)param_1[0xae]) {
        return 0;
      }
      FUN_0056ad40();
      param_1[0x17d] = 1;
      return 1;
    }
    if (param_2 != (CHARACTER_ID *)0xf005) {
      return 0;
    }
    FUN_00568d10();
    return 1;
  }
  if (param_2 == (CHARACTER_ID *)0xf001) {
    if (param_3 != (CHARACTER_ID *)param_1[0xae]) {
      return 0;
    }
    uVar12 = param_4 & 0xffff;
    if ((param_4 & 0xffff0000) != 0) {
      return 0;
    }
    if (4 < uVar12) {
      return 0;
    }
    uVar10 = param_1[0xe4];
    if (uVar12 == uVar10) {
      *(bool *)(uVar10 + 0x394 + (int)param_1) = *(char *)(uVar10 + 0x394 + (int)param_1) == '\0';
    }
    else {
      param_1[0xe4] = uVar12;
    }
    uVar12 = 0;
    piVar15 = param_1 + 0xbc;
    do {
      FUN_00568880(0,uVar12,piVar15,0,0);
      uVar12 = uVar12 + 1;
      piVar15 = piVar15 + 3;
    } while (uVar12 < 5);
    puVar9 = (undefined1 *)FUN_0058d0b0(0);
    *puVar9 = 0;
    FUN_0058d4a0();
    uVar12 = 1;
    param_3 = (CHARACTER_ID *)FUN_00575950();
    uVar10 = FUN_005ad970();
    local_8 = uVar10;
    FUN_00595d60(0,(float)(int)param_3);
    FUN_00595de0((float)(int)(uVar10 - 1));
    FUN_00595e10(0x3f800000);
    FUN_00595dd0();
    iVar5 = ftol();
    param_1[0x167] = iVar5;
    bVar11 = *(byte *)(param_1[0xaf] + 0x6c);
    if ((int)(uVar10 - 1) < (int)param_3) {
      bVar11 = bVar11 | 3;
    }
    else {
      bVar11 = bVar11 & 0xfc;
    }
    *(byte *)(param_1[0xaf] + 0x6c) = bVar11;
    FUN_005b7e90();
    iVar5 = 0;
    if (0 < (int)param_3) {
      do {
        pCVar7 = (CHARACTER_ID *)FUN_005aaca0(iVar5);
        *(CHARACTER_ID **)(local_20c + iVar5 * 4 + -0xc) = pCVar7;
        operator==(pCVar7,(CHARACTER_ID *)((int)param_1 + 0x399));
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_3);
    }
    sVar1 = (size_t)param_3;
    if (param_3 == (CHARACTER_ID *)0x0) {
      CHARACTER_ID::operator=((CHARACTER_ID *)((int)param_1 + 0x399),(CHARACTER_ID *)&DAT_0067bd40);
    }
    else {
      iVar5 = param_1[0xe4];
      if (*(char *)(iVar5 + 0x394 + (int)param_1) == '\0') {
        qsort(&stack0xfffffde8,(size_t)param_3,4,(_PtFuncCompare *)(&PTR_LAB_00614b84)[iVar5]);
      }
      else {
        qsort(&stack0xfffffde8,(size_t)param_3,4,(_PtFuncCompare *)(&PTR_LAB_00614b98)[iVar5]);
      }
    }
    param_4 = param_1[0x167];
    uVar10 = local_8;
    if ((int)param_4 < (int)sVar1) {
      do {
        if (local_8 <= uVar12) {
          return 1;
        }
        pCVar7 = *(CHARACTER_ID **)(local_20c + param_4 * 4 + -0xc);
        if (pCVar7 != (CHARACTER_ID *)0x0) {
          FUN_00569170(uVar12,pCVar7);
          bVar4 = operator==(pCVar7,(CHARACTER_ID *)((int)param_1 + 0x399));
          if (bVar4) {
            FUN_0058d4b0(uVar12);
          }
        }
        uVar12 = uVar12 + 1;
        param_4 = param_4 + 1;
        uVar10 = local_8;
      } while ((int)param_4 < (int)param_3);
    }
    for (; uVar2 = local_8, uVar12 < local_8; uVar12 = uVar12 + 1) {
      local_8 = uVar10;
      FUN_0056a1b0(uVar12);
      iVar5 = FUN_0058d0b0(uVar12);
      *(undefined1 *)(iVar5 + 1) = 0;
      puVar9 = (undefined1 *)FUN_0058d0b0(uVar12);
      *puVar9 = 0;
      uVar10 = local_8;
      local_8 = uVar2;
    }
    return 1;
  }
  if (param_2 != (CHARACTER_ID *)0x3006) {
    if (param_2 != (CHARACTER_ID *)0x300d) {
      return 0;
    }
    if (param_3 != (CHARACTER_ID *)param_1[0xae]) {
      return 0;
    }
    pCVar7 = (CHARACTER_ID *)((int)param_1 + 0x399);
    pCVar14 = local_20c;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pCVar14 = *(undefined4 *)pCVar7;
      pCVar7 = pCVar7 + 4;
      pCVar14 = pCVar14 + 4;
    }
    CHARACTER_ID::operator=((CHARACTER_ID *)((int)param_1 + 0x399),(CHARACTER_ID *)&DAT_0067bd40);
    cVar3 = FUN_0058d540(&local_c);
    if (cVar3 != '\0') {
      iVar5 = FUN_0058d0b0(local_c);
      if (*(int *)(iVar5 + 8) != 0) {
        CHARACTER_ID::operator=
                  ((CHARACTER_ID *)((int)param_1 + 0x399),(CHARACTER_ID *)(*(int *)(iVar5 + 8) + 8))
        ;
        local_8 = 0;
        param_3 = (CHARACTER_ID *)0x0;
        param_2 = (CHARACTER_ID *)0x0;
        for (puVar13 = DAT_0067e970; puVar13 != (undefined4 *)0x0; puVar13 = (undefined4 *)*puVar13)
        {
          local_8 = local_8 + 1;
        }
        param_4 = 0;
        if (0 < (int)local_8) {
          do {
            if ((param_3 != (CHARACTER_ID *)0x0) && (param_2 != (CHARACTER_ID *)0x0)) break;
            pCVar7 = (CHARACTER_ID *)FUN_005aaca0(param_4);
            bVar4 = operator==(pCVar7,(CHARACTER_ID *)((int)param_1 + 0x399));
            if (bVar4) {
              param_3 = pCVar7;
            }
            bVar4 = operator==(pCVar7,local_20c);
            if (bVar4) {
              param_2 = pCVar7;
            }
            param_4 = param_4 + 1;
          } while ((int)param_4 < (int)local_8);
          if (param_3 != (CHARACTER_ID *)0x0) {
            FUN_00569170(local_c,param_3);
          }
          if (param_2 != (CHARACTER_ID *)0x0) {
            uVar12 = 1;
            while( true ) {
              iVar5 = *(int *)(param_1[0xae] + 0x4a4);
              if ((iVar5 == 0) || ((uint)(*(int *)(param_1[0xae] + 0x4a8) - iVar5 >> 2) <= uVar12))
              goto LAB_00569ca7;
              iVar5 = FUN_0058d0b0(uVar12);
              if ((*(int *)(iVar5 + 8) != 0) &&
                 (bVar4 = operator==((CHARACTER_ID *)(*(int *)(iVar5 + 8) + 8),local_20c), bVar4))
              break;
              uVar12 = uVar12 + 1;
            }
            FUN_00569170(uVar12,param_2);
          }
        }
      }
    }
LAB_00569ca7:
    bVar4 = operator==((CHARACTER_ID *)((int)param_1 + 0x399),(CHARACTER_ID *)&DAT_0067bd40);
    iVar5 = param_1[0xb0];
    if (bVar4) {
      *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) & 0xfe;
      *(byte *)(param_1[0xb2] + 0x6c) = *(byte *)(param_1[0xb2] + 0x6c) & 0xfe;
      *(undefined1 *)(param_1[0xb0] + 0x498) = 0;
      *(undefined1 *)(param_1[0xb2] + 0x498) = 0;
    }
    else {
      *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) | 1;
      *(byte *)(param_1[0xb2] + 0x6c) = *(byte *)(param_1[0xb2] + 0x6c) | 1;
      *(undefined1 *)(param_1[0xb0] + 0x498) = 1;
      *(undefined1 *)(param_1[0xb2] + 0x498) = 1;
    }
    iVar8 = FUN_00575950();
    iVar5 = param_1[0xb1];
    if (4 < iVar8) {
      *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) & 0xfe;
      *(undefined1 *)(param_1[0xb1] + 0x498) = 0;
      return 1;
    }
    *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) | 1;
    *(undefined1 *)(param_1[0xb1] + 0x498) = 1;
    return 1;
  }
  if (param_3 == (CHARACTER_ID *)0x0) {
    (**(code **)(*param_1 + 0x5c))(0x3004,0xf003,0);
    return 1;
  }
  if (param_3 != (CHARACTER_ID *)0x1) {
    return 1;
  }
  FUN_0058d540(&param_3);
  iVar5 = FUN_0058d0b0(param_3);
  puVar13 = (undefined4 *)(*(int *)(iVar5 + 8) + 8);
  pCVar7 = local_20c;
  for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pCVar7 = *puVar13;
    puVar13 = puVar13 + 1;
    pCVar7 = pCVar7 + 4;
  }
  iVar5 = FUN_005aa8f0(local_20c);
  if (iVar5 == 1) {
    FUN_0058d4a0();
    CHARACTER_ID::operator=((CHARACTER_ID *)((int)param_1 + 0x399),(CHARACTER_ID *)&DAT_0067bd40);
  }
  else {
    if (iVar5 != 2) {
      FUN_00473cb0(0x73b,0,0);
      FUN_005aade0();
      iVar5 = FUN_005aa680();
      if (iVar5 == 1) goto LAB_00569e67;
      if (iVar5 != 2) {
        FUN_00473cb0(0x73c,0,0);
      }
    }
    param_1[0xad] = 5;
  }
LAB_00569e67:
  FUN_00568d10();
  FUN_0056a230();
  return 1;
}

