
void __thiscall FUN_004fc9a0(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(uint *)(param_1 + 0x24) < *(int *)(param_1 + 0x14) + 3U) {
    iVar5 = *(int *)(param_1 + 0x1c) * 3;
    puVar2 = operator_new((*(uint *)(param_1 + 0x24) + iVar5) * 2);
    if (puVar2 != (undefined4 *)0x0) {
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        uVar1 = *(uint *)(param_1 + 0x24);
        puVar6 = *(undefined4 **)(param_1 + 0x10);
        puVar7 = puVar2;
        for (uVar3 = (uVar1 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar4 = (uVar1 & 1) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 **)(param_1 + 0x10) = puVar2;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar5;
    }
  }
  *(undefined2 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 2) = param_2;
  iVar5 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar5;
  *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar5 * 2) = param_3;
  iVar5 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar5;
  *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar5 * 2) = param_4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

