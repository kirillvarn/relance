
int __thiscall FUN_0057c2c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4c8) != 0) {
    iVar2 = (*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)) / 0xc;
  }
  if (0 < param_3) {
    if (param_3 + -1 < iVar2) {
      iVar2 = param_3 + -1;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        *(undefined2 *)(param_2 + iVar1 * 2) = *(undefined2 *)(iVar3 + *(int *)(param_1 + 0x4c8));
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar1 < iVar2);
    }
    *(undefined2 *)(param_2 + iVar1 * 2) = 0;
    iVar2 = iVar1 + 1;
  }
  return iVar2;
}

