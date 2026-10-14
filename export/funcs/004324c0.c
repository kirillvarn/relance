
void __thiscall FUN_004324c0(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  iVar3 = param_3[3];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  FUN_005b7e1d(param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *param_2 = iVar2;
  return;
}

