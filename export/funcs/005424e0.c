
void __fastcall FUN_005424e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[5];
    cVar3 = (**(code **)(*piVar2 + 0x158))();
    if (cVar3 != '\0') {
      FUN_00541040(piVar2);
      (**(code **)piVar2[3])(1);
    }
  }
  return;
}

