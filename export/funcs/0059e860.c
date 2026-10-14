
void __fastcall FUN_0059e860(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_005b7e1d(iVar2);
    iVar2 = iVar1;
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

