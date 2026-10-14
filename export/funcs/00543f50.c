
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00543f50(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  long *plVar9;
  HardpointInfo *pHVar10;
  undefined1 *local_f0;
  int *local_ec;
  int local_e8;
  int iStack_e4;
  long local_e0;
  HardpointInfo local_dc [4];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc [14];
  undefined4 auStack_94 [9];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [8];
  undefined4 *puStack_5c;
  int iStack_4c;
  float fStack_1c;
  void *local_c;
  undefined *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005c0e93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = ID_String::IsEmpty((ID_String *)SND_CARGO_JETTISONED_exref);
  if (bVar1) {
    ExceptionList = local_c;
    return;
  }
  if ((((param_1 == (int *)0x0) || (param_1 == (int *)0xfffffff4)) ||
      (iVar3 = param_1[4], iVar3 == 0)) || ((*(uint *)(iVar3 + 0x4c) & 0x503) != 0x503)) {
    iVar3 = 0;
  }
  if (**(char **)(*(int *)(iVar3 + 0x88) + 0xe0) != '\0') {
    if (((param_1 == (int *)0x0) || (param_1 == (int *)0xfffffff4)) ||
       ((iVar3 = param_1[4], iVar3 == 0 || ((*(uint *)(iVar3 + 0x4c) & 0x503) != 0x503)))) {
      iVar3 = 0;
    }
    pcVar8 = *(char **)(*(int *)(iVar3 + 0x88) + 0xe0);
    pHVar10 = local_dc;
    plVar9 = &local_e0;
    lVar4 = (**(code **)(*param_1 + 0x1c))();
    bVar1 = FindHardpoint_PS(lVar4,pcVar8,plVar9,pHVar10);
    if (bVar1) goto LAB_00544085;
  }
  local_f0 = (undefined1 *)0x0;
  local_ec = (int *)0x0;
  local_e8 = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc[8] = 0x3f800000;
  local_cc[4] = 0x3f800000;
  local_cc[0] = 0x3f800000;
  local_cc[7] = 0;
  local_cc[6] = 0;
  local_cc[5] = 0;
  local_cc[3] = 0;
  local_cc[2] = 0;
  local_cc[1] = 0;
LAB_00544085:
  FUN_0040e250();
  uStack_4 = 0;
  iStack_4c = FUN_0042ae40(SND_CARGO_JETTISONED_exref);
  puVar6 = local_cc;
  puVar7 = auStack_94;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uStack_70 = local_d8;
  uStack_6c = local_d4;
  uStack_68 = local_d0;
  uVar5 = (**(code **)(*param_1 + 0x1c))();
  iVar3 = FUN_005792b0(0x25);
  if (iVar3 != 0) {
    local_f0 = auStack_64;
    local_ec = (int *)0x0;
    local_e8 = 0;
    iStack_e4 = 0;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    iVar3 = FUN_005792b0(0x26);
    if (((iVar3 != 0) && (puStack_5c != (undefined4 *)0x0)) && (*(char *)*puStack_5c != '\0')) {
      local_e8 = (*(code *)*DAT_00674c60)();
    }
    if (iStack_4c != 0) {
      local_ec = (int *)(*(code *)DAT_00674c60[1])();
    }
    if (_DAT_005c7474 < fStack_1c) {
      iStack_e4 = (*(code *)DAT_00674c60[2])();
    }
    if (local_e8 != 0) {
      FUN_004f7d20(param_1,uVar5,auStack_94);
    }
    if (local_ec != (int *)0x0) {
      (**(code **)(*local_ec + 0x94))(uVar5,auStack_94);
    }
    if (iStack_e4 != 0) {
      FUN_005377c0(uVar5,auStack_94);
    }
    cVar2 = FUN_00544230(&local_f0,auStack_64);
    if (cVar2 != '\0') {
      FUN_004fcea0(&local_f0);
    }
    uStack_4 = uStack_4 & 0xffffff00;
    FUN_00502d90();
  }
  uStack_4 = 0xffffffff;
  FUN_0040e2a0();
  ExceptionList = local_c;
  return;
}

