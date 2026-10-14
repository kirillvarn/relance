
void FUN_0040ddd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_1 != param_2) {
    piVar9 = param_1 + 2;
    piVar8 = param_3 + 2;
    do {
      *param_3 = *param_1;
      if (piVar8 + -1 != piVar9 + -1) {
        puVar3 = (undefined4 *)*piVar9;
        if (puVar3 == (undefined4 *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = piVar9[1] - (int)puVar3 >> 2;
        }
        puVar6 = (undefined4 *)*piVar8;
        if (puVar6 == (undefined4 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = piVar8[1] - (int)puVar6 >> 2;
        }
        if (uVar2 < uVar7) {
          if (puVar3 == (undefined4 *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = piVar9[1] - (int)puVar3 >> 2;
          }
          uVar2 = FUN_0040d740();
          if (uVar7 <= uVar2) {
            iVar4 = FUN_005ad970();
            FUN_00527820(puVar3,puVar3 + iVar4,*piVar8);
            FUN_00597c70(puVar3 + iVar4,piVar9[1],piVar8[1]);
            iVar4 = FUN_005ad970();
            piVar8[1] = *piVar8 + iVar4 * 4;
            goto LAB_0040defb;
          }
          FUN_005b7e1d(*piVar8);
          iVar4 = FUN_005ad970();
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          pvVar5 = operator_new(iVar4 << 2);
          *piVar8 = (int)pvVar5;
          iVar4 = FUN_00597c70(*piVar9,piVar9[1],pvVar5);
          piVar8[2] = iVar4;
        }
        else {
          puVar1 = (undefined4 *)piVar9[1];
          for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
            *puVar6 = *puVar3;
            puVar6 = puVar6 + 1;
          }
          if (*piVar9 == 0) {
            iVar4 = *piVar8;
          }
          else {
            iVar4 = *piVar8 + (piVar9[1] - *piVar9 >> 2) * 4;
          }
        }
        piVar8[1] = iVar4;
      }
LAB_0040defb:
      FUN_005595c0(piVar9 + 3);
      param_1 = param_1 + 9;
      param_3 = param_3 + 9;
      piVar8 = piVar8 + 9;
      piVar9 = piVar9 + 9;
    } while (param_1 != param_2);
  }
  return;
}

