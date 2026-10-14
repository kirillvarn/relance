
void __fastcall FUN_0046a300(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(**(int **)(param_1 + 4) + 8);
    puVar2 = *(undefined4 **)(iVar1 + 4);
    local_8 = iVar1;
    puVar4 = (undefined4 *)*puVar2;
    while (puVar4 != puVar2) {
      puVar3 = (undefined4 *)*puVar4;
      FUN_0046d680(local_4,puVar4);
      puVar4 = puVar3;
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    iVar1 = *(int *)(param_1 + 0x10);
    piVar6 = *(int **)(iVar1 + 4);
    piVar5 = operator_new(0xc);
    *piVar5 = iVar1;
    if (piVar6 == (int *)0x0) {
      piVar6 = piVar5;
    }
    piVar5[1] = (int)piVar6;
    *(int **)(iVar1 + 4) = piVar5;
    *(int **)piVar5[1] = piVar5;
    FUN_005999b0(piVar5 + 2,&local_8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    piVar6 = (int *)**(int **)(param_1 + 4);
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_005b7e1d(piVar6);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    FUN_004686e0();
    FUN_004684e0();
  }
  return;
}

