
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00507ed0(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  float unaff_EDI;
  undefined4 *puVar14;
  float *pfVar15;
  float10 fVar16;
  int *piVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int *piVar24;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float *pfStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_8c;
  float fStack_80;
  float fStack_74;
  undefined1 auStack_70 [52];
  undefined4 auStack_3c [9];
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  if ((0 < *(int *)(param_1 + 0xdc)) && (*(float *)(param_1 + 0x294) < (float)_DAT_005c89b8)) {
    piVar24 = param_2;
    puVar8 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
    puVar14 = auStack_3c;
    for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar14 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar14 = puVar14 + 1;
    }
    uStack_100 = (double)CONCAT44(uStack_100._4_4_,uStack_10);
    fStack_108 = fStack_18;
    fStack_104 = fStack_14;
    pfVar9 = (float *)(**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
    fStack_114 = *pfVar9;
    fStack_110 = pfVar9[1];
    fStack_10c = pfVar9[2];
    if (DAT_00675000 == (int *)0x0) {
      DAT_00675000 = (int *)FUN_005b73e0();
    }
    pfVar9 = &fStack_114;
    (**(code **)(*DAT_00675000 + 0x3c))(DAT_00675000,(int)&uStack_100 + 4,auStack_3c,pfVar9);
    iVar12 = *param_2;
    fStack_9c = fStack_108;
    fStack_a0 = fStack_10c;
    fStack_98 = fStack_104;
    fVar16 = (float10)(**(code **)(**(int **)(param_1 + 0x20) + 0x30))();
    uVar7 = (**(code **)(iVar12 + 0x3c))(param_2,&fStack_a0,(float)fVar16);
    if (2 < uVar7) {
      if (_DAT_005db09c < *(float *)(param_1 + 0x54)) {
        do {
          pfVar9 = (float *)0x0;
          uVar11 = 0;
          iVar12 = 1;
          if (*(int *)(param_1 + 0xdc) < 2) break;
          iVar13 = 0x20;
          do {
            if ((char)((uint)uVar11 >> 0x18) == '\0') {
              pfVar10 = (float *)(iVar13 + -0x20 + *(int *)(param_1 + 0xe0));
              FUN_00422b80(fStack_130 + *pfVar10,fStack_12c + pfVar10[1],
                           fStack_128 + *(float *)(iVar13 + -0x18 + *(int *)(param_1 + 0xe0)));
              FUN_00422b80((float)pfStack_118 - fStack_124,fStack_114 - fStack_120,
                           fStack_110 - fStack_11c);
              uStack_100 = (double)(fStack_150 * fStack_150 +
                                   fStack_154 * fStack_154 + fStack_158 * fStack_158);
            }
            pfVar10 = (float *)(iVar13 + *(int *)(param_1 + 0xe0));
            FUN_00422b80(fStack_130 + *pfVar10,fStack_12c + pfVar10[1],
                         fStack_128 + *(float *)(iVar13 + 8 + *(int *)(param_1 + 0xe0)));
            FUN_00422b80(fStack_10c - fStack_124,fStack_108 - fStack_120,fStack_104 - fStack_11c);
            fVar19 = fStack_168 * fStack_168 + fStack_16c * fStack_16c + fStack_170 * fStack_170;
            if (fVar19 <= (float)uStack_100) {
              uVar11 = 0;
            }
            else if ((float)_DAT_005c9ce8 < ABS((float)uStack_100 - fVar19)) {
              pfVar9 = (float *)((int)pfVar9 + 1);
              uVar11 = *(undefined4 *)(iVar13 + -0x14 + *(int *)(param_1 + 0xe0));
              pfVar15 = (float *)(iVar13 + -0x20 + *(int *)(param_1 + 0xe0));
              fStack_cc = *pfVar15;
              fStack_c8 = pfVar15[1];
              fStack_c4 = pfVar15[2];
              fStack_b8 = pfVar15[5];
              fVar19 = pfVar15[6];
              fStack_b0 = pfVar15[7];
              fStack_bc = pfVar15[4];
              *pfVar15 = *pfVar10;
              pfVar15[1] = pfVar10[1];
              pfVar15[2] = pfVar10[2];
              *(undefined4 *)(iVar13 + -0x14 + *(int *)(param_1 + 0xe0)) =
                   *(undefined4 *)(iVar13 + 0xc + *(int *)(param_1 + 0xe0));
              *(undefined4 *)(iVar13 + -0x10 + *(int *)(param_1 + 0xe0)) =
                   *(undefined4 *)(iVar13 + 0x10 + *(int *)(param_1 + 0xe0));
              puVar8 = (undefined4 *)(iVar13 + 0x14 + *(int *)(param_1 + 0xe0));
              puVar14 = (undefined4 *)(iVar13 + -0xc + *(int *)(param_1 + 0xe0));
              *puVar14 = *puVar8;
              puVar14[1] = puVar8[1];
              puVar14[2] = puVar8[2];
              pfVar10 = (float *)(*(int *)(param_1 + 0xe0) + iVar13);
              *pfVar10 = fStack_cc;
              pfVar10[1] = fStack_c8;
              pfVar10[2] = fStack_c4;
              *(undefined4 *)(iVar13 + 0xc + *(int *)(param_1 + 0xe0)) = uVar11;
              *(float *)(iVar13 + 0x10 + *(int *)(param_1 + 0xe0)) = fStack_bc;
              pfVar10 = (float *)(iVar13 + 0x14 + *(int *)(param_1 + 0xe0));
              *pfVar10 = fStack_b8;
              pfVar10[1] = fVar19;
              pfVar10[2] = fStack_b0;
              uVar11 = 0x1000000;
            }
            iVar12 = iVar12 + 1;
            iVar13 = iVar13 + 0x20;
          } while (iVar12 < *(int *)(param_1 + 0xdc));
        } while (0 < (int)pfVar9);
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      FUN_00421ed0(0xb50);
      FUN_00421ed0(0xb44);
      FUN_00422190(0);
      FUN_00421ed0(0xb71);
      FUN_00421dd0(0xbe2);
      FUN_00422950(param_2);
      uVar11 = FUN_00425640(0);
      FUN_004220a0(uVar11);
      puVar8 = *(undefined4 **)(param_1 + 0x60);
      if ((int)puVar8[1] < 0) {
        fStack_174 = (float)FUN_005b7010(0);
        (**(code **)(**(int **)TextureLib_exref + 0x5c))
                  (*(int **)TextureLib_exref,*puVar8,0,&fStack_174);
        if (((int)fStack_174 < 10) || (0xe < (int)fStack_174)) {
          iVar12 = FUN_005b7030(fStack_174);
          bVar6 = *(byte *)(iVar12 + 0x48);
        }
        else {
          bVar6 = 1;
        }
        puVar8[1] = (uint)bVar6;
      }
      if (puVar8[1] == 0) {
        uVar18 = 2;
        uVar11 = 2;
      }
      else {
        uVar18 = 6;
        uVar11 = 5;
      }
      FUN_004220c0(uVar11,uVar18);
      fStack_f4 = 0.0;
      piVar17 = *(int **)Pipeline_exref;
      (**(code **)(*piVar17 + 0xf4))(piVar17,0x18,&fStack_f4);
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,4);
      fVar19 = *(float *)(param_1 + 0xb8);
      if ((float)_DAT_005c75e8 < *(float *)(param_1 + 0x294)) {
        fVar20 = *(float *)(param_1 + 0x294) - (float)_DAT_005c75e8;
        fVar19 = ((float)_DAT_005c89b8 - (fVar20 + fVar20)) * fVar19;
      }
      fStack_164 = 1.0;
      if ((*(float *)(param_1 + 0x294) < _DAT_005c7474 ==
           (*(float *)(param_1 + 0x294) == _DAT_005c7474)) ||
         (fVar20 = *(float *)(param_1 + 0x2ac) - *(float *)(param_1 + 0x29c), fVar20 < _DAT_005db0b4
         )) {
        fStack_164 = 0.0;
      }
      else if (fVar20 < _DAT_005ca218) {
        fStack_164 = (float)_DAT_005c89b8 - (_DAT_005ca218 - fVar20) * _DAT_005db0b0;
      }
      FUN_00421670(8);
      pfVar10 = *(float **)(param_1 + 0xe0);
      pfStack_118 = pfVar10;
      FUN_00422b80(fStack_13c - fStack_148,fStack_138 - fStack_144,fStack_134 - fStack_140);
      iVar12 = 0;
      fVar20 = _DAT_005c75dc /
               SQRT(fStack_150 * fStack_150 + fStack_14c * fStack_14c + fStack_154 * fStack_154);
      fStack_154 = fStack_154 * fVar20;
      fStack_150 = fStack_150 * fVar20;
      fStack_14c = fStack_14c * fVar20;
      if (0 < *(int *)(param_1 + 0xdc)) {
        pfVar15 = pfVar10 + 6;
        do {
          fVar20 = fVar19;
          FUN_00422b80(fStack_148 + *pfVar10,fStack_144 + pfVar15[-5],fStack_140 + pfVar15[-4]);
          FUN_00422b80(fStack_160 - fStack_13c,fStack_15c - fStack_138,fStack_158 - fStack_134);
          if (DAT_00675000 == (int *)0x0) {
            DAT_00675000 = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_00675000 + 0x3c))(DAT_00675000,&fStack_a0,auStack_70,&fStack_160);
          fVar2 = -fStack_98;
          if (fVar2 < _DAT_005c7474 == (fVar2 == _DAT_005c7474)) {
            if ((*(int *)(param_1 + 0xd8) != 0) || (fStack_164 < _DAT_005c75dc)) {
              fStack_170 = *pfVar10;
              fStack_16c = pfVar10[1];
              fStack_168 = pfVar10[2];
              fVar1 = _DAT_005c75dc /
                      SQRT(fStack_16c * fStack_16c +
                           fStack_168 * fStack_168 + fStack_170 * fStack_170);
              fVar1 = fStack_150 * fStack_16c * fVar1 +
                      fStack_14c * fStack_168 * fVar1 + fStack_154 * fStack_170 * fVar1;
              if (*(int *)(param_1 + 0xd8) == 0) {
                if (fVar1 < _DAT_005d3ee0) {
                  fVar19 = fStack_164 * fVar20;
                }
              }
              else {
                if (fVar1 < _DAT_005c7474) goto LAB_00508a5e;
                if (fVar1 < (float)_DAT_005d5b58) {
                  fVar19 = fVar1 * fVar20 * (float)_DAT_005db0a8;
                }
              }
            }
            fVar1 = pfVar15[-3];
            fVar21 = (float)piVar24 * pfVar15[1] - unaff_EDI * *pfVar15;
            fVar22 = unaff_EDI * pfVar15[-1] - (float)pfVar9 * pfVar15[1];
            fVar23 = (float)pfVar9 * *pfVar15 - (float)piVar24 * pfVar15[-1];
            fVar3 = fVar1 / SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar21 * fVar21);
            fVar21 = fVar21 * fVar3;
            fVar22 = fVar22 * fVar3;
            fVar23 = fVar23 * fVar3;
            fVar5 = fVar22 * unaff_EDI - fVar23 * (float)piVar24;
            fVar4 = fVar23 * (float)pfVar9 - unaff_EDI * fVar21;
            fStack_174 = (float)piVar24 * fVar21 - fVar22 * (float)pfVar9;
            fVar3 = fVar1 / SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fStack_174 * fStack_174);
            fVar5 = fVar5 * fVar3;
            fVar4 = fVar4 * fVar3;
            fStack_174 = fStack_174 * fVar3;
            if (fVar2 < fVar1) {
              fVar19 = (fVar2 / fVar1) * fVar19;
            }
            if ((float)_DAT_005d5138 <= fVar19) {
              fVar2 = *(float *)(param_1 + 0xa8);
              fStack_f8 = *(float *)(param_1 + 0xac);
              fStack_f4 = *(float *)(param_1 + 0xb0);
              uStack_100 = (double)CONCAT44(fVar2,(undefined4)uStack_100);
              if ((char)((uint)piVar17 >> 0x18) == '\0') {
                FUN_00422b80(fVar2 * fVar19,fStack_f8 * fVar19,fStack_f4 * fVar19);
                FUN_00421ad0(uStack_ac,uStack_a8,uStack_a4);
              }
              else {
                FUN_00421bd0(fVar2,fStack_f8,fStack_f4,fVar19);
              }
              fVar19 = pfVar15[-2];
              FUN_00421ca0(*(undefined4 *)((int)fVar19 + 8),*(undefined4 *)((int)fVar19 + 0xc));
              FUN_00422b80(fVar21 + fStack_160,fVar22 + fStack_15c,fVar23 + fStack_158);
              fStack_f0 = fStack_b8 + fVar5;
              fStack_ec = fStack_b4 + fVar4;
              fStack_e8 = fStack_b0 + fStack_174;
              FUN_00421cc0(fStack_f0,fStack_ec,fStack_e8);
              FUN_00421ca0(*(undefined4 *)((int)fVar19 + 0x10),*(undefined4 *)((int)fVar19 + 0xc));
              fStack_80 = fVar23 + fStack_158;
              fStack_108 = (fVar21 + fStack_160) - fVar5;
              fStack_104 = (fVar22 + fStack_15c) - fVar4;
              uStack_100 = (double)CONCAT44(uStack_100._4_4_,fStack_80 - fStack_174);
              FUN_00421cc0(fStack_108,fStack_104,fStack_80 - fStack_174);
              FUN_00421ca0(*(undefined4 *)((int)fVar19 + 0x10),*(undefined4 *)((int)fVar19 + 0x14));
              fStack_74 = fStack_158 - fVar23;
              fStack_124 = (fStack_160 - fVar21) - fVar5;
              fStack_120 = (fStack_15c - fVar22) - fVar4;
              fStack_11c = fStack_74 - fStack_174;
              FUN_00421cc0(fStack_124,fStack_120,fStack_11c);
              FUN_00421ca0(*(undefined4 *)((int)fVar19 + 8),*(undefined4 *)((int)fVar19 + 0x14));
              fStack_8c = fStack_158 - fVar23;
              fStack_130 = (fStack_160 - fVar21) + fVar5;
              fStack_12c = (fStack_15c - fVar22) + fVar4;
              fStack_128 = fStack_8c + fStack_174;
              FUN_00421cc0(fStack_130,fStack_12c,fStack_128);
              pfVar10 = pfStack_118;
            }
          }
LAB_00508a5e:
          iVar12 = iVar12 + 1;
          pfVar10 = pfVar10 + 8;
          pfVar15 = pfVar15 + 8;
          fVar19 = fVar20;
          pfStack_118 = pfVar10;
        } while (iVar12 < *(int *)(param_1 + 0xdc));
      }
      FUN_00421690();
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x18,fStack_10c);
      FUN_00421dd0(0xb71);
      FUN_00422190(1);
      FUN_00421ed0(0xbe2);
      FUN_00421dd0(0xb44);
      if (*(int **)(param_1 + 0xec) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xec) + 0xc))
                  ((float)_DAT_005c89b8 - *(float *)(param_1 + 0x294));
      }
    }
  }
  return;
}

