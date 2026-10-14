
void __thiscall FUN_005afbf0(int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  
  uVar10 = *(undefined4 *)(param_1 + 4);
  puVar3 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
  puVar11 = *(undefined4 **)(param_1 + 8);
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    uVar1 = *(undefined1 *)(puVar3 + 4);
    puVar9 = operator_new(0x14);
    puVar9[1] = uVar10;
    *(undefined1 *)(puVar9 + 4) = uVar1;
    *(undefined1 *)((int)puVar9 + 0x11) = 0;
    FUN_005999b0(puVar9 + 3,puVar3 + 3);
    *puVar9 = *(undefined4 *)(param_1 + 8);
    puVar9[2] = *(undefined4 *)(param_1 + 8);
    if (puVar11 == *(undefined4 **)(param_1 + 8)) {
      puVar11 = puVar9;
    }
    uVar10 = FUN_005afd60(*puVar3,puVar9);
    *puVar9 = uVar10;
    uVar10 = FUN_005afd60(puVar3[2],puVar9);
    puVar9[2] = uVar10;
  }
  *(undefined4 **)(*(int *)(param_1 + 4) + 4) = puVar11;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  piVar4 = *(int **)(param_1 + 4);
  piVar5 = (int *)piVar4[1];
  if (piVar5 != *(int **)(param_1 + 8)) {
    cVar2 = *(char *)(*piVar5 + 0x11);
    piVar8 = (int *)*piVar5;
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*piVar8 + 0x11);
      piVar5 = piVar8;
      piVar8 = (int *)*piVar8;
    }
    *piVar4 = (int)piVar5;
    iVar6 = *(int *)(*(int *)(param_1 + 4) + 4);
    iVar7 = *(int *)(iVar6 + 8);
    cVar2 = *(char *)(iVar7 + 0x11);
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*(int *)(iVar7 + 8) + 0x11);
      iVar6 = iVar7;
      iVar7 = *(int *)(iVar7 + 8);
    }
    *(int *)(*(int *)(param_1 + 4) + 8) = iVar6;
    return;
  }
  *piVar4 = (int)piVar4;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

