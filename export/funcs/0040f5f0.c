
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040f5f0(int param_1,char *param_2,char *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  
  iVar3 = stricmp(param_2,"fovx");
  if (iVar3 == 0) {
    dVar6 = atof(param_3);
    fVar4 = (float10)_DAT_005c75e8;
    *(float *)(param_1 + 0x98) = (float)((float10)dVar6 * fVar4);
    fVar4 = (float10)fptan((float10)dVar6 * fVar4 * (float10)_DAT_005c77f4);
    fVar5 = fVar4 / (float10)*(float *)(param_1 + 0xa0);
    param_3 = (char *)(float)fVar5;
    fVar5 = (float10)fpatan(fVar5,(float10)1);
    *(float *)(param_1 + 0x9c) = (float)(fVar5 * (float10)_DAT_005c8928);
    *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(float *)(param_1 + 0x88) = (float)fVar4;
    fVar2 = _DAT_005c75dc /
            SQRT(*(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88) +
                 *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x84) +
                 *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80));
    *(float *)(param_1 + 0x80) = fVar2 * *(float *)(param_1 + 0x80);
    *(float *)(param_1 + 0x84) = fVar2 * *(float *)(param_1 + 0x84);
    *(float *)(param_1 + 0x88) = fVar2 * *(float *)(param_1 + 0x88);
    if ((float10)_DAT_005c7474 < fVar4) {
      *(float *)(param_1 + 0x78) = (float)((float10)*(float *)(param_1 + 0x70) / fVar4);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
    *(char **)(param_1 + 0x94) = param_3;
    fVar2 = _DAT_005c75dc /
            SQRT(*(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94) +
                 *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) +
                 *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x8c));
    *(float *)(param_1 + 0x8c) = fVar2 * *(float *)(param_1 + 0x8c);
    *(float *)(param_1 + 0x90) = fVar2 * *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x94) = fVar2 * *(float *)(param_1 + 0x94);
  }
  else {
    iVar3 = stricmp(param_2,"fovy");
    if (iVar3 != 0) {
      iVar3 = stricmp(param_2,"znear");
      if (iVar3 == 0) {
        dVar6 = atof(param_3);
        *(float *)(param_1 + 0xa4) = (float)dVar6;
        return 1;
      }
      iVar3 = stricmp(param_2,"zfar");
      if (iVar3 == 0) {
        dVar6 = atof(param_3);
        *(float *)(param_1 + 0xa8) = (float)dVar6;
        return 1;
      }
      return 0;
    }
    dVar6 = atof(param_3);
    fVar4 = (float10)_DAT_005c75e8;
    pfVar1 = (float *)(param_1 + 0x80);
    *(float *)(param_1 + 0x9c) = (float)((float10)dVar6 * fVar4);
    fVar4 = (float10)fptan((float10)dVar6 * fVar4 * (float10)_DAT_005c77f4);
    param_3 = (char *)(float)fVar4;
    fVar4 = fVar4 * (float10)*(float *)(param_1 + 0xa0);
    fVar5 = (float10)fpatan(fVar4,(float10)1);
    *(float *)(param_1 + 0x98) = (float)(fVar5 * (float10)_DAT_005c8928);
    *pfVar1 = 1.0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(float *)(param_1 + 0x88) = (float)fVar4;
    fVar5 = (float10)FUN_00410190();
    fVar5 = (float10)_DAT_005c75dc / fVar5;
    *pfVar1 = (float)(fVar5 * (float10)*pfVar1);
    *(float *)(param_1 + 0x84) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x84));
    *(float *)(param_1 + 0x88) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x88));
    if (_DAT_005c7474 < (float)fVar4) {
      *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x70) / (float)fVar4;
    }
    pfVar1 = (float *)(param_1 + 0x8c);
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
    *(char **)(param_1 + 0x94) = param_3;
    fVar4 = (float10)FUN_00410190();
    fVar4 = (float10)_DAT_005c75dc / fVar4;
    *pfVar1 = (float)(fVar4 * (float10)*pfVar1);
    *(float *)(param_1 + 0x90) = (float)(fVar4 * (float10)*(float *)(param_1 + 0x90));
    *(float *)(param_1 + 0x94) = (float)(fVar4 * (float10)*(float *)(param_1 + 0x94));
  }
  if ((float)param_3 <= _DAT_005c7474) {
    return 1;
  }
  *(float *)(param_1 + 0x7c) = -(*(float *)(param_1 + 0x74) / (float)param_3);
  return 1;
}

