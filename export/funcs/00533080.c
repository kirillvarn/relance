
void __fastcall FUN_00533080(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0xb8);
  if (piVar3 != *(int **)(param_1 + 0xb8)) {
    do {
      if ((int *)piVar3[2] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[2] + 4))(1);
      }
      piVar3[2] = 0;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0xb8));
  }
  piVar3 = *(int **)(param_1 + 0xb8);
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_005b7e1d(piVar2);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -1;
    piVar2 = piVar1;
  }
  return;
}

