
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005566a0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)fpatan((float10)*(float *)(param_1 + 0x24),(float10)1);
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
  return;
}

