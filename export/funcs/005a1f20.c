
undefined4 __thiscall FUN_005a1f20(int param_1,int param_2)

{
  if (((param_2 != -1) && (param_2 < *(int *)(param_1 + 0x8a4))) && (param_2 < 0x100)) {
    return *(undefined4 *)(param_1 + 0x8c + param_2 * 4);
  }
  return 0;
}

