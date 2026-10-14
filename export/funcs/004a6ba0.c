
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_004a6ba0(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  int local_120;
  float local_11c;
  float local_114;
  float local_108;
  char local_100 [248];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_0045a460();
  FUN_004424f0(1);
  FUN_004b65a0();
  FUN_0041dde0("arrow",0);
  local_12c = 0;
  local_128 = 0.0;
  local_124 = 0;
  local_138 = 0;
  local_134 = 0.0;
  local_130 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0xbf800000;
  FUN_005a0db0("Pause_BlackPlane","Interface\\NeuroNet\\MISC_bigblackplane.3db",&local_144,0,
               &local_138,0,0,0,1,1,0,1,0,0,0,&local_12c);
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0.0;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0.009000003;
  local_124 = 0xbf800000;
  FUN_005a0db0("PauseFrame","Interface\\NeuroNet\\Options\\escapewindow2.cmp",&local_12c,0,
               &local_138,0,0,0,1,1,0,1,0,0,0,&local_144);
  local_144 = 0xb2800000;
  local_140 = 0x3e6147af;
  local_13c = 0xbf800000;
  uVar4 = FUN_005a0e30("PauseTitle","PageHeader",&local_144,0,0x3eb33333,0x3cf5c28f,0x402ccccd,0,1,0
                       ,0);
  *(undefined4 *)(param_1 + 0x334) = uVar4;
  bVar1 = SinglePlayer();
  if (bVar1) {
    bVar1 = DAT_0066873c == 0;
    cVar2 = FUN_004568a0();
    if ((cVar2 == '\0') || (bVar1)) {
      uVar8 = 4;
      *(undefined4 *)(param_1 + 0x364) = 3;
      *(undefined4 *)(param_1 + 0x368) = 4;
      *(undefined4 *)(param_1 + 0x36c) = 5;
      goto LAB_004a6d4f;
    }
    *(undefined4 *)(param_1 + 0x364) = 2;
    *(undefined4 *)(param_1 + 0x368) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x364) = 6;
    *(undefined4 *)(param_1 + 0x368) = 7;
  }
  uVar8 = 5;
  *(undefined4 *)(param_1 + 0x36c) = 4;
  *(undefined4 *)(param_1 + 0x370) = 5;
LAB_004a6d4f:
  *(undefined4 *)(param_1 + 0x360) = 1;
  local_114 = 0.149;
  local_11c = 0.0825;
  if (uVar8 == 4) {
    local_114 = 0.12837501;
    local_11c = 0.096250005;
  }
  local_120 = 0;
  if (uVar8 != 0) {
    puVar6 = (undefined4 *)(param_1 + 0x34c);
    do {
      iVar7 = local_120;
      local_108 = local_114 - (float)local_120 * local_11c;
      sprintf(local_100,"PauseButtonBox%d",local_120);
      local_134 = local_108;
      local_144 = 0x3e333333;
      local_140 = 0x3ce56042;
      local_13c = 0;
      local_138 = 0;
      local_130 = 0xbf800000;
      iVar5 = FUN_005a0d00(local_100,0,&local_138,&local_144,0,0,0,0,0);
      puVar6[-5] = iVar5;
      if (iVar7 == uVar8 - 1) {
        *(byte *)(iVar5 + 0x35d) = *(byte *)(iVar5 + 0x35d) | 1;
      }
      sprintf(local_100,"PauseButtonText%d",iVar7);
      local_128 = local_108 + _DAT_005d3e44;
      local_12c = 0x32300000;
      local_124 = 0xbf800000;
      uVar4 = FUN_005a0e30(local_100,"ButtonText",&local_12c,0,0x3e8a3d71,0x3cf5c28f,0x3fc00000,0,1,
                           0,0);
      local_120 = iVar7 + 1;
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    } while (local_120 < (int)uVar8);
  }
  if (uVar8 < 5) {
    puVar6 = (undefined4 *)(param_1 + 0x34c + uVar8 * 4);
    iVar7 = 5 - uVar8;
    do {
      puVar6[-5] = 0;
      *puVar6 = 0;
      puVar6[5] = 0;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  bVar1 = SinglePlayer();
  if (bVar1) {
    (**(code **)(**(int **)(param_1 + 0x334) + 0xa8))(0x1e,0x71c);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x334) + 0xa8))(0x1e,0x724,0);
  }
  if (uVar8 != 0) {
    puVar6 = (undefined4 *)(param_1 + 0x34c);
    do {
      iVar7 = puVar6[5];
      if (iVar7 == 1) {
        (**(code **)(*(int *)*puVar6 + 0xa8))(0x1e,0x71d,0);
        uVar4 = 0x33a;
LAB_004a6fd6:
        (**(code **)(*(int *)puVar6[-5] + 0xa8))(3,uVar4,0);
      }
      else {
        if (iVar7 == 2) {
          (**(code **)(*(int *)*puVar6 + 0xa8))(0x1e,0x71e,0);
          uVar4 = 0x33b;
          goto LAB_004a6fd6;
        }
        if (iVar7 == 3) {
          (**(code **)(*(int *)*puVar6 + 0xa8))(0x1e,0x71f,0);
          uVar4 = 0x33c;
          goto LAB_004a6fd6;
        }
        if (iVar7 == 4) {
          (**(code **)(*(int *)*puVar6 + 0xa8))(0x1e,0x720,0);
          uVar4 = 0x33d;
          goto LAB_004a6fd6;
        }
        if (iVar7 == 5) {
          (**(code **)(*(int *)*puVar6 + 0xa8))(0x1e,0x721,0);
          uVar4 = 0x33e;
          goto LAB_004a6fd6;
        }
        if (iVar7 == 6) {
          (**(code **)(*(int *)*puVar6 + 0xa8))(0x1e,0x752,0);
          uVar4 = 0x33f;
          goto LAB_004a6fd6;
        }
        if (iVar7 == 7) {
          (**(code **)(*(int *)*puVar6 + 0xa8))(0x1e,0x725,0);
          uVar4 = 0x340;
          goto LAB_004a6fd6;
        }
      }
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x70) = 100;
  *(undefined4 *)(param_1 + 0x78) = 6;
  FUN_0042d6f0(1);
  uVar3 = FUN_0041dd90();
  FUN_0041dda0(1);
  *(undefined1 *)(param_1 + 0x330) = uVar3;
  FUN_00577b40(param_1 + 0x32c);
  FUN_005760d0(0x11);
  FUN_005760d0(0xf);
  FUN_005760d0(0x14);
  cVar2 = FUN_004b5060(uStack_8,uStack_4);
  return cVar2 != '\0';
}

