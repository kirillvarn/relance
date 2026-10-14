
void __thiscall FUN_00599610(int param_1,int *param_2,uint param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  void *pvVar10;
  int *piVar11;
  
  piVar7 = param_2;
  piVar9 = *(int **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)piVar9 >> 3)) {
    if ((uint)((int)piVar9 - (int)param_2 >> 3) < param_3) {
      for (; piVar7 != piVar9; piVar7 = piVar7 + 2) {
        FUN_005999d0(piVar7 + param_3 * 2,piVar7);
      }
      iVar5 = *(int *)(param_1 + 8);
      for (iVar3 = param_3 - (iVar5 - (int)param_2 >> 3); iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_005999d0(iVar5,param_4);
        iVar5 = iVar5 + 8;
      }
      piVar9 = *(int **)(param_1 + 8);
      if (param_2 != piVar9) {
        do {
          *(undefined1 *)param_2 = *param_4;
          *(undefined1 *)((int)param_2 + 1) = param_4[1];
          FUN_00590400(param_4 + 4);
          param_2 = param_2 + 2;
        } while (param_2 != piVar9);
      }
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
      return;
    }
    if (param_3 != 0) {
      piVar7 = piVar9;
      for (piVar11 = piVar9 + param_3 * -2; piVar11 != piVar9; piVar11 = piVar11 + 2) {
        FUN_005999d0(piVar7,piVar11);
        piVar7 = piVar7 + 2;
      }
      puVar1 = *(undefined1 **)(param_1 + 8);
      for (piVar9 = (int *)(*(undefined1 **)(param_1 + 8) + param_3 * -8); param_2 != piVar9;
          piVar9 = piVar9 + -2) {
        puVar1[-8] = (char)piVar9[-2];
        puVar1[-7] = *(undefined1 *)((int)piVar9 + -7);
        FUN_00590400(piVar9 + -1);
        puVar1 = puVar1 + -8;
      }
      if (param_2 != param_2 + param_3 * 2) {
        piVar9 = param_2 + 1;
        do {
          *(undefined1 *)(piVar9 + -1) = *param_4;
          *(undefined1 *)((int)piVar9 + -3) = param_4[1];
          FUN_00599a60();
          iVar5 = *(int *)(param_4 + 4);
          *piVar9 = iVar5;
          if (iVar5 != 0) {
            *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
          }
          piVar7 = piVar9 + 1;
          piVar9 = piVar9 + 2;
        } while (piVar7 != param_2 + param_3 * 2);
      }
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
    }
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar2 = (int)piVar9 - iVar5 >> 3, uVar2 <= param_3)) {
    uVar2 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)piVar9 - iVar5 >> 3;
  }
  iVar5 = uVar2 + iVar5;
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 * 8);
  pvVar10 = pvVar4;
  for (piVar9 = *(int **)(param_1 + 4); piVar9 != param_2; piVar9 = piVar9 + 2) {
    FUN_005999d0(pvVar10,piVar9);
    pvVar10 = (void *)((int)pvVar10 + 8);
  }
  if (param_3 != 0) {
    param_2 = (int *)param_3;
    pvVar6 = pvVar10;
    do {
      FUN_005999d0(pvVar6,param_4);
      pvVar6 = (void *)((int)pvVar6 + 8);
      param_2 = (int *)((int)param_2 - 1);
    } while (param_2 != (int *)0x0);
  }
  piVar9 = *(int **)(param_1 + 8);
  if (piVar7 != piVar9) {
    iVar3 = param_3 * 8 - (int)piVar7;
    do {
      FUN_005999d0((undefined1 *)((int)pvVar10 + iVar3 + (int)piVar7),piVar7);
      piVar7 = piVar7 + 2;
    } while (piVar7 != piVar9);
  }
  iVar3 = *(int *)(param_1 + 8);
  for (iVar8 = *(int *)(param_1 + 4); iVar8 != iVar3; iVar8 = iVar8 + 8) {
    FUN_005987a0();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar5 * 8);
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 0) {
    *(void **)(param_1 + 4) = pvVar4;
    *(void **)(param_1 + 8) = (void *)((int)pvVar4 + param_3 * 8);
    return;
  }
  *(void **)(param_1 + 4) = pvVar4;
  *(void **)(param_1 + 8) =
       (void *)((int)pvVar4 + ((*(int *)(param_1 + 8) - iVar5 >> 3) + param_3) * 8);
  return;
}

