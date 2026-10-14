
void __thiscall FUN_0058d5e0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 local_138 [8];
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_d4 [8];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c47b8;
  local_c = ExceptionList;
  if (param_2 == *(int *)(param_1 + 0x55c)) {
    return;
  }
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x55c) = param_2;
  FUN_005908a0(*(undefined4 *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x568));
  iVar4 = *(int *)(param_1 + 0x55c);
  if (iVar4 == 1) {
    local_68 = 0;
    local_64 = 0;
    local_4 = 0;
    FUN_004144b0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004963a0();
    local_4 = 2;
    if (*(int *)(param_1 + 0x4b4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x4b8) - *(int *)(param_1 + 0x4b4) >> 2;
    }
    if (*(int *)(param_1 + 0x564) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x564)) / 100;
    }
    if (uVar3 < uVar2) {
      uVar1 = *(undefined4 *)(param_1 + 0x568);
      puVar6 = local_70;
      iVar4 = FUN_0058fa90(puVar6);
      FUN_00590500(uVar1,uVar2 - iVar4,puVar6);
    }
    else {
      uVar3 = FUN_0058fa90();
      if (uVar2 < uVar3) {
        FUN_005908a0(uVar2 * 100 + *(int *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x568));
      }
    }
    local_4 = 3;
    FUN_00444e50();
  }
  else if (iVar4 == 2) {
    uVar2 = 0;
    local_130 = 0;
    local_12c = 0;
    local_4 = 4;
    FUN_004144b0();
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004963a0();
    local_4 = 6;
    if (*(int *)(param_1 + 0x4a4) != 0) {
      uVar2 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
    }
    uVar3 = FUN_0058fa90();
    if (uVar3 < uVar2) {
      uVar1 = *(undefined4 *)(param_1 + 0x568);
      puVar6 = local_138;
      iVar4 = FUN_0058fa90(puVar6);
      FUN_00590500(uVar1,uVar2 - iVar4,puVar6);
    }
    else {
      uVar3 = FUN_0058fa90();
      if (uVar2 < uVar3) {
        FUN_005908a0(uVar2 * 100 + *(int *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x568));
      }
    }
    local_4 = 7;
    FUN_00444e50();
  }
  else {
    if (iVar4 != 3) goto LAB_0058d896;
    local_cc = 0;
    local_c8 = 0;
    local_4 = 8;
    FUN_004144b0();
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_004963a0();
    local_4 = 10;
    uVar2 = FUN_0058f9e0();
    uVar3 = FUN_0058fa90();
    if (uVar3 < uVar2) {
      uVar1 = *(undefined4 *)(param_1 + 0x568);
      puVar6 = local_d4;
      iVar4 = FUN_0058fa90(puVar6);
      FUN_00590500(uVar1,uVar2 - iVar4,puVar6);
    }
    else {
      uVar3 = FUN_0058fa90();
      if (uVar2 < uVar3) {
        FUN_005908a0(uVar2 * 100 + *(int *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x568));
      }
    }
    local_4 = 0xb;
    FUN_00444e50();
  }
  local_4 = 0xffffffff;
  FUN_00444e20();
LAB_0058d896:
  piVar5 = *(int **)(param_1 + 0x564);
  iVar4 = param_1;
  if (piVar5 != *(int **)(param_1 + 0x568)) {
    do {
      FUN_004963a0();
      *piVar5 = iVar4 + 1;
      piVar5[1] = 0;
      piVar5 = piVar5 + 0x19;
      iVar4 = iVar4 + 1;
    } while (piVar5 != *(int **)(param_1 + 0x568));
  }
  ExceptionList = local_c;
  return;
}

