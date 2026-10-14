
void __thiscall FUN_00432100(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  while (param_3 != param_4) {
    piVar2 = (int *)*param_3;
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
    param_3 = piVar2;
  }
  *param_2 = param_3;
  return;
}

