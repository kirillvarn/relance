
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004e8100(int param_1,int *param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  wchar_t *pwVar4;
  int iVar5;
  void *pvVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  uint uVar9;
  ISystem *pIVar10;
  undefined4 uVar11;
  size_t sVar12;
  uint uVar13;
  int *piVar14;
  code *pcVar15;
  bool bVar16;
  uint local_154;
  undefined4 local_150;
  int local_14c;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined1 local_12a;
  undefined1 local_129;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  wchar_t *local_120;
  wchar_t *local_11c;
  int local_118;
  uint local_114 [2];
  wchar_t local_10c [6];
  wchar_t local_100 [122];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bea00;
  local_c = ExceptionList;
  uVar9 = *(uint *)(param_1 + 0xe0);
  ExceptionList = &local_c;
  pwVar4 = (wchar_t *)FUN_005472a0(param_1);
  DAT_0066fc60 = 0;
  cVar3 = '\0';
  local_11c = pwVar4;
  iVar5 = FUN_005416c0(*(undefined4 *)(param_1 + 0xb0),0);
  pcVar15 = wcscat_exref;
  if ((iVar5 != 0) && ((uVar9 & 0xfdff) != 0)) {
    cVar3 = *(char *)(iVar5 + 0xa8);
  }
  if ((((char)(uVar9 >> 8) < '\0') || (cVar3 != '\0')) && (pwVar4 != (wchar_t *)0x0)) {
    if (((param_3 == 0) || (param_3 == 2)) &&
       (FUN_004347e0(DAT_0067eca8,pwVar4,&DAT_0066fc60,DAT_006119f8), param_3 == 2)) {
      wcscat(&DAT_0066fc60,L"\n");
    }
    else if (param_3 != 1) {
      bVar16 = param_3 == 2;
LAB_004e8c38:
      if (!bVar16) goto LAB_004e8cd3;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x4c) & 0x103) == 0x103) {
      local_118 = *(int *)(param_1 + 0x104);
      iVar5 = Reputation::Vibe::GetAffiliation(&local_118,local_114,false);
      if ((iVar5 == 0) && (local_114[0] != 0xffffffff)) {
        local_154 = Reputation::get_short_name(local_114[0]);
        if ((uVar9 & 0x7f0000) != 0) {
          local_150 = 0;
          local_14c = 0;
          local_148 = 0;
          local_147 = 0;
          local_146 = 0;
          local_145 = 0;
          local_144 = 0;
          local_143 = 0;
          local_142 = 0;
          local_141 = 0;
          local_140 = 0;
          local_13f = 0;
          local_13e = 0;
          local_13d = 0;
          local_13c = 0;
          local_13b = 0;
          local_138 = 0;
          local_134 = 0;
          local_130 = 0;
          local_12f = 0;
          local_12e = 0;
          local_12d = 0;
          local_12c = 0;
          local_12b = 0;
          local_12a = 0;
          local_129 = 0;
          local_128 = 0;
          local_127 = 0;
          local_126 = 0;
          local_125 = 0;
          local_124 = 0;
          local_123 = 0;
          local_4._0_1_ = 3;
          local_4._1_3_ = 0;
          iVar5 = Reputation::Vibe::GetName
                            (&local_118,(FmtStr *)&local_150,(FmtStr *)&local_138,
                             (ushort **)&local_120);
          if (iVar5 == 0) {
            bVar16 = local_14c == 0;
            if ((param_3 == 0) || (param_3 == 2)) {
              if (!bVar16) {
                FUN_0041c970(&DAT_0066fc60,DAT_006119f8);
              }
              if (param_3 != 2) goto LAB_004e8409;
              if (!bVar16) {
                wcscat(&DAT_0066fc60,L"\n");
              }
            }
            else {
LAB_004e8409:
              if ((param_3 != 1) && (param_3 != 2)) goto LAB_004e84cb;
            }
            if ((*(int *)(param_1 + 0xb4) == 0) || (local_120 == (wchar_t *)0x0)) {
              if ((((bVar16) && (local_154 != 0)) && (local_154 != 0xffffffff)) && (param_4 != '\0')
                 ) {
                iVar5 = FUN_004347e0(DAT_0067eca8,local_154,local_10c,0x80);
                if (iVar5 == 0) {
                  local_10c[0] = L'\0';
                }
                sVar12 = wcslen(local_10c);
                if ((1 < sVar12) || (local_10c[0] != L' ')) {
                  wcscat(&DAT_0066fc60,local_10c);
                  wcscat(&DAT_0066fc60,L" - ");
                }
              }
              FUN_0041c970(&DAT_0066dc60,DAT_006119f8);
              local_120 = &DAT_0066dc60;
            }
            wcscat(&DAT_0066fc60,local_120);
LAB_004e84cb:
            sVar12 = wcslen(&DAT_0066fc60);
            uVar9 = sVar12 + 1;
            if ((uint)param_2[1] < uVar9) {
              if ((void *)*param_2 == (void *)0x0) {
                puVar7 = malloc(uVar9 * 2);
                *param_2 = (int)puVar7;
                *puVar7 = 0;
              }
              else {
                pvVar6 = realloc((void *)*param_2,uVar9 * 2);
                *param_2 = (int)pvVar6;
              }
              param_2[1] = uVar9;
            }
            wcsncpy((wchar_t *)*param_2,&DAT_0066fc60,sVar12);
            *(undefined2 *)(*param_2 + sVar12 * 2) = 0;
            local_4 = CONCAT31(local_4._1_3_,2);
            FmtStr::~FmtStr((FmtStr *)&local_138);
            local_4 = 0xffffffff;
            FmtStr::~FmtStr((FmtStr *)&local_150);
            ExceptionList = local_c;
            return 1;
          }
          local_4 = CONCAT31(local_4._1_3_,2);
          FmtStr::~FmtStr((FmtStr *)&local_138);
          local_4 = 0xffffffff;
          FmtStr::~FmtStr((FmtStr *)&local_150);
        }
        if ((*(int *)(param_1 + 0x160) == 0) || (local_154 == 0)) {
          pwVar8 = (wchar_t *)FUN_004e8060(uVar9);
          uVar2 = local_154;
          local_120 = pwVar4;
          if (pwVar8 != (wchar_t *)0x0) {
            local_120 = pwVar8;
          }
          if ((param_3 == 0) || (param_3 == 2)) {
            uVar13 = uVar2;
            if (((uVar9 & 0x20) != 0) &&
               ((uVar1 = *(uint *)(param_1 + 0x164), uVar1 != 0 &&
                (uVar13 = DAT_00674b84, uVar1 != DAT_00674b80)))) {
              piVar14 = (int *)0x0;
              do {
                local_114[1] = 2;
                if (piVar14 == (int *)0x0) {
                  piVar14 = (int *)FUN_00540fc0(local_114 + 1);
                }
                else {
                  piVar14 = (int *)piVar14[5];
                }
                uVar13 = uVar2;
                if (piVar14 == (int *)0x0) goto LAB_004e875c;
                local_154 = 0;
                (**(code **)(*piVar14 + 0x8c))(&local_154);
              } while (local_154 != uVar1);
              iVar5 = (**(code **)(*piVar14 + 0x150))();
              if ((iVar5 != 0) && (((byte)*(undefined4 *)(iVar5 + 0x4c) & 3) == 3)) {
                DAT_00674b84 = FUN_005472a0(iVar5);
                uVar13 = DAT_00674b84;
                DAT_00674b80 = uVar1;
              }
            }
LAB_004e875c:
            FUN_004347e0(DAT_0067eca8,uVar13,&DAT_0066fc60,DAT_006119f8);
            FUN_004347e0(DAT_0067eca8,local_120,&DAT_0066dc60,DAT_006119f8);
            wcscat(&DAT_0066fc60,L" ");
            wcscat(&DAT_0066fc60,&DAT_0066dc60);
          }
          if (uVar9 == 0x10000000) {
            if ((param_3 != 0) && (param_3 != 2)) {
              ExceptionList = local_c;
              return 0;
            }
            if (((*(uint *)(param_1 + 0x4c) & 0x803) == 0x803) &&
               ((wchar_t *)0x1 < *(wchar_t **)(param_1 + 0xf0))) {
              swprintf(local_10c,0x5cfb88,*(wchar_t **)(param_1 + 0xf0));
              wcscat(&DAT_0066fc60,local_100);
            }
          }
          else {
            if (param_3 == 2) {
              wcscat(&DAT_0066fc60,L"\n");
            }
            else if (param_3 != 1) goto LAB_004e8640;
            if (((char)uVar9 < '\0') &&
               (cVar3 = FUN_004e8d30(param_1,&DAT_0066dc60,DAT_006119f8), cVar3 != '\0')) {
              wcscat(&DAT_0066fc60,&DAT_0066dc60);
              sVar12 = wcslen(&DAT_0066fc60);
              goto LAB_004e864e;
            }
            if ((uVar9 & 0x8c0) != 0) {
              FUN_004347e0(DAT_0067eca8,local_11c,&DAT_0066dc60,DAT_006119f8);
              wcscat(&DAT_0066fc60,&DAT_0066dc60);
              sVar12 = wcslen(&DAT_0066fc60);
              uVar9 = sVar12 + 1;
              if ((uint)param_2[1] < uVar9) {
                if ((void *)*param_2 == (void *)0x0) {
                  puVar7 = malloc(uVar9 * 2);
                  *param_2 = (int)puVar7;
                  *puVar7 = 0;
                }
                else {
                  pvVar6 = realloc((void *)*param_2,uVar9 * 2);
                  *param_2 = (int)pvVar6;
                }
                param_2[1] = uVar9;
              }
              wcsncpy((wchar_t *)*param_2,&DAT_0066fc60,sVar12);
              *(undefined2 *)(*param_2 + sVar12 * 2) = 0;
              ExceptionList = local_c;
              return 1;
            }
            uVar9 = FUN_004c4830();
            pIVar10 = Universe::get_system(uVar9);
            if (pIVar10 != (ISystem *)0x0) {
              uVar11 = (**(code **)(*(int *)pIVar10 + 0xc))();
              FUN_004347e0(DAT_0067eca8,uVar11,&DAT_0066dc60,DAT_006119f8);
              wcscat(&DAT_0066fc60,&DAT_0066dc60);
              FUN_004347e0(DAT_0067eca8,0x561,&DAT_0066dc60,DAT_006119f8);
              wcscat(&DAT_0066fc60,&DAT_0066dc60);
            }
            FUN_0048dc10(param_1 + 0x2c,&DAT_0066dc60,DAT_006119f8);
            wcscat(&DAT_0066fc60,&DAT_0066dc60);
          }
        }
        else {
          if ((param_3 == 0) || (param_3 == 2)) {
            FUN_004347e0(DAT_0067eca8,local_154,&DAT_0066fc60,DAT_006119f8);
            FUN_004347e0(DAT_0067eca8,0x562,&DAT_0066dc60,DAT_006119f8);
            wcscat(&DAT_0066fc60,&DAT_0066dc60);
            if (param_3 != 2) goto LAB_004e860e;
            wcscat(&DAT_0066fc60,L"\n");
          }
          else {
LAB_004e860e:
            if ((param_3 != 1) && (param_3 != 2)) goto LAB_004e8640;
          }
          FUN_004347e0(DAT_0067eca8,pwVar4,&DAT_0066dc60,DAT_006119f8);
          wcscat(&DAT_0066fc60,&DAT_0066dc60);
        }
      }
      else {
        if (pwVar4 == (wchar_t *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
        if ((uVar9 & 0x7f0000) != 0) {
          if ((param_3 != 1) && (param_3 != 2)) {
            ExceptionList = local_c;
            return 0;
          }
          local_150 = 0;
          local_14c = 0;
          local_148 = 0;
          local_147 = 0;
          local_146 = 0;
          local_145 = 0;
          local_144 = 0;
          local_143 = 0;
          local_142 = 0;
          local_141 = 0;
          local_140 = 0;
          local_13f = 0;
          local_13e = 0;
          local_13d = 0;
          local_13c = 0;
          local_13b = 0;
          local_138 = 0;
          local_134 = 0;
          local_130 = 0;
          local_12f = 0;
          local_12e = 0;
          local_12d = 0;
          local_12c = 0;
          local_12b = 0;
          local_12a = 0;
          local_129 = 0;
          local_128 = 0;
          local_127 = 0;
          local_126 = 0;
          local_125 = 0;
          local_124 = 0;
          local_123 = 0;
          local_4._0_1_ = 1;
          local_4._1_3_ = 0;
          iVar5 = Reputation::Vibe::GetName
                            (&local_118,(FmtStr *)&local_150,(FmtStr *)&local_138,
                             (ushort **)&local_11c);
          pwVar4 = local_11c;
          if (((iVar5 == 0) && (*(int *)(param_1 + 0xb4) != 0)) && (local_11c != (wchar_t *)0x0)) {
            sVar12 = wcslen(local_11c);
            FUN_004142a0(sVar12 + 1);
            wcsncpy((wchar_t *)*param_2,pwVar4,sVar12);
            *(undefined2 *)(*param_2 + sVar12 * 2) = 0;
            local_4 = (uint)local_4._1_3_ << 8;
            FmtStr::~FmtStr((FmtStr *)&local_138);
            local_4 = 0xffffffff;
            FmtStr::~FmtStr((FmtStr *)&local_150);
            ExceptionList = local_c;
            return 1;
          }
          local_4 = (uint)local_4._1_3_ << 8;
          FmtStr::~FmtStr((FmtStr *)&local_138);
          local_4 = 0xffffffff;
          FmtStr::~FmtStr((FmtStr *)&local_150);
          ExceptionList = local_c;
          return 0;
        }
        if ((param_3 == 0) || (param_3 == 2)) {
          FUN_004347e0(DAT_0067eca8,pwVar4,&DAT_0066fc60,DAT_006119f8);
        }
        if (uVar9 != 0x10000000) goto LAB_004e8c19;
        if ((param_3 != 0) && (param_3 != 2)) {
          ExceptionList = local_c;
          return 0;
        }
        if (((*(uint *)(param_1 + 0x4c) & 0x803) == 0x803) &&
           ((wchar_t *)0x1 < *(wchar_t **)(param_1 + 0xf0))) {
          swprintf(local_10c,0x5cfb88,*(wchar_t **)(param_1 + 0xf0));
          wcscat(&DAT_0066fc60,local_100);
        }
      }
LAB_004e8640:
      sVar12 = wcslen(&DAT_0066fc60);
LAB_004e864e:
      uVar9 = sVar12 + 1;
      if ((uint)param_2[1] < uVar9) {
        if ((void *)*param_2 == (void *)0x0) {
          puVar7 = malloc(uVar9 * 2);
          *param_2 = (int)puVar7;
          *puVar7 = 0;
        }
        else {
          pvVar6 = realloc((void *)*param_2,uVar9 * 2);
          *param_2 = (int)pvVar6;
        }
        param_2[1] = uVar9;
      }
      wcsncpy((wchar_t *)*param_2,&DAT_0066fc60,sVar12);
      *(undefined2 *)(*param_2 + sVar12 * 2) = 0;
      ExceptionList = local_c;
      return 1;
    }
    if (pwVar4 == (wchar_t *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    if ((param_3 == 0) || (param_3 == 2)) {
      FUN_004347e0(DAT_0067eca8,pwVar4,&DAT_0066fc60,DAT_006119f8);
    }
    if (uVar9 == 0x10000000) {
      if ((param_3 != 0) && (param_3 != 2)) {
        ExceptionList = local_c;
        return 0;
      }
      if (((*(uint *)(param_1 + 0x4c) & 0x803) == 0x803) &&
         ((wchar_t *)0x1 < *(wchar_t **)(param_1 + 0xf0))) {
        swprintf(local_10c,0x5cfb88,*(wchar_t **)(param_1 + 0xf0));
        wcscat(&DAT_0066fc60,local_100);
      }
      goto LAB_004e8cd3;
    }
LAB_004e8c19:
    pcVar15 = wcscat_exref;
    if (param_3 != 2) {
      bVar16 = param_3 == 1;
      goto LAB_004e8c38;
    }
    wcscat(&DAT_0066fc60,L"\n");
  }
  uVar9 = FUN_004c4830();
  pIVar10 = Universe::get_system(uVar9);
  if (pIVar10 != (ISystem *)0x0) {
    uVar11 = (**(code **)(*(int *)pIVar10 + 0xc))();
    FUN_004347e0(DAT_0067eca8,uVar11,&DAT_0066dc60,DAT_006119f8);
    (*pcVar15)(&DAT_0066fc60,&DAT_0066dc60);
    FUN_004347e0(DAT_0067eca8,0x561,&DAT_0066dc60,DAT_006119f8);
    (*pcVar15)(&DAT_0066fc60,&DAT_0066dc60);
  }
  FUN_0048dc10(param_1 + 0x2c,&DAT_0066dc60,DAT_006119f8);
  (*pcVar15)(&DAT_0066fc60,&DAT_0066dc60);
LAB_004e8cd3:
  sVar12 = wcslen(&DAT_0066fc60);
  FUN_004142a0(sVar12 + 1);
  wcsncpy((wchar_t *)*param_2,&DAT_0066fc60,sVar12);
  *(undefined2 *)(*param_2 + sVar12 * 2) = 0;
  ExceptionList = local_c;
  return 1;
}

