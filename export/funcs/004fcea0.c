
void __thiscall FUN_004fcea0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar1 + 4);
  piVar2 = operator_new(0x18);
  *piVar2 = iVar1;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar2;
  }
  piVar2[1] = (int)piVar3;
  *(int **)(iVar1 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  FUN_004fd480(piVar2 + 2,param_2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

