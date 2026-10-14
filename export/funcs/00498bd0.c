
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00498bd0(int param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined4 uVar20;
  float *pfVar21;
  undefined2 *puVar22;
  float *pfVar23;
  int iVar24;
  float10 fVar25;
  float10 fVar26;
  int iStack_78;
  int local_74;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x84c) == 0) {
    local_74 = 0;
  }
  else {
    local_74 = (*(int *)(param_1 + 0x850) - *(int *)(param_1 + 0x84c)) / 0x18;
  }
  if ((((*(float *)(param_1 + 0x46c) == *(float *)(param_1 + 0xd54)) &&
       (*(float *)(param_1 + 0x470) == *(float *)(param_1 + 0xd58))) &&
      (*(float *)(param_1 + 0x474) == *(float *)(param_1 + 0xd5c))) &&
     (*(float *)(param_1 + 0xd60) == *(float *)(param_1 + 0x3f8))) {
    uVar19 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
    if ((*(uint *)(param_1 + 0xd64) == uVar19) && (*(int *)(param_1 + 0xd68) == local_74)) {
      return uVar19 & 0xffffff00;
    }
  }
  *(float *)(param_1 + 0xd54) = *(float *)(param_1 + 0x46c);
  *(undefined4 *)(param_1 + 0xd60) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(param_1 + 0xd58) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0xd5c) = *(undefined4 *)(param_1 + 0x474);
  uVar20 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
  *(int *)(param_1 + 0xd68) = local_74;
  pfVar23 = (float *)(param_1 + 0x418);
  *(undefined4 *)(param_1 + 0xd48) = 0;
  *(undefined4 *)(param_1 + 0xd4c) = 0;
  fVar11 = *pfVar23 * _DAT_005c75e0;
  fVar12 = *(float *)(param_1 + 0x41c) * _DAT_005c75e0;
  fVar13 = *(float *)(param_1 + 0x420) * _DAT_005c75e0;
  puVar22 = *(undefined2 **)(param_1 + 0xd44);
  *(undefined4 *)(param_1 + 0xd64) = uVar20;
  pfVar21 = *(float **)(param_1 + 0xd40);
  fVar14 = *pfVar23 * _DAT_005c75e0;
  fVar15 = *(float *)(param_1 + 0x41c) * _DAT_005c75e0;
  fVar16 = *(float *)(param_1 + 0x420) * _DAT_005c75e0;
  fVar17 = *(float *)(param_1 + 0x3f8) - _DAT_005c75dc;
  fVar5 = *(float *)(param_1 + 0x46c);
  fVar6 = *(float *)(param_1 + 0x470);
  fVar7 = *(float *)(param_1 + 0x474);
  fVar1 = *(float *)(param_1 + 0x3f8);
  fVar8 = *pfVar23;
  fVar9 = *(float *)(param_1 + 0x41c);
  fVar10 = *(float *)(param_1 + 0x420);
  fVar2 = *(float *)(param_1 + 0x3f8);
  fVar18 = fVar17 * _DAT_005d3e98 * _DAT_005d3e94 + _DAT_005d3e90;
  if (0 < local_74) {
    iStack_78 = 0;
    do {
      fVar3 = *(float *)(param_1 + 0x4a8);
      pfVar23 = (float *)(*(int *)(param_1 + 0x84c) + iStack_78);
      fStack_18 = *pfVar23;
      fVar4 = *(float *)(param_1 + 0x4ac);
      fStack_10 = pfVar23[2];
      fStack_c = pfVar23[3];
      fStack_8 = pfVar23[4];
      fStack_4 = pfVar23[5];
      fStack_14 = pfVar23[1];
      iVar24 = 2;
      pfVar23 = &fStack_18;
      do {
        iVar24 = iVar24 + -1;
        *pfVar23 = fVar5 * fVar1 + (-fVar11 - fVar14 * fVar17) +
                   ((fVar3 + *pfVar23) / (fVar3 + fVar3)) * fVar8 * fVar2;
        pfVar23[1] = fVar6 * fVar1 + (-fVar12 - fVar15 * fVar17) +
                     ((float)_DAT_005c89b8 - (fVar4 + pfVar23[2]) / (fVar4 + fVar4)) * fVar9 * fVar2
        ;
        pfVar23[2] = fVar10 * fVar2 + fVar7 * fVar1 + (-fVar13 - fVar16 * fVar17);
        pfVar23 = pfVar23 + 3;
      } while (iVar24 != 0);
      fVar26 = (float10)fpatan((float10)fStack_c - (float10)fStack_18,
                               (float10)fStack_8 - (float10)fStack_14);
      *(int *)(param_1 + 0xd4c) = *(int *)(param_1 + 0xd4c) + 0xc;
      *puVar22 = *(undefined2 *)(param_1 + 0xd48);
      puVar22[1] = *(short *)(param_1 + 0xd48) + 1;
      puVar22[2] = *(short *)(param_1 + 0xd48) + 2;
      puVar22[3] = *(short *)(param_1 + 0xd48) + 2;
      puVar22[4] = *(short *)(param_1 + 0xd48) + 3;
      puVar22[5] = *(short *)(param_1 + 0xd48) + 1;
      puVar22[6] = *(short *)(param_1 + 0xd48) + 4;
      puVar22[7] = *(short *)(param_1 + 0xd48) + 5;
      puVar22[8] = *(short *)(param_1 + 0xd48) + 6;
      puVar22[9] = *(short *)(param_1 + 0xd48) + 6;
      fVar25 = (float10)fsin(fVar26 + (float10)_DAT_005d3e88);
      fVar26 = (float10)fcos(fVar26 + (float10)_DAT_005d3e88);
      fVar25 = fVar25 * (float10)fVar18;
      fVar3 = (float)fVar26 * fVar18;
      puVar22[10] = *(short *)(param_1 + 0xd48) + 7;
      puVar22[0xb] = *(short *)(param_1 + 0xd48) + 5;
      *(int *)(param_1 + 0xd48) = *(int *)(param_1 + 0xd48) + 8;
      pfVar21[3] = -NAN;
      pfVar21[4] = 0.5;
      pfVar21[5] = 0.0;
      *pfVar21 = fStack_18;
      pfVar21[1] = fStack_14;
      pfVar21[2] = fStack_10;
      pfVar21[9] = 2.3509886e-38;
      pfVar21[10] = 1.0;
      pfVar21[0xb] = 0.0;
      pfVar21[6] = (float)(fVar25 + (float10)fStack_18);
      pfVar21[7] = fStack_14 + fVar3;
      pfVar21[8] = fStack_10;
      pfVar21[0xf] = -NAN;
      pfVar21[0x10] = 0.5;
      pfVar21[0x11] = 1.0;
      pfVar21[0xc] = fStack_c;
      pfVar21[0xd] = fStack_8;
      pfVar21[0xe] = fStack_4;
      pfVar21[0x16] = 1.0;
      pfVar21[0x17] = 1.0;
      pfVar21[0x12] = (float)(fVar25 + (float10)fStack_c);
      pfVar21[0x13] = fStack_8 + fVar3;
      pfVar21[0x14] = fStack_4;
      pfVar21[0x15] = 2.3509886e-38;
      puVar22 = puVar22 + 0xc;
      pfVar21[0x1b] = -NAN;
      pfVar21[0x1c] = 0.5;
      pfVar21[0x1d] = 0.0;
      pfVar21[0x18] = fStack_18;
      pfVar21[0x19] = fStack_14;
      pfVar21[0x1a] = fStack_10;
      pfVar21[0x23] = 0.0;
      pfVar21[0x1e] = (float)(-fVar25 + (float10)fStack_18);
      pfVar21[0x1f] = fStack_14 + -fVar3;
      pfVar21[0x20] = fStack_10;
      pfVar21[0x22] = 1.0;
      pfVar21[0x21] = 2.3509886e-38;
      pfVar21[0x29] = 1.0;
      pfVar21[0x24] = fStack_c;
      pfVar21[0x25] = fStack_8;
      pfVar21[0x27] = -NAN;
      pfVar21[0x28] = 0.5;
      pfVar21[0x26] = fStack_4;
      pfVar21[0x2d] = 2.3509886e-38;
      pfVar21[0x2e] = 1.0;
      pfVar21[0x2f] = 1.0;
      pfVar21[0x2a] = (float)(-fVar25 + (float10)fStack_c);
      pfVar21[0x2b] = -fVar3 + fStack_8;
      pfVar21[0x2c] = fStack_4;
      iStack_78 = iStack_78 + 0x18;
      pfVar21 = pfVar21 + 0x30;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  return CONCAT31((int3)((uint)pfVar21 >> 8),1);
}

