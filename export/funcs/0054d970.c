
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054d970(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  pfVar1 = (float *)(param_1 + 0xc);
  pfVar4 = (float *)(param_1 + 0x18);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *pfVar1 = *(float *)(param_1 + 0x24) * *param_2;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x28) * fVar2;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x2c) * fVar3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  *pfVar4 = *param_3 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x28) * fVar2;
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x2c) * fVar3;
  fVar2 = _DAT_005c75dc;
  if (*pfVar1 < _DAT_005c75dc) {
    fVar2 = *pfVar1;
  }
  *pfVar1 = fVar2;
  fVar2 = _DAT_005c75dc;
  if (*(float *)(param_1 + 0x10) < _DAT_005c75dc) {
    fVar2 = *(float *)(param_1 + 0x10);
  }
  *(float *)(param_1 + 0x10) = fVar2;
  fVar2 = _DAT_005c75dc;
  if (*(float *)(param_1 + 0x14) < _DAT_005c75dc) {
    fVar2 = *(float *)(param_1 + 0x14);
  }
  *(float *)(param_1 + 0x14) = fVar2;
  fVar2 = _DAT_005c75dc;
  if (*pfVar4 < _DAT_005c75dc) {
    fVar2 = *pfVar4;
  }
  *pfVar4 = fVar2;
  fVar2 = _DAT_005c75dc;
  if (*(float *)(param_1 + 0x1c) < _DAT_005c75dc) {
    fVar2 = *(float *)(param_1 + 0x1c);
  }
  *(float *)(param_1 + 0x1c) = fVar2;
  if (_DAT_005c75dc <= *(float *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}

