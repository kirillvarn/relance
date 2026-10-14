
void __fastcall FUN_00489ec0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar4 = (int *)*piVar1;
  while (piVar4 != piVar1) {
    piVar2 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    piVar3 = (int *)piVar4[4];
    if ((piVar3 != (int *)0x0) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x60))();
      (**(code **)(*(int *)piVar4[4] + 8))((int *)piVar4[4]);
      piVar4[4] = 0;
    }
    FUN_005b7e1d(piVar4);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar4 = piVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

