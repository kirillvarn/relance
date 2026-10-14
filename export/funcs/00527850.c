
void FUN_00527850(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar5 = param_2;
  puStack_8 = &LAB_005c01e1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    puVar10 = param_2 + 3;
    puVar11 = param_1 + 3;
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    *(undefined1 *)((int)param_1 + 0x41) = *(undefined1 *)((int)param_2 + 0x41);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    pvVar6 = operator_new(0x18);
    *(undefined4 *)((int)pvVar6 + 4) = 0;
    *(undefined1 *)((int)pvVar6 + 0x15) = 0;
    *(undefined1 *)((int)pvVar6 + 0x14) = 1;
    param_1[0x12] = pvVar6;
    *(undefined1 *)((int)pvVar6 + 0x15) = 1;
    *(undefined4 *)param_1[0x12] = 0;
    *(undefined4 *)(param_1[0x12] + 8) = 0;
    uVar8 = param_1[0x12];
    pvVar6 = operator_new(0x18);
    *(undefined4 *)((int)pvVar6 + 4) = uVar8;
    *(undefined1 *)((int)pvVar6 + 0x14) = 0;
    *(undefined1 *)((int)pvVar6 + 0x15) = 0;
    param_1[0x11] = pvVar6;
    *(void **)pvVar6 = pvVar6;
    *(undefined4 *)(param_1[0x11] + 8) = param_1[0x11];
    puVar10 = (undefined4 *)param_1[0x12];
    param_1[0x14] = 0;
    puVar11 = *(undefined4 **)(param_2[0x11] + 4);
    param_2 = puVar10;
    if (*(char *)((int)puVar11 + 0x15) == '\0') {
      puVar7 = (undefined4 *)FUN_0040f110(param_1[0x11],*(undefined1 *)(puVar11 + 5));
      FUN_004e5fc0(puVar7 + 3,puVar11 + 3);
      *puVar7 = param_1[0x12];
      puVar7[2] = param_1[0x12];
      if (puVar10 == (undefined4 *)param_1[0x12]) {
        param_2 = puVar7;
      }
      uVar8 = FUN_00527770(*puVar11,puVar7);
      *puVar7 = uVar8;
      uVar8 = FUN_00527770(puVar11[2],puVar7);
      puVar7[2] = uVar8;
    }
    *(undefined4 **)(param_1[0x11] + 4) = param_2;
    param_1[0x14] = puVar5[0x14];
    piVar2 = (int *)param_1[0x11];
    piVar3 = (int *)piVar2[1];
    if (piVar3 != (int *)param_1[0x12]) {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *piVar2 = (int)piVar3;
      iVar9 = param_1[0x11];
      uVar8 = FUN_00527a00(*(undefined4 *)(iVar9 + 4));
      *(undefined4 *)(iVar9 + 8) = uVar8;
      ExceptionList = local_c;
      return;
    }
    *piVar2 = (int)piVar2;
    *(undefined4 *)(param_1[0x11] + 8) = param_1[0x11];
  }
  ExceptionList = local_c;
  return;
}

