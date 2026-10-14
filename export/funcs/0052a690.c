
void FUN_0052a690(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_4 [4];
  
  piVar5 = (int *)*DAT_00675404;
  piVar4 = DAT_00675404;
  if (piVar5 != DAT_00675404) {
    do {
      if ((undefined4 *)piVar5[4] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar5[4])(1);
        piVar4 = DAT_00675404;
      }
      piVar3 = (int *)piVar5[2];
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x15);
        piVar2 = (int *)*piVar3;
        while (piVar5 = piVar3, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        piVar3 = (int *)piVar5[1];
        if (piVar5 == (int *)piVar3[2]) {
          do {
            piVar5 = piVar3;
            piVar3 = (int *)piVar5[1];
          } while (piVar5 == (int *)piVar3[2]);
        }
        if ((int *)piVar5[2] != piVar3) {
          piVar5 = piVar3;
        }
      }
    } while (piVar5 != piVar4);
  }
  piVar5 = (int *)*piVar4;
  if (DAT_00675410 != 0) {
    piVar5 = (int *)piVar4[1];
    if ((int *)piVar4[1] != DAT_00675408) {
      do {
        FUN_0052af60(piVar5[2]);
        piVar3 = (int *)*piVar5;
        FUN_005b7e1d(piVar5);
        piVar4 = DAT_00675404;
        piVar5 = piVar3;
      } while (piVar3 != DAT_00675408);
    }
    piVar4[1] = (int)DAT_00675408;
    DAT_00675410 = 0;
    *DAT_00675404 = (int)DAT_00675404;
    DAT_00675404[2] = (int)DAT_00675404;
    return;
  }
  DAT_00675410 = 0;
  while (piVar5 != piVar4) {
    FUN_0052afa0();
    FUN_0046c8c0(auStack_4,piVar5);
  }
  return;
}

