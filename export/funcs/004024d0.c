
void FUN_004024d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x30);
    FUN_005b7e1d(iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  return;
}

