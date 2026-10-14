
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040fa10(int param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)_DAT_005c77f4;
  *(float *)(param_1 + 0x9c) = param_2;
  fVar2 = (float10)fptan((float10)param_2 * fVar2);
  fVar3 = fVar2 * (float10)*(float *)(param_1 + 0xa0);
  fVar4 = (float10)fpatan(fVar3,(float10)1);
  *(float *)(param_1 + 0x98) = (float)(fVar4 * (float10)_DAT_005c8928);
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(float *)(param_1 + 0x88) = (float)fVar3;
  fVar1 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88) +
               *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x84) +
               *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80));
  *(float *)(param_1 + 0x80) = fVar1 * *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x84) = fVar1 * *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x88) = fVar1 * *(float *)(param_1 + 0x88);
  if ((float10)_DAT_005c7474 < fVar3) {
    *(float *)(param_1 + 0x78) = (float)((float10)*(float *)(param_1 + 0x70) / fVar3);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(float *)(param_1 + 0x94) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  fVar1 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94) +
               *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) +
               *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x8c));
  *(float *)(param_1 + 0x8c) = fVar1 * *(float *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x90) = fVar1 * *(float *)(param_1 + 0x90);
  *(float *)(param_1 + 0x94) = fVar1 * *(float *)(param_1 + 0x94);
  if ((float10)_DAT_005c7474 < fVar2) {
    *(float *)(param_1 + 0x7c) = (float)-((float10)*(float *)(param_1 + 0x74) / fVar2);
  }
  return;
}

