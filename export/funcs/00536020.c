
void __fastcall FUN_00536020(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(*param_1 + 8);
  if (*(char *)((int)piVar2 + 0x19) != '\0') {
    iVar4 = *(int *)(*param_1 + 4);
    if (*param_1 == *(int *)(iVar4 + 8)) {
      do {
        *param_1 = iVar4;
        iVar4 = *(int *)(iVar4 + 4);
      } while (*param_1 == *(int *)(iVar4 + 8));
    }
    if (*(int *)(*param_1 + 8) != iVar4) {
      *param_1 = iVar4;
    }
    return;
  }
  cVar1 = *(char *)(*piVar2 + 0x19);
  piVar3 = (int *)*piVar2;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x19);
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  *param_1 = (int)piVar2;
  return;
}

