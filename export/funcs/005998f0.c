
undefined1 * __thiscall FUN_005998f0(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  puVar3 = param_2;
  for (puVar4 = param_3; puVar4 != puVar1; puVar4 = puVar4 + 8) {
    *puVar3 = *puVar4;
    puVar3[1] = puVar3[(int)(param_3 + (1 - (int)param_2))];
    if (*(int *)(puVar3 + 4) != 0) {
      FUN_00599980();
      *(undefined4 *)(puVar3 + 4) = 0;
    }
    iVar2 = *(int *)(puVar3 + (int)(param_3 + (4 - (int)param_2)));
    *(int *)(puVar3 + 4) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3 = puVar3 + 8;
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (puVar4 = puVar3; puVar4 != puVar1; puVar4 = puVar4 + 8) {
    FUN_005987a0();
  }
  *(undefined1 **)(param_1 + 8) = puVar3;
  return param_2;
}

