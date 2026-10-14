
void FUN_0050c040(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = DAT_00675060;
  piVar3 = DAT_00675060;
  for (piVar1 = (int *)*DAT_00675060; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    if ((int *)piVar1[2] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[2] + 0x34))(1);
      piVar3 = DAT_00675060;
    }
  }
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    piVar2 = (int *)*piVar1;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005b7e1d(piVar1);
    DAT_00675064 = DAT_00675064 + -1;
    piVar1 = piVar2;
  }
  return;
}

