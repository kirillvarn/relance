
bool __fastcall FUN_004d7b50(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int local_188;
  int local_184;
  int local_180;
  undefined4 local_17c;
  int local_178 [30];
  char local_100 [220];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar5 = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  local_178[4] = 0;
  local_17c = 0;
  local_178[0] = 0x3e343958;
  local_178[1] = 0xbf000000;
  iVar2 = FUN_005a0db0("ManeuverFrame","Interface\\HUD\\HUD_maneuverbox9.cmp",&local_17c,0,
                       local_178 + 2,0,0,0,1,0,0,1,0,0,0,&local_188);
  param_1[0xe0] = iVar2;
  param_1[0xdf] = 9;
  FUN_005a1340(iVar2 + 0x80);
  local_178[5] = 0;
  piVar4 = param_1 + 0xcd;
  piVar6 = &DAT_00612600;
  do {
    sprintf(local_100,"ManeuverButton%d",iVar5);
    local_188 = piVar6[-1];
    local_184 = *piVar6;
    iVar2 = param_1[0xd2] + local_178[5];
    local_180 = piVar6[1];
    local_17c = 0x3c656042;
    local_178[0] = 0x3c656042;
    local_178[1] = 0;
    piVar3 = (int *)FUN_005a0c90(local_100,iVar2 + 0x28,0,"ui_select_item",0,&local_188,0,&local_17c
                                 ,0,1,0,0,*(undefined4 *)(iVar2 + 300),0,
                                 *(undefined4 *)(iVar2 + 0x134));
    *piVar4 = (int)piVar3;
    piVar3[0xb5] = local_188;
    piVar3[0xb6] = local_184;
    piVar3[0xb7] = local_180;
    (**(code **)(*piVar3 + 0xa8))(1,1,0);
    piVar6 = piVar6 + 3;
    local_178[5] = local_178[5] + 0x148;
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)piVar6 < 0x612630);
  local_17c = 0;
  local_178[0] = 0;
  local_178[1] = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  local_178[4] = 0;
  local_188 = 0;
  local_184 = 0x3e958106;
  local_180 = 0xbf800000;
  piVar4 = (int *)FUN_005a0db0("ManeuverTab","Interface\\Baseside\\CITY_maneuvertab1.cmp",&local_188
                               ,0,local_178 + 2,0,0,0,1,0,0,1,0,0,0,&local_17c);
  param_1[0xe1] = (int)piVar4;
  (**(code **)(*piVar4 + 0xa8))(1,1,0);
  FUN_005a1340(param_1[0xe1] + 0x80);
  local_188 = 0x3c656042;
  local_184 = 0x3c656042;
  local_180 = 0;
  local_17c = 0;
  local_178[0] = 0x3e981062;
  local_178[1] = 0;
  piVar4 = (int *)FUN_005a0c90("ManeuverCruiseButton","interface\\HUD\\hud_mnvrwarp.3db",0,
                               "ui_select_item",0,&local_17c,0,&local_188,0,1,0,0,0xbf9,0,0x45);
  param_1[0xe3] = (int)piVar4;
  (**(code **)(*piVar4 + 0xa8))(1,1,0);
  local_178[0] = 0x74;
  local_178[1] = 0x76;
  local_178[2] = 0x79;
  local_178[3] = 0x7a;
  local_178[4] = 0x7b;
  local_178[5] = 0x77;
  local_178[6] = 0x78;
  local_178[7] = 0x7e;
  local_178[8] = 0x7f;
  local_178[9] = 0x80;
  local_178[10] = 0xc6;
  local_178[0xb] = 0x45;
  local_178[0xc] = 0x81;
  local_178[0xd] = 0x82;
  local_178[0xe] = 0x83;
  local_178[0xf] = 0x84;
  local_178[0x10] = 0x86;
  local_178[0x11] = 0x85;
  local_178[0x12] = 0x87;
  local_178[0x13] = 0x88;
  local_178[0x14] = 0x43;
  local_178[0x15] = 0x44;
  local_178[0x16] = 4;
  local_178[0x17] = 0xf;
  uVar7 = 0;
  do {
    FUN_005760d0(local_178[uVar7]);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x18);
  (**(code **)(*param_1 + 0x7c))(0,0,0xbf800000);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  cVar1 = FUN_004b5060(uStack_24,uStack_20);
  return cVar1 != '\0';
}

