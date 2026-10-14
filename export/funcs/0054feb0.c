
void __thiscall FUN_0054feb0(int param_1,float param_2,float param_3)

{
  if (param_2 < param_3) {
    *(float *)(param_1 + 0x44) = param_2;
    *(float *)(param_1 + 0x40) = param_3;
    return;
  }
  *(float *)(param_1 + 0x40) = param_2;
  *(float *)(param_1 + 0x44) = param_3;
  return;
}

