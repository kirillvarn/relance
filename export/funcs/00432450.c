
void __thiscall FUN_00432450(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  
  for (; param_3 != param_4; param_3 = (undefined4 *)*param_3) {
    piVar2 = *(int **)(param_2 + 4);
    piVar1 = operator_new(0x18);
    *piVar1 = param_2;
    if (piVar2 == (int *)0x0) {
      piVar2 = piVar1;
    }
    piVar1[1] = (int)piVar2;
    *(int **)(param_2 + 4) = piVar1;
    *(int **)piVar1[1] = piVar1;
    FUN_00433a50(piVar1 + 2,param_3 + 2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

