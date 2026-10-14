
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00415a80(int *param_1,undefined4 *param_2)

{
  char cVar1;
  float fVar2;
  HDC pHVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  float10 fVar15;
  float10 fVar16;
  int iStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  int iStack_8c;
  int iStack_88;
  float fStack_84;
  uint auStack_7c [2];
  undefined1 auStack_74 [8];
  undefined4 auStack_6c [27];
  
  if (param_1[0x46] != 0) {
    param_1[0x46] = 0;
  }
  if (param_1[0x36] != 0) {
    param_1[0x36] = 0;
  }
  param_1[0x56] = 0;
  FUN_004183c0(param_1 + 0x12,"%s,%d");
  piVar6 = (int *)*param_2;
  if (piVar6 == (int *)0x0) {
    param_1[0x23] = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  else {
    uVar4 = 0xffffffff;
    piVar13 = piVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      iVar8 = *piVar13;
      piVar13 = (int *)((int)piVar13 + 1);
    } while ((char)iVar8 != '\0');
    uVar4 = ~uVar4 - 1;
    if (0x3f < uVar4) {
      uVar4 = 0x3f;
    }
    piVar13 = param_1 + 0x24;
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *piVar13 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar13 = piVar13 + 1;
    }
    for (uVar7 = uVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)piVar13 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar13 = (int *)((int)piVar13 + 1);
    }
    *(undefined1 *)(uVar4 + 0x90 + (int)param_1) = 0;
    param_1[0x23] = uVar4;
  }
  piVar6 = param_1 + 0x37;
  for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  cVar1 = *(char *)(param_2 + 2);
  *(undefined1 *)((int)param_1 + 0xf3) = 1;
  param_1[0x3b] = (-(uint)(cVar1 != '\0') & 300) + 400;
  *(undefined1 *)(param_1 + 0x3d) = 4;
  *(undefined1 *)((int)param_1 + 0xf5) = 0;
  *(undefined1 *)((int)param_1 + 0xf6) = 4;
  *(undefined1 *)((int)param_1 + 0xf7) = 0;
  strncpy((char *)(param_1 + 0x3e),(char *)(param_1 + 0x24),0x1f);
  *(undefined1 *)((int)param_1 + 0x117) = 0;
  *(bool *)(param_1 + 0x3c) = *(char *)((int)param_2 + 9) != '\0';
  *(bool *)((int)param_1 + 0xf1) = *(char *)((int)param_2 + 10) != '\0';
  *(undefined1 *)((int)param_1 + 0xf2) = 0;
  if (param_1[0x36] == 0) {
    pHVar3 = CreateCompatibleDC((HDC)0x0);
    param_1[0x36] = (int)pHVar3;
  }
  param_1[0x34] = param_2[1];
  if (param_1[0x56] != DAT_006105b0) {
    param_1[0x56] = DAT_006105b0;
    fVar15 = (float10)(**(code **)(*param_1 + 8))();
    iStack_a0 = 0;
    fStack_90 = (float)(fVar15 * (float10)(int)DAT_00610854);
    if ((float)param_1[0x34] != _DAT_005c7474) {
      FUN_00418b30(&iStack_8c,&DAT_00610850);
      if (iStack_8c == param_1[0x58]) {
        iVar8 = param_1[0x46];
        iStack_88 = param_1[0x47];
        floor((double)((float)param_1[0x34] * _DAT_005c8da4 + (float)_DAT_005c75e8));
        ftol();
        pwVar11 = L"In the beginning the Earth was without form and void.";
        puVar14 = auStack_6c;
        for (iVar9 = 0x1b; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar14 = *(undefined4 *)pwVar11;
          pwVar11 = pwVar11 + 2;
          puVar14 = puVar14 + 1;
        }
        FUN_00415ea0();
        (**(code **)(*param_1 + 0x20))(auStack_7c,auStack_6c,0xffffffff);
        uVar5 = DAT_00610850;
        iVar12 = 0;
        uStack_94 = 0;
        fStack_84 = DAT_00610854;
        fVar2 = (float)auStack_7c[0] * _DAT_005c8d30;
        uStack_98 = DAT_00610850;
        floor((double)((float)(int)DAT_00610854 * (float)param_1[0x34] + (float)_DAT_005c75e8));
        iVar9 = ftol();
        fVar15 = (float10)FUN_00415e40(iVar9,uVar5);
        if (fVar15 <= (float10)fVar2) {
          iVar10 = 1;
        }
        else {
          iVar10 = -1;
        }
        iStack_a0 = iVar12;
        if ((float10)_DAT_005c75f8 < ABS(fVar15 - (float10)fVar2)) {
          while (uVar4 = (**(code **)(*param_1 + 0x18))(), iStack_a0 = iVar12,
                uVar4 <= (uint)(iVar9 + iVar12)) {
            fVar16 = (float10)FUN_00415e40(iVar10 + iVar9 + iVar12,uStack_98);
            fVar15 = (float10)fVar2;
            if (iVar10 < 1) {
              iStack_a0 = iVar12 + iVar10;
              if ((fVar16 < fVar15 != (fVar16 == fVar15)) || (iVar9 + iStack_a0 < 5)) break;
            }
            else if (fVar16 >= fVar15 && fVar16 != fVar15) break;
            iVar12 = iVar12 + iVar10;
            iStack_a0 = iVar12;
            if (ABS(fVar16 - (float10)fVar2) <= (float10)_DAT_005c75f8) break;
          }
        }
        uStack_98 = 0;
        uVar5 = FUN_00418ba0(&DAT_00610850,&uStack_98);
        piVar6 = (int *)FUN_00418a70(auStack_74,uVar5);
        *(int *)(*piVar6 + 0x10) = iStack_a0;
        if (iVar8 != 0) {
          FUN_00415ea0();
        }
      }
      else {
        iStack_a0 = *(int *)(iStack_8c + 0x10);
      }
    }
    floor((double)((float)iStack_a0 + fStack_90 + (float)_DAT_005c75e8));
    ftol();
    FUN_00415ea0();
  }
  param_1[0x35] = param_1[0x48];
  return 1;
}

