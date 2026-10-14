
void FUN_0042acb0(uint param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)*DAT_00667cc4;
  if (piVar5 != DAT_00667cc4) {
    do {
      if ((((uint)piVar5[9] >> 0x14 & param_1 & 0xf) != 0) &&
         (iVar3 = (**(code **)piVar5[3])(), iVar3 == -1)) {
        (**(code **)(piVar5[3] + 0xc))();
      }
      piVar4 = (int *)piVar5[2];
      if (*(char *)((int)piVar4 + 0x39) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x39);
        piVar2 = (int *)*piVar4;
        while (piVar5 = piVar4, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x39);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        piVar4 = (int *)piVar5[1];
        if (piVar5 == (int *)piVar4[2]) {
          do {
            piVar5 = piVar4;
            piVar4 = (int *)piVar5[1];
          } while (piVar5 == (int *)piVar4[2]);
        }
        if ((int *)piVar5[2] != piVar4) {
          piVar5 = piVar4;
        }
      }
    } while (piVar5 != DAT_00667cc4);
  }
  return;
}

