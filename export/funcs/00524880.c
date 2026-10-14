
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00524880(int param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  
  fVar5 = _DAT_005c75dc - param_2;
  *(float *)(param_1 + 0x230) = fVar5 * (float)s_ff__alpha_005db53c._0_4_ + param_2;
  if ((*(char *)(param_1 + 0x2c) != '\0') && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
    uVar6 = ftol();
    *(undefined4 *)(iVar1 + 0x48) = uVar6;
    if (*(char *)(param_1 + 0x198) != '\0') {
      fVar4 = (float)*(int *)(param_1 + 0x24) * *(float *)(param_1 + 0x230);
      FUN_0054feb0(fVar4,(float)*(int *)(param_1 + 0x20) * _DAT_005c9804 + fVar4);
      FUN_00550000(param_2);
    }
    if (*(int *)(param_1 + 0xdc) != 0) {
      fVar4 = (float)*(int *)(param_1 + 0x24) * *(float *)(param_1 + 0x230) * _DAT_005c9804;
      *(float *)(*(int *)(param_1 + 0xdc) + 0x14) = fVar4 * fVar4;
    }
    piVar8 = *(int **)(param_1 + 0x224);
    piVar2 = *(int **)(param_1 + 0x228);
    if (piVar8 != piVar2) {
      param_2 = fVar5 * _DAT_005c75e0 + param_2;
      fVar5 = _DAT_005c75dc / param_2;
      do {
        iVar1 = *piVar8;
        if ((*(int *)(iVar1 + 0xc) != 0) && (iVar9 = 0, 0 < *(int *)(iVar1 + 0x14))) {
          do {
            piVar3 = *(int **)(*(int *)(iVar1 + 0xc) + iVar9 * 4);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x15c))(1);
              *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar9 * 4) = 0;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(iVar1 + 0x14));
        }
        FUN_005b7e1d(*(undefined4 *)(iVar1 + 0xc));
        *(float *)(iVar1 + 0xe0) = param_2;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(float *)(iVar1 + 0xe4) = fVar5;
        iVar9 = ftol();
        *(int *)(iVar1 + 0x14) = iVar9;
        pvVar7 = operator_new(iVar9 << 2);
        *(void **)(iVar1 + 0xc) = pvVar7;
        iVar9 = 0;
        if (0 < *(int *)(iVar1 + 0x14)) {
          do {
            *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar9 * 4) = 0;
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(iVar1 + 0x14));
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar2);
    }
  }
  return;
}

