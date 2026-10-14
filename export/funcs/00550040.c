
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00550040(undefined4 *param_1,undefined4 *param_2,float param_3,float *param_4,float *param_5,
            int param_6,int param_7)

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
  int iVar10;
  int iVar11;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  iVar10 = rand();
  param_1[6] = ((float)iVar10 * _DAT_005caeec * (float)_DAT_005e0bd8 + (float)_DAT_005e0bd0) *
               param_3;
  fVar1 = *param_5;
  fVar2 = *param_4;
  fVar3 = param_5[1];
  fVar4 = param_4[1];
  fVar5 = param_5[2];
  fVar6 = param_4[2];
  iVar10 = rand();
  fVar9 = (float)iVar10 * _DAT_005caeec;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  param_1[3] = (fVar1 - fVar2) * fVar9 + *param_4;
  param_1[4] = (fVar3 - fVar4) * fVar9 + fVar7;
  param_1[5] = (fVar5 - fVar6) * fVar9 + fVar8;
  iVar10 = rand();
  param_1[7] = (int)(iVar10 * param_7 + (iVar10 * param_7 >> 0x1f & 0x7fffU)) >> 0xf;
  iVar10 = rand();
  iVar11 = 0;
  fVar1 = _DAT_005c7474;
  if (0 < param_7) {
    do {
      fVar1 = fVar1 + *(float *)(param_6 + iVar11 * 4);
      if ((float)iVar10 * _DAT_005caeec < fVar1) {
        param_1[7] = iVar11;
        break;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_7);
  }
  param_1[0x15] = 0;
  param_1[0xe] = 0xbf800000;
  return;
}

