
void __thiscall FUN_004fcb40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(uint *)(param_1 + 0x24) < (uint)(*(int *)(param_1 + 0x14) + param_2)) {
    iVar2 = *(int *)(param_1 + 0x1c) * 3;
    puVar3 = operator_new((*(uint *)(param_1 + 0x24) + iVar2) * 2);
    if (puVar3 != (undefined4 *)0x0) {
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        uVar1 = *(uint *)(param_1 + 0x24);
        puVar6 = *(undefined4 **)(param_1 + 0x10);
        puVar7 = puVar3;
        for (uVar4 = (uVar1 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar5 = (uVar1 & 1) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 **)(param_1 + 0x10) = puVar3;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar2;
    }
  }
  return;
}

