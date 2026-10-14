
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005a2a40(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  short *psVar9;
  float10 fVar10;
  float10 fVar11;
  
  if ((0x17ff < *(int *)(param_1 + 0x20) + 0xc) || (0xbff < *(int *)(param_1 + 0x1c) + 8)) {
    FUN_005a2ee0();
    FUN_005a2ee0();
    if (DAT_0067ddb4 != '\0') {
      DAT_0067ddb4 = '\0';
      _DAT_0067ddac = 0;
      _DAT_0067ddb0 = 0;
      _DAT_0067dda4 = DAT_0067dd9c;
      _DAT_0067dda8 = DAT_0067dda0;
    }
    if (DAT_0067dd8c != '\0') {
      DAT_0067dd8c = '\0';
      _DAT_0067dd84 = 0;
      _DAT_0067dd88 = 0;
      _DAT_0067dd7c = DAT_0067dd74;
      _DAT_0067dd80 = DAT_0067dd78;
    }
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0xc;
  **(undefined2 **)(param_1 + 0x18) = *(undefined2 *)(param_1 + 0x1c);
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 1;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 2;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 2;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 3;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 1;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 4;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 5;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 6;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 6;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 7;
  psVar9 = (short *)(*(int *)(param_1 + 0x18) + 2);
  *(short **)(param_1 + 0x18) = psVar9;
  *psVar9 = *(short *)(param_1 + 0x1c) + 5;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 8;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar11 = (float10)fpatan((float10)*param_3 - (float10)*param_2,
                           (float10)param_3[1] - (float10)param_2[1]);
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  pfVar7 = *(float **)(param_1 + 0x14);
  *pfVar7 = *param_2;
  pfVar7[1] = param_2[1];
  pfVar7[2] = param_2[2];
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = param_4;
  iVar8 = *(int *)(param_1 + 0x14);
  *(float **)(param_1 + 0x14) = (float *)(iVar8 + 0x10);
  fVar10 = (float10)fsin(fVar11 + (float10)_DAT_005d3e88);
  fVar11 = (float10)fcos(fVar11 + (float10)_DAT_005d3e88);
  fVar10 = fVar10 * (float10)param_6;
  *(float *)(iVar8 + 0x10) = (float)((float10)fVar1 + fVar10);
  param_6 = (float)fVar11 * param_6;
  *(float *)(iVar8 + 0x14) = fVar2 + param_6;
  *(float *)(iVar8 + 0x18) = fVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = param_5;
  iVar8 = *(int *)(param_1 + 0x14);
  *(float **)(param_1 + 0x14) = (float *)(iVar8 + 0x10);
  *(float *)(iVar8 + 0x10) = *param_3;
  *(float *)(iVar8 + 0x14) = param_3[1];
  *(float *)(iVar8 + 0x18) = param_3[2];
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = param_4;
  iVar8 = *(int *)(param_1 + 0x14);
  *(float **)(param_1 + 0x14) = (float *)(iVar8 + 0x10);
  *(float *)(iVar8 + 0x10) = (float)(fVar10 + (float10)fVar4);
  *(float *)(iVar8 + 0x14) = fVar5 + param_6;
  *(float *)(iVar8 + 0x18) = fVar6;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = param_5;
  iVar8 = *(int *)(param_1 + 0x14);
  *(float **)(param_1 + 0x14) = (float *)(iVar8 + 0x10);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  *(float *)(iVar8 + 0x10) = *param_2;
  *(float *)(iVar8 + 0x14) = param_2[1];
  *(float *)(iVar8 + 0x18) = param_2[2];
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = param_4;
  iVar8 = *(int *)(param_1 + 0x14);
  *(float **)(param_1 + 0x14) = (float *)(iVar8 + 0x10);
  *(float *)(iVar8 + 0x10) = (float)((float10)fVar1 - fVar10);
  *(float *)(iVar8 + 0x14) = fVar2 - param_6;
  *(float *)(iVar8 + 0x18) = fVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = param_5;
  iVar8 = *(int *)(param_1 + 0x14);
  *(float **)(param_1 + 0x14) = (float *)(iVar8 + 0x10);
  *(float *)(iVar8 + 0x10) = *param_3;
  *(float *)(iVar8 + 0x14) = param_3[1];
  *(float *)(iVar8 + 0x18) = param_3[2];
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = param_4;
  iVar8 = *(int *)(param_1 + 0x14);
  *(float **)(param_1 + 0x14) = (float *)(iVar8 + 0x10);
  *(float *)(iVar8 + 0x10) = (float)((float10)fVar4 - fVar10);
  *(float *)(iVar8 + 0x14) = fVar5 - param_6;
  *(float *)(iVar8 + 0x18) = fVar6;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = param_5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x10;
  return;
}

