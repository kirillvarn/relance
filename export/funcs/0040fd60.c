
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040fd60(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  *(int *)(param_1 + 0xac) = *param_2;
  *(int *)(param_1 + 0xb0) = param_2[1];
  *(int *)(param_1 + 0xb4) = param_2[2];
  *(int *)(param_1 + 0xb8) = param_2[3];
  iVar2 = *(int *)(param_1 + 0xac);
  fVar4 = (float)((*(int *)(param_1 + 0xb4) - iVar2) + 1);
  fVar1 = (float)((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb0)) + 1);
  fVar3 = fVar4 / fVar1;
  *(float *)(param_1 + 0xa0) = fVar3;
  fVar4 = fVar4 * (float)_DAT_005c75e8;
  *(float *)(param_1 + 0x70) = fVar4;
  fVar1 = fVar1 * (float)_DAT_005c75e8;
  *(float *)(param_1 + 0x74) = fVar1;
  *(float *)(param_1 + 0x68) = (float)iVar2 + fVar4;
  *(float *)(param_1 + 0x6c) = (float)*(int *)(param_1 + 0xb0) + fVar1;
  fVar1 = *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0x98) = fVar1;
  fVar5 = (float10)fptan((float10)fVar1 * (float10)_DAT_005c77f4);
  fVar6 = fVar5 / (float10)fVar3;
  fVar1 = (float)fVar6;
  fVar6 = (float10)fpatan(fVar6,(float10)1);
  *(float *)(param_1 + 0x9c) = (float)(fVar6 * (float10)_DAT_005c8928);
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(float *)(param_1 + 0x88) = (float)fVar5;
  fVar3 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88) +
               *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x84) +
               *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80));
  *(float *)(param_1 + 0x80) = fVar3 * *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x84) = fVar3 * *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x88) = fVar3 * *(float *)(param_1 + 0x88);
  if ((float10)_DAT_005c7474 < fVar5) {
    *(float *)(param_1 + 0x78) = (float)((float10)*(float *)(param_1 + 0x70) / fVar5);
  }
  *(float *)(param_1 + 0x94) = fVar1;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  fVar3 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94) +
               *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) +
               *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x8c));
  *(float *)(param_1 + 0x8c) = fVar3 * *(float *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x90) = fVar3 * *(float *)(param_1 + 0x90);
  *(float *)(param_1 + 0x94) = fVar3 * *(float *)(param_1 + 0x94);
  if (_DAT_005c7474 < fVar1) {
    *(float *)(param_1 + 0x7c) = -(*(float *)(param_1 + 0x74) / fVar1);
  }
  return;
}

