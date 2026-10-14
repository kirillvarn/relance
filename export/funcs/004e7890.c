
void __fastcall FUN_004e7890(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_0041dd90();
  if (((cVar2 != '\0') && (iVar3 = FUN_0054baf0(), iVar3 != 0)) &&
     (cVar2 = FUN_0041a3e0(), cVar2 == '\0')) {
    if (((char)param_1[0x126] != '\0') && (cVar2 = FUN_0055e280(), cVar2 == '\0')) {
      for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if ((*(byte *)(piVar1 + 0x1b) & 2) != 0) {
          iVar3 = (**(code **)(*piVar1 + 8))();
          (**(code **)(*piVar1 + 0x34))();
          if (iVar3 == param_1[0x125]) {
            (**(code **)(param_1[-0xe] + 0x38))();
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x004e7915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x9c))();
      return;
    }
    for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if ((*(byte *)(piVar1 + 0x1b) & 2) != 0) {
        (**(code **)(*piVar1 + 8))();
        (**(code **)(*piVar1 + 0x34))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x004e7943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x9c))();
    return;
  }
  return;
}

