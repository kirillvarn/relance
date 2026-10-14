
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0049b600(int param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  int iVar8;
  undefined2 extraout_var;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  float fVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float10 fVar19;
  float10 fVar20;
  byte bStack_2bd;
  int iStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  int local_280;
  float fStack_27c;
  float fStack_278;
  int iStack_274;
  float *pfStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 auStack_228 [32];
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float afStack_1ec [3];
  float afStack_1e0 [96];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  iVar16 = 0;
  if (*(int *)(param_1 + 0xb90) == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)(param_1 + 0xb94) - *(int *)(param_1 + 0xb90) >> 2;
  }
  local_280 = iVar17;
  if ((((*(float *)(param_1 + 0x46c) == *(float *)(param_1 + 0xecc)) &&
       (*(float *)(param_1 + 0x470) == *(float *)(param_1 + 0xed0))) &&
      (*(float *)(param_1 + 0x474) == *(float *)(param_1 + 0xed4))) &&
     ((*(float *)(param_1 + 0xed8) == *(float *)(param_1 + 0x3f8) &&
      (iVar8 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))(), *(int *)(param_1 + 0xedc) == iVar8
      )))) {
    fVar19 = (float10)FUN_0042d680();
    fVar19 = fVar19 + (float10)*(float *)(param_1 + 0xec0);
    *(float *)(param_1 + 0xec0) = (float)fVar19;
    fVar20 = (float10)DAT_005d2ecc;
    if (fVar19 < fVar20) {
      return CONCAT22(extraout_var,
                      (ushort)(fVar19 < fVar20) << 8 | (ushort)(NAN(fVar19) || NAN(fVar20)) << 10 |
                      (ushort)(fVar19 == fVar20) << 0xe);
    }
    fStack_2b8 = 0.0;
    *(float *)(param_1 + 0xec0) = (float)(fVar19 - (float10)DAT_005d2ecc);
    if (0 < iVar17) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0xb90) + iVar16 * 4);
        uVar9 = (**(code **)(*piVar2 + 0x1c))();
        if ((uVar9 & 0x3ffc0) != 0) {
          if (*(char *)(param_1 + 0x87e) == '\0') {
            bStack_2bd = 0;
            uVar10 = (**(code **)(*piVar2 + 4))(&bStack_2bd,1,0);
            FUN_004c4da0(uVar10);
            bVar7 = (**(code **)(*piVar2 + 0x80))();
            if (((bStack_2bd | bVar7) & 1) == 0) goto LAB_0049b73c;
          }
          fStack_2b8 = (float)((int)fStack_2b8 + 1);
        }
LAB_0049b73c:
        iVar16 = iVar16 + 1;
      } while (iVar16 < local_280);
    }
    if (fStack_2b8 == (float)*(uint *)(param_1 + 0xec4)) {
      return (uint)fStack_2b8 & 0xffffff00;
    }
    *(float *)(param_1 + 0xec4) = fStack_2b8;
    iVar17 = local_280;
  }
  *(float *)(param_1 + 0xecc) = *(float *)(param_1 + 0x46c);
  *(undefined4 *)(param_1 + 0xed0) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0xed4) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(param_1 + 0x3f8);
  uVar10 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
  *(undefined4 *)(param_1 + 0xedc) = uVar10;
  pfVar13 = (float *)(param_1 + 0x418);
  fStack_28c = *pfVar13;
  fStack_288 = *(float *)(param_1 + 0x41c);
  fStack_284 = *(float *)(param_1 + 0x420) * _DAT_005c75e0;
  fStack_2a8 = -(fStack_28c * _DAT_005c75e0);
  fStack_2a4 = -(fStack_288 * _DAT_005c75e0);
  fStack_2a0 = -fStack_284;
  fVar3 = *pfVar13 * _DAT_005c75e0;
  *(undefined4 *)(param_1 + 0xd74) = 0;
  fVar5 = *(float *)(param_1 + 0x41c) * _DAT_005c75e0;
  *(undefined4 *)(param_1 + 0xebc) = 0;
  fVar6 = *(float *)(param_1 + 0x420) * _DAT_005c75e0;
  fStack_2b8 = *(float *)(param_1 + 0x3f8) - _DAT_005c75dc;
  fVar1 = *(float *)(param_1 + 0x3f8);
  fStack_2b4 = *(float *)(param_1 + 0x46c);
  fStack_2b0 = *(float *)(param_1 + 0x470) * fVar1;
  fVar14 = *(float *)(param_1 + 0x420);
  fStack_2ac = *(float *)(param_1 + 0x474) * fVar1;
  iStack_274 = -1;
  *(undefined4 *)(param_1 + 0xeb8) = 0;
  fStack_278 = 0.0;
  fStack_248 = fStack_2b4 * fVar1 + (fStack_2a8 - fVar3 * fStack_2b8);
  pfStack_270 = *(float **)(param_1 + 0xd6c);
  fStack_244 = fStack_2b0 + (fStack_2a4 - fVar5 * fStack_2b8);
  fStack_240 = fStack_2ac + (fStack_2a0 - fVar6 * fStack_2b8);
  fStack_290 = *(float *)(param_1 + 0x3f8);
  fStack_298 = *pfVar13 * fStack_290;
  fStack_294 = *(float *)(param_1 + 0x41c) * fStack_290;
  fStack_290 = fVar14 * fStack_290;
  if (0 < iVar17) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0xb90) + (int)fStack_278 * 4);
      fStack_29c = (float)(**(code **)(*piVar2 + 0x1c))();
      if (((uint)fStack_29c & 0x3ffc0) != 0) {
        if (*(char *)(param_1 + 0x87e) == '\0') {
          bStack_2bd = 0;
          uVar10 = (**(code **)(*piVar2 + 4))(&bStack_2bd,1,0);
          FUN_004c4da0(uVar10);
          bVar7 = (**(code **)(*piVar2 + 0x80))();
          if (((bStack_2bd | bVar7) & 1) == 0) goto LAB_0049c237;
        }
        iVar16 = -1;
        bStack_2bd = 0;
        if (((uint)fStack_29c & 0x40) == 0) {
          if (SUB41(fStack_29c,0) < '\0') {
            iVar16 = 1;
          }
          else if (((uint)fStack_29c & 0x100) == 0) {
            if (((uint)fStack_29c & 0x200) == 0) {
              if (((uint)fStack_29c & 0x400) == 0) {
                if (((uint)fStack_29c & 0x800) == 0) {
                  if (((uint)fStack_29c & 0x1000) == 0) {
                    if (((uint)fStack_29c & 0x2000) == 0) {
                      if ((char)((uint)fStack_29c >> 8) < '\0') {
                        iVar16 = 2;
                        pfVar13 = (float *)(**(code **)(*piVar2 + 0x24))();
                        fStack_2a8 = *pfVar13 * _DAT_005ca220;
                        fStack_2a4 = pfVar13[1] * _DAT_005ca220;
                        fStack_2a0 = pfVar13[2] * _DAT_005ca220;
                        if (_DAT_005c75dc < fStack_2a8) {
                          fStack_2a8 = 1.0;
                        }
                        if (_DAT_005c75dc < fStack_2a4) {
                          fStack_2a4 = 1.0;
                        }
                        if (_DAT_005c75dc < fStack_2a0) {
                          fStack_2a0 = 1.0;
                        }
                      }
                    }
                    else {
                      iVar16 = 4;
                    }
                  }
                  else {
                    iVar16 = 3;
                  }
                }
                else {
                  iVar16 = 8;
                }
              }
              else {
                iVar16 = 7;
              }
            }
            else {
              iVar16 = 6;
            }
          }
          else {
            iVar16 = 5;
          }
        }
        else {
          iVar16 = 0;
        }
        if (((uint)fStack_29c & 0x30000) == 0) {
          if (iVar16 == -1) goto LAB_0049c237;
        }
        else {
          uStack_26c = 0;
          uStack_268 = 0;
          uStack_264 = 0;
          iVar16 = 2;
          fStack_2a8 = 0.0;
          fStack_2a4 = 0.0;
          fStack_2a0 = 0.0;
          bStack_2bd = 1;
        }
        if (*(int *)(param_1 + 0xb68 + iVar16 * 4) != 0) {
          iVar17 = 0xff;
          if (*(char *)(param_1 + 0x478) == '\0') {
            if (*(int *)(param_1 + 2000) == 2) {
              iVar17 = 0x56;
            }
          }
          else {
            iVar17 = ftol();
          }
          if (iVar16 != iStack_274) {
            *(undefined4 *)(param_1 + 0xd78 + *(int *)(param_1 + 0xeb8) * 4) =
                 *(undefined4 *)(param_1 + 0xd74);
            *(int *)(param_1 + 0xe78 + *(int *)(param_1 + 0xeb8) * 4) = iVar16;
            *(undefined4 *)(param_1 + 0xdb8 + *(int *)(param_1 + 0xeb8) * 4) = 0;
            *(undefined4 *)(param_1 + 0xdf8 + *(int *)(param_1 + 0xeb8) * 4) =
                 *(undefined4 *)(param_1 + 0xebc);
            *(undefined4 *)(param_1 + 0xe38 + *(int *)(param_1 + 0xeb8) * 4) = 0;
            *(int *)(param_1 + 0xeb8) = *(int *)(param_1 + 0xeb8) + 1;
            iStack_274 = iVar16;
          }
          fStack_29c = (float)(iVar17 << 0x18 | 0xffffff);
          if (iVar16 == 2) {
            uVar9 = ftol();
            uVar11 = ftol();
            uVar12 = ftol();
            fStack_29c = (float)(((uVar9 & 0xff | iVar17 << 8) << 8 | uVar11 & 0xff) << 8 |
                                uVar12 & 0xff);
          }
          (**(code **)(*piVar2 + 0x28))(&fStack_28c);
          fVar1 = *(float *)(param_1 + 0xf48);
          fStack_290 = fStack_290 * fVar1;
          fStack_28c = fStack_28c * fVar1;
          fStack_288 = fStack_288 * fVar1;
          pfVar13 = (float *)(**(code **)(*piVar2 + 0xc))();
          fVar1 = *(float *)(param_1 + 0xf48);
          pfVar18 = &fStack_22c;
          for (iVar16 = 0xc; iVar16 != 0; iVar16 = iVar16 + -1) {
            *pfVar18 = *pfVar13;
            pfVar13 = pfVar13 + 1;
            pfVar18 = pfVar18 + 1;
          }
          fStack_208 = fStack_208 * fVar1;
          fStack_200 = fStack_200 * fVar1;
          fStack_204 = 0.0;
          iVar16 = (**(code **)(*piVar2 + 0x18))();
          if (iVar16 == 1) {
            fStack_2b8 = 0.0;
            pfVar13 = afStack_1e0;
            iVar16 = 0x20;
            do {
              fVar20 = (float10)fsin((float10)fStack_2b8);
              afStack_1ec[1] = 0.0;
              afStack_1ec[0] = (float)(fVar20 * (float10)fStack_28c);
              fVar20 = (float10)fcos((float10)fStack_2b8);
              afStack_1ec[2] = (float)(fVar20 * (float10)fStack_28c);
              if (DAT_0067209c == (int *)0x0) {
                DAT_0067209c = (int *)FUN_005b73e0();
              }
              (**(code **)(*DAT_0067209c + 0x28))(DAT_0067209c,&fStack_1f8,auStack_228,afStack_1ec);
              fStack_2b8 = fStack_2b8 + _DAT_005d3f04;
              *pfVar13 = fStack_1f8;
              pfVar13[1] = fStack_1f4;
              pfVar13[2] = fStack_1f0;
              if (bStack_2bd == 0) {
                uVar9 = ftol();
                iStack_2bc = ((int)uVar9 >> 3 & 0x1fe0U) - 0x1000;
                *pfVar13 = (float)(int)(((uVar9 & 0xff) - 0x80) * 0x20) + *pfVar13;
                pfVar13[1] = (float)iStack_2bc + pfVar13[1];
              }
              pfVar13 = pfVar13 + 3;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            fStack_60 = fStack_204;
            fStack_5c = fStack_200;
            fStack_58 = fStack_1fc;
            if (bStack_2bd == 0) {
              uVar9 = ftol();
              fStack_60 = (float)(int)(((uVar9 & 0xff) - 0x80) * 0x20) + fStack_204;
LAB_0049bfc6:
              fStack_5c = (float)(int)(((int)uVar9 >> 3 & 0x1fe0U) - 0x1000) + fStack_5c;
            }
          }
          else {
            if (iVar16 != 2) goto LAB_0049c237;
            fStack_27c = 0.0;
            pfVar13 = afStack_1e0;
            iVar16 = 0x20;
            do {
              fVar20 = (float10)fsin((float10)fStack_27c);
              fStack_2b0 = 0.0;
              fStack_2b4 = (float)fVar20;
              fVar20 = (float10)fcos((float10)fStack_27c);
              fStack_2ac = (float)fVar20;
              fVar20 = (float10)(**(code **)(*piVar2 + 0x40))(&fStack_2b4);
              fVar20 = fVar20 * (float10)*(float *)(param_1 + 0xf48);
              fStack_2b0 = (float)((float10)fStack_2b0 * fVar20);
              fStack_2ac = (float)((float10)fStack_2ac * fVar20);
              fStack_254 = (float)((float10)fStack_2b4 * fVar20 + (float10)fStack_204);
              *pfVar13 = fStack_254;
              fStack_250 = fStack_2b0 + fStack_200;
              fStack_24c = fStack_2ac + fStack_1fc;
              pfVar13[1] = fStack_250;
              pfVar13[2] = fStack_24c;
              if (bStack_2bd == 0) {
                uVar9 = ftol();
                iStack_2bc = ((int)uVar9 >> 3 & 0x1fe0U) - 0x1000;
                *pfVar13 = (float)(int)(((uVar9 & 0xff) - 0x80) * 0x20) + *pfVar13;
                pfVar13[1] = (float)iStack_2bc + pfVar13[1];
              }
              pfVar13 = pfVar13 + 3;
              iVar16 = iVar16 + -1;
              fStack_27c = fStack_27c + _DAT_005d3f04;
            } while (iVar16 != 0);
            fStack_5c = fStack_200;
            fStack_60 = fStack_204;
            fStack_58 = fStack_1fc;
            if (bStack_2bd == 0) {
              uVar9 = ftol();
              fStack_60 = (float)(int)(((uVar9 & 0xff) - 0x80) * 0x20) + fStack_204;
              goto LAB_0049bfc6;
            }
          }
          fVar1 = *(float *)(param_1 + 0x4a8);
          fStack_23c = fVar1 + fVar1;
          iVar16 = 0x21;
          fVar14 = *(float *)(param_1 + 0x4ac);
          fStack_238 = fVar14 + fVar14;
          pfVar13 = afStack_1e0;
          do {
            fStack_230 = fStack_294;
            fStack_234 = fStack_298;
            fStack_22c = fStack_290;
            iVar16 = iVar16 + -1;
            fStack_260 = fStack_248 + ((fVar1 + *pfVar13) / fStack_23c) * fStack_298;
            fStack_25c = fStack_244 +
                         ((float)_DAT_005c89b8 - (fVar14 + pfVar13[2]) / fStack_238) * fStack_294;
            *pfVar13 = fStack_260;
            pfVar13[1] = fStack_25c;
            fStack_258 = fStack_290 + fStack_240;
            pfVar13[2] = fStack_258;
            pfVar13 = pfVar13 + 3;
          } while (iVar16 != 0);
          iVar16 = *(int *)(param_1 + 0xd74);
          fVar1 = *(float *)(param_1 + 0x3f8) * _DAT_005d29b0;
          *(int *)(param_1 + 0xd74) = iVar16 + 0x21;
          fVar1 = _DAT_005c75dc / fVar1;
          *(int *)(param_1 + 0xdb4 + *(int *)(param_1 + 0xeb8) * 4) =
               *(int *)(param_1 + 0xdb4 + *(int *)(param_1 + 0xeb8) * 4) + 0x21;
          pfVar13 = afStack_1e0;
          iStack_2bc = 0x20;
          do {
            pfVar15 = pfStack_270;
            fVar14 = *pfVar13;
            pfVar15[3] = fStack_29c;
            *pfVar15 = *pfVar13;
            fVar3 = pfVar13[2];
            fVar5 = (float)_DAT_005c75e8;
            pfVar15[1] = pfVar13[1];
            pfVar15[2] = fVar3;
            pfVar15[4] = (fVar14 - fStack_60) * fVar1 + fVar5;
            pfVar18 = pfVar13 + 1;
            pfVar13 = pfVar13 + 3;
            iStack_2bc = iStack_2bc + -1;
            pfVar15[5] = (*pfVar18 - fStack_5c) * fVar1 + (float)_DAT_005c75e8;
            pfStack_270 = pfVar15 + 6;
          } while (iStack_2bc != 0);
          pfVar15[9] = fStack_29c;
          pfVar15[10] = 0.5;
          pfVar15[0xb] = 0.5;
          pfVar15[6] = fStack_60;
          pfVar15[7] = fStack_5c;
          pfStack_270 = pfVar15 + 0xc;
          pfVar15[8] = fStack_58;
          piVar2 = (int *)(param_1 + 0xe34 + *(int *)(param_1 + 0xeb8) * 4);
          *piVar2 = *piVar2 + 0x60;
          iVar17 = 0;
          sVar4 = (short)iVar16;
          do {
            *(short *)(*(int *)(param_1 + 0xd70) + *(int *)(param_1 + 0xebc) * 2) =
                 (short)iVar17 + sVar4;
            iVar16 = *(int *)(param_1 + 0xebc) + 1;
            *(int *)(param_1 + 0xebc) = iVar16;
            *(short *)(*(int *)(param_1 + 0xd70) + iVar16 * 2) = sVar4 + 1 + (short)iVar17;
            iVar16 = *(int *)(param_1 + 0xebc) + 1;
            *(int *)(param_1 + 0xebc) = iVar16;
            *(short *)(*(int *)(param_1 + 0xd70) + iVar16 * 2) = sVar4 + 0x20;
            iVar16 = *(int *)(param_1 + 0xebc) + 1;
            iVar17 = iVar17 + 1;
            *(int *)(param_1 + 0xebc) = iVar16;
          } while (iVar17 < 0x1f);
          *(short *)(*(int *)(param_1 + 0xd70) + iVar16 * 2) = sVar4 + 0x1f;
          iVar16 = *(int *)(param_1 + 0xebc) + 1;
          *(int *)(param_1 + 0xebc) = iVar16;
          *(short *)(*(int *)(param_1 + 0xd70) + iVar16 * 2) = sVar4;
          iVar16 = *(int *)(param_1 + 0xebc) + 1;
          *(int *)(param_1 + 0xebc) = iVar16;
          *(short *)(*(int *)(param_1 + 0xd70) + iVar16 * 2) = sVar4 + 0x20;
          *(int *)(param_1 + 0xebc) = *(int *)(param_1 + 0xebc) + 1;
          iStack_2bc = 0;
        }
      }
LAB_0049c237:
      fVar14 = (float)((int)fStack_278 + 1);
      fStack_278 = fVar14;
    } while ((int)fVar14 < local_280);
  }
  return CONCAT31((int3)((uint)fVar14 >> 8),1);
}

