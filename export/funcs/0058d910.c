
int __thiscall FUN_0058d910(int param_1,uint param_2)

{
  if ((*(int *)(param_1 + 0x55c) == 2) && (*(int *)(param_1 + 0x564) != 0)) {
    if (param_2 < (uint)((*(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x564)) / 100)) {
      return param_2 * 100 + *(int *)(param_1 + 0x564);
    }
  }
  return 0;
}

