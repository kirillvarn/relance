
void FUN_00402d50(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = DAT_0061647c;
  piVar2 = (int *)*DAT_0061647c;
  if (DAT_00616488 == 0) {
    DAT_00616488 = 0;
    while (piVar2 != piVar1) {
      FUN_004f3770();
      FUN_00405130(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)DAT_0061647c[1];
    if ((int *)DAT_0061647c[1] != DAT_00616480) {
      do {
        FUN_00405510(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_00405820(0);
        FUN_005b7e1d(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_00616480);
    }
    DAT_0061647c[1] = (int)DAT_00616480;
    DAT_00616488 = 0;
    *DAT_0061647c = (int)DAT_0061647c;
    DAT_0061647c[2] = (int)DAT_0061647c;
    FUN_0053e430(local_8);
  }
  if (DAT_00616474 != DAT_00616490) {
    DAT_00616474 = DAT_00616490;
    DAT_00616498 = 0;
  }
  return;
}

