
void __thiscall FUN_0059e7d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) != 0) {
    while (iVar2 = iVar1, iVar2 != param_2) {
      iVar1 = *(int *)(iVar2 + 8);
      iVar3 = iVar2;
      if (*(int *)(iVar2 + 8) == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
      return;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
  }
  return;
}

