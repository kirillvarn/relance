
void __fastcall FUN_00455ca0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_1 + 0x134);
  if (piVar3 != *(int **)(param_1 + 0x134)) {
    do {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[2])(1);
      }
      piVar3[2] = 0;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0x134));
  }
  piVar3 = *(int **)(param_1 + 0x134);
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_00455e90();
    FUN_005b7e1d(piVar2);
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
    piVar2 = piVar1;
  }
  return;
}

