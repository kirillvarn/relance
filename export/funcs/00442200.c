
void FUN_00442200(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = (int *)FUN_0059da10("NavBar");
  if (((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 8))(), iVar4 != 0)) &&
     (*(char *)(iVar4 + 0x3d4) == '\0')) {
    cVar2 = FUN_0055e280();
    if (cVar2 != '\0') {
      FUN_0055e290();
    }
    piVar3 = *(int **)(iVar4 + 0x380);
    piVar5 = (int *)*piVar3;
    if (piVar5 != piVar3) {
      while (piVar1 = piVar5 + 2, piVar5[0xe] != param_1) {
        piVar5 = (int *)*piVar5;
        if (piVar5 == piVar3) {
          return;
        }
      }
      if ((piVar5[9] != 0) && (*(int *)(piVar5[9] + 0x18) != 0)) {
        if (*(int *)(iVar4 + 0x3b8) == 0) {
          *(int **)(iVar4 + 0x3b8) = piVar1;
        }
        FUN_00441700(*(undefined4 *)(iVar4 + 0x3b8),piVar1);
        return;
      }
      FUN_00440ac0(piVar1);
    }
  }
  return;
}

