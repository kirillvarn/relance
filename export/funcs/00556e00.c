
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e00(int param_1,undefined4 param_2)

{
  float fVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  fVar2 = (float10)fptan(((float10)*(float *)(param_1 + 0x14) + (float10)*(float *)(param_1 + 0x14))
                         * (float10)_DAT_005c901c);
  *(float *)(param_1 + 0x24) = (float)fVar2;
  fVar2 = (float10)fpatan(fVar2,(float10)1);
  *(float *)(param_1 + 0x14) = (float)(fVar2 * (float10)_DAT_005c8928);
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x44) = 0;
  fVar1 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48) +
               *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44) +
               *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40));
  *(float *)(param_1 + 0x40) = fVar1 * *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = fVar1 * *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x48) = fVar1 * *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x24) / *(float *)(param_1 + 0x28);
  fVar2 = (float10)fptan(((float10)*(float *)(param_1 + 0x18) + (float10)*(float *)(param_1 + 0x18))
                         * (float10)_DAT_005c901c);
  *(float *)(param_1 + 0x28) = (float)fVar2;
  fVar2 = (float10)fpatan(fVar2,(float10)1);
  *(float *)(param_1 + 0x18) = (float)(fVar2 * (float10)_DAT_005c8928);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  fVar1 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c) +
               *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x54) +
               *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50));
  *(float *)(param_1 + 0x4c) = fVar1 * *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x50) = fVar1 * *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x54) = fVar1 * *(float *)(param_1 + 0x54);
  fVar1 = _DAT_005c75dc / *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x3c) = -(fVar1 * *(float *)(param_1 + 0x34));
  *(float *)(param_1 + 0x2c) = fVar1 * *(float *)(param_1 + 0x24);
  return;
}

