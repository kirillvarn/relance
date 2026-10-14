
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004ffe50(int param_1,float param_2,float param_3,undefined4 *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fStack_184;
  float fStack_178;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
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
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined1 auStack_ec [12];
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double adStack_98 [6];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined1 auStack_5c [36];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined1 local_1c [24];
  
  local_148 = _DAT_005c75dc / *(float *)(param_1 + 0xa0);
  local_108 = _DAT_005c75dc / *(float *)(param_1 + 0xa4);
  if (param_5 == 0) {
    uVar20 = 5;
  }
  else {
    if (param_5 != 1) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\GateTunnel.cpp",0x21e,
                 "Only two render layers in the jumpgate supported");
      return;
    }
    uVar20 = 2;
  }
  FUN_004220c0(uVar20,6);
  (**(code **)(**(int **)TextureLib_exref + 0x58))(*(int **)TextureLib_exref,*param_4,0,local_1c);
  param_2 = param_2 + *(float *)(param_1 + 0x270);
  if (((_DAT_005c75dc < param_2) || (fVar8 = _DAT_005c7474, _DAT_005c7474 <= param_2)) &&
     (fVar8 = param_2, _DAT_005c75dc < param_2)) {
    fVar8 = _DAT_005c75dc;
  }
  fStack_184 = param_3 + *(float *)(param_1 + 0x270);
  if ((_DAT_005c75dc < fStack_184) || (_DAT_005c7474 <= fStack_184)) {
    if (_DAT_005c75dc < fStack_184) {
      fStack_184 = 1.0;
    }
  }
  else {
    fStack_184 = 0.0;
  }
  fStack_150 = ABS(fStack_184 - fVar8);
  fVar22 = fVar8;
  do {
    if (fStack_158 <= _DAT_005c7474) {
      if (fVar22 <= fStack_184) {
        return;
      }
    }
    else if (fStack_184 <= fVar22) {
      return;
    }
    fStack_158 = _DAT_0061326c * fStack_158;
    local_148 = fVar22 + fStack_158;
    fVar21 = local_148;
    if (local_148 < _DAT_005c7474) {
      fVar21 = 0.0;
    }
    if (fStack_158 <= _DAT_005c7474) {
      if (fVar21 < fStack_184) {
        fVar21 = fStack_184;
      }
    }
    else if (fStack_184 < fVar21) {
      fVar21 = fStack_184;
    }
    fStack_154 = ABS(fVar22 - *(float *)(param_1 + 0x270)) / fStack_150;
    if ((fStack_154 < (float)_DAT_005c8ba8) || (fStack_154 <= (float)_DAT_005c89b8)) {
      if (fStack_154 < (float)_DAT_005c8ba8) {
        fStack_154 = (float)_DAT_005c8ba8;
      }
    }
    else {
      fStack_154 = (float)_DAT_005c89b8;
    }
    fVar9 = ABS(fVar21 - *(float *)(param_1 + 0x270)) / fStack_150;
    if ((fVar9 < (float)_DAT_005c8ba8) || (fVar9 <= (float)_DAT_005c89b8)) {
      if (fVar9 < (float)_DAT_005c8ba8) {
        fVar9 = (float)_DAT_005c8ba8;
      }
    }
    else {
      fVar9 = (float)_DAT_005c89b8;
    }
    if (*(int *)(param_1 + 0x154) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x154) >> 4;
    }
    if (fVar22 == _DAT_005c75dc) {
      fVar12 = (float10)*(float *)(*(int *)(param_1 + 0x144) + iVar11 * 4);
    }
    else {
      modf((double)((float)iVar11 * fVar22),&dStack_e0);
      iVar11 = ftol();
      pfVar10 = (float *)(iVar11 * 0x10 + *(int *)(param_1 + 0x154));
      fVar12 = ((extraout_ST0 * (float10)*(float *)(iVar11 * 0x10 + 0xc + *(int *)(param_1 + 0x154))
                + (float10)pfVar10[2]) * extraout_ST0 + (float10)pfVar10[1]) * extraout_ST0 +
               (float10)*pfVar10;
    }
    fVar12 = fVar12 * (float10)(float)param_4[7];
    fStack_124 = (float)((fVar12 * (float10)*(float *)(param_1 + 0x90) - fVar12) *
                         (float10)fStack_154 + fVar12);
    if (*(int *)(param_1 + 0x154) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x158) - *(int *)(param_1 + 0x154) >> 4;
    }
    if (fVar21 == _DAT_005c75dc) {
      fVar12 = (float10)*(float *)(*(int *)(param_1 + 0x144) + iVar11 * 4);
    }
    else {
      modf((double)((float)iVar11 * fVar21),&dStack_c8);
      iVar11 = ftol();
      pfVar10 = (float *)(iVar11 * 0x10 + *(int *)(param_1 + 0x154));
      fVar12 = ((extraout_ST0_00 *
                 (float10)*(float *)(iVar11 * 0x10 + 0xc + *(int *)(param_1 + 0x154)) +
                (float10)pfVar10[2]) * extraout_ST0_00 + (float10)pfVar10[1]) * extraout_ST0_00 +
               (float10)*pfVar10;
    }
    fVar12 = fVar12 * (float10)(float)param_4[7];
    fStack_154 = (float)((fVar12 * (float10)*(float *)(param_1 + 0x90) - fVar12) * (float10)fVar9 +
                        fVar12);
    FUN_004ffbb0();
    FUN_004ffbb0();
    fStack_fc = (float)param_4[5];
    fStack_14c = (float)param_4[6];
    if (fStack_158 < _DAT_005c7474) {
      fStack_fc = (float)param_4[6];
      fStack_14c = (float)param_4[5];
    }
    fVar9 = ABS(fVar22 - fVar8) / fStack_150 + _DAT_00613270;
    if ((float)_DAT_005c89b8 <= fVar9) {
      fVar9 = (float)_DAT_005c89b8;
    }
    fVar1 = ABS(fVar21 - fVar8) / fStack_150 + _DAT_00613270;
    if ((float)_DAT_005c89b8 <= fVar1) {
      fVar1 = (float)_DAT_005c89b8;
    }
    fVar9 = (fStack_14c - fStack_fc) * fVar9 + fStack_fc;
    fStack_fc = fVar1 * (fStack_14c - fStack_fc) + fStack_fc;
    fStack_fc = fStack_fc * fStack_fc * fStack_fc;
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1cc) >> 4;
    }
    if (fVar22 == _DAT_005c75dc) {
      fStack_128 = *(float *)(*(int *)(param_1 + 0x1bc) + iVar11 * 4);
    }
    else {
      modf((double)((float)iVar11 * fVar22),(double *)&uStack_a0);
      iVar11 = ftol();
      pfVar10 = (float *)(iVar11 * 0x10 + *(int *)(param_1 + 0x1cc));
      fStack_128 = (float)(((extraout_ST0_01 *
                             (float10)*(float *)(iVar11 * 0x10 + 0xc + *(int *)(param_1 + 0x1cc)) +
                            (float10)pfVar10[2]) * extraout_ST0_01 + (float10)pfVar10[1]) *
                           extraout_ST0_01 + (float10)*pfVar10);
    }
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1cc) >> 4;
    }
    if (fVar21 == _DAT_005c75dc) {
      fStack_11c = *(float *)(*(int *)(param_1 + 0x1bc) + iVar11 * 4);
    }
    else {
      modf((double)((float)iVar11 * fVar21),&dStack_b8);
      iVar11 = ftol();
      pfVar10 = (float *)(iVar11 * 0x10 + *(int *)(param_1 + 0x1cc));
      fStack_11c = (float)(((extraout_ST0_02 *
                             (float10)*(float *)(iVar11 * 0x10 + 0xc + *(int *)(param_1 + 0x1cc)) +
                            (float10)pfVar10[2]) * extraout_ST0_02 + (float10)pfVar10[1]) *
                           extraout_ST0_02 + (float10)*pfVar10);
    }
    if (*(int *)(param_1 + 500) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1f8) - *(int *)(param_1 + 500) >> 4;
    }
    if (fVar22 == _DAT_005c75dc) {
      fStack_120 = *(float *)(*(int *)(param_1 + 0x1e4) + iVar11 * 4);
    }
    else {
      modf((double)((float)iVar11 * fVar22),adStack_98);
      iVar11 = ftol();
      pfVar10 = (float *)(iVar11 * 0x10 + *(int *)(param_1 + 500));
      fStack_120 = (float)(((extraout_ST0_03 *
                             (float10)*(float *)(iVar11 * 0x10 + 0xc + *(int *)(param_1 + 500)) +
                            (float10)pfVar10[2]) * extraout_ST0_03 + (float10)pfVar10[1]) *
                           extraout_ST0_03 + (float10)*pfVar10);
    }
    if (*(int *)(param_1 + 500) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1f8) - *(int *)(param_1 + 500) >> 4;
    }
    if (fVar21 == _DAT_005c75dc) {
      fVar1 = *(float *)(*(int *)(param_1 + 0x1e4) + iVar11 * 4);
    }
    else {
      modf((double)((float)iVar11 * fVar21),&dStack_d8);
      iVar11 = ftol();
      pfVar10 = (float *)(iVar11 * 0x10 + *(int *)(param_1 + 500));
      fVar1 = (float)(((extraout_ST0_04 *
                        (float10)*(float *)(iVar11 * 0x10 + 0xc + *(int *)(param_1 + 500)) +
                       (float10)pfVar10[2]) * extraout_ST0_04 + (float10)pfVar10[1]) *
                      extraout_ST0_04 + (float10)*pfVar10);
    }
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1cc) >> 4;
    }
    if (fVar22 == _DAT_005c75dc) {
      fStack_12c = *(float *)(*(int *)(param_1 + 0x1bc) + iVar11 * 4);
    }
    else {
      modf((double)((float)iVar11 * fVar22),&dStack_d0);
      iVar11 = ftol();
      pfVar10 = (float *)(iVar11 * 0x10 + *(int *)(param_1 + 0x1cc));
      fStack_12c = (float)(((extraout_ST0_05 *
                             (float10)*(float *)(iVar11 * 0x10 + 0xc + *(int *)(param_1 + 0x1cc)) +
                            (float10)pfVar10[2]) * extraout_ST0_05 + (float10)pfVar10[1]) *
                           extraout_ST0_05 + (float10)*pfVar10);
    }
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1cc) >> 4;
    }
    if (fVar21 == _DAT_005c75dc) {
      fVar12 = (float10)*(float *)(*(int *)(param_1 + 0x1bc) + iVar11 * 4);
    }
    else {
      modf((double)((float)iVar11 * fVar21),&dStack_c0);
      iVar11 = ftol();
      pfVar10 = (float *)(iVar11 * 0x10 + *(int *)(param_1 + 0x1cc));
      fVar12 = ((extraout_ST0_06 *
                 (float10)*(float *)(iVar11 * 0x10 + 0xc + *(int *)(param_1 + 0x1cc)) +
                (float10)pfVar10[2]) * extraout_ST0_06 + (float10)pfVar10[1]) * extraout_ST0_06 +
               (float10)*pfVar10;
    }
    fVar4 = (float)param_4[2] + fStack_128;
    fVar5 = (float)param_4[3] + fStack_120;
    fVar2 = (float)param_4[3];
    fVar3 = (float)param_4[4];
    fVar6 = (float)param_4[4] + fStack_12c;
    fVar7 = (float)param_4[2] + fStack_11c;
    if (*(int *)(param_1 + 0x1a4) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1a8) - *(int *)(param_1 + 0x1a4) >> 4;
    }
    if (fVar22 == _DAT_005c75dc) {
      fVar13 = (float10)*(float *)(*(int *)(param_1 + 0x194) + iVar11 * 4);
    }
    else {
      dVar17 = modf((double)((float)iVar11 * fVar22),&dStack_b0);
      fVar19 = (float)dVar17;
      ftol(fVar19);
      fVar13 = (float10)FUN_00501c40(fVar19);
    }
    if (*(int *)(param_1 + 0x1a4) == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1a8) - *(int *)(param_1 + 0x1a4) >> 4;
    }
    if (fVar21 == _DAT_005c75dc) {
      fVar14 = (float10)*(float *)(*(int *)(param_1 + 0x194) + iVar11 * 4);
    }
    else {
      dVar17 = modf((double)((float)iVar11 * fVar21),&dStack_a8);
      fVar19 = (float)dVar17;
      ftol(fVar19);
      fVar14 = (float10)FUN_00501c40(fVar19);
    }
    FUN_004220a0(uStack_2c);
    FUN_00421670();
    fStack_178 = 0.0;
    do {
      fStack_130 = 0.0;
      fStack_13c = 0.0;
      fVar15 = (float10)fcos((float10)fStack_178 * (float10)_DAT_005da774);
      fStack_138 = (float)((float10)fStack_124 * fVar15);
      fVar16 = (float10)fsin((float10)fStack_178 * (float10)_DAT_005da774);
      fStack_134 = fStack_124 * (float)fVar16;
      fStack_144 = (float)((float10)fStack_154 * fVar15);
      fStack_140 = fStack_154 * (float)fVar16;
      if (DAT_00674fb4 == (int *)0x0) {
        DAT_00674fb4 = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00674fb4 + 0x30))(DAT_00674fb4,auStack_ec,auStack_5c,&fStack_138);
      local_148 = fStack_fc;
      fStack_144 = fStack_f8;
      fStack_140 = fStack_f4;
      if (DAT_00674fb4 == (int *)0x0) {
        DAT_00674fb4 = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_00674fb4 + 0x30))(DAT_00674fb4,&local_108,(int)&uStack_a0 + 4,&fStack_154);
      fVar19 = fVar22 * (float)param_4[0xc] + (float)param_4[9];
      fStack_144 = fStack_f8;
      fStack_140 = fStack_f4;
      fStack_13c = fStack_f0;
      fVar18 = fStack_178 + (float)param_4[8];
      FUN_00421ca0();
      FUN_00421bd0((float)((float10)fVar4 * fVar13),(float)((float10)fVar5 * fVar13),
                   (float)(fVar13 * (float10)fVar6),fVar9 * fVar9 * fVar9,fVar18,fVar19);
      fStack_114 = fStack_38 + fStack_138;
      fStack_110 = fStack_34 + fStack_134;
      fStack_10c = fStack_30 + fStack_130;
      FUN_00421cc0(fStack_114,fStack_110,fStack_10c);
      fVar19 = fVar21 * (float)param_4[0xc] + (float)param_4[9];
      fVar18 = fStack_178 + (float)param_4[8];
      FUN_00421ca0();
      FUN_00421bd0((float)((float10)fVar7 * fVar14),(float)((float10)(fVar2 + fVar1) * fVar14),
                   (float)(fVar14 * (float10)(float)((float10)fVar3 + fVar12)),fStack_fc,fVar18,
                   fVar19);
      local_108 = fStack_68 + fStack_144;
      fStack_104 = fStack_64 + fStack_140;
      fStack_100 = fStack_60 + fStack_13c;
      FUN_00421cc0(local_108,fStack_104,fStack_100);
      fStack_178 = fStack_178 + fStack_118;
      DAT_00674fb8 = DAT_00674fb8 + 1;
    } while (fStack_178 < _DAT_005c75dc != (fStack_178 == _DAT_005c75dc));
    FUN_00421690();
    fVar22 = local_148;
  } while( true );
}

