
void __fastcall FUN_0046bb50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar3[2])(1);
      piVar3[2] = 0;
    }
    FUN_005b7e1d(piVar3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar3 = piVar2;
  }
  return;
}

