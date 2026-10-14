
undefined4 * __thiscall FUN_004cec80(int param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_3 + 4);
  piVar1 = operator_new(0x44);
  *piVar1 = param_3;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar1;
  }
  piVar1[1] = (int)piVar3;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  if (piVar1 + 2 != (int *)0x0) {
    piVar3 = piVar1 + 2;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_4;
      param_4 = param_4 + 1;
      piVar3 = piVar3 + 1;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *param_2 = piVar1;
  return param_2;
}

