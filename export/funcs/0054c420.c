
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0054c420(float *param_1,float *param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  
  bVar6 = false;
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar4 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
  if (fVar4 <= param_4) {
    if (fVar4 < param_3) {
      param_1[0xd] = 0.0;
      bVar6 = true;
      goto LAB_0054c4cd;
    }
    fVar5 = fVar4 - param_3;
    param_4 = param_4 - param_3;
  }
  else {
    if (fVar4 < param_5) {
      param_1[0xd] = 1.0;
      goto LAB_0054c4cd;
    }
    if (param_6 < fVar4) {
      param_1[0xd] = 0.0;
      goto LAB_0054c4cd;
    }
    fVar5 = param_6 - fVar4;
    param_4 = param_6 - param_5;
  }
  param_1[0xd] = fVar5 / param_4;
LAB_0054c4cd:
  if ((_DAT_005c7474 < param_1[0xd]) || (bVar6)) {
    fVar4 = (float)_DAT_005c89b8 / SQRT(fVar4);
    fVar1 = fVar1 * fVar4 * param_1[4] + fVar2 * fVar4 * param_1[5] + fVar3 * fVar4 * param_1[6];
    fVar2 = ABS(fVar1);
    *(bool *)(param_1 + 0xe) = _DAT_005c7474 < fVar1;
    if (fVar2 < _DAT_005d3e08) {
      param_1[0xd] = 0.0;
      return;
    }
    if (fVar2 < _DAT_005c75e0) {
      param_1[0xd] = (fVar2 - _DAT_005d3e08) * param_1[0xd] * _DAT_005e0a60;
      return;
    }
  }
  return;
}

