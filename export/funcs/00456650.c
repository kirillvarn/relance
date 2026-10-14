
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00456650(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = (int *)**(int **)(param_1 + 8);
  if (piVar3 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = piVar3[2];
      cVar2 = FUN_00456150(param_2);
      if (cVar2 == '\0') {
        piVar4 = (int *)*piVar3;
      }
      else {
        if (iVar1 != 0) {
          FUN_00454bb0();
          FUN_005b7e1d(iVar1);
        }
        piVar4 = (int *)*piVar3;
        *(int **)piVar3[1] = piVar4;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_005b7e1d(piVar3);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
      piVar3 = piVar4;
    } while (piVar4 != *(int **)(param_1 + 8));
  }
  cVar2 = FUN_00456a40((float)param_2 * (float)_DAT_005c75f8);
  if ((cVar2 != '\0') && (piVar3 = (int *)**(int **)(param_1 + 8), piVar3 != *(int **)(param_1 + 8))
     ) {
    do {
      iVar1 = piVar3[2];
      if ((*(char *)(iVar1 + 0xd) != '\0') &&
         (((*(int *)(iVar1 + 0xc0) != -1 &&
           (iVar1 = *(int *)(*(int *)(iVar1 + 0xc0) * 0x40 + *(int *)(iVar1 + 0xb4)), iVar1 != 0))
          && (0 < *(int *)(iVar1 + 0x4c))))) {
        iVar5 = 0;
        do {
          piVar4 = *(int **)(*(int *)(iVar1 + 0x48) + iVar5 * 4);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x54))();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar1 + 0x4c));
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 8));
  }
  return;
}

