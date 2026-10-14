
float10 __fastcall FUN_00512620(int param_1)

{
  float10 fVar1;
  undefined4 local_4;
  
  fVar1 = (float10)*(float *)(*(int *)(param_1 + 0x10) + 0x24);
  local_4 = 0.0;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_4 = *(float *)(*(int *)(param_1 + 0xc) + 0x24);
  }
  if (fVar1 < (float10)local_4) {
    fVar1 = (float10)local_4;
  }
  return fVar1 * (float10)*(float *)(param_1 + 8);
}

