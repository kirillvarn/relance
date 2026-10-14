
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_004da930(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_140;
  float *pfStack_13c;
  undefined4 local_128;
  float local_124 [3];
  char local_118 [8];
  float local_110;
  char local_10c [216];
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  pfStack_13c = local_124 + 2;
  uStack_140 = 0;
  local_124[2] = 0.0;
  local_118[0] = '\0';
  local_118[1] = '\0';
  local_118[2] = '\0';
  local_118[3] = '\0';
  local_118[4] = '\0';
  local_118[5] = '\0';
  local_118[6] = '\0';
  local_118[7] = '\0';
  local_110 = 0.0;
  local_10c[0] = '\0';
  local_10c[1] = '\0';
  local_10c[2] = '\0';
  local_10c[3] = '\0';
  local_10c[4] = '\0';
  local_10c[5] = '\0';
  local_10c[6] = '\0';
  local_10c[7] = '\0';
  local_128 = 0x3ead6a16;
  local_124[0] = -0.243;
  local_124[1] = -0.91;
  iVar3 = FUN_005a0db0("StatusBackground","Interface\\hud\\HUD_shipinfo.cmp",&local_128,0,&local_110
                       ,0,0,0,1,0);
  param_1[0x125] = iVar3;
  pfStack_13c = (float *)&local_128;
  uStack_140 = 0;
  local_128 = 0;
  local_124[0] = 0.0;
  local_124[1] = 0.0;
  local_110 = 0.0;
  local_10c[0] = '\0';
  local_10c[1] = '\0';
  local_10c[2] = '\0';
  local_10c[3] = '\0';
  local_10c[4] = '\0';
  local_10c[5] = '\0';
  local_10c[6] = '\0';
  local_10c[7] = '\0';
  local_124[2] = 0.4101;
  local_118[0] = -0x5c;
  local_118[1] = 'p';
  local_118[2] = -0x43;
  local_118[3] = -0x42;
  local_118[4] = '\0';
  local_118[5] = '\0';
  local_118[6] = -0x80;
  local_118[7] = -0x41;
  iVar3 = FUN_005a0db0("StatusMinimizedFrame","Interface\\hud\\HUD_shipinfo_min.cmp",local_124 + 2,0
                       ,&local_110,0,0,0,1,0);
  param_1[0x159] = iVar3;
  param_1[0x2d] = 0x3dd70a3d;
  param_1[0x2e] = 0x3ca3d70a;
  param_1[0x2f] = 0;
  local_124[2] = 0.4;
  local_118[0] = -0x4a;
  local_118[1] = -0xd;
  local_118[2] = -0x43;
  local_118[3] = -0x42;
  local_118[4] = '\0';
  local_118[5] = '\0';
  local_118[6] = '\0';
  local_118[7] = '\0';
  pfStack_13c = (float *)0x0;
  uStack_140 = 0;
  param_1[0x30] = 0x3ecccccd;
  param_1[0x31] = -0x41420c4a;
  param_1[0x32] = 0;
  local_128 = 0x3ca3d70a;
  local_124[0] = 0.02;
  local_124[1] = 0.0;
  piVar4 = (int *)FUN_005a0c90("HudStatusOpen","interface\\hud\\hud_ShipInfo_button.3db",0,
                               "ui_window_open",0,param_1 + 0x127,0,&local_128,0);
  pfStack_13c = (float *)0x0;
  uStack_140 = 1;
  param_1[0x124] = (int)piVar4;
  (**(code **)(*piVar4 + 0xa8))();
  local_110 = 0.0;
  piVar4 = param_1 + 0x134;
  do {
    fVar1 = local_110;
    sprintf(local_10c,"WeaponNumberText%d");
    local_110 = (float)(int)local_110 * _DAT_005d3ee8;
    piVar5 = (int *)FUN_005a0e30(local_10c,"HudSmall",&stack0xfffffecc,0,0x3ca3d70a,0x3c8b4395,
                                 0x3f800000,(int)fVar1 + 0x515);
    piVar4[10] = (int)piVar5;
    (**(code **)(*piVar5 + 0xa8))();
    sprintf(local_118,"WeaponText%d",fVar1);
    local_124[0] = (float)_DAT_005d8750 - local_124[2];
    local_128 = 0x3e9374bc;
    local_124[1] = 0.0;
    local_124[2] = local_124[0];
    piVar5 = (int *)FUN_005a0e30(local_118,"HudSmall",&local_128,0,0x3e28f5c3,0x3c8b4395,0x3f800000,
                                 0,0,0,1);
    *piVar4 = (int)piVar5;
    (**(code **)(*piVar5 + 0xa8))(0x24,1,0);
    sprintf((char *)local_124,"AmmoText%d",fVar1);
    uStack_140 = 0x3eea7efa;
    pfStack_13c = (float *)local_128;
    piVar5 = (int *)FUN_005a0e30(local_124,"HudSmall",&uStack_140,0,0x3d23d70a,0x3c8b4396,0x3f800000
                                 ,0x514,0,0,1);
    piVar4[0x14] = (int)piVar5;
    (**(code **)(*piVar5 + 0xa8))(0x24,1,0);
    (**(code **)(*(int *)piVar4[10] + 0xa8))(1,1,0);
    (**(code **)(*(int *)*piVar4 + 0xa8))(1,1,0);
    (**(code **)(*(int *)piVar4[0x14] + 0xa8))(1,1,0);
    local_110 = (float)((int)fVar1 + 1);
    piVar4 = piVar4 + 1;
  } while ((int)local_110 < 10);
  local_124[2] = 0.383;
  local_118[0] = '\x1b';
  local_118[1] = '/';
  local_118[2] = -99;
  local_118[3] = -0x42;
  local_118[4] = '\0';
  local_118[5] = '\0';
  local_118[6] = '\0';
  local_118[7] = -0x41;
  iVar3 = FUN_005a0c90("StatusCloseButton","interface\\NeuroNet\\Inventory\\x.3db",0,
                       "ui_select_item",0,local_124 + 2,0,&stack0xfffffecc,0,1,0,0);
  param_1[0x152] = iVar3;
  local_124[2] = 0.341;
  local_118[0] = -0x4a;
  local_118[1] = -0xd;
  local_118[2] = -0x43;
  local_118[3] = -0x42;
  local_118[4] = '\0';
  local_118[5] = '\0';
  local_118[6] = '\0';
  local_118[7] = '\0';
  iVar3 = FUN_005a0c90("HudRepairButton","interface\\hud\\HUD_repairactivate.3db",0,"ui_item_select"
                       ,0,local_124 + 2,0,&stack0xfffffecc,0,1,0,0);
  param_1[0x15c] = iVar3;
  piVar4 = (int *)FUN_005a0e30("RepairCountText","HudSmall",&stack0xfffffecc,0,0x3d0b4396,0x3cf5c28f
                               ,0x3f4ccccd,0);
  param_1[0x15d] = (int)piVar4;
  (**(code **)(*piVar4 + 0xa8))();
  uStack_140 = 0x3c656042;
  pfStack_13c = (float *)0x3c656042;
  local_128 = 0x3ecb4396;
  local_124[0] = -0.371;
  local_124[1] = 0.0;
  iVar3 = FUN_005a0c90("UseBatteryButton","interface\\hud\\HUD_shieldgaugeicon.3db",0,
                       "ui_item_select",0,&local_128,0,&uStack_140,0,1,0,0,0x4b5,0,0x90);
  param_1[0x15e] = iVar3;
  uStack_140 = 0x3eced917;
  pfStack_13c = (float *)0xbeb7ced9;
  piVar4 = (int *)FUN_005a0e30("BatteryCountText","HudSmall",&uStack_140,0,0x3d0b4396,0x3cf5c28f,
                               0x3f4ccccd,0,1,0x4b3,1);
  param_1[0x15f] = (int)piVar4;
  (**(code **)(*piVar4 + 0xa8))(0x1d,&DAT_005d86b8,0x10);
  iVar3 = FUN_005a17e0("WeaponListScroll",&stack0xfffffeb4,0x3c83126f,0x3df1a9fc,0,5,10,0);
  param_1[0x163] = iVar3;
  (**(code **)(param_1[-0xe] + 0x34))(1);
  iVar3 = FUN_005a0e30("SpecialModeText","PageHeader",&stack0xfffffeb0,0,0x3f82d0e5,0x3cf5c28f,
                       0x3fc00000,0,1,0,1);
  param_1[0x161] = iVar3;
  iVar3 = FUN_005a0e30("SpecialModeTextCancel","Normal",&stack0xfffffeb0,0,0x3f839581,0x3cf5c28f,
                       0x3fa66666,0,1,0,1);
  param_1[0x162] = iVar3;
  *(byte *)(param_1[0x161] + 0x6c) = *(byte *)(param_1[0x161] + 0x6c) & 0xfc;
  *(byte *)(param_1[0x162] + 0x6c) = *(byte *)(param_1[0x162] + 0x6c) & 0xfc;
  FUN_004dd9e0();
  iVar3 = FUN_005a0c90("LootButton","interface\\HUD\\HUD_loot_bw.3db",0,"ui_select_item",0,
                       &stack0xfffffec8,0,&stack0xfffffeb0,0,1,0,0,0x3a2,0,0x6f);
  param_1[0x168] = iVar3;
  *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) & 0xfc;
  uStack_140 = 0;
  pfStack_13c = (float *)0xbf800000;
  (**(code **)(*param_1 + 0x7c))(0,0,0xbf800000);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  cVar2 = FUN_004b5060(uStack_34,uStack_30);
  return cVar2 != '\0';
}

