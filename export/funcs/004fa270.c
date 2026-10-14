
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004fa270(int param_1,int param_2,float param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  float10 extraout_ST0;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  int *piVar21;
  float *pfVar22;
  int iVar23;
  int *piStack_128;
  undefined1 *puStack_124;
  float fStack_120;
  uint *puStack_11c;
  int *piStack_118;
  undefined1 *local_114;
  undefined1 *local_110;
  float *local_10c;
  float local_f8;
  uint uStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined1 local_54 [20];
  undefined1 auStack_40 [4];
  undefined1 local_3c [24];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_f8 = *(float *)(*(int *)(param_1 + 0x6c) + 0x6c);
  if ((param_3 == _DAT_005c7474) && ((*(byte *)(param_1 + 0x70) & 8) != 0)) {
    local_10c = (float *)0x4fa2a5;
    cVar1 = FUN_0054bc80();
    if (cVar1 == '\0') {
      local_f8 = *(float *)(*(int *)(param_1 + 0x6c) + 0x78);
    }
  }
  iVar23 = *(int *)(param_1 + 0x6c);
  local_b0 = *(float *)(iVar23 + 0x74);
  if (*(float *)(iVar23 + 0x74) < local_f8) {
    local_b0 = local_f8;
  }
  local_e0 = *(float *)(iVar23 + 0x60) - local_f8;
  local_a4 = local_f8;
  local_c8 = *(float *)(param_2 + 0x24);
  local_b8 = local_f8;
  local_c4 = *(float *)(param_2 + 0x28);
  local_c0 = *(float *)(param_2 + 0x2c);
  local_10c = &local_a4;
  local_110 = local_54;
  local_a0 = 0.0;
  local_58 = -(local_e0 * param_3 + local_f8);
  local_9c = 0.0;
  local_bc = 0.0;
  local_b4 = 0.0;
  local_ac = 0;
  local_a8 = 0;
  local_64 = (*(float *)(iVar23 + 100) - local_f8) * param_3 + local_f8;
  local_98 = 0;
  local_90 = 0;
  local_60 = 0;
  local_5c = 0;
  local_6c = 0;
  local_68 = 0;
  local_114 = (undefined1 *)0x4fa3c5;
  local_94 = local_b0;
  FUN_004e7090();
  local_10c = (float *)-local_9c;
  local_110 = (undefined1 *)-local_a0;
  local_114 = (undefined1 *)-local_a4;
  piStack_118 = (int *)0x4fa3ee;
  FUN_00422b80();
  local_10c = (float *)&local_d8;
  local_110 = local_3c;
  local_114 = (undefined1 *)0x4fa402;
  FUN_004e7090();
  local_10c = &local_bc;
  local_110 = local_24;
  local_114 = (undefined1 *)0x4fa416;
  FUN_004e7090();
  local_10c = (float *)-local_b4;
  local_110 = (undefined1 *)-local_b8;
  local_114 = (undefined1 *)-local_bc;
  piStack_118 = (int *)0x4fa43f;
  FUN_00422b80();
  local_10c = (float *)&local_d8;
  local_110 = local_c;
  local_114 = (undefined1 *)0x4fa453;
  FUN_004e7090();
  if (DAT_00674f50 == (int *)0x0) {
    local_10c = (float *)0x4fa461;
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  local_10c = &local_b0;
  local_110 = (undefined1 *)param_2;
  local_114 = local_18;
  puStack_11c = (uint *)0x4fa47a;
  piStack_118 = DAT_00674f50;
  (**(code **)(*DAT_00674f50 + 0x28))();
  puStack_11c = (uint *)-local_b8;
  fStack_120 = -local_bc;
  puStack_124 = (undefined1 *)-local_c0;
  piStack_128 = (int *)0x4fa4a3;
  FUN_00422b80();
  if (DAT_00674f50 == (int *)0x0) {
    puStack_11c = (uint *)0x4fa4b1;
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  puStack_11c = &uStack_e8;
  fStack_120 = (float)param_2;
  puStack_124 = auStack_40;
  piStack_128 = DAT_00674f50;
  (**(code **)(*DAT_00674f50 + 0x28))();
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  pfVar22 = &local_a4;
  piVar21 = DAT_00674f50;
  iVar23 = param_2;
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,pfVar22,param_2,&local_b8);
  FUN_00422b80(-local_c8,-local_c4,-local_c0);
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,&uStack_78,param_2,&stack0xfffffef8);
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,&local_b8,param_2,&local_a0);
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,&piStack_128,param_2,&local_bc);
  if (*(int *)(*(int *)(param_1 + 0x6c) + 8) == 1) {
    uVar16 = 0;
    uVar17 = 0x3f000000;
  }
  else {
    uVar16 = 0x3f000000;
    uVar17 = 0x3f800000;
  }
  if (*(int *)(*(int *)(param_1 + 0x6c) + 0xc) == 1) {
    uVar15 = 0;
    uVar19 = 0x3ee66666;
  }
  else {
    uVar15 = 0x3f0ccccd;
    uVar19 = 0x3f800000;
  }
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
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
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
  *(int **)(DAT_00674c80 + DAT_00674c84 * 0x18) = piStack_128;
  *(undefined1 **)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = puStack_124;
  *(float *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = fStack_120;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  iVar8 = DAT_00674c84;
  uVar13 = DAT_00674c84 - 1;
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar16;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3f000000;
  uVar16 = _DAT_00674cb4;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = iVar8 + 2;
      FUN_0046ecd0();
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar9 = 6; iVar8 = DAT_00674c84, iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    DAT_00674ca8 = DAT_00674ca8 + 1;
  }
  *(undefined1 *)(DAT_00674c80 + 0xe + iVar8 * 0x18) = DAT_00674cac;
  *(undefined1 *)(DAT_00674c80 + 0xd + DAT_00674c84 * 0x18) = DAT_00674cad;
  *(undefined1 *)(DAT_00674c80 + 0xc + DAT_00674c84 * 0x18) = DAT_00674cae;
  *(undefined1 *)(DAT_00674c80 + 0xf + DAT_00674c84 * 0x18) = DAT_00674caf;
  *(undefined4 *)(DAT_00674c80 + 0x10 + DAT_00674c84 * 0x18) = _DAT_00674cb0;
  *(float *)(DAT_00674c80 + 0x14 + DAT_00674c84 * 0x18) = _DAT_00674cb4;
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = uStack_78;
  *(undefined4 *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = uStack_74;
  *(undefined4 *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = uStack_70;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  _DAT_00674cb4 = (float)uVar17;
  uVar20 = DAT_00674c84 - 1;
  _DAT_00674cb0 = 0x3f000000;
  uVar17 = _DAT_00674cb4;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = DAT_00674c84 + 2;
      FUN_0046ecd0();
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
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
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = uStack_e4;
  *(float *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = local_e0;
  *(undefined4 *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = uStack_dc;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  _DAT_00674cb4 = (float)uVar17;
  uVar14 = DAT_00674c84 - 1;
  _DAT_00674cb0 = 0x3f800000;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = DAT_00674c84 + 2;
      FUN_0046ecd0();
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
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
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = local_90;
  *(undefined4 *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = uStack_8c;
  *(undefined4 *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = uStack_88;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  _DAT_00674cb4 = (float)uVar16;
  uVar18 = DAT_00674c84 - 1;
  _DAT_00674cb0 = 0x3f800000;
  if (DAT_00674ca5 != '\0') {
    if (((byte)DAT_00674ca8 & 3) == 3) {
      DAT_00674c84 = DAT_00674c84 + 2;
      FUN_0046ecd0();
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -0xf) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -6) * 8);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = (undefined4 *)(DAT_00674c80 + (DAT_00674c84 * 3 + -9) * 8);
      puVar12 = (undefined4 *)(DAT_00674c80 + -0x18 + DAT_00674c84 * 0x18);
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
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
  *(undefined4 *)(DAT_00674c80 + DAT_00674c84 * 0x18) = local_a8;
  *(float *)(DAT_00674c80 + 4 + DAT_00674c84 * 0x18) = local_a4;
  *(float *)(DAT_00674c80 + 8 + DAT_00674c84 * 0x18) = local_a0;
  DAT_00674c84 = DAT_00674c84 + 1;
  FUN_0046ecd0();
  sVar10 = (short)DAT_00674c84 + -1;
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar15;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0;
  uVar16 = _DAT_00674cb4;
  uVar2 = FUN_0046eab0(piStack_128,puStack_124,fStack_120);
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar19;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3e800000;
  uVar17 = _DAT_00674cb4;
  uVar3 = FUN_0046eab0(local_d8,uStack_d4,uStack_d0);
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar17;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3e800000;
  uStack_e8 = FUN_0046eab0(piVar21,pfVar22,iVar23);
  DAT_00674cac = ftol();
  DAT_00674cad = ftol();
  DAT_00674cae = ftol();
  _DAT_00674cb4 = (float)uVar16;
  DAT_00674caf = 0xff;
  _DAT_00674cb0 = 0x3e800000;
  uVar4 = FUN_0046eab0(local_b4,local_b0,local_ac);
  uVar5 = FUN_0046eab0(local_9c,local_98,local_94);
  uVar6 = FUN_0046eab0(uStack_84,uStack_80,uStack_7c);
  uVar7 = FUN_0046eab0(local_6c,local_68,local_64);
  FUN_004fcb40(3);
  *(short *)(DAT_00674c8c + DAT_00674c90 * 2) = (short)uVar13;
  DAT_00674c90 = DAT_00674c90 + 1;
  *(short *)(DAT_00674c8c + DAT_00674c90 * 2) = (short)uVar20;
  DAT_00674c90 = DAT_00674c90 + 1;
  *(short *)(DAT_00674c8c + DAT_00674c90 * 2) = (short)uVar14;
  uVar13 = uVar13 & 0xffff;
  DAT_00674c90 = DAT_00674c90 + 1;
  FUN_004fc9a0(uVar13,uVar18 & 0xffff,uVar14 & 0xffff);
  FUN_004fc9a0(uVar13,uVar18 & 0xffff,sVar10);
  FUN_004fc9a0(uVar13,uVar20 & 0xffff,sVar10);
  uVar3 = uVar3 & 0xffff;
  uVar2 = uVar2 & 0xffff;
  FUN_004fc9a0(uVar2,uVar3,uVar4 & 0xffff);
  FUN_004fc9a0(uVar2,uVar3,uVar5 & 0xffff);
  uVar6 = uVar6 & 0xffff;
  FUN_004fc9a0(uVar2,uVar3,uVar6);
  uVar7 = uVar7 & 0xffff;
  FUN_004fc9a0(uVar2,uVar3,uVar7);
  uVar13 = uStack_e8 & 0xffff;
  FUN_004fc9a0(uVar2,uVar13,uVar4 & 0xffff);
  FUN_004fc9a0(uVar2,uVar13,uVar5 & 0xffff);
  FUN_004fc9a0(uVar2,uVar13,uVar6);
  FUN_004fc9a0(uVar2,uVar13,uVar7);
  return 1;
}

