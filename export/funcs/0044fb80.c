
void FUN_0044fb80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(*param_1 + 0x24))(param_1,iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}

