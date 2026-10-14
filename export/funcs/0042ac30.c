
void FUN_0042ac30(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1 != DAT_00667ce4) {
    DAT_00667ce4 = param_1;
    piVar4 = (int *)*DAT_00667cc4;
    if (piVar4 != DAT_00667cc4) {
      do {
        FUN_0042bf90(DAT_00667ce4);
        piVar3 = (int *)piVar4[2];
        if (*(char *)((int)piVar3 + 0x39) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x39);
          piVar2 = (int *)*piVar3;
          while (piVar4 = piVar3, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x39);
            piVar3 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          piVar3 = (int *)piVar4[1];
          if (piVar4 == (int *)piVar3[2]) {
            do {
              piVar4 = piVar3;
              piVar3 = (int *)piVar4[1];
            } while (piVar4 == (int *)piVar3[2]);
          }
          if ((int *)piVar4[2] != piVar3) {
            piVar4 = piVar3;
          }
        }
      } while (piVar4 != DAT_00667cc4);
    }
  }
  return;
}

