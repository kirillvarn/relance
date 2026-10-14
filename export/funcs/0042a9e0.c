
void FUN_0042a9e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    while (piVar3 = piVar3 + 1, piVar3 != param_2) {
      iVar1 = *piVar3;
      piVar4 = piVar3;
      if (((iVar1 == 0) || (*param_1 == 0)) ||
         (*(float *)(iVar1 + 0x28) <= *(float *)(*param_1 + 0x28))) {
        while (((iVar1 != 0 && (iVar2 = piVar4[-1], iVar2 != 0)) &&
               (*(float *)(iVar2 + 0x28) < *(float *)(iVar1 + 0x28)))) {
          *piVar4 = iVar2;
          piVar4 = piVar4 + -1;
        }
        *piVar4 = iVar1;
      }
      else {
        for (; param_1 != piVar4; piVar4 = piVar4 + -1) {
          *piVar4 = piVar4[-1];
        }
        *param_1 = iVar1;
      }
    }
  }
  return;
}

