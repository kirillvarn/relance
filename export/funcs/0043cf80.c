
void __thiscall FUN_0043cf80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    if (*(int **)(param_1 + 4) == piVar1) {
      iVar2 = *piVar1;
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
    }
    else if (*(int **)(param_1 + 8) == piVar1) {
      puVar4 = (undefined4 *)(*(int **)(param_1 + 8))[1];
      *(undefined4 **)(param_1 + 8) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        *puVar4 = 0;
      }
    }
    else {
      piVar3 = (int *)piVar1[1];
      iVar2 = *piVar1;
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
    }
    puVar4 = (undefined4 *)*param_2;
    iVar2 = puVar4[1];
    if (*(char *)(param_1 + 0xc) == '\0') {
      if (puVar4 != (undefined4 *)0x0) {
        FUN_005b7e1d(puVar4);
      }
    }
    else if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0x10) = puVar4;
      *param_2 = iVar2;
      return;
    }
    *param_2 = iVar2;
  }
  return;
}

