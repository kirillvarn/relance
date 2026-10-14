
int __thiscall FUN_00456790(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)**(int **)(param_1 + 8);
  if (piVar4 == *(int **)(param_1 + 8)) {
    return 0;
  }
  do {
    iVar1 = piVar4[2];
    if ((((*(char *)(iVar1 + 0x2f) != '\0') && (*(int *)(iVar1 + 0xc0) != -1)) &&
        (iVar1 = *(int *)(*(int *)(iVar1 + 0xc0) * 0x40 + *(int *)(iVar1 + 0xb4)), iVar1 != 0)) &&
       (iVar5 = 0, 0 < *(int *)(iVar1 + 0x4c))) {
      do {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x48) + iVar5 * 4);
        if ((iVar2 != 0) && (cVar3 = FUN_00450070(param_2,param_3), cVar3 != '\0')) {
          if (iVar2 != 0) {
            return iVar2;
          }
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar1 + 0x4c));
    }
    piVar4 = (int *)*piVar4;
    if (piVar4 == (int *)*(int *)(param_1 + 8)) {
      return 0;
    }
  } while( true );
}

