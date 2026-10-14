
int __thiscall FUN_00591230(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  if (param_1 != param_2) {
    piVar1 = *(int **)(param_2 + 4);
    if (piVar1 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_2 + 8) - (int)piVar1 >> 3;
    }
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(param_1 + 8) - (int)piVar3 >> 3;
    }
    if (uVar4 < uVar6) {
      if (piVar1 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(param_2 + 8) - (int)piVar1 >> 3;
      }
      if (piVar3 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 0xc) - (int)piVar3 >> 3;
      }
      if (uVar4 < uVar6) {
        piVar1 = *(int **)(param_1 + 8);
        for (; piVar3 != piVar1; piVar3 = piVar3 + 2) {
          if ((int *)*piVar3 != (int *)0x0) {
            (**(code **)(*(int *)*piVar3 + 4))();
          }
        }
        FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
        if (*(int *)(param_2 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3;
        }
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        pvVar2 = operator_new(iVar5 * 8);
        *(void **)(param_1 + 4) = pvVar2;
        iVar5 = *(int *)(param_2 + 8);
        for (iVar8 = *(int *)(param_2 + 4); iVar8 != iVar5; iVar8 = iVar8 + 8) {
          FUN_00418f10(pvVar2,iVar8);
          pvVar2 = (void *)((int)pvVar2 + 8);
        }
        *(void **)(param_1 + 8) = pvVar2;
        *(void **)(param_1 + 0xc) = pvVar2;
        return param_1;
      }
      if (piVar3 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)piVar3 >> 3;
      }
      piVar7 = piVar1 + iVar5 * 2;
      for (; piVar1 != piVar7; piVar1 = piVar1 + 2) {
        *piVar3 = *piVar1;
        piVar3[1] = piVar1[1];
        piVar3 = piVar3 + 2;
      }
      piVar1 = *(int **)(param_2 + 8);
      iVar5 = *(int *)(param_1 + 8);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 2) {
        FUN_00418f10(iVar5,piVar7);
        iVar5 = iVar5 + 8;
      }
      if (*(int *)(param_2 + 4) != 0) {
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3) * 8;
        return param_1;
      }
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      return param_1;
    }
    piVar7 = *(int **)(param_2 + 8);
    for (; piVar1 != piVar7; piVar1 = piVar1 + 2) {
      *piVar3 = *piVar1;
      piVar3[1] = piVar1[1];
      piVar3 = piVar3 + 2;
    }
    piVar1 = *(int **)(param_1 + 8);
    for (; piVar3 != piVar1; piVar3 = piVar3 + 2) {
      FUN_00418f70(0);
    }
    if (*(int *)(param_2 + 4) == 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      return param_1;
    }
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 3) * 8;
  }
  return param_1;
}

