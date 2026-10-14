
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ce0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  
  piVar6 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
  iVar1 = *piVar6;
  iVar2 = piVar6[2];
  iVar3 = piVar6[3];
  fVar7 = (float10)fptan(((float10)(float)param_1 + (float10)(float)param_1) *
                         (float10)_DAT_005c901c);
  iVar4 = piVar6[1];
  param_1[9] = (int)(float)fVar7;
  fVar8 = (float10)fpatan(fVar7,(float10)1);
  param_1[5] = (int)(float)(fVar8 * (float10)_DAT_005c8928);
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = (int)(float)fVar7;
  fVar5 = _DAT_005c75dc /
          SQRT((float)param_1[0x12] * (float)param_1[0x12] +
               (float)param_1[0x11] * (float)param_1[0x11] +
               (float)param_1[0x10] * (float)param_1[0x10]);
  param_1[0x10] = (int)(fVar5 * (float)param_1[0x10]);
  param_1[0x11] = (int)(fVar5 * (float)param_1[0x11]);
  param_1[0x12] = (int)(fVar5 * (float)param_1[0x12]);
  param_1[0xe] = (int)((float)param_1[0xc] / (float)param_1[9]);
  fVar7 = (float10)((iVar2 - iVar1) + 1) / (float10)((iVar3 - iVar4) + 1);
  param_1[0xb] = (int)(float)fVar7;
  fVar7 = (float10)(float)param_1[9] / fVar7;
  param_1[10] = (int)(float)fVar7;
  fVar8 = (float10)fpatan(fVar7,(float10)1);
  param_1[6] = (int)(float)(fVar8 * (float10)_DAT_005c8928);
  param_1[0x13] = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = (int)(float)fVar7;
  fVar5 = _DAT_005c75dc /
          SQRT((float)param_1[0x15] * (float)param_1[0x15] +
               (float)param_1[0x14] * (float)param_1[0x14] +
               (float)param_1[0x13] * (float)param_1[0x13]);
  param_1[0x13] = (int)(fVar5 * (float)param_1[0x13]);
  param_1[0x14] = (int)(fVar5 * (float)param_1[0x14]);
  param_1[0x15] = (int)(fVar5 * (float)param_1[0x15]);
  param_1[0xf] = (int)-((float)param_1[0xd] / (float)param_1[10]);
  return;
}

