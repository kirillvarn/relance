
void __fastcall FUN_00438d10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_4 [4];
  
  piVar5 = *(int **)(param_1 + 0x10);
  piVar4 = (int *)*piVar5;
  while (piVar4 != piVar5) {
    piVar1 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_005b7e1d(piVar4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    piVar4 = piVar1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar3 = (undefined4 *)*puVar3;
    piVar5 = (int *)FUN_0053ab20(local_4,0);
    piVar5 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_005afe80(0);
    FUN_005b7e1d(piVar5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

