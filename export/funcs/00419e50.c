
void FUN_00419e50(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*DAT_006166a0;
  if (piVar3 != DAT_006166a0) {
    do {
      (**(code **)(piVar3[2] + 0x24))();
      piVar3 = (int *)*DAT_006166a0;
    } while (piVar3 != DAT_006166a0);
  }
  piVar2 = DAT_006166a0;
  piVar3 = (int *)*DAT_006166a0;
  while (piVar3 != piVar2) {
    piVar1 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_00419100();
    FUN_005b7e1d(piVar3);
    DAT_006166a4 = DAT_006166a4 + -1;
    piVar3 = piVar1;
  }
  return;
}

