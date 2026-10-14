
void FUN_00431850(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  piVar1 = DAT_00667e1c;
  piVar2 = (int *)*DAT_00667e1c;
  if (DAT_00667e28 == 0) {
    DAT_00667e28 = 0;
    while (piVar2 != piVar1) {
      FUN_00433330();
      FUN_00432cc0(local_4,piVar2);
    }
    return;
  }
  piVar2 = (int *)DAT_00667e1c[1];
  if ((int *)DAT_00667e1c[1] != DAT_00667e20) {
    do {
      FUN_004330a0(piVar2[2]);
      piVar1 = (int *)*piVar2;
      FUN_00430990();
      FUN_005b7e1d(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != DAT_00667e20);
  }
  DAT_00667e1c[1] = (int)DAT_00667e20;
  DAT_00667e28 = 0;
  *DAT_00667e1c = (int)DAT_00667e1c;
  DAT_00667e1c[2] = (int)DAT_00667e1c;
  return;
}

