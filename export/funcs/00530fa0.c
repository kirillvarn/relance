
void FUN_00530fa0(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  piVar1 = DAT_006754f8;
  piVar2 = (int *)*DAT_006754f8;
  if (DAT_00675504 == 0) {
    DAT_00675504 = 0;
    while (piVar2 != piVar1) {
      FUN_00531930();
      FUN_005312d0(local_4,piVar2);
    }
    return;
  }
  piVar2 = (int *)DAT_006754f8[1];
  if ((int *)DAT_006754f8[1] != DAT_006754fc) {
    do {
      FUN_005316a0(piVar2[2]);
      piVar1 = (int *)*piVar2;
      FUN_005b7e1d(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != DAT_006754fc);
  }
  DAT_006754f8[1] = (int)DAT_006754fc;
  DAT_00675504 = 0;
  *DAT_006754f8 = (int)DAT_006754f8;
  DAT_006754f8[2] = (int)DAT_006754f8;
  return;
}

