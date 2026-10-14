
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004fb1e0(int param_1,int param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  float10 extraout_ST0;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  int *piVar24;
  undefined4 *puVar25;
  int iVar26;
  int *piStack_19c;
  undefined4 *puStack_198;
  int iStack_194;
  float *pfStack_190;
  int *piStack_18c;
  float *local_188;
  float *local_184;
  float *local_180;
  undefined1 auStack_16c [4];
  float local_168 [3];
  float local_15c;
  uint uStack_158;
  float local_154;
  uint uStack_150;
  float local_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90 [12];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 auStack_68 [8];
  undefined1 local_60 [4];
  undefined1 auStack_5c [8];
  float local_54 [3];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  float local_30 [3];
  undefined1 local_24 [36];
  
  iVar26 = *(int *)(param_1 + 0x6c);
  local_13c = *(float *)(iVar26 + 0x6c);
  if (param_3 == _DAT_005c7474) {
    local_13c = *(float *)(iVar26 + 0x78);
  }
  local_110 = *(float *)(iVar26 + 0x74);
  if (*(float *)(iVar26 + 0x74) < local_13c) {
    local_110 = local_13c;
  }
  local_15c = *(float *)(iVar26 + 0x60) - local_13c;
  local_154 = *(float *)(iVar26 + 100) - local_13c;
  local_168[0] = *(float *)(iVar26 + 0x68);
  if (local_15c < _DAT_005c7474) {
    local_15c = 0.0;
  }
  if (local_154 < _DAT_005c7474) {
    local_154 = 0.0;
  }
  if (local_168[0] < _DAT_005c7474) {
    local_168[0] = 0.0;
  }
  local_134 = *(undefined4 *)(param_2 + 0x24);
  local_130 = *(undefined4 *)(param_2 + 0x28);
  local_12c = *(undefined4 *)(param_2 + 0x2c);
  local_180 = &local_11c;
  local_120 = local_168[0] * param_3;
  local_184 = (float *)local_48;
  local_118 = 0;
  local_114 = 0;
  local_140 = 0.0;
  local_138 = 0.0;
  local_10c = 0.0;
  local_108 = 0.0;
  local_104 = 0.0;
  local_30[2] = -(local_15c * param_3 + local_13c);
  local_fc = 0.0;
  local_128 = 0.0;
  local_124 = 0;
  local_30[0] = 0.0;
  local_30[1] = 0.0;
  local_54[2] = local_154 * param_3 + local_13c;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  local_188 = (float *)0x4fb37e;
  local_11c = local_13c;
  local_100 = local_110;
  FUN_004e7090();
  local_180 = &local_14c;
  local_184 = (float *)0x4fb38c;
  FUN_00411350();
  local_180 = &local_14c;
  local_184 = (float *)local_78;
  local_188 = (float *)0x4fb3a0;
  FUN_004e7090();
  local_180 = &local_140;
  local_184 = (float *)local_24;
  local_188 = (float *)0x4fb3b4;
  FUN_004e7090();
  local_180 = (float *)-local_138;
  local_184 = (float *)-local_13c;
  local_188 = (float *)-local_140;
  piStack_18c = (int *)0x4fb3dd;
  FUN_00422b80();
  local_180 = &local_14c;
  local_184 = (float *)&local_c0;
  local_188 = (float *)0x4fb3f1;
  FUN_004e7090();
  local_180 = &local_110;
  local_184 = (float *)local_3c;
  local_188 = (float *)0x4fb405;
  FUN_004e7090();
  local_180 = (float *)-local_108;
  local_184 = (float *)-local_10c;
  local_188 = (float *)-local_110;
  piStack_18c = (int *)0x4fb42e;
  FUN_00422b80();
  local_180 = &local_14c;
  local_184 = (float *)&local_a8;
  local_188 = (float *)0x4fb442;
  FUN_004e7090();
  local_180 = &local_104;
  local_184 = (float *)local_60;
  local_188 = (float *)0x4fb456;
  FUN_004e7090();
  local_180 = (float *)-local_fc;
  local_184 = (float *)-local_100;
  local_188 = (float *)-local_104;
  piStack_18c = (int *)0x4fb488;
  FUN_00422b80();
  local_180 = &local_14c;
  local_184 = (float *)&local_cc;
  local_188 = (float *)0x4fb49c;
  FUN_004e7090();
  local_180 = local_30;
  local_184 = (float *)local_90;
  local_188 = (float *)0x4fb4b3;
  FUN_004e7090();
  local_180 = &local_128;
  local_184 = local_54;
  local_188 = &local_14c;
  piStack_18c = (int *)0x4fb4ca;
  FUN_00423b30();
  if (DAT_00674f50 == (int *)0x0) {
    local_180 = (float *)0x4fb4db;
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  local_180 = &local_14c;
  local_184 = (float *)param_2;
  local_188 = (float *)&local_9c;
  pfStack_190 = (float *)0x4fb4f4;
  piStack_18c = DAT_00674f50;
  (**(code **)(*DAT_00674f50 + 0x28))();
  if (DAT_00674f50 == (int *)0x0) {
    pfStack_190 = (float *)0x4fb502;
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  pfStack_190 = &local_138;
  iStack_194 = param_2;
  puStack_198 = &uStack_c4;
  piStack_19c = DAT_00674f50;
  (**(code **)(*DAT_00674f50 + 0x28))();
  FUN_00423b30(auStack_16c,&local_13c,&fStack_148);
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  puVar25 = &uStack_a4;
  piVar24 = DAT_00674f50;
  iVar26 = param_2;
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,puVar25,param_2,auStack_16c);
  FUN_00422b80(-local_14c,-fStack_148,-fStack_144);
  FUN_00423b30(&local_108,&stack0xfffffe84,&uStack_158);
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,&local_9c,param_2,&local_108);
  FUN_00423b30(&piStack_18c,&local_180,local_168);
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,&local_118,param_2,&piStack_18c);
  FUN_00422b80(-(float)pfStack_190,-(float)piStack_18c,-(float)local_188);
  FUN_00423b30(auStack_5c,auStack_68,&stack0xfffffe88);
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,&piStack_19c,param_2,auStack_5c);
  iVar7 = *(int *)(param_1 + 0x6c);
  if (*(int *)(iVar7 + 8) == 1) {
    uVar21 = 0;
    uVar17 = 0x3f000000;
  }
  else {
    uVar21 = 0x3f000000;
    uVar17 = 0x3f800000;
  }
  if (*(int *)(iVar7 + 0xc) == 1) {
    uVar20 = 0;
    uVar23 = 0x3ee66666;
  }
  else {
    uVar20 = 0x3f0ccccd;
    uVar23 = 0x3f800000;
  }
  fVar16 = local_54[0] * *(float *)(iVar7 + 0x5c);
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)extraout_ST0;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3f400000;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = DAT_00674c84 + 2;
      FUN_0046ecd0();
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + DAT_00674c84 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(int *)(DAT_00674c80 + DAT_00674c84 * 0x18) = iStack_194;
  *(float **)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = pfStack_190;
  *(int **)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = piStack_18c;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  iVar7 = DAT_00674c84;
  local_14c = (float)(DAT_00674c84 - 1);
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar21;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3f000000;
  uVar21 = _DAT_00674cb4;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = iVar7 + 2;
      FUN_0046ecd0();
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar8 = 6; iVar7 = DAT_00674c84, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + iVar7 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = local_9c;
  *(undefined4 *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = uStack_98;
  *(undefined4 *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = uStack_94;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  _DAT_00674cb4 = (float)uVar21;
  fStack_144 = (float)(DAT_00674c84 - 1);
  _DAT_00674cb0 = 0x3f800000;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = DAT_00674c84 + 2;
      FUN_0046ecd0();
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + DAT_00674c84 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = local_c0;
  *(undefined4 *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = uStack_bc;
  *(undefined4 *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = uStack_b8;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  _DAT_00674cb4 = (float)uVar17;
  uVar15 = DAT_00674c84 - 1;
  _DAT_00674cb0 = 0x3f800000;
  uVar17 = _DAT_00674cb4;
  fVar18 = local_104;
  fVar19 = local_108;
  fVar22 = local_100;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = DAT_00674c84 + 2;
      FUN_0046ecd0();
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + DAT_00674c84 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(float *)(DAT_00674c80 + DAT_00674c84 * 0x18) = fVar19;
  *(float *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = fVar18;
  *(float *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = fVar22;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  _DAT_00674cb4 = (float)uVar17;
  uVar11 = DAT_00674c84 - 1;
  _DAT_00674cb0 = 0x3f000000;
  uVar17 = local_124;
  fVar18 = local_128;
  uVar21 = local_12c;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = DAT_00674c84 + 2;
      FUN_0046ecd0();
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + DAT_00674c84 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = uVar21;
  *(float *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = fVar18;
  *(undefined4 *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = uVar17;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  iVar7 = DAT_00674c84;
  uStack_158 = DAT_00674c84 - 1;
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar23;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0;
  uVar17 = _DAT_00674cb4;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = iVar7 + 2;
      FUN_0046ecd0();
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar8 = 6; iVar7 = DAT_00674c84, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + iVar7 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(int *)(DAT_00674c80 + DAT_00674c84 * 0x18) = iStack_194;
  *(float **)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = pfStack_190;
  *(int **)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = piStack_18c;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  iVar7 = DAT_00674c84;
  uStack_150 = DAT_00674c84 - 1;
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar20;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3e800000;
  uVar21 = _DAT_00674cb4;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = iVar7 + 2;
      FUN_0046ecd0();
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar8 = 6; iVar7 = DAT_00674c84, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + iVar7 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = uStack_f0;
  *(undefined4 *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = uStack_ec;
  *(undefined4 *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = uStack_e8;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  iVar7 = DAT_00674c84;
  local_154 = (float)(DAT_00674c84 - 1);
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar17;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3e800000;
  uVar17 = _DAT_00674cb4;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = iVar7 + 2;
      FUN_0046ecd0();
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar14 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar8 = 6; iVar7 = DAT_00674c84, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + iVar7 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = local_a8;
  *(undefined4 *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = uStack_a4;
  *(undefined4 *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = uStack_a0;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  uVar9 = DAT_00674c84 - 1;
  uVar1 = FUN_0046eab0(uStack_d8,uStack_d4,uStack_d0);
  uVar2 = FUN_0046eab0(uStack_84,uStack_80,uStack_7c);
  uVar3 = FUN_0046eab0(local_120,local_11c,local_118);
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar21;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0;
  uVar21 = _DAT_00674cb4;
  local_13c = (float)FUN_0046eab0(local_114,local_110,local_10c);
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar17;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3e800000;
  fStack_148 = (float)FUN_0046eab0(local_fc,uStack_f8,uStack_f4);
  iVar7 = *(int *)(param_1 + 0x6c);
  FUN_004fc950(fVar16 * *(float *)(iVar7 + 0x4c),fVar16 * *(float *)(iVar7 + 0x50),
               fVar16 * *(float *)(iVar7 + 0x54));
  _DAT_00674cb4 = (float)uVar21;
  _DAT_00674cb0 = 0x3e800000;
  uVar4 = FUN_0046eab0(uStack_e4,uStack_e0,uStack_dc);
  uVar5 = FUN_0046eab0(local_cc,uStack_c8,uStack_c4);
  local_140 = (float)FUN_0046eab0(local_138,local_134,local_130);
  uVar6 = FUN_0046eab0(piVar24,puVar25,iVar26);
  uVar10 = (uint)fStack_144 & 0xffff;
  uVar13 = (uint)local_14c & 0xffff;
  FUN_004fc9a0(uVar13,uVar10,uVar15 & 0xffff);
  uVar11 = uVar11 & 0xffff;
  FUN_004fc9a0(uVar13,uVar11,uVar15 & 0xffff);
  uVar15 = uStack_158 & 0xffff;
  FUN_004fc9a0(uVar13,uVar11,uVar15);
  FUN_004fc9a0(uVar13,uVar10,uVar15);
  uVar15 = (uint)local_154 & 0xffff;
  uVar11 = uStack_150 & 0xffff;
  FUN_004fc9a0(uVar11,uVar15,uVar9 & 0xffff);
  FUN_004fc9a0(uVar11,uVar15,uVar1 & 0xffff);
  FUN_004fc9a0(uVar11,uVar15,uVar2 & 0xffff);
  FUN_004fc9a0(uVar11,uVar15,uVar3 & 0xffff);
  uVar10 = (uint)local_13c & 0xffff;
  FUN_004fca50(uVar11,uVar10,uVar4 & 0xffff,uVar9 & 0xffff);
  FUN_004fca50(uVar11,uVar10,uVar5 & 0xffff,uVar1 & 0xffff);
  uVar15 = (uint)local_140 & 0xffff;
  FUN_004fca50(uVar11,uVar10,uVar15,uVar2 & 0xffff);
  FUN_004fca50(uVar11,uVar10,uVar6 & 0xffff,uVar3 & 0xffff);
  uVar11 = (uint)fStack_148 & 0xffff;
  FUN_004fc9a0(uVar10,uVar11,uVar4 & 0xffff);
  FUN_004fc9a0(uVar10,uVar11,uVar5 & 0xffff);
  FUN_004fc9a0(uVar10,uVar11,uVar15);
  FUN_004fc9a0(uVar10,uVar11,uVar6 & 0xffff);
  return 1;
}

