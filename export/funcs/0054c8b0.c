
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054c8b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  int iVar22;
  float fStack_7c;
  float *pfStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  undefined1 local_3c [4];
  float afStack_38 [9];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c131b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x3c) != 0) {
    ExceptionList = &pvStack_c;
    FUN_005b7e1d(*(int *)(param_1 + 0x3c));
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  (**(code **)(**(int **)(param_1 + 4) + 0x28))(local_3c);
  if (afStack_38[0] < _DAT_005d3ee0) {
    afStack_38[0] = fStack_40;
  }
  iVar5 = ftol();
  iVar5 = iVar5 * *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x44) = iVar5;
  pfVar6 = operator_new(iVar5 * 0x3c);
  puStack_8 = (undefined1 *)0x0;
  if (pfVar6 == (float *)0x0) {
    pfVar14 = (float *)0x0;
  }
  else {
    pfVar14 = pfVar6;
    if (-1 < iVar5 + -1) {
      pfVar7 = pfVar6 + 10;
      do {
        FUN_00422b80(0x3f800000,0x3f800000,0x3f800000);
        FUN_00422b80(0x3e4ccccd,0x3e4ccccd,0x3e4ccccd);
        pfVar7[3] = 1.0;
        pfVar7[-7] = 1000.0;
        *(undefined1 *)(pfVar7 + 4) = 1;
        pfVar7 = pfVar7 + 0xf;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  *(float **)(param_1 + 0x3c) = pfVar14;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * *(float *)(param_1 + 0x48);
  puStack_8 = (undefined1 *)0xffffffff;
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * _DAT_005c75e0;
  (**(code **)(**(int **)(param_1 + 4) + 0x28))(&fStack_7c);
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 4) + 0x14))();
  pfVar18 = afStack_38;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar18 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar18 = pfVar18 + 1;
  }
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 4) + 0x10))();
  fStack_5c = *pfVar7;
  fStack_58 = pfVar7[1];
  fStack_54 = pfVar7[2];
  if ((float)pfStack_78 < _DAT_005d3ee0) {
    pfStack_78 = pfVar6;
  }
  fVar1 = *(float *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x74) == '\0') {
    fStack_60 = *(float *)(param_1 + 0x78);
    fStack_50 = (float)pfVar6 - fVar1;
    fStack_4c = fStack_7c - *(float *)(param_1 + 0x78);
    pfStack_78 = (float *)((float)pfStack_78 - fStack_60);
  }
  else {
    fStack_50 = (float)pfVar6 * fVar1;
    fStack_4c = fStack_7c * fVar1;
    pfStack_78 = (float *)(fVar1 * (float)pfStack_78);
  }
  fVar1 = fStack_50;
  fStack_7c = fStack_4c;
  iVar5 = *(int *)(param_1 + 0x44);
  iVar22 = 0;
  fStack_48 = (float)pfStack_78;
  if (0 < iVar5) {
    fStack_4c = 0.0;
    do {
      fVar20 = ((float10)iVar22 / (float10)iVar5) * (float10)_DAT_005da774;
      fVar21 = (float10)fcos(fVar20);
      fStack_50 = (float)(fVar21 * (float10)fVar1);
      fVar20 = (float10)fsin(fVar20);
      *pfVar14 = fStack_50;
      pfVar14[1] = 0.0;
      fStack_48 = (float)(fVar20 * (float10)(float)pfStack_78);
      pfVar14[2] = fStack_48;
      if (DAT_00679860 == (int *)0x0) {
        DAT_00679860 = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00679860 + 0x2c))(DAT_00679860,&fStack_74,afStack_38,pfVar14);
      fStack_68 = fStack_74 + fStack_5c;
      iVar22 = iVar22 + 1;
      fStack_64 = fStack_70 + fStack_58;
      *pfVar14 = fStack_68;
      fStack_60 = fStack_6c + fStack_54;
      pfVar14[1] = fStack_64;
      pfVar14[2] = fStack_60;
      pfVar14[3] = *(float *)(param_1 + 0x48);
      iVar5 = *(int *)(param_1 + 0x44);
      pfVar14 = pfVar14 + 0xf;
    } while (iVar22 < iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x44);
  iVar22 = *(int *)(param_1 + 0x3c);
  if (0 < iVar5) {
    pfVar6 = (float *)(iVar22 + 8);
    iVar15 = 1;
    do {
      iVar16 = iVar15 + -2;
      if (iVar16 < 0) {
        iVar16 = iVar16 + iVar5;
      }
      iVar11 = iVar15;
      if (iVar5 <= iVar15) {
        iVar11 = iVar15 - iVar5;
      }
      iVar11 = iVar11 * 0x3c;
      fVar1 = *(float *)(iVar11 + iVar22) - pfVar6[-2];
      fVar2 = *(float *)(iVar11 + 8 + iVar22) - *pfVar6;
      fStack_50 = pfVar6[-2] - *(float *)(iVar16 * 0x3c + iVar22);
      iVar5 = iVar16 * 0x3c + iVar22;
      fStack_4c = pfVar6[-1] - *(float *)(iVar5 + 4);
      fStack_48 = *pfVar6 - *(float *)(iVar5 + 8);
      fStack_60 = (*(float *)(iVar11 + 4 + iVar22) - pfVar6[-1]) * _DAT_005c7474;
      fStack_68 = fVar2 - fStack_60;
      fVar2 = fVar1 * _DAT_005c7474 - fVar2 * _DAT_005c7474;
      fStack_60 = fStack_60 - fVar1;
      fVar1 = _DAT_005c75dc / SQRT(fVar2 * fVar2 + fStack_60 * fStack_60 + fStack_68 * fStack_68);
      fStack_68 = fStack_68 * fVar1;
      fVar3 = fStack_48 - fStack_4c * _DAT_005c7474;
      fStack_58 = fStack_50 * _DAT_005c7474 - fStack_48 * _DAT_005c7474;
      fStack_54 = fStack_4c * _DAT_005c7474 - fStack_50;
      fVar4 = _DAT_005c75dc / SQRT(fStack_58 * fStack_58 + fStack_54 * fStack_54 + fVar3 * fVar3);
      fStack_54 = fStack_54 * fVar4;
      fStack_74 = fVar3 * fVar4 + fStack_68;
      fStack_70 = fStack_58 * fVar4 + fVar2 * fVar1;
      fStack_6c = fStack_54 + fStack_60 * fVar1;
      fVar1 = _DAT_005c75dc /
              SQRT(fStack_70 * fStack_70 + fStack_6c * fStack_6c + fStack_74 * fStack_74);
      fStack_74 = fStack_74 * fVar1;
      pfVar6[2] = fStack_74;
      fStack_70 = fStack_70 * fVar1;
      pfVar6[3] = fStack_70;
      fStack_6c = fStack_6c * fVar1;
      pfVar6[4] = fStack_6c;
      iVar5 = *(int *)(param_1 + 0x44);
      bVar19 = iVar15 < iVar5;
      pfVar6 = pfVar6 + 0xf;
      iVar15 = iVar15 + 1;
    } while (bVar19);
  }
  if ((float)*(int *)(param_1 + 0x44) * _DAT_005c75e0 < (float)*(int *)(param_1 + 0x58)) {
    uVar8 = ftol();
    *(undefined4 *)(param_1 + 0x58) = uVar8;
  }
  pvVar9 = operator_new(*(int *)(param_1 + 0x58) * 0x18);
  *(void **)(param_1 + 0x60) = pvVar9;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    uVar8 = 0;
    iVar22 = 0;
    do {
      *(undefined4 *)(iVar22 + *(int *)(param_1 + 0x60)) = uVar8;
      uVar8 = ftol();
      *(undefined4 *)(iVar22 + 4 + *(int *)(param_1 + 0x60)) = uVar8;
      iVar5 = iVar5 + 1;
      iVar22 = iVar22 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x58));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    iVar22 = 0;
    do {
      iVar15 = *(int *)(param_1 + 0x60);
      iVar16 = *(int *)(iVar22 + 4 + iVar15);
      iVar11 = *(int *)(iVar22 + iVar15);
      iVar15 = iVar22 + iVar15;
      iVar10 = ftol();
      iVar10 = iVar11 - iVar10;
      iVar13 = *(int *)(param_1 + 0x44);
      if (iVar13 <= iVar10) {
        iVar10 = iVar10 - iVar13;
      }
      uVar17 = iVar16 - iVar11 & 0x80000001;
      bVar19 = uVar17 == 0;
      if ((int)uVar17 < 0) {
        bVar19 = (uVar17 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar19) {
        pfVar6 = (float *)(iVar10 * 0x3c + *(int *)(param_1 + 0x3c));
        fStack_50 = *pfVar6;
        fStack_4c = pfVar6[1];
        fStack_48 = pfVar6[2];
        iVar10 = iVar10 + 1;
        if (iVar13 <= iVar10) {
          iVar10 = iVar10 - iVar13;
        }
        fStack_5c = fStack_50 + *(float *)(iVar10 * 0x3c + *(int *)(param_1 + 0x3c));
        iVar13 = iVar10 * 0x3c + *(int *)(param_1 + 0x3c);
        fStack_58 = fStack_4c + *(float *)(iVar13 + 4);
        fStack_54 = fStack_48 + *(float *)(iVar13 + 8);
        *(float *)(iVar15 + 8) = fStack_5c;
        *(float *)(iVar15 + 0xc) = fStack_58;
        *(float *)(iVar15 + 0x10) = fStack_54;
        pfVar6 = (float *)(iVar22 + 8 + *(int *)(param_1 + 0x60));
        *pfVar6 = *(float *)(iVar22 + 8 + *(int *)(param_1 + 0x60)) * _DAT_005c75e0;
        pfVar6[1] = pfVar6[1] * _DAT_005c75e0;
        pfVar6[2] = pfVar6[2] * _DAT_005c75e0;
      }
      else {
        puVar12 = (undefined4 *)(iVar10 * 0x3c + *(int *)(param_1 + 0x3c));
        *(undefined4 *)(iVar15 + 8) = *puVar12;
        *(undefined4 *)(iVar15 + 0xc) = puVar12[1];
        *(undefined4 *)(iVar15 + 0x10) = puVar12[2];
      }
      iVar15 = *(int *)(param_1 + 0x44);
      if (iVar15 <= iVar11) {
        iVar11 = iVar11 - iVar15;
      }
      if (iVar15 <= iVar16) {
        iVar16 = iVar16 - iVar15;
      }
      pfVar14 = (float *)(iVar11 * 0x3c + *(int *)(param_1 + 0x3c));
      iVar15 = *(int *)(param_1 + 0x60) + iVar22;
      pfVar6 = (float *)(iVar16 * 0x3c + *(int *)(param_1 + 0x3c));
      fVar1 = *(float *)(iVar15 + 8) - *pfVar14;
      fVar3 = *(float *)(iVar15 + 0xc) - pfVar14[1];
      fVar2 = *(float *)(iVar15 + 0x10) - pfVar14[2];
      fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar4 = *(float *)(iVar15 + 8) - *pfVar6;
      fVar3 = *(float *)(iVar15 + 0xc) - pfVar6[1];
      fVar2 = *(float *)(iVar15 + 0x10) - pfVar6[2];
      fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      if (fVar1 < fVar2) {
        fVar1 = fVar2;
      }
      *(float *)(iVar15 + 0x14) = fVar1;
      iVar5 = iVar5 + 1;
      iVar22 = iVar22 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x58));
  }
  ExceptionList = pvStack_14;
  return;
}

