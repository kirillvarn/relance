
undefined4 __thiscall FUN_0041e790(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x24) != param_2) {
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 4);
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf3;
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      piVar2 = (int *)*piVar3;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_005b7e1d(piVar3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      piVar3 = piVar2;
    }
    uStack_c = 0;
    uStack_8 = 0;
    uStack_14 = 0x14;
    uStack_10 = 0x10;
    iStack_4 = param_2;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(int **)(param_1 + 0x10),1,&uStack_14)
    ;
    if (-1 < iVar4) {
      *(undefined4 *)(param_1 + 0x24) = uStack_8;
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x24) != 0) {
        pvVar5 = operator_new(*(int *)(param_1 + 0x24) * 0x14);
        *(void **)(param_1 + 0x28) = pvVar5;
      }
      return 1;
    }
  }
  return 0;
}

