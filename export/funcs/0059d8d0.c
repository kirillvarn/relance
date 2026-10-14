
void FUN_0059d8d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x38) = DAT_0067dce0;
    DAT_0067dce0 = param_1;
    return;
  }
  iVar2 = 0;
  iVar3 = DAT_0067dce0;
  while( true ) {
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x38) = DAT_0067dce0;
      DAT_0067dce0 = param_1;
      return;
    }
    if (iVar3 == param_1) break;
    iVar2 = iVar3;
    iVar3 = *(int *)(iVar3 + 0x38);
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x38) = iVar1;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(int *)(param_1 + 0x38) = DAT_0067dce0;
    DAT_0067dce0 = param_1;
    return;
  }
  DAT_0067dce0 = iVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x38) = DAT_0067dce0;
  DAT_0067dce0 = param_1;
  return;
}

