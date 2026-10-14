
void FUN_004fe180(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_00674f9c;
  piVar2 = DAT_00674f9c;
  if (DAT_00674f9c != DAT_00674fa0) {
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
        piVar1 = DAT_00674f9c;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != DAT_00674fa0);
  }
  DAT_00674fa0 = piVar1;
  return;
}

