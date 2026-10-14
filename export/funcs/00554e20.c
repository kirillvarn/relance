
undefined4 FUN_00554e20(Root *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x3c);
  if (0 < (int)piVar3) {
    Archetype::Root::AddRef(param_1);
    iVar2 = DAT_00679874;
    piVar4 = *(int **)(DAT_00679874 + 4);
    puVar1 = (undefined4 *)(DAT_00679874 + 4);
    piVar3 = operator_new(0xc);
    *piVar3 = iVar2;
    if (piVar4 == (int *)0x0) {
      piVar4 = piVar3;
    }
    piVar3[1] = (int)piVar4;
    *puVar1 = piVar3;
    *(int **)piVar3[1] = piVar3;
    piVar3 = piVar3 + 2;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)param_1;
    }
    DAT_00679878 = DAT_00679878 + 1;
  }
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

