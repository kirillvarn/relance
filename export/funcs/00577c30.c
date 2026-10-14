
void FUN_00577c30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_4;
  
  iVar4 = DAT_0067c3a8;
  if (DAT_0067c3ac == param_1) {
    if (DAT_0067c3a8 == 0) {
      DAT_0067c3ac = (undefined4 *)DAT_0067c3a8;
      return;
    }
    DAT_0067c3ac = *(undefined4 **)(*(int *)(*(int *)(DAT_0067c3a8 + 4) + 4) + 8);
    FUN_00516f70(&param_1,*(undefined4 *)(*(int *)(DAT_0067c3a8 + 4) + 4));
  }
  else {
    if (DAT_0067c3a8 == 0) {
      return;
    }
    for (piVar5 = (int *)**(int **)(DAT_0067c3a8 + 4); piVar5 != *(int **)(DAT_0067c3a8 + 4);
        piVar5 = (int *)*piVar5) {
      if ((undefined4 *)piVar5[2] == param_1) {
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        FUN_005b7e1d(piVar5);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
        break;
      }
    }
  }
  iVar4 = DAT_0067c3a8;
  if ((DAT_0067c3a8 != 0) && (*(int *)(DAT_0067c3a8 + 8) == 0)) {
    if (DAT_0067c3a8 != 0) {
      puVar1 = *(undefined4 **)(DAT_0067c3a8 + 4);
      puVar2 = (undefined4 *)*puVar1;
      puVar3 = param_1;
      while (param_1 = puVar2, param_1 != puVar1) {
        puVar2 = (undefined4 *)*param_1;
        piVar5 = (int *)FUN_0053ab20(&local_4,0);
        piVar5 = (int *)*piVar5;
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        FUN_005b7e1d(piVar5);
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
        puVar3 = param_1;
      }
      param_1 = puVar3;
      FUN_005b7e1d(*(undefined4 *)(iVar4 + 4));
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      FUN_005b7e1d(iVar4);
    }
    DAT_0067c3a8 = 0;
  }
  return;
}

