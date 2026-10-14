
void __thiscall FUN_0041b590(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_4;
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (piVar1 = *(int **)(param_1 + 4), param_3 == (int *)*piVar1)) && (param_4 == piVar1)) {
    piVar2 = (int *)piVar1[1];
    if (piVar2 != *(int **)(param_1 + 8)) {
      do {
        FUN_0041ba80(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_005b7e1d(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 8));
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  while (param_3 != piVar2) {
    FUN_00433a00();
    FUN_0041b640(&param_4,param_3);
  }
  *param_2 = param_3;
  return;
}

