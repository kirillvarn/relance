
void FUN_0053c330(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2;
  param_2 = param_2 + 1;
  if (0 < iVar3) {
    do {
      piVar1 = param_2 + 1;
      iVar2 = *param_2;
      param_2 = (int *)((int)param_2 + 5);
      FUN_004c4e00(iVar2,(char)*piVar1,0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

