
int __fastcall FUN_0044f500(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x4c))(*(int **)(param_1 + 0x3c));
  piVar3 = (int *)**(int **)(param_1 + 0xac);
  if (piVar3 != *(int **)(param_1 + 0xac)) {
    do {
      if (piVar3[3] != 0) {
        cVar1 = FUN_00457380();
        if ((cVar1 != '\0') && (iVar4 < piVar3[5] - iVar2)) {
          iVar4 = piVar3[5] - iVar2;
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 0xac));
  }
  return iVar4;
}

