
void FUN_0059dad0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = DAT_0067dcec;
  if (DAT_0067dcec != 0) {
    while (iVar2 = iVar1, iVar2 != param_1) {
      iVar1 = *(int *)(iVar2 + 4);
      iVar3 = iVar2;
      if (*(int *)(iVar2 + 4) == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
    DAT_0067dcec = *(int *)(iVar2 + 4);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

