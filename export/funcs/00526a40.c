
undefined4 * __thiscall FUN_00526a40(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *local_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar10 = param_2 + 2;
  puVar7 = param_1 + 2;
  for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((int)param_1 + 0x3d) = *(undefined1 *)((int)param_2 + 0x3d);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  pvVar6 = operator_new(0x18);
  *(undefined4 *)((int)pvVar6 + 4) = 0;
  *(undefined1 *)((int)pvVar6 + 0x15) = 0;
  *(undefined1 *)((int)pvVar6 + 0x14) = 1;
  param_1[0x11] = pvVar6;
  *(undefined1 *)((int)pvVar6 + 0x15) = 1;
  *(undefined4 *)param_1[0x11] = 0;
  *(undefined4 *)(param_1[0x11] + 8) = 0;
  uVar8 = param_1[0x11];
  pvVar6 = operator_new(0x18);
  *(undefined4 *)((int)pvVar6 + 4) = uVar8;
  *(undefined1 *)((int)pvVar6 + 0x14) = 0;
  *(undefined1 *)((int)pvVar6 + 0x15) = 0;
  param_1[0x10] = pvVar6;
  *(void **)pvVar6 = pvVar6;
  *(undefined4 *)(param_1[0x10] + 8) = param_1[0x10];
  local_4 = (undefined4 *)param_1[0x11];
  param_1[0x13] = 0;
  puVar10 = *(undefined4 **)(param_2[0x10] + 4);
  if (*(char *)((int)puVar10 + 0x15) == '\0') {
    puVar7 = (undefined4 *)FUN_0040f110(param_1[0x10],*(undefined1 *)(puVar10 + 5));
    FUN_004e5fc0(puVar7 + 3,puVar10 + 3);
    *puVar7 = param_1[0x11];
    puVar7[2] = param_1[0x11];
    if (local_4 == (undefined4 *)param_1[0x11]) {
      local_4 = puVar7;
    }
    uVar8 = FUN_00527770(*puVar10,puVar7);
    *puVar7 = uVar8;
    uVar8 = FUN_00527770(puVar10[2],puVar7);
    puVar7[2] = uVar8;
  }
  *(undefined4 **)(param_1[0x10] + 4) = local_4;
  piVar2 = (int *)param_1[0x10];
  param_1[0x13] = param_2[0x13];
  piVar3 = (int *)piVar2[1];
  if (piVar3 == (int *)param_1[0x11]) {
    *piVar2 = (int)piVar2;
    *(undefined4 *)(param_1[0x10] + 8) = param_1[0x10];
    return param_1;
  }
  cVar1 = *(char *)(*piVar3 + 0x15);
  piVar5 = (int *)*piVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar5 + 0x15);
    piVar3 = piVar5;
    piVar5 = (int *)*piVar5;
  }
  *piVar2 = (int)piVar3;
  iVar9 = *(int *)(param_1[0x10] + 4);
  iVar4 = *(int *)(iVar9 + 8);
  cVar1 = *(char *)(iVar4 + 0x15);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x15);
    iVar9 = iVar4;
    iVar4 = *(int *)(iVar4 + 8);
  }
  *(int *)(param_1[0x10] + 8) = iVar9;
  return param_1;
}

