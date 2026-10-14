
void FUN_0059d960(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = DAT_0067dce0;
  if (DAT_0067dce0 != 0) {
    while (iVar2 = iVar1, iVar2 != param_1) {
      iVar1 = *(int *)(iVar2 + 0x38);
      iVar3 = iVar2;
      if (*(int *)(iVar2 + 0x38) == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = 0;
      return;
    }
    DAT_0067dce0 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

