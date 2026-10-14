
int __fastcall FUN_00587050(int param_1)

{
  if (*(int *)(param_1 + 0x564) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x564) >> 5;
}

