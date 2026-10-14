
void FUN_00502aa0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = DAT_00674fd8;
  piVar2 = (int *)*DAT_00674fd8;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_005b7e1d(piVar2);
    DAT_00674fdc = DAT_00674fdc + -1;
    piVar2 = piVar1;
  }
  if (DAT_00674fd0 != 0) {
    FUN_005b7e1d(DAT_00674fd0);
    DAT_00674fd0 = 0;
  }
  return;
}

