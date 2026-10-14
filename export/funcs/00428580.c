
void FUN_00428580(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = (int *)*DAT_00667c70;
  if (piVar3 != DAT_00667c70) {
    do {
      piVar1 = (int *)piVar3[2];
      cVar2 = (**(code **)(*piVar1 + 0x70))();
      if (cVar2 != '\0') {
        (**(code **)(*piVar1 + 0x6c))();
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_00667c70);
  }
  return;
}

