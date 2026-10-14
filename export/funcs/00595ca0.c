
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00595ca0(int param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0x3c4) < *(float *)(param_1 + 0x3c0)) {
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x3c4);
  }
  fVar1 = *(float *)(param_1 + 0x3c4) - *(float *)(param_1 + 0x3c0);
  if (fVar1 < *(float *)(param_1 + 0x3cc)) {
    if (*(char *)(param_1 + 0x3b4) == '\0') {
      *(float *)(param_1 + 0x3cc) = fVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x3cc) = 0x3f800000;
    }
  }
  if (*(float *)(param_1 + 0x3cc) < _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x3cc) = 0;
  }
  if (*(float *)(param_1 + 0x3c8) < *(float *)(param_1 + 0x3c0)) {
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x3c0);
  }
  fVar1 = *(float *)(param_1 + 0x3c4) - *(float *)(param_1 + 0x3cc);
  if (*(float *)(param_1 + 0x3c8) <= fVar1) {
    return;
  }
  *(float *)(param_1 + 0x3c8) = fVar1;
  return;
}

