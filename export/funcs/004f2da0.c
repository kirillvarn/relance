
undefined4 * __thiscall
FUN_004f2da0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar3) / 0x34)) {
    puVar4 = (undefined4 *)(((int)puVar3 - (int)param_2) * 0x4ec4ec4f);
    if ((uint)(((int)puVar3 - (int)param_2) / 0x34) < param_3) {
      puVar4 = param_2 + param_3 * 0xd;
      if (param_2 != puVar3) {
        puVar2 = puVar4 + param_3 * -0xd;
        do {
          if (puVar4 != (undefined4 *)0x0) {
            puVar7 = puVar2;
            puVar8 = puVar4;
            for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          puVar2 = puVar2 + 0xd;
          puVar4 = puVar4 + 0xd;
        } while (puVar2 != puVar3);
      }
      puVar3 = *(undefined4 **)(param_1 + 8);
      for (iVar6 = param_3 - ((int)puVar3 - (int)param_2) / 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = param_4;
          puVar2 = puVar3;
          for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar2 = puVar2 + 1;
          }
        }
        puVar3 = puVar3 + 0xd;
      }
      puVar3 = *(undefined4 **)(param_1 + 8);
      while (param_2 != puVar3) {
        puVar7 = param_2 + 0xd;
        puVar4 = param_4;
        puVar2 = param_2;
        for (iVar6 = 0xd; param_2 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * 0x34);
      *(undefined4 **)(param_1 + 8) = puVar3;
      return puVar3;
    }
    if (param_3 != 0) {
      puVar4 = puVar3;
      for (puVar2 = puVar3 + param_3 * -0xd; puVar2 != puVar3; puVar2 = puVar2 + 0xd) {
        if (puVar4 != (undefined4 *)0x0) {
          puVar7 = puVar2;
          puVar8 = puVar4;
          for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar4 = puVar4 + 0xd;
      }
      puVar3 = *(undefined4 **)(param_1 + 8);
      puVar4 = puVar3 + param_3 * -0xd;
      while (puVar4 != param_2) {
        puVar4 = puVar4 + -0xd;
        puVar3 = puVar3 + -0xd;
        puVar2 = puVar4;
        puVar7 = puVar3;
        for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar4 = param_2 + param_3 * 0xd;
      while (param_2 != puVar4) {
        puVar7 = param_2 + 0xd;
        puVar3 = param_4;
        puVar2 = param_2;
        for (iVar6 = 0xd; param_2 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x34;
    }
    return puVar4;
  }
  iVar6 = *(int *)(param_1 + 4);
  if ((iVar6 == 0) || (uVar5 = ((int)puVar3 - iVar6) / 0x34, uVar5 <= param_3)) {
    uVar5 = param_3;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = ((int)puVar3 - iVar6) / 0x34;
  }
  iVar6 = iVar6 + uVar5;
  iVar1 = iVar6;
  if (iVar6 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 0x34);
  puVar4 = puVar2;
  for (puVar3 = *(undefined4 **)(param_1 + 4); puVar7 = puVar4, uVar5 = param_3, puVar3 != param_2;
      puVar3 = puVar3 + 0xd) {
    if (puVar4 != (undefined4 *)0x0) {
      puVar7 = puVar3;
      puVar8 = puVar4;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar4 = puVar4 + 0xd;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = param_4;
      puVar8 = puVar7;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = puVar7 + 0xd;
  }
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar3 = puVar4 + param_3 * 0xd;
  if (param_2 != puVar7) {
    param_2 = (undefined4 *)((int)puVar3 + (param_3 * -0x34 - (int)puVar4) + (int)param_2);
    do {
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = param_2;
        puVar8 = puVar3;
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      param_2 = param_2 + 0xd;
      puVar3 = puVar3 + 0xd;
    } while (param_2 != puVar7);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 **)(param_1 + 0xc) = puVar2 + iVar6 * 0xd;
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 **)(param_1 + 4) = puVar2;
    *(undefined4 **)(param_1 + 8) = puVar2 + param_3 * 0xd;
    return (undefined4 *)0x0;
  }
  iVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  *(undefined4 **)(param_1 + 4) = puVar2;
  *(undefined4 **)(param_1 + 8) = puVar2 + (iVar6 / 0x34 + param_3) * 0xd;
  return (undefined4 *)-(iVar6 >> 0x1f);
}

