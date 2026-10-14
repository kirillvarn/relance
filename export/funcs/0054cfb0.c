
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054cfb0(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int iStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int aiStack_a0 [18];
  float afStack_58 [2];
  float afStack_50 [20];
  
  puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 0x10))();
  uStack_dc = *puVar2;
  uStack_d8 = puVar2[1];
  uStack_d4 = puVar2[2];
  fVar3 = (float)FUN_00537f40(aiStack_a0,0x10,&uStack_dc,0x42c80000,0);
  if (fVar3 != 0.0) {
    fStack_e4 = fVar3;
    pbVar4 = (byte *)FUN_00555470();
    iVar7 = 0;
    fStack_100 = ((float)*pbVar4 * _DAT_005c7f68 + *(float *)(param_1 + 0x30)) *
                 *(float *)(param_1 + 0x18);
    fStack_fc = ((float)pbVar4[1] * _DAT_005c7f68 + *(float *)(param_1 + 0x34)) *
                *(float *)(param_1 + 0x1c);
    fStack_f8 = ((float)pbVar4[2] * _DAT_005c7f68 + *(float *)(param_1 + 0x38)) *
                *(float *)(param_1 + 0x20);
    iVar5 = 0;
    iStack_f4 = 0;
    if (0 < (int)fVar3) {
      pfVar6 = afStack_58;
      do {
        if (3 < iVar5) break;
        pfVar8 = pfVar6;
        if (*(int *)(aiStack_a0[iVar7] + 0xb0) == 3) {
          pfVar1 = pfVar6 + -2;
          FUN_00410960(&uStack_dc,pfVar1,&fStack_100,pfVar6 + 1);
          iVar5 = iStack_f4 + 1;
          pfVar8 = pfVar6 + 6;
          fVar3 = _DAT_005c75dc /
                  SQRT(*pfVar6 * *pfVar6 + pfVar6[-1] * pfVar6[-1] + *pfVar1 * *pfVar1);
          *pfVar1 = fVar3 * *pfVar1;
          pfVar6[-1] = fVar3 * pfVar6[-1];
          *pfVar6 = fVar3 * *pfVar6;
          fVar3 = fStack_e4;
          iStack_f4 = iVar5;
        }
        iVar7 = iVar7 + 1;
        pfVar6 = pfVar8;
      } while (iVar7 < (int)fVar3);
    }
    fVar3 = *(float *)(param_1 + 8);
    fStack_100 = fStack_100 * fVar3;
    fStack_fc = fStack_fc * fVar3;
    fStack_f8 = fStack_f8 * fVar3;
    if (3 < iVar5) {
      iStack_f4 = 4;
    }
    iStack_110 = 0;
    if (0 < *(int *)(param_1 + 0x44)) {
      pfVar6 = (float *)(*(int *)(param_1 + 0x3c) + 0x14);
      do {
        fStack_f0 = fStack_100;
        fStack_10c = fStack_100;
        fStack_ec = fStack_fc;
        fStack_e8 = fStack_f8;
        fStack_108 = fStack_fc;
        fStack_104 = fStack_f8;
        if (0 < iStack_f4) {
          pfVar8 = afStack_50;
          fStack_e4 = -_DAT_006140a4;
          iVar5 = iStack_f4;
          do {
            fStack_e0 = pfVar8[-3] * *pfVar6 + pfVar8[-2] * pfVar6[1] + pfVar8[-4] * pfVar6[-1];
            if (fStack_e4 < fStack_e0) {
              fVar3 = (_DAT_006140a4 + fStack_e0) / (_DAT_006140a4 + _DAT_005c75dc);
              FUN_00422b80(pfVar8[-1] * *(float *)(param_1 + 0xc) * fVar3,
                           *(float *)(param_1 + 0x10) * *pfVar8 * fVar3,
                           *(float *)(param_1 + 0x14) * pfVar8[1] * fVar3);
              FUN_00422b80(fStack_ac + fStack_10c,fStack_a8 + fStack_108,fStack_a4 + fStack_104);
              fStack_10c = fStack_b8;
              fStack_108 = fStack_b4;
              fStack_104 = fStack_b0;
            }
            if (fStack_e4 < -fStack_e0) {
              fVar3 = (-fStack_e0 + _DAT_006140a4) / (_DAT_006140a4 + _DAT_005c75dc);
              FUN_00422b80(pfVar8[-1] * *(float *)(param_1 + 0xc) * fVar3,
                           *(float *)(param_1 + 0x10) * *pfVar8 * fVar3,
                           *(float *)(param_1 + 0x14) * pfVar8[1] * fVar3);
              FUN_00422b80(fStack_d0 + fStack_f0,fStack_cc + fStack_ec,fStack_c8 + fStack_e8);
              fStack_f0 = fStack_c4;
              fStack_ec = fStack_c0;
              fStack_e8 = fStack_bc;
            }
            pfVar8 = pfVar8 + 6;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (_DAT_005c75dc <= fStack_f0) {
          fStack_f0 = 1.0;
        }
        if (_DAT_005c75dc <= fStack_ec) {
          fStack_ec = 1.0;
        }
        if (_DAT_005c75dc <= fStack_e8) {
          fStack_e8 = 1.0;
        }
        if (_DAT_005c75dc <= fStack_10c) {
          fStack_10c = 1.0;
        }
        if (_DAT_005c75dc <= fStack_108) {
          fStack_108 = 1.0;
        }
        if (_DAT_005c75dc <= fStack_104) {
          fStack_104 = 1.0;
        }
        pfVar6[2] = fStack_f0;
        pfVar6[3] = fStack_ec;
        pfVar6[4] = fStack_e8;
        pfVar6[5] = fStack_10c;
        pfVar6[6] = fStack_108;
        pfVar6[7] = fStack_104;
        iStack_110 = iStack_110 + 1;
        pfVar6 = pfVar6 + 0xf;
      } while (iStack_110 < *(int *)(param_1 + 0x44));
    }
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  return;
}

