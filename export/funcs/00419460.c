
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00419460(char *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  double dVar5;
  
  if (*param_1 == '\0') {
    fVar1 = *(float *)(param_1 + 8);
    fVar2 = *(float *)(param_1 + 4);
    fVar3 = (param_2 - *(float *)(param_1 + 4)) / (fVar1 - fVar2);
    dVar5 = floor((double)fVar3);
    fVar4 = ABS((float10)fVar3 - (float10)dVar5) * (float10)(fVar1 - fVar2);
  }
  else {
    if (param_2 <= *(float *)(param_1 + 4)) {
      param_2 = *(float *)(param_1 + 4);
    }
    fVar4 = (float10)*(float *)(param_1 + 8) - (float10)_DAT_005c75f8;
    if ((float10)param_2 < fVar4) {
      return (float10)param_2;
    }
  }
  return fVar4;
}

