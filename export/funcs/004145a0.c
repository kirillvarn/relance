
int __fastcall FUN_004145a0(int param_1)

{
  if (*(int *)(param_1 + 0x28) != DAT_006105b0) {
    FUN_004155c0();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
}

