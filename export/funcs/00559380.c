
void FUN_00559380(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_00679a14;
  piVar2 = (int *)*DAT_00679a14;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_005b7e1d(piVar2);
    DAT_00679a18 = DAT_00679a18 + -1;
    piVar2 = piVar1;
  }
  return;
}

