
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00506600(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  float10 fVar18;
  float10 fVar19;
  unkbyte10 Var20;
  float10 fVar21;
  int iStack_6c;
  int iStack_68;
  float fStack_60;
  float fStack_58;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 auStack_14 [16];
  
  FUN_005b7e1d();
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (((float)_DAT_005d5b58 <= DAT_006132dc) && (*(int **)(param_1 + 0x20) != (int *)0x0)) {
    pfVar8 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
    fVar2 = *pfVar8;
    fVar3 = pfVar8[1];
    fVar4 = pfVar8[2];
    fVar5 = _DAT_005c75dc -
            ((float)_DAT_005c89b8 - DAT_006132dc) * ((float)_DAT_005c89b8 - DAT_006132dc);
    fVar6 = _DAT_006132e0 * (_DAT_005c75dc - fVar5);
    fVar1 = *(float *)(param_1 + 0xa4);
    fStack_60 = (_DAT_005c75dc - DAT_006132dc) * _DAT_006132e4 + DAT_006132dc;
    *(float *)(param_1 + 0xb8) =
         ((_DAT_005c75dc - fVar5) * _DAT_006132e8 + fVar5) * *(float *)(param_1 + 0xb4);
    fVar9 = (float)ftol();
    fVar10 = (float)ftol();
    if (0 < *(int *)(param_1 + 0xbc)) {
      iVar14 = *(int *)(param_1 + 0xa0);
      fVar7 = _DAT_005c7474;
      if (0 < iVar14) {
        pfVar8 = (float *)(param_1 + 0x80);
        iVar13 = iVar14;
        do {
          fVar7 = fVar7 + *pfVar8;
          pfVar8 = pfVar8 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if (0 < iVar14) {
        fVar7 = _DAT_005c75dc / fVar7;
        iVar14 = 0;
        pfVar8 = (float *)(param_1 + 0x80);
        do {
          iVar14 = iVar14 + 1;
          *pfVar8 = fVar7 * *pfVar8;
          pfVar8 = pfVar8 + 1;
        } while (iVar14 < *(int *)(param_1 + 0xa0));
      }
      iVar14 = *(int *)(param_1 + 0xbc);
      fVar15 = 0.0;
      fVar7 = (float)(iVar14 + -1) * (float)_DAT_005c75e8;
      fVar16 = fVar9;
      if ((iVar14 != 1) && (iStack_6c = 0, fVar16 = fVar15, 0 < iVar14)) {
        fStack_60 = _DAT_005c75dc / fVar7;
        do {
          fVar16 = (float)iStack_6c;
          if (fVar16 <= fVar7) {
            fVar16 = fVar16 * fStack_60;
          }
          else {
            fVar16 = _DAT_005c75dc - (fVar16 - fVar7) * fStack_60;
          }
          floor((double)((float)(int)fVar9 * fVar16 +
                         ((float)_DAT_005c89b8 - fVar16) * (float)(int)fVar10 + (float)_DAT_005c75e8
                        ));
          iVar14 = ftol();
          fVar15 = (float)((int)fVar15 + iVar14);
          iStack_6c = iStack_6c + 1;
          fVar16 = fVar15;
        } while (iStack_6c < *(int *)(param_1 + 0xbc));
      }
      *(int *)(param_1 + 0xdc) = (int)fVar16 + 2;
      pvVar11 = operator_new(((int)fVar16 + 2) * 0x20);
      *(void **)(param_1 + 0xe0) = pvVar11;
      iStack_68 = 0;
      if (0 < *(int *)(param_1 + 0xdc)) {
        fStack_40 = 0.0;
        pfVar8 = (float *)((int)pvVar11 + 0x14);
        do {
          fVar16 = *(float *)(param_1 + 0xcc);
          fStack_60 = *(float *)(param_1 + 200);
          iVar14 = rand();
          pfVar8[-2] = ((fVar16 - fStack_60) * (float)iVar14 * _DAT_005caeec + fStack_60) *
                       (fVar6 + fVar5) * fVar1;
          iVar14 = rand();
          fVar18 = (float10)iVar14 * (float10)_DAT_005caeec * (float10)_DAT_005c97f8;
          fVar19 = (float10)fsin(fVar18);
          fVar18 = (float10)fcos(fVar18);
          *pfVar8 = (float)fVar19;
          uStack_48 = (double)CONCAT44((float)fVar18,(float)fVar19);
          pfVar8[1] = (float)fVar18;
          pfVar8[2] = 0.0;
          iVar14 = rand();
          iVar13 = 0;
          if (0 < *(int *)(param_1 + 0xa0)) {
            pfVar12 = (float *)(param_1 + 0x80);
            fVar16 = _DAT_005c7474;
            do {
              fVar16 = fVar16 + *pfVar12;
              if ((float)iVar14 * _DAT_005caeec < fVar16) {
                pfVar8[-1] = *(float *)(param_1 + 0x60 + iVar13 * 4);
                break;
              }
              iVar13 = iVar13 + 1;
              pfVar12 = pfVar12 + 1;
            } while (iVar13 < *(int *)(param_1 + 0xa0));
          }
          iStack_68 = iStack_68 + 1;
          pfVar8 = pfVar8 + 8;
        } while (iStack_68 < *(int *)(param_1 + 0xdc));
      }
      iVar14 = *(int *)(param_1 + 0xbc);
      pfVar8 = *(float **)(param_1 + 0xe0);
      fStack_58 = 0.0;
      iStack_6c = 0;
      if (0 < iVar14) {
        do {
          fStack_60 = fVar9;
          if (iVar14 != 1) {
            fVar1 = (float)iStack_6c;
            if (fVar1 <= fVar7) {
              fVar5 = fVar1 / fVar7;
            }
            else {
              fVar5 = _DAT_005c75dc - (fVar1 - fVar7) / fVar7;
            }
            floor((double)((float)(int)fVar9 * fVar5 +
                           ((float)_DAT_005c89b8 - fVar5) * (float)(int)fVar10 +
                          (float)_DAT_005c75e8));
            fStack_60 = (float)ftol();
            if (fVar7 < fVar1) {
              fStack_58 = _DAT_005c8a5c / (float)(int)fStack_60;
            }
          }
          Var20 = _CIacos();
          iStack_68 = 0;
          fVar1 = fStack_60;
          if (0 < (int)fStack_60) {
            uStack_48 = (double)(int)fStack_60;
            fVar18 = (float10)fcos(Var20);
            fVar1 = (float)fVar18;
            fVar18 = (float10)fsin(Var20);
            pfVar12 = pfVar8;
            do {
              fVar19 = (float10)_DAT_005c97f8;
              pfVar12[1] = fVar1;
              fVar19 = ((float10)iStack_68 * fVar19) / (float10)(int)fStack_60 + (float10)fStack_58;
              fVar21 = (float10)fcos(fVar19);
              fVar21 = fVar21 * (float10)(double)fVar18;
              *pfVar12 = (float)fVar21;
              fVar19 = (float10)fsin(fVar19);
              fVar19 = fVar19 * (float10)(double)fVar18;
              pfVar12[2] = (float)fVar19;
              fStack_20 = (float)((float10)fVar2 + fVar21);
              fStack_18 = fVar4 + (float)fVar19;
              fStack_1c = fVar3 + fVar1;
              pfVar8 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))
                                          (auStack_14,&fStack_20);
              fStack_28 = pfVar8[1] - fVar3;
              fStack_24 = pfVar8[2] - fVar4;
              *pfVar12 = *pfVar8 - fVar2;
              pfVar12[1] = fStack_28;
              pfVar12[2] = fStack_24;
              fVar5 = SQRT(*pfVar12 * *pfVar12 + pfVar12[1] * pfVar12[1] + pfVar12[2] * pfVar12[2]);
              fVar5 = (fVar5 - *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xa4)) / fVar5;
              *pfVar12 = fVar5 * *pfVar12;
              pfVar12[1] = fVar5 * pfVar12[1];
              pfVar8 = pfVar12 + 8;
              iStack_68 = iStack_68 + 1;
              pfVar12[2] = fVar5 * pfVar12[2];
              pfVar12 = pfVar8;
            } while (iStack_68 < (int)fStack_60);
          }
          fStack_60 = fVar1;
          iVar14 = *(int *)(param_1 + 0xbc);
          iStack_6c = iStack_6c + 1;
        } while (iStack_6c < iVar14);
      }
      fStack_1c = fVar3 + _DAT_005c75dc;
      fStack_20 = fVar2;
      fStack_18 = fVar4;
      pfVar12 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))(auStack_14,&fStack_20);
      pfVar17 = pfVar8 + 8;
      fVar1 = pfVar12[1];
      fVar3 = pfVar12[2];
      *pfVar8 = *pfVar12 - fStack_40;
      pfVar8[1] = fVar1 - fStack_3c;
      pfVar8[2] = fVar3 - fVar2;
      fStack_20 = fStack_60;
      fVar1 = SQRT(*pfVar8 * *pfVar8 + pfVar8[1] * pfVar8[1] + pfVar8[2] * pfVar8[2]);
      fVar1 = (fVar1 - *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xa4)) / fVar1;
      *pfVar8 = fVar1 * *pfVar8;
      pfVar8[1] = fVar1 * pfVar8[1];
      pfVar8[2] = fVar1 * pfVar8[2];
      fStack_24 = fStack_3c - _DAT_005c75dc;
      fStack_28 = fVar10;
      pfVar12 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))(&fStack_1c,&fStack_28);
      fVar1 = pfVar12[1];
      fVar2 = pfVar12[2];
      *pfVar17 = *pfVar12 - (float)uStack_48;
      pfVar8[9] = fVar1 - uStack_48._4_4_;
      pfVar8[10] = fVar2 - fStack_40;
      fVar1 = SQRT(pfVar8[10] * pfVar8[10] + pfVar8[9] * pfVar8[9] + *pfVar17 * *pfVar17);
      fVar1 = (fVar1 - *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xa4)) / fVar1;
      *pfVar17 = fVar1 * *pfVar17;
      pfVar8[9] = fVar1 * pfVar8[9];
      pfVar8[10] = fVar1 * pfVar8[10];
    }
  }
  return;
}

