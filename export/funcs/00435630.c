
void FUN_00435630(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*DAT_00668670;
  if (piVar3 != DAT_00668670) {
    do {
      piVar4 = (int *)piVar3[2];
      piVar3[9] = 0;
      if (*(char *)((int)piVar4 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar2 = (int *)*piVar4;
        while (piVar3 = piVar4, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2d);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        piVar4 = (int *)piVar3[1];
        if (piVar3 == (int *)piVar4[2]) {
          do {
            piVar3 = piVar4;
            piVar4 = (int *)piVar3[1];
          } while (piVar3 == (int *)piVar4[2]);
        }
        if ((int *)piVar3[2] != piVar4) {
          piVar3 = piVar4;
        }
      }
    } while (piVar3 != DAT_00668670);
  }
  piVar3 = *(int **)Anim_exref;
  if (piVar3 != (int *)0x0) {
    if (DAT_0066868c != -1) {
      (**(code **)(*piVar3 + 0x10))(piVar3,DAT_0066868c);
      DAT_0066868c = -1;
    }
    DAT_0066868c = (**(code **)(**(int **)Anim_exref + 0x74))(*(int **)Anim_exref);
  }
  return;
}

