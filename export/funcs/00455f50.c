
int __thiscall FUN_00455f50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xc0);
  iVar1 = 1;
  if (iVar3 + -1 < 1) {
    return iVar3;
  }
  piVar4 = (int *)(*(int *)(param_1 + 0xc0) * 0x40 + 0x7c + *(int *)(param_1 + 0xb4));
  do {
    iVar2 = 0;
    if (0 < param_3) {
      do {
        if (*piVar4 == *(int *)(param_2 + iVar2 * 4)) {
          if (iVar1 == -1) {
            return iVar3;
          }
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 0x10;
  } while (iVar1 <= iVar3 + -1);
  return iVar3;
}

