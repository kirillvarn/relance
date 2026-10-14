
void FUN_0042b4d0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_4 [4];
  
  piVar3 = (int *)*DAT_00667cc4;
  if (piVar3 != DAT_00667cc4) {
    do {
      do {
        iVar1 = (**(code **)(piVar3[3] + 0x10))();
      } while (iVar1 != 0);
      if (*(char *)(piVar3[2] + 0x39) == '\0') {
        piVar2 = (int *)FUN_0042c9e0(piVar3[2]);
LAB_0042b51f:
        piVar3 = piVar2;
      }
      else {
        piVar2 = (int *)piVar3[1];
        if (piVar3 == (int *)piVar2[2]) {
          do {
            piVar3 = piVar2;
            piVar2 = (int *)piVar3[1];
          } while (piVar3 == (int *)piVar2[2]);
        }
        if ((int *)piVar3[2] != piVar2) goto LAB_0042b51f;
      }
    } while (piVar3 != DAT_00667cc4);
  }
  piVar2 = DAT_00667cc4;
  piVar3 = (int *)*DAT_00667cc4;
  if (DAT_00667cd0 == 0) {
    DAT_00667cd0 = 0;
    while (piVar3 != piVar2) {
      FUN_00438930();
      FUN_0042c370(auStack_4,piVar3);
    }
    return;
  }
  piVar3 = (int *)DAT_00667cc4[1];
  if ((int *)DAT_00667cc4[1] != DAT_00667cc8) {
    do {
      FUN_0042c750(piVar3[2]);
      piVar2 = (int *)*piVar3;
      FUN_0042cbc0(0);
      FUN_005b7e1d(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != DAT_00667cc8);
  }
  DAT_00667cc4[1] = (int)DAT_00667cc8;
  DAT_00667cd0 = 0;
  *DAT_00667cc4 = (int)DAT_00667cc4;
  DAT_00667cc4[2] = (int)DAT_00667cc4;
  return;
}

