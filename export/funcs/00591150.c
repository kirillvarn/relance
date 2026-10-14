
int __thiscall FUN_00591150(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 != param_2) {
    piVar1 = *(int **)(param_1 + 4);
    puVar2 = *(undefined4 **)(param_2 + 4);
    piVar5 = (int *)*piVar1;
    for (puVar3 = (undefined4 *)*puVar2; (piVar5 != piVar1 && (puVar3 != puVar2));
        puVar3 = (undefined4 *)*puVar3) {
      piVar5[2] = puVar3[2];
      piVar5 = (int *)*piVar5;
    }
    while (piVar5 != piVar1) {
      piVar4 = (int *)*piVar5;
      *(int *)piVar5[1] = *piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
      FUN_0045eeb0();
      FUN_005b7e1d(piVar5);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      piVar5 = piVar4;
    }
    for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      piVar5 = (int *)piVar1[1];
      piVar4 = operator_new(0xc);
      *piVar4 = (int)piVar1;
      if (piVar5 == (int *)0x0) {
        piVar5 = piVar4;
      }
      piVar4[1] = (int)piVar5;
      piVar1[1] = (int)piVar4;
      *(int **)piVar4[1] = piVar4;
      FUN_0046ea00(piVar4 + 2,puVar3 + 2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return param_1;
}

