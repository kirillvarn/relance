
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00556710(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)fpatan((float10)*(float *)(param_1 + 0x28),(float10)1);
  *(float *)(param_1 + 0x18) = (float)(fVar2 * (float10)_DAT_005c8928);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  fVar1 = _DAT_005c75dc /
          SQRT(*(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x54) +
               *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50) +
               *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c));
  *(float *)(param_1 + 0x4c) = fVar1 * *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x50) = fVar1 * *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x54) = fVar1 * *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x3c) = -(*(float *)(param_1 + 0x34) / *(float *)(param_1 + 0x28));
  return;
}

