
void FUN_004c72e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = DAT_00673510;
  if (DAT_00673510 != 0) {
    while (iVar2 = iVar1, iVar2 != param_1) {
      iVar1 = *(int *)(iVar2 + 4);
      iVar3 = iVar2;
      if (*(int *)(iVar2 + 4) == 0) {
        return;
      }
    }
    iVar1 = *(int *)(iVar2 + 4);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = *(int *)(iVar2 + 4);
      iVar1 = DAT_00673510;
    }
    DAT_00673510 = iVar1;
    if (iVar2 == DAT_00673514) {
      DAT_00673514 = iVar3;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

