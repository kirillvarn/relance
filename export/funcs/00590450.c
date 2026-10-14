
undefined1 * __thiscall FUN_00590450(int param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar5 = param_2;
  if (param_3 != puVar2) {
    puVar6 = param_3 + 1;
    do {
      *puVar5 = *(undefined1 *)(puVar6 + -1);
      puVar5[1] = puVar5[(int)param_3 + (1 - (int)param_2)];
      puVar5[2] = *(undefined1 *)((int)puVar6 + -2);
      *(undefined4 *)(puVar5 + 4) = *puVar6;
      if (*(int *)(puVar5 + 8) != 0) {
        FUN_00599980();
        *(undefined4 *)(puVar5 + 8) = 0;
      }
      iVar3 = puVar6[1];
      *(int *)(puVar5 + 8) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      puVar1 = puVar6 + 2;
      puVar5 = puVar5 + 0xc;
      puVar6 = puVar6 + 3;
    } while (puVar1 != puVar2);
  }
  puVar4 = *(undefined1 **)(param_1 + 8);
  puVar7 = puVar5;
  if (puVar5 == puVar4) {
    *(undefined1 **)(param_1 + 8) = puVar5;
    return param_2;
  }
  do {
    FUN_0058e430();
    puVar7 = puVar7 + 0xc;
  } while (puVar7 != puVar4);
  *(undefined1 **)(param_1 + 8) = puVar5;
  return param_2;
}

