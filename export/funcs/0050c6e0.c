
void FUN_0050c6e0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = DAT_00675180;
  piVar3 = DAT_00675180;
  for (piVar1 = (int *)*DAT_00675180; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
      piVar3 = DAT_00675180;
    }
  }
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    piVar2 = (int *)*piVar1;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005b7e1d(piVar1);
    DAT_00675184 = DAT_00675184 + -1;
    piVar1 = piVar2;
  }
  return;
}

