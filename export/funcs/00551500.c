
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00551500(int param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  uint *puVar12;
  int *piVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float10 fVar16;
  float fVar17;
  int *piVar18;
  undefined1 *puVar19;
  float fVar20;
  undefined4 uVar21;
  int *piStack_264;
  int *piStack_260;
  undefined4 *puStack_25c;
  float *pfStack_258;
  int *piStack_254;
  int iStack_250;
  float fStack_24c;
  int *piStack_248;
  float fStack_244;
  int *piStack_240;
  int *piStack_23c;
  undefined1 *puStack_238;
  float fStack_234;
  undefined4 uStack_230;
  int *piStack_22c;
  int iStack_228;
  int *piStack_224;
  uint *puStack_220;
  int *piStack_21c;
  int *piStack_218;
  undefined4 uStack_214;
  int *piStack_210;
  int *piStack_20c;
  int *piStack_208;
  undefined1 *puStack_204;
  int *piStack_200;
  float *pfStack_1fc;
  undefined4 *puStack_1f8;
  float *pfStack_1f4;
  int *piVar22;
  undefined4 uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1b8;
  int iStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  undefined1 auStack_1a4 [4];
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined4 auStack_198 [2];
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  float fStack_16c;
  undefined1 auStack_168 [12];
  undefined1 auStack_15c [12];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined1 auStack_144 [12];
  undefined1 auStack_138 [12];
  undefined1 auStack_12c [16];
  undefined1 auStack_11c [12];
  float fStack_110;
  int iStack_10c;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [12];
  undefined1 auStack_d4 [36];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 auStack_40 [10];
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c1381;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1a8 = (float)param_1;
  if ((char)param_2[0x2f] != '\0') {
    ExceptionList = &local_c;
    FUN_005513b0();
  }
  if (((*(char *)(param_1 + 0xec) != '\0') && (*(int *)(param_1 + 0x14) != 0)) &&
     (*(int *)(param_1 + 0x28) != 0)) {
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))();
    puVar15 = auStack_40;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar15 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar15 = puVar15 + 1;
    }
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_188 = 0x3f800000;
    if (DAT_00679860 == (int *)0x0) {
      DAT_00679860 = (int *)FUN_005b73e0();
    }
    pfStack_1f4 = &fStack_190;
    puStack_1f8 = auStack_40;
    pfStack_1fc = &fStack_1b8;
    puStack_204 = (undefined1 *)0x5515c0;
    piStack_200 = DAT_00679860;
    (**(code **)(*DAT_00679860 + 0x30))();
    pfVar1 = (float *)(param_1 + 0x6c);
    puStack_204 = (undefined1 *)
                  (fStack_1c4 * *(float *)(param_1 + 0x6c) - fStack_1c8 * *(float *)(param_1 + 0x70)
                  );
    piStack_208 = (int *)(fStack_1c8 * *(float *)(param_1 + 0x74) - fStack_1c0 * *pfVar1);
    piStack_20c = (int *)(fStack_1c0 * *(float *)(param_1 + 0x70) -
                         fStack_1c4 * *(float *)(param_1 + 0x74));
    piStack_210 = (int *)0x55160d;
    FUN_00422b80();
    puStack_204 = (undefined1 *)(fStack_1c8 * fStack_14c - fStack_1c4 * fStack_150);
    piStack_208 = (int *)(fStack_1c0 * fStack_150 - fStack_1c8 * fStack_148);
    piStack_20c = (int *)(fStack_1c4 * fStack_148 - fStack_1c0 * fStack_14c);
    piStack_210 = (int *)0x55166c;
    FUN_00422b80();
    *pfVar1 = fStack_1a0;
    *(undefined4 *)(param_1 + 0x70) = uStack_19c;
    *(undefined4 *)(param_1 + 0x74) = auStack_198[0];
    puStack_204 = (undefined1 *)
                  (*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74) +
                  *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) + *pfVar1 * *pfVar1);
    piStack_208 = (int *)0x5516aa;
    fVar16 = (float10)FUN_00507e70();
    *pfVar1 = (float)(fVar16 * (float10)*pfVar1);
    pfVar14 = (float *)0x0;
    fStack_1b8 = 0.0;
    iStack_1b4 = 0xc;
    *(float *)(param_1 + 0x70) = (float)(fVar16 * (float10)*(float *)(param_1 + 0x70));
    *(float *)(param_1 + 0x74) = (float)(fVar16 * (float10)*(float *)(param_1 + 0x74));
    fVar2 = *(float *)(param_1 + 0x100);
    fStack_110 = *(float *)(param_1 + 0xb8) * _DAT_005d8d40;
    iStack_10c = *(int *)(param_1 + 0xc) * 6;
    fStack_1d8 = *(float *)(param_1 + 0x100) *
                 (float)s_333_E__FL_Scratch_Source_Client__005d8e80._0_4_;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_17c = 4;
    puVar15 = (undefined4 *)0x0;
    fStack_1c8 = 0.0;
    fStack_1c4 = 1.12104e-44;
    puVar3 = *(undefined4 **)(param_1 + 0x28);
    iVar10 = puVar3[1];
    uStack_18 = 2;
    if (iVar10 < 0) {
      puStack_204 = (undefined1 *)0x0;
      piStack_208 = (int *)0x551759;
      FUN_005b7010();
      piStack_210 = *(int **)TextureLib_exref;
      puStack_204 = &stack0xfffffe18;
      piStack_20c = (int *)*puVar3;
      piStack_208 = (int *)0x0;
      uStack_214 = 0x55177b;
      (**(code **)(*piStack_210 + 0x5c))();
      puStack_204 = (undefined1 *)0x551784;
      uVar4 = FUN_00552420();
      puVar3[1] = uVar4 & 0xff;
      iVar10 = puVar3[1];
    }
    piVar18 = *(int **)Pipeline_exref;
    uStack_1dc = (float)CONCAT13(iVar10 != 0,(undefined3)uStack_1dc);
    piVar22 = (int *)&DAT_005e09c8;
    piStack_208 = (int *)0x8d;
    do {
      puStack_204 = (undefined1 *)piVar22[1];
      piStack_210 = (int *)0x5517da;
      piStack_20c = piVar18;
      (**(code **)(*piVar18 + 0xf0))();
      piVar22 = piVar22 + 2;
      piStack_208 = (int *)*piVar22;
    } while (piStack_208 != (int *)0x0);
    piStack_20c = *(int **)Pipeline_exref;
    puStack_204 = auStack_11c;
    piStack_208 = (int *)0x89;
    piStack_210 = (int *)0x551809;
    (**(code **)(*piStack_20c + 0xf4))();
    piStack_218 = *(int **)Pipeline_exref;
    piStack_210 = (int *)0x0;
    uStack_214 = 0x89;
    piStack_21c = (int *)0x551821;
    (**(code **)(*piStack_218 + 0xf0))();
    piStack_224 = *(int **)Pipeline_exref;
    piStack_21c = (int *)auStack_138;
    puStack_220 = (uint *)0x16;
    iStack_228 = 0x55183c;
    (**(code **)(*piStack_224 + 0xf4))();
    uStack_230 = *(int **)Pipeline_exref;
    iStack_228 = 1;
    piStack_22c = (int *)0x16;
    fStack_234 = 7.814739e-39;
    (**(code **)(*uStack_230 + 0xf0))();
    piStack_23c = *(int **)Pipeline_exref;
    fStack_234 = 1.4013e-45;
    puStack_238 = (undefined1 *)0x7;
    piStack_240 = (int *)0x551865;
    (**(code **)(*piStack_23c + 0xf0))();
    piStack_248 = *(int **)Pipeline_exref;
    piStack_240 = (int *)0x0;
    fStack_244 = 1.96182e-44;
    fStack_24c = 7.814798e-39;
    (**(code **)(*piStack_248 + 0xf0))();
    piStack_254 = *(int **)Pipeline_exref;
    fStack_24c = 1.4013e-45;
    iStack_250 = 0x1b;
    pfStack_258 = (float *)0x55188f;
    (**(code **)(*piStack_254 + 0xf0))();
    pfStack_258 = (float *)0x55189b;
    FUN_004215b0();
    pfStack_258 = (float *)auStack_d4;
    puStack_25c = (undefined4 *)0x0;
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_b0 = 0;
    piStack_260 = (int *)0x5518cb;
    FUN_00422690();
    if (uStack_230._3_1_ == '\0') {
      piStack_260 = *(int **)Pipeline_exref;
      pfStack_258 = (float *)0x2;
      puStack_25c = (undefined4 *)0x13;
      piStack_264 = (int *)0x551905;
      (**(code **)(*piStack_260 + 0xf0))();
      piStack_264 = (int *)0x4;
      uVar21 = 0x13;
    }
    else {
      piStack_260 = *(int **)Pipeline_exref;
      pfStack_258 = (float *)0x5;
      puStack_25c = (undefined4 *)0x13;
      piStack_264 = (int *)0x5518ea;
      (**(code **)(*piStack_260 + 0xf0))();
      piStack_264 = (int *)0x6;
      uVar21 = 0x14;
    }
    piVar18 = *(int **)Pipeline_exref;
    (**(code **)(*piVar18 + 0xf0))(piVar18,uVar21);
    piStack_21c = (int *)**(undefined4 **)Pipeline_exref;
    fVar5 = (float)FUN_00425640(0);
    fVar17 = *(float *)Pipeline_exref;
    fVar20 = 0.0;
    (*(code *)piStack_21c[0x42])(fVar17,0,fVar5);
    piStack_260 = *(int **)Pipeline_exref;
    puVar11 = &DAT_005e09f0;
    iVar10 = 1;
    do {
      (**(code **)(*piStack_260 + 0xf8))(piStack_260,0,iVar10,*(undefined4 *)(puVar11 + 4));
      iVar10 = *(int *)(puVar11 + 8);
      puVar11 = puVar11 + 8;
    } while (iVar10 != 0);
    piStack_260 = *(int **)Pipeline_exref;
    puVar11 = &DAT_005e0a28;
    iVar10 = 1;
    do {
      (**(code **)(*piStack_260 + 0xf8))(piStack_260,1,iVar10,*(undefined4 *)(puVar11 + 4));
      iVar10 = *(int *)(puVar11 + 8);
      puVar11 = puVar11 + 8;
    } while (iVar10 != 0);
    piVar13 = *(int **)Pipeline_exref;
    puVar19 = &stack0xfffffe18;
    (**(code **)(*piVar13 + 0xf4))(piVar13,0x18);
    uVar21 = 0;
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,5);
    if (DAT_00679860 == (int *)0x0) {
      DAT_00679860 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00679860 + 0x34))(DAT_00679860,&piStack_264,auStack_e0,pfVar1);
    fStack_234 = fVar20;
    uStack_230 = (int *)fVar5;
    piStack_22c = piVar18;
    fVar16 = (float10)FUN_00507e70(fVar5 * fVar5 + fVar20 * fVar20);
    fStack_234 = (float)((float10)fVar20 * fVar16);
    uStack_230 = (int *)(float)((float10)(float)uStack_230 * fVar16);
    piStack_22c = (int *)(float)(fVar16 * (float10)_DAT_005c7474);
    fVar16 = fVar16 * (float10)_DAT_005c7474 * (float10)_DAT_005c7474;
    FUN_00422b80((float)((float10)(float)uStack_230 - fVar16),(float)(fVar16 - (float10)fStack_234),
                 fStack_234 * _DAT_005c7474 - (float)uStack_230 * _DAT_005c7474);
    fVar16 = (float10)FUN_00507e70(fStack_24c * fStack_24c +
                                   fStack_244 * fStack_244 + (float)piStack_248 * (float)piStack_248
                                  );
    piVar18 = (int *)*puStack_25c;
    fStack_24c = (float)((float10)fStack_24c * fVar16);
    piStack_248 = (int *)(float)((float10)(float)piStack_248 * fVar16);
    fStack_244 = (float)((float10)fStack_244 * fVar16);
    piStack_224 = (int *)((float)piVar13 * (float)piVar13);
    piStack_218 = (int *)(fVar17 * fVar17);
    local_1a8 = _DAT_005c75dc / ((float)piStack_224 - (float)piStack_218);
    iStack_250 = 0;
    fStack_1b8 = _DAT_005c75dc / ((float)puStack_25c[0x3a] - (float)puStack_25c[0x39]);
    puVar12 = puStack_220;
    puVar3 = puStack_25c;
    if (0 < (int)puStack_25c[3]) {
      do {
        iVar10 = *piVar18;
        fVar17 = (float)puVar3[0x2d] * (float)puVar3[0x38];
        if ((*(char *)(iVar10 + 0x50) != '\0') && (*(char *)(iVar10 + 0x51) == '\0')) {
          if (DAT_00679860 == (int *)0x0) {
            DAT_00679860 = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_00679860 + 0x3c))(DAT_00679860,&piStack_240,auStack_f0,iVar10);
          fVar5 = -(float)puStack_238;
          piStack_20c = piStack_240;
          piStack_208 = piStack_23c;
          puStack_204 = puStack_238;
          *(float *)(iVar10 + 0x54) = fVar5;
          if ((float)puVar3[0x39] <= fVar5) {
            if (fStack_1b0 < fVar5) {
              fStack_16c = -(float)puVar3[0x2e];
              uStack_174 = 0;
              uStack_170 = 0;
              FUN_00423b60(&stack0xfffffe1c,&uStack_174,&piStack_20c);
              fVar5 = fVar2 * fVar2 + (float)piVar22 * (float)piVar22 + uStack_1dc * uStack_1dc;
              if ((float)piStack_224 < fVar5) goto LAB_005522d8;
              if ((float)piStack_218 < fVar5) {
                fVar17 = ((float)piStack_224 - fVar5) * fVar17 * local_1a8;
              }
            }
            if ((float)_DAT_005e0e08 <= fVar17) {
              FUN_00411d60(&fStack_150,puVar3 + 0x24,*(undefined4 *)(iVar10 + 0x3c));
              FUN_00411d60(auStack_144,&fStack_150,puVar3[0x37]);
              uStack_214 = *(undefined4 *)(iVar10 + 0x18);
              if (*(float *)(iVar10 + 0x54) < (float)puVar3[0x39] ==
                  (*(float *)(iVar10 + 0x54) == (float)puVar3[0x39])) {
                if (*(float *)(iVar10 + 0x54) < (float)puVar3[0x3a]) {
                  fVar17 = (*(float *)(iVar10 + 0x54) - (float)puVar3[0x39]) * fVar17 * fStack_1b8;
                }
                if ((float)_DAT_005e0e08 <= fVar17) {
                  if (((puVar3[0x49] == 0) && (_DAT_005c7474 < (float)puVar3[0x37])) &&
                     (_DAT_005c7474 <= *(float *)(iVar10 + 0x38))) {
                    FUN_004d7270(auStack_144);
                  }
                  if ((char)((uint)puVar19 >> 0x18) == '\0') {
                    uVar4 = ftol();
                    uVar4 = (uVar4 | 0xffffff00) << 8;
                    uVar7 = ftol();
                    uVar4 = (uVar4 | uVar7 & 0xff) << 8;
                    uVar7 = ftol();
                  }
                  else {
                    uVar4 = ftol();
                    uVar4 = uVar4 & 0xff;
                    iVar6 = ftol();
                    uVar4 = (uVar4 | iVar6 << 8) << 8;
                    uVar7 = ftol();
                    uVar4 = (uVar4 | uVar7 & 0xff) << 8;
                    uVar7 = ftol();
                  }
                  uVar4 = uVar4 | uVar7 & 0xff;
                  if ((char)((uint)uVar21 >> 0x18) == '\0') {
                    uVar21 = 0x1000000;
                    iVar6 = (**(code **)(**(int **)VertexBuffer_exref + 0x14))
                                      (*(int **)VertexBuffer_exref,0x142,uStack_1ac,&piStack_200);
                    pfVar1 = pfStack_1fc;
                    if (iVar6 == 0) {
                      iVar6 = 0;
                      if (((uint)pfStack_1fc & 0x10) != 0) {
                        iVar6 = 0xc;
                      }
                      iVar8 = FUN_00552480(pfStack_1fc);
                      iVar9 = FUN_00552440(pfVar1);
                      iVar9 = iVar9 + iVar6;
                      iVar6 = FUN_004061a0(pfVar1);
                      pfVar14 = pfStack_1f4;
                      piVar13 = (int *)(iVar6 + iVar9 + iVar8);
                      iVar6 = 0;
                      pfStack_258 = pfStack_1f4;
                      if (((uint)pfStack_1fc & 0x10) != 0) {
                        iVar6 = 0xc;
                      }
                      piStack_254 = piVar13;
                      iVar8 = FUN_00552440(pfStack_1fc);
                      pfVar1 = pfStack_1fc;
                      puVar12 = (uint *)(iVar8 + iVar6 + (int)pfStack_1f4);
                      iVar6 = 0;
                      if (((uint)pfStack_1fc & 0x10) != 0) {
                        iVar6 = 0xc;
                      }
                      puStack_220 = puVar12;
                      piStack_21c = piVar13;
                      iStack_1b4 = FUN_00552480(pfStack_1fc);
                      iVar8 = FUN_00552440(pfVar1);
                      puVar15 = (undefined4 *)(iVar8 + iVar6 + iStack_1b4 + (int)pfStack_1f4);
                      puVar3 = puStack_25c;
                      piStack_264 = piVar13;
                    }
                  }
                  iVar10 = puVar3[*(int *)(iVar10 + 0x1c) + 10];
                  puVar3 = puStack_25c;
                  if (iVar10 != 0) {
                    FUN_00411d60(auStack_1a4,&fStack_234,uStack_214);
                    FUN_00411d60(auStack_198,&fStack_24c,uStack_214);
                    FUN_00423b60(auStack_168,&piStack_20c,auStack_198);
                    FUN_00423b60(&fStack_1d8,auStack_168,auStack_1a4);
                    FUN_00423b30(auStack_12c,&piStack_20c,auStack_198);
                    FUN_00423b60(&uStack_18c,auStack_12c,auStack_1a4);
                    FUN_00423b30(auStack_138,&piStack_20c,auStack_198);
                    FUN_00423b30(&uStack_1cc,auStack_138,auStack_1a4);
                    FUN_00423b60(auStack_15c,&piStack_20c,auStack_198);
                    FUN_00423b30(&uStack_180,auStack_15c,auStack_1a4);
                    *puVar15 = *(undefined4 *)(iVar10 + 8);
                    puVar15[1] = *(undefined4 *)(iVar10 + 0xc);
                    *pfVar14 = fStack_1d8;
                    puVar15 = (undefined4 *)((int)puVar15 + (int)piStack_264);
                    pfVar14[1] = fStack_1d4;
                    pfVar14[2] = fStack_1d0;
                    *puVar12 = uVar4;
                    *puVar15 = *(undefined4 *)(iVar10 + 0x10);
                    puVar15[1] = *(undefined4 *)(iVar10 + 0xc);
                    *(undefined4 *)((int)pfVar14 + (int)piStack_254) = uStack_18c;
                    *(undefined4 *)((int)(pfVar14 + 1) + (int)piStack_254) = uStack_188;
                    *(undefined4 *)((int)(pfVar14 + 2) + (int)piStack_254) = uStack_184;
                    puVar3 = (undefined4 *)((int)pfVar14 + (int)piStack_254 * 2);
                    *(uint *)((int)puVar12 + (int)piStack_21c) = uVar4;
                    *(undefined4 *)((int)puVar15 + (int)piStack_264) =
                         *(undefined4 *)(iVar10 + 0x10);
                    *(undefined4 *)((int)(puVar15 + 1) + (int)piStack_264) =
                         *(undefined4 *)(iVar10 + 0x14);
                    *puVar3 = uStack_1cc;
                    puVar3[1] = fStack_1c8;
                    puVar3[2] = fStack_1c4;
                    iVar8 = (int)puVar15 + (int)piStack_264;
                    puVar3 = (undefined4 *)((int)puVar3 + (int)piStack_254);
                    *(uint *)((int)puVar12 + (int)piStack_21c + (int)piStack_21c) = uVar4;
                    *(undefined4 *)(iVar8 + (int)piStack_264) = *(undefined4 *)(iVar10 + 0x10);
                    *(undefined4 *)(iVar8 + 4 + (int)piStack_264) = *(undefined4 *)(iVar10 + 0x14);
                    *puVar3 = uStack_1cc;
                    puVar3[1] = fStack_1c8;
                    puVar3[2] = fStack_1c4;
                    iVar6 = (int)puVar12 + (int)piStack_21c + (int)piStack_21c;
                    iVar8 = iVar8 + (int)piStack_264;
                    puVar3 = (undefined4 *)((int)puVar3 + (int)piStack_254);
                    *(uint *)(iVar6 + (int)piStack_21c) = uVar4;
                    *(undefined4 *)(iVar8 + (int)piStack_264) = *(undefined4 *)(iVar10 + 8);
                    *(undefined4 *)(iVar8 + 4 + (int)piStack_264) = *(undefined4 *)(iVar10 + 0x14);
                    iVar6 = iVar6 + (int)piStack_21c;
                    *puVar3 = uStack_180;
                    puVar15 = (undefined4 *)(iVar8 + (int)piStack_264 * 2);
                    puVar3[1] = uStack_17c;
                    puVar3[2] = uStack_178;
                    pfVar14 = (float *)((int)puVar3 + (int)piStack_254);
                    *(uint *)(iVar6 + (int)piStack_21c) = uVar4;
                    puVar12 = (uint *)(iVar6 + (int)piStack_21c * 2);
                    *puVar15 = *(undefined4 *)(iVar10 + 8);
                    puVar15[1] = *(undefined4 *)(iVar10 + 0xc);
                    puVar15 = (undefined4 *)((int)puVar15 + (int)piStack_264);
                    *pfVar14 = fStack_1d8;
                    pfVar14[1] = fStack_1d4;
                    pfVar14[2] = fStack_1d0;
                    *puVar12 = uVar4;
                    puVar12 = (uint *)((int)puVar12 + (int)piStack_21c);
                    pfVar14 = (float *)((int)pfVar14 + (int)piStack_254);
                    iStack_228 = iStack_228 + 6;
                    DAT_00679864 = DAT_00679864 + 1;
                    puVar3 = puStack_25c;
                    pfStack_258 = pfVar14;
                    puStack_220 = puVar12;
                  }
                }
              }
            }
          }
        }
LAB_005522d8:
        iStack_250 = iStack_250 + 1;
        piVar18 = piVar18 + 1;
      } while (iStack_250 < (int)puVar3[3]);
      if ((char)((uint)uVar21 >> 0x18) != '\0') {
        (**(code **)(**(int **)VertexBuffer_exref + 0x18))(*(int **)VertexBuffer_exref,&piStack_200)
        ;
        (**(code **)(**(int **)Pipeline_exref + 0x11c))
                  (*(int **)Pipeline_exref,4,piStack_208,piStack_200,uStack_230,0);
      }
    }
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x19,5);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,piStack_21c);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,fStack_1d4);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,fVar2);
    piVar18 = *(int **)Pipeline_exref;
    puVar11 = &DAT_005e09e0;
    iVar10 = 0x8d;
    do {
      (**(code **)(*piVar18 + 0xf0))(piVar18,iVar10,*(undefined4 *)(puVar11 + 4));
      iVar10 = *(int *)(puVar11 + 8);
      puVar11 = puVar11 + 8;
    } while (iVar10 != 0);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,1);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1b,0);
  }
  ExceptionList = local_c;
  return;
}

