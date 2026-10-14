
void FUN_00418cd0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8951;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = &PTR_LAB_005c8e1c;
    iVar8 = 0x11;
    puVar9 = param_2;
    puVar6 = param_1;
    while( true ) {
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      *puVar6 = *puVar9;
    }
    puVar9 = param_2 + 0x12;
    puVar6 = param_1 + 0x12;
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar9 = param_2 + 0x23;
    puVar6 = param_1 + 0x23;
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    param_1[0x34] = param_2[0x34];
    param_1[0x35] = param_2[0x35];
    param_1[0x36] = param_2[0x36];
    puVar9 = param_2 + 0x37;
    puVar6 = param_1 + 0x37;
    for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    param_1[0x46] = param_2[0x46];
    param_1[0x47] = param_2[0x47];
    puVar9 = param_2 + 0x48;
    puVar6 = param_1 + 0x48;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar6 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    }
    param_1[0x56] = param_2[0x56];
    *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
    *(undefined1 *)((int)param_1 + 0x15d) = *(undefined1 *)((int)param_2 + 0x15d);
    *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
    pvVar5 = operator_new(0x18);
    *(undefined4 *)((int)pvVar5 + 4) = 0;
    *(undefined1 *)((int)pvVar5 + 0x15) = 0;
    *(undefined1 *)((int)pvVar5 + 0x14) = 1;
    param_1[0x59] = pvVar5;
    *(undefined1 *)((int)pvVar5 + 0x15) = 1;
    *(undefined4 *)param_1[0x59] = 0;
    *(undefined4 *)(param_1[0x59] + 8) = 0;
    uVar7 = param_1[0x59];
    pvVar5 = operator_new(0x18);
    *(undefined4 *)((int)pvVar5 + 4) = uVar7;
    *(undefined1 *)((int)pvVar5 + 0x14) = 0;
    *(undefined1 *)((int)pvVar5 + 0x15) = 0;
    param_1[0x58] = pvVar5;
    *(void **)pvVar5 = pvVar5;
    *(undefined4 *)(param_1[0x58] + 8) = param_1[0x58];
    local_14 = (undefined4 *)param_1[0x59];
    param_1[0x5b] = 0;
    puVar9 = *(undefined4 **)(param_2[0x58] + 4);
    if (*(char *)((int)puVar9 + 0x15) == '\0') {
      puVar6 = (undefined4 *)FUN_0040f110(param_1[0x58],*(undefined1 *)(puVar9 + 5));
      FUN_004e5fc0(puVar6 + 3,puVar9 + 3);
      *puVar6 = param_1[0x59];
      puVar6[2] = param_1[0x59];
      if (local_14 == (undefined4 *)param_1[0x59]) {
        local_14 = puVar6;
      }
      uVar7 = FUN_00418fc0(*puVar9,puVar6);
      *puVar6 = uVar7;
      uVar7 = FUN_00418fc0(puVar9[2],puVar6);
      puVar6[2] = uVar7;
    }
    *(undefined4 **)(param_1[0x58] + 4) = local_14;
    param_1[0x5b] = param_2[0x5b];
    piVar2 = (int *)param_1[0x58];
    piVar3 = (int *)piVar2[1];
    if (piVar3 == (int *)param_1[0x59]) {
      *piVar2 = (int)piVar2;
      *(undefined4 *)(param_1[0x58] + 8) = param_1[0x58];
    }
    else {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *piVar2 = (int)piVar3;
      iVar8 = param_1[0x58];
      uVar7 = FUN_00527a00(*(undefined4 *)(iVar8 + 4));
      *(undefined4 *)(iVar8 + 8) = uVar7;
    }
    *param_1 = &PTR_LAB_005c8dec;
  }
  ExceptionList = local_c;
  return;
}

