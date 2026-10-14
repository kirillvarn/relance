
int __thiscall FUN_0058d0b0(int param_1,uint param_2)

{
  if ((*(int *)(param_1 + 0x4a4) != 0) &&
     (param_2 < (uint)(*(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2))) {
    return *(int *)(param_1 + 0x4c4) + param_2 * 0xc;
  }
  return 0;
}

