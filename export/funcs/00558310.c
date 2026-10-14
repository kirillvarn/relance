
void __thiscall FUN_00558310(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 local_60 [18];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c153b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(8);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    pvVar2 = operator_new(0x7c);
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00557700(param_2);
    }
    local_60[8] = 0x3f800000;
    local_60[4] = 0x3f800000;
    local_60[0] = 0x3f800000;
    local_60[7] = 0;
    local_60[6] = 0;
    local_60[5] = 0;
    local_60[3] = 0;
    local_60[2] = 0;
    local_60[1] = 0;
    puVar6 = local_60;
    puVar7 = local_60 + 9;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_18 = 0;
    local_14 = 0;
    *piVar1 = iVar3;
    local_10 = 0;
    puVar6 = local_60 + 9;
    puVar7 = (undefined4 *)(iVar3 + 0x4c);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    piVar1[1] = param_3;
  }
  iVar3 = *(int *)(param_1 + 4);
  piVar8 = *(int **)(iVar3 + 4);
  local_4 = 0xffffffff;
  piVar4 = operator_new(0xc);
  *piVar4 = iVar3;
  if (piVar8 == (int *)0x0) {
    piVar8 = piVar4;
  }
  piVar4[1] = (int)piVar8;
  *(int **)(iVar3 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = (int)piVar1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  ExceptionList = local_c;
  return;
}

