
void __thiscall FUN_004323f0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 8);
  if (*(char *)((int)piVar3 + 0x25) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x25);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x25);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    *param_1 = (int)piVar3;
    *param_2 = iVar2;
    return;
  }
  iVar5 = *(int *)(iVar2 + 4);
  if (*param_1 == *(int *)(iVar5 + 8)) {
    do {
      *param_1 = iVar5;
      iVar5 = *(int *)(iVar5 + 4);
    } while (*param_1 == *(int *)(iVar5 + 8));
  }
  if (*(int *)(*param_1 + 8) != iVar5) {
    *param_1 = iVar5;
  }
  *param_2 = iVar2;
  return;
}

