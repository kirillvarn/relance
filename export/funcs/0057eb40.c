
void FUN_0057eb40(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = piVar1;
  do {
    piVar3 = (int *)piVar3[1];
    if (piVar3 != piVar1) {
      iVar2 = (**(code **)(*(int *)piVar3[2] + 0x38))();
      if (iVar2 != 0) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar3[2])(1);
          piVar3[2] = 0;
        }
        FUN_005b7e1d(piVar3);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        return;
      }
    }
    piVar1 = *(int **)(param_1 + 4);
  } while (piVar3 != (int *)*piVar1);
  return;
}

