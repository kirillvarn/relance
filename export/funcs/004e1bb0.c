
void __fastcall FUN_004e1bb0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = FUN_0054bd40();
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = FUN_0041a3e0();
  if (cVar2 == '\0') {
    cVar2 = FUN_0055e280();
    if ((((cVar2 != '\0') || (cVar2 = FUN_0055e280(), cVar2 != '\0')) &&
        (piVar1 = *(int **)(param_1 + 0x4d8), piVar1 != (int *)0x0)) &&
       ((*(byte *)(piVar1 + 0x1b) & 2) != 0)) {
      (**(code **)(*piVar1 + 0x34))();
    }
    cVar2 = FUN_0055e280();
    if (cVar2 == '\0') {
      FUN_004e7890();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004e1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x494) + 0x34))();
    return;
  }
  return;
}

