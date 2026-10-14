
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042e920(int param_1)

{
  if (*(float *)(param_1 + 0x60) < *(float *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (*(float *)(param_1 + 100) < *(float *)(param_1 + 0x6c)) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x6c);
    }
  }
  else if ((*(int *)(param_1 + 4) == 1) && (*(float *)(param_1 + 100) < *(float *)(param_1 + 0x70)))
  {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x70);
  }
  if (*(float *)(param_1 + 0x74) < *(float *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x6c);
  }
  if (_DAT_005c99c8 <= *(float *)(param_1 + 0x58)) {
    if (_DAT_005c75dc < *(float *)(param_1 + 0x58)) {
      *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0x3c23d70a;
  }
  if (*(float *)(param_1 + 0x5c) < _DAT_005c99c8) {
    *(undefined4 *)(param_1 + 0x5c) = 0x3c23d70a;
    return;
  }
  if (_DAT_005c75dc < *(float *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  }
  return;
}

