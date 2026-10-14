
int * __thiscall FUN_00503440(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int *piVar6;
  int *piVar7;
  int *piStack_a4;
  int *piStack_9c;
  uint uStack_98;
  int iStack_94;
  long lStack_90;
  long lStack_8c;
  int *local_88;
  int aiStack_84 [9];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  HardpointInfo aHStack_54 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int aiStack_44 [14];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf8dd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_88 = param_1;
  ID_String::clear((ID_String *)(param_1 + 6));
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  piVar6 = param_1 + 0x2a;
  local_4 = 3;
  FUN_004215b0();
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  if (param_3 == (int *)0x0) {
    ExceptionList = local_c;
    return param_1;
  }
  if (param_2 == 0) {
    ExceptionList = local_c;
    return param_1;
  }
  iVar3 = FUN_00502b00();
  *param_1 = iVar3;
  if (iVar3 == 0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x1d5,
               "no JumpShipEffect descriptor found");
  }
  param_1[0x1a] = param_2;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[1] = 0;
  param_1[2] = 0x40a00000;
  param_1[3] = 0x40a00000;
  param_1[4] = 0;
  param_1[5] = 0x3f000000;
  param_1[7] = 0;
  param_1[8] = 0;
  piVar4 = (int *)FUN_00548890();
  iStack_94 = 0;
  piStack_9c = (int *)0x0;
  if (piVar4 == (int *)0x0) {
    pvVar5 = operator_new(0xe0);
    local_4._0_1_ = 4;
    if (pvVar5 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00502ba0(param_3);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    piStack_9c = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_00503635;
  }
  uStack_98 = 0;
  (**(code **)(*param_3 + 0x88))(&uStack_98);
  iStack_94 = *piVar4;
  if (iStack_94 == 0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x181,
               "no jump descriptor in JumpGateEffect");
  }
  else {
    if ((uStack_98 >> 0xb & 1) == 0) {
      param_1[1] = *(int *)(iStack_94 + 0x44);
    }
    else {
      param_1[1] = 0;
    }
    param_1[2] = *(int *)(iStack_94 + 0x48);
    param_1[3] = *(int *)(iStack_94 + 0x4c);
    param_1[4] = *(int *)(iStack_94 + 0x50);
    param_1[5] = *(int *)(iStack_94 + 0x54);
    param_1[6] = *(int *)(iStack_94 + 0x58);
    param_1[7] = iStack_94 + 0x60;
    param_1[8] = iStack_94 + 99;
  }
LAB_00503635:
  piStack_a4 = (int *)(**(code **)(*param_3 + 0x150))();
  if ((piStack_a4 == (int *)0x0) || ((*(uint *)((int)piStack_a4 + 0x4c) & 0x303) != 0x303)) {
    piStack_a4 = (int *)0x0;
  }
  lStack_90 = *(long *)((int)piStack_a4 + 4);
  iVar3 = *(int *)((int)piStack_a4 + 0x88);
  param_1[0x32] = 0x3f800000;
  param_1[0x2e] = 0x3f800000;
  *piVar6 = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  bVar2 = FindHardpoint_PS(lStack_90,*(char **)(iVar3 + 0xa4),&lStack_8c,aHStack_54);
  if (bVar2) {
    HardpointToWorld(lStack_90,aHStack_54);
    piVar4 = aiStack_44;
    piVar7 = aiStack_84;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
    }
    uStack_58 = uStack_48;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    piVar4 = aiStack_84;
    piVar7 = piVar6;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
    }
  }
  else {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Hardpoint (%s) not found on jumpgate",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x196,
               *(undefined4 *)(iVar3 + 0xa4));
    param_1[0x32] = 0x3f800000;
    param_1[0x2e] = 0x3f800000;
    *piVar6 = 0x3f800000;
    param_1[0x31] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2d] = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
  }
  iVar3 = FUN_0054baf0();
  if (param_1[0x1a] == iVar3) {
    iVar3 = 0;
    if (iStack_94 != 0) {
      puVar1 = (undefined4 *)(iStack_94 + 0x5c);
      iVar3 = FUN_004fedd0(puVar1);
      if (iVar3 == 0) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : *** ERROR: gate tunnel \'%s\' not found.",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x1a5,*puVar1);
        iVar3 = 0;
      }
    }
    param_1[9] = iVar3;
    if (iVar3 != 0) {
      FUN_004ff3b0(param_1[0x1a]);
      piVar4 = (int *)(param_1[9] + 0x230);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar4 = piVar4 + 1;
      }
    }
    param_1[0x29] = *(int *)((int)piStack_a4 + 0x1b4);
  }
  if (piStack_9c != (int *)0x0) {
    local_4._0_1_ = 6;
    if ((piStack_9c[1] != 0) && (iVar3 = 0, 0 < *(int *)(*piStack_9c + 0x40))) {
      piStack_a4 = piStack_9c + 0x10;
      do {
        FUN_004fcef0(piStack_a4);
        iVar3 = iVar3 + 1;
        piStack_a4 = piStack_a4 + 9;
      } while (iVar3 < *(int *)(*piStack_9c + 0x40));
    }
    local_4._0_1_ = 5;
    FUN_005b7ec6(piStack_9c + 0xb,0x24,5,FUN_00502e00);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (piStack_9c[9] != 0) {
      FUN_004f7a90();
      piStack_9c[9] = 0;
    }
    piVar6 = (int *)piStack_9c[8];
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
      piStack_9c[8] = 0;
    }
    if (piStack_9c[10] != 0) {
      FUN_00537ad0();
      piStack_9c[10] = 0;
    }
    piStack_9c[7] = 0;
    FUN_005b7e1d(piStack_9c);
  }
  ExceptionList = local_c;
  return param_1;
}

