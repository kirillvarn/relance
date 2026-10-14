
void __thiscall FUN_00537d20(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = param_3[4];
  puVar7 = param_2;
  if (iVar6 <= (int)param_2[7]) {
    do {
      iVar1 = param_3[2];
      iVar2 = puVar7[5];
      iVar4 = param_3[3] - puVar7[6];
      if (iVar1 - iVar2 < iVar6) {
        if (iVar4 < iVar6) {
          puVar5 = (undefined4 *)puVar7[1];
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(param_1 + 0x3404);
            if (puVar5 == (undefined4 *)0x0) goto LAB_00537dd1;
            *(undefined4 *)(param_1 + 0x3404) = *puVar5;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            iVar3 = puVar7[7];
            puVar7[1] = puVar5;
            puVar5[7] = iVar3 / 2;
            puVar5[5] = puVar7[5] - iVar3 / 2;
            puVar5[6] = puVar7[6] - puVar5[7];
          }
          FUN_00537d20(puVar5,param_3);
        }
LAB_00537dd1:
        if (-iVar4 < iVar6) {
          puVar5 = (undefined4 *)puVar7[3];
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(param_1 + 0x3404);
            if (puVar5 == (undefined4 *)0x0) goto LAB_00537e38;
            *(undefined4 *)(param_1 + 0x3404) = *puVar5;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            iVar3 = puVar7[7];
            puVar7[3] = puVar5;
            puVar5[7] = iVar3 / 2;
            puVar5[5] = puVar7[5] - iVar3 / 2;
            puVar5[6] = puVar7[6] + puVar5[7];
          }
          FUN_00537d20(puVar5,param_3);
        }
      }
LAB_00537e38:
      if (iVar6 <= -(iVar1 - iVar2)) {
        return;
      }
      if (iVar4 < iVar6) {
        puVar5 = (undefined4 *)*puVar7;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = *(undefined4 **)(param_1 + 0x3404);
          if (puVar5 == (undefined4 *)0x0) goto LAB_00537e9f;
          *(undefined4 *)(param_1 + 0x3404) = *puVar5;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          iVar1 = puVar7[7];
          *puVar7 = puVar5;
          puVar5[7] = iVar1 / 2;
          puVar5[5] = puVar7[5] + iVar1 / 2;
          puVar5[6] = puVar7[6] - puVar5[7];
        }
        FUN_00537d20(puVar5,param_3);
      }
LAB_00537e9f:
      if (iVar6 <= -iVar4) {
        return;
      }
      param_2 = (undefined4 *)puVar7[2];
      if (param_2 == (undefined4 *)0x0) {
        param_2 = *(undefined4 **)(param_1 + 0x3404);
        if (param_2 == (undefined4 *)0x0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x3404) = *param_2;
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        iVar6 = puVar7[7];
        puVar7[2] = param_2;
        param_2[7] = iVar6 / 2;
        param_2[5] = puVar7[5] + iVar6 / 2;
        param_2[6] = puVar7[6] + param_2[7];
      }
      iVar6 = param_3[4];
      puVar7 = param_2;
    } while (iVar6 <= (int)param_2[7]);
  }
  puVar7 = *(undefined4 **)(param_1 + 0x1400);
  if (puVar7 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x1400) = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar5 = puVar7;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    *puVar7 = param_2[4];
    param_2[4] = puVar7;
  }
  return;
}

