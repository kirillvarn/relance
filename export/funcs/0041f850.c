
void __fastcall FUN_0041f850(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_24 [7];
  undefined1 local_8;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar2 + 4);
  local_8 = 1;
  piVar1 = operator_new(0x2c);
  *piVar1 = iVar2;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar1;
  }
  piVar1[1] = (int)piVar3;
  *(int **)(iVar2 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  if (piVar1 + 2 != (int *)0x0) {
    piVar3 = local_24;
    piVar1 = piVar1 + 2;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar1 = piVar1 + 1;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

