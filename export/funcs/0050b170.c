
void __fastcall FUN_0050b170(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(char *)(param_1 + 0x74) != '\0') {
    puVar1 = *(undefined4 **)(param_1 + 0x68);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      iVar3 = puVar2[2];
      if (iVar3 != 0) {
        FUN_005501e0();
        FUN_005b7e1d(iVar3);
      }
    }
    piVar4 = *(int **)(param_1 + 0x68);
    piVar6 = (int *)*piVar4;
    while (piVar6 != piVar4) {
      piVar5 = (int *)*piVar6;
      *(int *)piVar6[1] = *piVar6;
      *(int *)(*piVar6 + 4) = piVar6[1];
      FUN_005b7e1d(piVar6);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      piVar6 = piVar5;
    }
    FUN_005b7e1d(*(undefined4 *)(param_1 + 0x38));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 0x40));
    FUN_00425a20();
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  return;
}

