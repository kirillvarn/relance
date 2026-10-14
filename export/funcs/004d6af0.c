
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d6af0(int param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  cVar1 = FUN_0041dd90();
  if (cVar1 != '\0') {
    iVar2 = FUN_0054baf0();
    if (iVar2 != 0) {
      FUN_005a0c30(0);
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 1;
      goto LAB_004d6b1f;
    }
  }
  FUN_005a0c30(1);
LAB_004d6b1f:
  fVar3 = (float10)FUN_0042d680();
  if (*(float *)(param_1 + 0x380) <= _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x380) = 0;
  }
  else {
    *(float *)(param_1 + 0x380) = (float)((float10)*(float *)(param_1 + 0x380) - fVar3);
  }
  if (*(float *)(param_1 + 0x354) <= _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x354) = 0;
  }
  else {
    *(float *)(param_1 + 0x354) = (float)((float10)*(float *)(param_1 + 0x354) - fVar3);
  }
  if (*(float *)(param_1 + 0x3ac) <= _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x3ac) = 0;
  }
  else {
    *(float *)(param_1 + 0x3ac) = (float)((float10)*(float *)(param_1 + 0x3ac) - fVar3);
  }
  if (_DAT_005c7474 < *(float *)(param_1 + 0x3d8)) {
    *(float *)(param_1 + 0x3d8) = (float)((float10)*(float *)(param_1 + 0x3d8) - fVar3);
    FUN_005a17b0();
    return;
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  FUN_005a17b0();
  return;
}

