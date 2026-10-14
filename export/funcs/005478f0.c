
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005478f0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_164 [4];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *pvStack_c0;
  undefined1 local_bc [8];
  undefined4 *puStack_b4;
  int local_a4;
  float fStack_74;
  undefined1 local_64 [8];
  undefined4 *puStack_5c;
  int local_4c;
  float fStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0fdd;
  local_c = ExceptionList;
  local_154 = param_1;
  if (param_2 == 0) {
    piVar1 = (int *)(param_1 + -0xac);
    if ((((piVar1 == (int *)0x0) || (param_1 == 0xa0)) ||
        (iVar4 = *(int *)(param_1 + -0x9c), iVar4 == 0)) ||
       ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)) {
      iVar4 = 0;
    }
    ExceptionList = &local_c;
    if (*(char *)(*(int *)(iVar4 + 0x88) + 0x81) == '\0') goto LAB_00548080;
    ExceptionList = &local_c;
    FUN_0040e250();
    local_4 = 0;
    if ((char)*param_3 == '\0') {
      if (((piVar1 == (int *)0x0) || (param_1 == 0xa0)) ||
         ((iVar4 = *(int *)(param_1 + -0x9c), iVar4 == 0 ||
          ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)))) {
        iVar4 = 0;
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x58;
    }
    else {
      if (((piVar1 == (int *)0x0) || (param_1 == 0xa0)) ||
         ((iVar4 = *(int *)(param_1 + -0x9c), iVar4 == 0 ||
          ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)))) {
        iVar4 = 0;
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x54;
    }
    local_a4 = FUN_0042ae40(iVar4);
    local_100 = 0x3f800000;
    local_110 = 0x3f800000;
    local_120 = 0x3f800000;
    local_104 = 0;
    local_108 = 0;
    local_10c = 0;
    local_114 = 0;
    local_118 = 0;
    local_11c = 0;
    local_f4 = 0;
    local_f8 = 0;
    local_fc = 0;
    uVar6 = (**(code **)(*piVar1 + 0x1c))();
    iVar4 = FUN_005792b0(0x25);
    if (iVar4 != 0) {
      FUN_005154a0(local_bc,0,0,0);
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar4 = FUN_005792b0(0x26);
      if (((iVar4 != 0) && (puStack_b4 != (undefined4 *)0x0)) && (*(char *)*puStack_b4 != '\0')) {
        uStack_15c = (*(code *)*DAT_00674c60)();
      }
      if (local_a4 != 0) {
        uStack_160 = (*(code *)DAT_00674c60[1])();
      }
      if (_DAT_005c7474 < fStack_74) {
        uStack_158 = (*(code *)DAT_00674c60[2])();
      }
      FUN_005480c0(piVar1,uVar6,&local_120);
      cVar3 = FUN_00544230(auStack_164,local_bc);
      if ((cVar3 != '\0') && (piVar1 != (int *)0x0)) {
        FUN_004fcea0(auStack_164);
      }
      local_4 = local_4 & 0xffffff00;
      FUN_00502d90();
    }
  }
  else {
    if (param_2 != 1) {
      ExceptionList = &local_c;
      if (param_2 == 0x11) {
        if (((param_1 + -0xac == 0) || (param_1 == 0xa0)) ||
           ((iVar4 = *(int *)(param_1 + -0x9c), iVar4 == 0 ||
            ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)))) {
          iVar4 = 0;
        }
        ExceptionList = &local_c;
        if ((*(uint *)(iVar4 + 0xe0) >> 7 & 1) != 0) {
          ExceptionList = &local_c;
          uVar2 = FUN_00516910(param_1 + -0xac,(char)*param_3);
          *(undefined1 *)(param_1 + 0x144) = uVar2;
        }
      }
      goto LAB_00548080;
    }
    iVar4 = *param_3;
    if (iVar4 == 0) {
      ExceptionList = &local_c;
      FUN_0040e250();
      piVar1 = (int *)(param_1 + -0xac);
      local_4 = 2;
      if ((((piVar1 == (int *)0x0) || (param_1 == 0xa0)) ||
          (iVar4 = *(int *)(param_1 + -0x9c), iVar4 == 0)) ||
         ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)) {
        iVar4 = 0;
      }
      local_a4 = FUN_0042ae40(*(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x54);
      local_d0 = 0x3f800000;
      local_e0 = 0x3f800000;
      local_f0 = 0x3f800000;
      local_d4 = 0;
      local_d8 = 0;
      local_dc = 0;
      local_e4 = 0;
      local_e8 = 0;
      local_ec = 0;
      local_c4 = 0;
      local_c8 = 0;
      local_cc = 0;
      uVar6 = (**(code **)(*piVar1 + 0x1c))();
      iVar4 = FUN_005792b0(0x25);
      if (iVar4 != 0) {
        FUN_005154a0(local_bc,0,0,0);
        local_4 = CONCAT31(local_4._1_3_,3);
        iVar4 = FUN_005792b0(0x26);
        if (((iVar4 != 0) && (puStack_b4 != (undefined4 *)0x0)) && (*(char *)*puStack_b4 != '\0')) {
          uStack_15c = (*(code *)*DAT_00674c60)();
        }
        if (local_a4 != 0) {
          uStack_160 = (*(code *)DAT_00674c60[1])();
        }
        if (_DAT_005c7474 < fStack_74) {
          uStack_158 = (*(code *)DAT_00674c60[2])();
        }
        FUN_005480c0(piVar1,uVar6,&local_f0);
        cVar3 = FUN_00544230(auStack_164,local_bc);
        if ((cVar3 != '\0') && (piVar1 != (int *)0x0)) {
          FUN_004fcea0(auStack_164);
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00502d90();
      }
      uVar5 = (**(code **)(*piVar1 + 0x1bc))();
      if ((((uVar5 & 0x40) != 0) || (uVar5 = (**(code **)(*piVar1 + 0x1bc))(), (uVar5 & 0x800) != 0)
          ) && (iVar4 = local_154, *(int *)(local_154 + 0x158) == 0)) {
        pvStack_c0 = operator_new(0xe0);
        local_4 = CONCAT31(local_4._1_3_,4);
        if (pvStack_c0 == (void *)0x0) {
          *(undefined4 *)(iVar4 + 0x158) = 0;
        }
        else {
          uVar6 = FUN_00502ba0(piVar1);
          *(undefined4 *)(iVar4 + 0x158) = uVar6;
        }
      }
    }
    else {
      if (iVar4 != 2) {
        ExceptionList = &local_c;
        if (iVar4 == 3) {
          ExceptionList = &local_c;
          uVar5 = (**(code **)(*(int *)(param_1 + -0xac) + 0x1bc))();
          if (((uVar5 & 0x40) != 0) ||
             (uVar5 = (**(code **)(*(int *)(param_1 + -0xac) + 0x1bc))(), (uVar5 & 0x800) != 0)) {
            iVar4 = *(int *)(param_1 + 0x158);
            if (iVar4 != 0) {
              FUN_00502e40();
              FUN_005b7e1d(iVar4);
            }
            *(undefined4 *)(param_1 + 0x158) = 0;
          }
        }
        goto LAB_00548080;
      }
      ExceptionList = &local_c;
      FUN_0040e250();
      piVar1 = (int *)(param_1 + -0xac);
      local_4 = 5;
      if (((piVar1 == (int *)0x0) || (param_1 == 0xa0)) ||
         ((iVar4 = *(int *)(param_1 + -0x9c), iVar4 == 0 ||
          ((*(uint *)(iVar4 + 0x4c) & 0x303) != 0x303)))) {
        iVar4 = 0;
      }
      local_4c = FUN_0042ae40(*(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x58);
      local_130 = 0x3f800000;
      local_140 = 0x3f800000;
      local_150 = 0x3f800000;
      local_134 = 0;
      local_138 = 0;
      local_13c = 0;
      local_144 = 0;
      local_148 = 0;
      local_14c = 0;
      local_124 = 0;
      local_128 = 0;
      local_12c = 0;
      uVar6 = (**(code **)(*piVar1 + 0x1c))();
      iVar4 = FUN_005792b0(0x25);
      if (iVar4 != 0) {
        FUN_005154a0(local_64,0,0,0);
        local_4 = CONCAT31(local_4._1_3_,6);
        iVar4 = FUN_005792b0(0x26);
        if (((iVar4 != 0) && (puStack_5c != (undefined4 *)0x0)) && (*(char *)*puStack_5c != '\0')) {
          uStack_15c = (*(code *)*DAT_00674c60)();
        }
        if (local_4c != 0) {
          uStack_160 = (*(code *)DAT_00674c60[1])();
        }
        if (_DAT_005c7474 < fStack_1c) {
          uStack_158 = (*(code *)DAT_00674c60[2])();
        }
        FUN_005480c0(piVar1,uVar6,&local_150);
        cVar3 = FUN_00544230(auStack_164,local_64);
        if ((cVar3 != '\0') && (piVar1 != (int *)0x0)) {
          FUN_004fcea0(auStack_164);
        }
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_00502d90();
      }
      uVar5 = (**(code **)(*piVar1 + 0x1bc))();
      if ((((uVar5 & 0x40) != 0) || (uVar5 = (**(code **)(*piVar1 + 0x1bc))(), (uVar5 & 0x800) != 0)
          ) && (*(int *)(local_154 + 0x158) != 0)) {
        FUN_00503380();
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_0040e2a0();
LAB_00548080:
  FUN_00534730(param_2,param_3);
  ExceptionList = local_c;
  return;
}

