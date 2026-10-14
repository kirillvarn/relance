
void FUN_0059dd00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != param_2)) {
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0xc);
      iVar3 = 0;
      while (iVar2 = iVar4, iVar2 != 0) {
        if (iVar2 == param_1) {
          if (iVar3 == 0) {
            *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
          }
          else {
            *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
          }
          break;
        }
        iVar3 = iVar2;
        iVar4 = *(int *)(iVar2 + 8);
      }
    }
    *(int *)(param_1 + 4) = param_2;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0xc);
      iVar3 = iVar1;
      if (iVar1 != 0) {
        do {
          iVar4 = iVar3;
          iVar3 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 8) = param_1;
          *(undefined4 *)(param_1 + 8) = 0;
          return;
        }
      }
      *(int *)(param_1 + 8) = iVar1;
      *(int *)(param_2 + 0xc) = param_1;
    }
  }
  return;
}

