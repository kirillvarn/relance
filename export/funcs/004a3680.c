
void __thiscall FUN_004a3680(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar6) / 0x18)) {
    if ((uint)(((int)puVar6 - (int)param_2) / 0x18) < param_3) {
      puVar3 = param_2 + param_3 * 6;
      if (param_2 != puVar6) {
        puVar2 = puVar3 + param_3 * -6;
        do {
          if (puVar3 != (undefined4 *)0x0) {
            puVar7 = puVar2;
            puVar8 = puVar3;
            for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          puVar2 = puVar2 + 6;
          puVar3 = puVar3 + 6;
        } while (puVar2 != puVar6);
      }
      puVar6 = *(undefined4 **)(param_1 + 8);
      for (iVar5 = param_3 - ((int)puVar6 - (int)param_2) / 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          puVar3 = param_4;
          puVar2 = puVar6;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + 1;
          }
        }
        puVar6 = puVar6 + 6;
      }
      puVar6 = *(undefined4 **)(param_1 + 8);
      while (param_2 != puVar6) {
        puVar7 = param_2 + 6;
        puVar3 = param_4;
        puVar2 = param_2;
        for (iVar5 = 6; param_2 = puVar7, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x18;
      return;
    }
    if (param_3 != 0) {
      puVar3 = puVar6;
      for (puVar2 = puVar6 + param_3 * -6; puVar2 != puVar6; puVar2 = puVar2 + 6) {
        if (puVar3 != (undefined4 *)0x0) {
          puVar7 = puVar2;
          puVar8 = puVar3;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar3 = puVar3 + 6;
      }
      puVar6 = *(undefined4 **)(param_1 + 8);
      puVar3 = puVar6 + param_3 * -6;
      while (puVar3 != param_2) {
        puVar3 = puVar3 + -6;
        puVar6 = puVar6 + -6;
        puVar2 = puVar3;
        puVar7 = puVar6;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar6 = param_2;
      while (puVar6 != param_2 + param_3 * 6) {
        puVar7 = puVar6 + 6;
        puVar3 = param_4;
        puVar2 = puVar6;
        for (iVar5 = 6; puVar6 = puVar7, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x18;
    }
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar6 - iVar5) / 0x18, uVar4 <= param_3)) {
    uVar4 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar6 - iVar5) / 0x18;
  }
  iVar5 = iVar5 + uVar4;
  iVar1 = iVar5;
  if (iVar5 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 0x18);
  puVar3 = puVar2;
  for (puVar6 = *(undefined4 **)(param_1 + 4); puVar7 = puVar3, uVar4 = param_3, puVar6 != param_2;
      puVar6 = puVar6 + 6) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      puVar8 = puVar3;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar3 = puVar3 + 6;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (puVar7 != (undefined4 *)0x0) {
      puVar6 = param_4;
      puVar8 = puVar7;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = puVar7 + 6;
  }
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar6 = puVar3 + param_3 * 6;
  if (param_2 != puVar7) {
    param_2 = (undefined4 *)((int)puVar6 + (param_3 * -0x18 - (int)puVar3) + (int)param_2);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        puVar3 = param_2;
        puVar8 = puVar6;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      param_2 = param_2 + 6;
      puVar6 = puVar6 + 6;
    } while (param_2 != puVar7);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 **)(param_1 + 0xc) = puVar2 + iVar5 * 6;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 4) = puVar2;
    *(undefined4 **)(param_1 + 8) = puVar2 + param_3 * 6;
    return;
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  *(undefined4 **)(param_1 + 8) = puVar2 + (param_3 + (*(int *)(param_1 + 8) - iVar1) / 0x18) * 6;
  return;
}

