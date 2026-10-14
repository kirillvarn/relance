
void __thiscall FUN_00418890(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  puVar6 = *(undefined1 **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)puVar6)) {
    if ((uint)((int)puVar6 - (int)param_2) < param_3) {
      puVar7 = param_2 + param_3;
      if (param_2 != puVar6) {
        puVar5 = puVar7 + -param_3;
        do {
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = *puVar5;
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar6);
      }
      puVar6 = *(undefined1 **)(param_1 + 8);
      for (puVar7 = param_2 + (param_3 - (int)puVar6); puVar7 != (undefined1 *)0x0;
          puVar7 = puVar7 + -1) {
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = *param_4;
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined1 **)(param_1 + 8);
      for (; param_2 != puVar6; param_2 = param_2 + 1) {
        *param_2 = *param_4;
      }
    }
    else {
      if (param_3 == 0) {
        return;
      }
      puVar7 = puVar6;
      for (puVar5 = puVar6 + -param_3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = *(undefined1 **)(param_1 + 8);
      for (puVar7 = puVar6 + -param_3; param_2 != puVar7; puVar7 = puVar7 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar7[-1];
      }
      puVar6 = param_2 + param_3;
      for (; param_2 != puVar6; param_2 = param_2 + 1) {
        *param_2 = *param_4;
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if ((iVar2 == 0) || (uVar3 = (int)puVar6 - iVar2, (uint)((int)puVar6 - iVar2) <= param_3)) {
    uVar3 = param_3;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2;
  }
  uVar3 = iVar2 + uVar3;
  uVar4 = uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = 0;
  }
  puVar5 = operator_new(uVar4);
  puVar7 = puVar5;
  for (puVar6 = *(undefined1 **)(param_1 + 4); uVar4 = param_3, puVar1 = puVar7, puVar6 != param_2;
      puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_4;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar6 = puVar7 + param_3;
  if (param_2 != puVar1) {
    param_2 = param_2 + (int)(puVar6 + (-param_3 - (int)puVar7));
    do {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *param_2;
      }
      puVar6 = puVar6 + 1;
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined1 **)(param_1 + 0xc) = puVar5 + uVar3;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    *(undefined1 **)(param_1 + 4) = puVar5;
    *(undefined1 **)(param_1 + 8) = puVar5 + param_3;
    return;
  }
  *(undefined1 **)(param_1 + 4) = puVar5;
  *(undefined1 **)(param_1 + 8) = puVar5 + param_3 + (*(int *)(param_1 + 8) - iVar2);
  return;
}

