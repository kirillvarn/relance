
void __thiscall FUN_004fd420(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_3 + 4);
  piVar1 = operator_new(0x18);
  *piVar1 = param_3;
  if (piVar2 == (int *)0x0) {
    piVar2 = piVar1;
  }
  piVar1[1] = (int)piVar2;
  *(int **)(param_3 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  FUN_004fd480(piVar1 + 2,param_4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *param_2 = piVar1;
  return;
}

