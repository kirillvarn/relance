
int __thiscall FUN_0058d960(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x55c) == 3) {
    if (*(int *)(param_1 + 0x4b4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2;
    }
    uVar2 = iVar1 * param_2 + param_3;
    if ((*(int *)(param_1 + 0x564) != 0) &&
       (uVar2 < (uint)((*(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x564)) / 100))) {
      return uVar2 * 100 + *(int *)(param_1 + 0x564);
    }
  }
  return 0;
}

