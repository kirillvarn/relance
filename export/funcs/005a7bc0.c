
void __fastcall FUN_005a7bc0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (((char)piVar4[0x15] == '\0') && (*(int **)(piVar4[1] + 4) == piVar4)) {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x55) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x55);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x55);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*param_1 == *piVar4) {
    do {
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*param_1 == *piVar4);
  }
  *param_1 = (int)piVar4;
  return;
}

