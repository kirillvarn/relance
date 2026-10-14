
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00545670(int param_1,undefined4 param_2,CArchGroup *param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  char *pcVar11;
  long *plVar12;
  HardpointInfo *pHVar13;
  undefined4 uStack_f4;
  int *piStack_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  long lStack_e0;
  HardpointInfo aHStack_dc [4];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 auStack_cc [14];
  undefined4 auStack_94 [9];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [8];
  undefined4 *puStack_5c;
  int iStack_4c;
  float fStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c0f23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_e4 = param_1;
  switch(param_2) {
  case 2:
    piVar7 = (int *)(param_1 + -0xac);
    if (((piVar7 == (int *)0x0) || (param_1 == 0xa0)) ||
       ((iVar5 = *(int *)(param_1 + -0x9c), iVar5 == 0 ||
        ((*(uint *)(iVar5 + 0x4c) & 0x503) != 0x503)))) {
      iVar5 = 0;
    }
    ExceptionList = &local_c;
    if (**(char **)(*(int *)(iVar5 + 0x88) + 0xe0) == '\0') {
LAB_0054573b:
      uStack_f4 = 0;
      piStack_f0 = (int *)0x0;
      iStack_ec = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      auStack_cc[8] = 0x3f800000;
      auStack_cc[4] = 0x3f800000;
      auStack_cc[0] = 0x3f800000;
      auStack_cc[7] = 0;
      auStack_cc[6] = 0;
      auStack_cc[5] = 0;
      auStack_cc[3] = 0;
      auStack_cc[2] = 0;
      auStack_cc[1] = 0;
    }
    else {
      if (((piVar7 == (int *)0x0) || (param_1 == 0xa0)) ||
         ((iVar5 = *(int *)(param_1 + -0x9c), iVar5 == 0 ||
          ((*(uint *)(iVar5 + 0x4c) & 0x503) != 0x503)))) {
        iVar5 = 0;
      }
      pcVar11 = *(char **)(*(int *)(iVar5 + 0x88) + 0xe0);
      pHVar13 = aHStack_dc;
      plVar12 = &lStack_e0;
      ExceptionList = &local_c;
      lVar3 = (**(code **)(*piVar7 + 0x1c))();
      bVar1 = FindHardpoint_PS(lVar3,pcVar11,plVar12,pHVar13);
      if (!bVar1) goto LAB_0054573b;
    }
    FUN_0040e250();
    uStack_4 = 0;
    if (*param_3 == (CArchGroup)0x0) {
      if ((((piVar7 == (int *)0x0) || (param_1 == 0xa0)) ||
          (iVar5 = *(int *)(param_1 + -0x9c), iVar5 == 0)) ||
         ((*(uint *)(iVar5 + 0x4c) & 0x503) != 0x503)) {
        iVar5 = 0;
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x88) + 4) + 0x5c;
    }
    else {
      if (((piVar7 == (int *)0x0) || (param_1 == 0xa0)) ||
         ((iVar5 = *(int *)(param_1 + -0x9c), iVar5 == 0 ||
          ((*(uint *)(iVar5 + 0x4c) & 0x503) != 0x503)))) {
        iVar5 = 0;
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x88) + 4) + 0x58;
    }
    iStack_4c = FUN_0042ae40(iVar5);
    puVar8 = auStack_cc;
    puVar9 = auStack_94;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    uStack_70 = uStack_d8;
    uStack_6c = uStack_d4;
    uStack_68 = uStack_d0;
    uVar4 = (**(code **)(*piVar7 + 0x1c))();
    iVar5 = FUN_005792b0(0x25);
    if (iVar5 != 0) {
      FUN_005154a0(auStack_64,0,0,0);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      iVar5 = FUN_005792b0(0x26);
      if (((iVar5 != 0) && (puStack_5c != (undefined4 *)0x0)) && (*(char *)*puStack_5c != '\0')) {
        iStack_ec = (*(code *)*DAT_00674c60)();
      }
      if (iStack_4c != 0) {
        piStack_f0 = (int *)(*(code *)DAT_00674c60[1])();
      }
      if (_DAT_005c7474 < fStack_1c) {
        iStack_e8 = (*(code *)DAT_00674c60[2])();
      }
      if (iStack_ec != 0) {
        FUN_004f7d20(piVar7,uVar4,auStack_94);
      }
      if (piStack_f0 != (int *)0x0) {
        (**(code **)(*piStack_f0 + 0x94))(uVar4,auStack_94);
      }
      if (iStack_e8 != 0) {
        FUN_005377c0(uVar4,auStack_94);
      }
      cVar2 = FUN_00544230(&uStack_f4,auStack_64);
      if ((cVar2 != '\0') && (piVar7 != (int *)0x0)) {
        FUN_004fcea0(&uStack_f4);
      }
      uStack_4 = uStack_4 & 0xffffff00;
      FUN_00502d90();
    }
    uStack_4 = 0xffffffff;
    FUN_0040e2a0();
    goto LAB_00545a3b;
  case 3:
    ExceptionList = &local_c;
    iVar5 = FUN_0054baf0();
    uVar4 = DAT_00678b54;
    if (param_1 + -0xac != iVar5) goto LAB_00545a3b;
    break;
  case 4:
    ExceptionList = &local_c;
    iVar5 = FUN_0054baf0();
    uVar4 = DAT_00678b58;
    if (param_1 + -0xac != iVar5) goto LAB_00545a3b;
    break;
  default:
    goto LAB_00545a3b;
  case 9:
    ExceptionList = &local_c;
    iVar5 = FUN_0054baf0();
    if ((((param_1 + -0xac != iVar5) || (param_3 == (CArchGroup *)0x0)) ||
        (uVar6 = CArchGroup::GetCollisionGroupType(param_3), (uVar6 & 0x3f00) == 0)) ||
       (fVar10 = CArchGroup::GetRelativeHealth(param_3), uVar4 = DAT_00678b4c,
       (float)_DAT_005d5b58 <= fVar10)) goto LAB_00545a3b;
  }
  FUN_00489e80(uVar4,0);
LAB_00545a3b:
  FUN_00534730(param_2,param_3);
  ExceptionList = local_c;
  return;
}

