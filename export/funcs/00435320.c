
void __thiscall FUN_00435320(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_4;
  
  local_4 = param_1;
  param_2 = (char *)CreateID(param_2);
  FUN_00432240(&local_4,&param_2);
  if ((local_4 != *(int *)(param_1 + 0x10)) && (iVar1 = local_4 + 0x10, iVar1 != 0)) {
    iVar2 = *(int *)(param_1 + 0x24);
    piVar4 = *(int **)(iVar2 + 4);
    piVar3 = operator_new(0xc);
    *piVar3 = iVar2;
    if (piVar4 == (int *)0x0) {
      piVar4 = piVar3;
    }
    piVar3[1] = (int)piVar4;
    *(int **)(iVar2 + 4) = piVar3;
    *(int **)piVar3[1] = piVar3;
    if (piVar3 + 2 != (int *)0x0) {
      piVar3[2] = iVar1;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

