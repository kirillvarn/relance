
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054fee0(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  pfVar1 = (float *)(param_1 + 0x4c);
  fVar2 = param_2[1];
  pfVar4 = (float *)(param_1 + 0x58);
  fVar3 = param_2[2];
  *pfVar1 = *(float *)(param_1 + 100) * *param_2;
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x68) * fVar2;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x6c) * fVar3;
  *pfVar4 = *param_3;
  *(float *)(param_1 + 0x5c) = param_3[1];
  *(float *)(param_1 + 0x60) = param_3[2];
  fVar2 = _DAT_005c75dc;
  if (*pfVar1 < _DAT_005c75dc) {
    fVar2 = *pfVar1;
  }
  *pfVar1 = fVar2;
  fVar2 = _DAT_005c75dc;
  if (*(float *)(param_1 + 0x50) < _DAT_005c75dc) {
    fVar2 = *(float *)(param_1 + 0x50);
  }
  *(float *)(param_1 + 0x50) = fVar2;
  fVar2 = _DAT_005c75dc;
  if (*(float *)(param_1 + 0x54) < _DAT_005c75dc) {
    fVar2 = *(float *)(param_1 + 0x54);
  }
  *(float *)(param_1 + 0x54) = fVar2;
  fVar2 = _DAT_005c75dc;
  if (*pfVar4 < _DAT_005c75dc) {
    fVar2 = *pfVar4;
  }
  *pfVar4 = fVar2;
  fVar2 = _DAT_005c75dc;
  if (*(float *)(param_1 + 0x5c) < _DAT_005c75dc) {
    fVar2 = *(float *)(param_1 + 0x5c);
  }
  *(float *)(param_1 + 0x5c) = fVar2;
  if (_DAT_005c75dc <= *(float *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}

