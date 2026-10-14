
void __thiscall FUN_004a3360(int param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  
  piVar9 = param_2;
  piVar7 = *(int **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)piVar7 >> 3)) {
    if (param_3 <= (uint)((int)piVar7 - (int)param_2 >> 3)) {
      if (param_3 != 0) {
        piVar9 = piVar7;
        for (piVar12 = piVar7 + param_3 * -2; piVar12 != piVar7; piVar12 = piVar12 + 2) {
          FUN_004a3ec0(piVar9,piVar12);
          piVar9 = piVar9 + 2;
        }
        piVar7 = *(int **)(param_1 + 8);
        piVar9 = piVar7 + param_3 * -2;
        while (param_2 != piVar9) {
          pwVar1 = (wchar_t *)piVar9[-2];
          piVar9 = piVar9 + -2;
          piVar7 = piVar7 + -2;
          if (pwVar1 == (wchar_t *)0x0) {
            FUN_00414280();
          }
          else {
            sVar5 = wcslen(pwVar1);
            FUN_004142a0(sVar5 + 1);
            wcsncpy((wchar_t *)*piVar7,pwVar1,sVar5);
            *(undefined2 *)(*piVar7 + sVar5 * 2) = 0;
          }
        }
        piVar7 = param_2 + param_3 * 2;
        for (; param_2 != piVar7; param_2 = param_2 + 2) {
          pwVar1 = (wchar_t *)*param_4;
          if (pwVar1 == (wchar_t *)0x0) {
            FUN_00414280();
          }
          else {
            sVar5 = wcslen(pwVar1);
            FUN_004142a0(sVar5 + 1);
            wcsncpy((wchar_t *)*param_2,pwVar1,sVar5);
            *(undefined2 *)(*param_2 + sVar5 * 2) = 0;
          }
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
      }
      return;
    }
    for (; piVar9 != piVar7; piVar9 = piVar9 + 2) {
      FUN_004a3ec0(piVar9 + param_3 * 2,piVar9);
    }
    iVar6 = *(int *)(param_1 + 8);
    for (iVar3 = param_3 - (iVar6 - (int)param_2 >> 3); iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_004a3ec0(iVar6,param_4);
      iVar6 = iVar6 + 8;
    }
    piVar7 = *(int **)(param_1 + 8);
    for (; param_2 != piVar7; param_2 = param_2 + 2) {
      FUN_00413df0(*param_4,0xffffffff);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 8;
    return;
  }
  iVar6 = *(int *)(param_1 + 4);
  if ((iVar6 == 0) || (uVar2 = (int)piVar7 - iVar6 >> 3, uVar2 <= param_3)) {
    uVar2 = param_3;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)piVar7 - iVar6 >> 3;
  }
  iVar6 = uVar2 + iVar6;
  iVar3 = iVar6;
  if (iVar6 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 * 8);
  pvVar11 = pvVar4;
  for (piVar7 = *(int **)(param_1 + 4); piVar7 != param_2; piVar7 = piVar7 + 2) {
    FUN_004a3ec0(pvVar11,piVar7);
    pvVar11 = (void *)((int)pvVar11 + 8);
  }
  if (param_3 != 0) {
    param_2 = (int *)param_3;
    pvVar8 = pvVar11;
    do {
      FUN_004a3ec0(pvVar8,param_4);
      pvVar8 = (void *)((int)pvVar8 + 8);
      param_2 = (int *)((int)param_2 - 1);
    } while (param_2 != (int *)0x0);
  }
  piVar7 = *(int **)(param_1 + 8);
  if (piVar9 != piVar7) {
    iVar3 = param_3 * 8 - (int)piVar9;
    do {
      FUN_004a3ec0((int)pvVar11 + iVar3 + (int)piVar9,piVar9);
      piVar9 = piVar9 + 2;
    } while (piVar9 != piVar7);
  }
  iVar3 = *(int *)(param_1 + 8);
  for (iVar10 = *(int *)(param_1 + 4); iVar10 != iVar3; iVar10 = iVar10 + 8) {
    FUN_00444e20();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar6 * 8);
  if (*(int *)(param_1 + 4) != 0) {
    *(void **)(param_1 + 8) =
         (void *)((int)pvVar4 + ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3) + param_3) * 8
                 );
    *(void **)(param_1 + 4) = pvVar4;
    return;
  }
  *(void **)(param_1 + 8) = (void *)((int)pvVar4 + param_3 * 8);
  *(void **)(param_1 + 4) = pvVar4;
  return;
}

