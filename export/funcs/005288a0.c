
void __thiscall FUN_005288a0(int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  
  if (param_2 == '\0') {
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x38) + 100),0);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_004291c0(*(undefined4 *)(*(int *)(param_1 + 0x40) + 100),0);
    }
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00528968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(param_1 + 0x3c) + 100))();
        return;
      }
      FUN_004291c0((*(int **)(param_1 + 0x3c))[0x19],0);
    }
  }
  else {
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x60))();
    }
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x40) + 0x60))();
    }
    if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x60))();
    }
    piVar1 = *(int **)(param_1 + 0x50);
    if ((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1), cVar2 != '\0')) {
      return;
    }
    piVar1 = *(int **)(param_1 + 0x44);
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (cVar2 == '\0') {
        FUN_004291c0((*(int **)(param_1 + 0x44))[0x19],0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00528907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x44) + 100))();
      return;
    }
  }
  return;
}

