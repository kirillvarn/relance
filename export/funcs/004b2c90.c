
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_004b2c90(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_2dc;
  int *piStack_2d8;
  char *pcStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined1 *puStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  float fStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  float fStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  float fStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  float fStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  float fStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  char acStack_220 [492];
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  fStack_2d0 = 0.0;
  pcStack_2d4 = "Interface\\NeuroNet\\Inventory\\repair_bakgrnd.cmp";
  piStack_2d8 = (int *)0x4b2cab;
  (**(code **)(*param_1 + 0x98))();
  piStack_2d8 = param_1 + 0x20;
  uStack_2dc = 0x4b2cbd;
  FUN_005a1340();
  piStack_2d8 = (int *)0x0;
  uStack_2dc = 0;
  uStack_2a4 = 0x3e083127;
  uStack_2a0 = 0x3cd4fdf4;
  uStack_29c = 0;
  uStack_2b0 = 0;
  puStack_2ac = (undefined1 *)0xbe50e560;
  uStack_2a8 = 0;
  piVar4 = (int *)FUN_005a0d00("RepairOkButton","ui_execute_transaction",&uStack_2b0,&uStack_2a4,0,0
                               ,0x438);
  piStack_2d8 = (int *)0x0;
  uStack_2dc = 1;
  param_1[0xd1] = (int)piVar4;
  (**(code **)(*piVar4 + 0xa8))(1);
  uStack_2bc = 0;
  fStack_2b8 = -0.216;
  uStack_2b4 = 0;
  piVar4 = (int *)FUN_005a0e30("RepairText","ButtonText",&uStack_2bc,0,0x3e87ae14,0x3d75c28f,
                               0x3fc00000,0x427,1,0,0);
  param_1[0x11e] = (int)piVar4;
  (**(code **)(*piVar4 + 0xa8))(1,1,0);
  uStack_2bc = 0x3e6147ae;
  fStack_2b8 = 0.231;
  uStack_2b4 = 0;
  iVar5 = FUN_005a0c90("RepairCancelButton","Interface\\NeuroNet\\Inventory\\X.3db",0,
                       "ui_select_item",0,&uStack_2bc,0,&stack0xfffffd38,0,0,0,0,0x2148,0,0);
  param_1[0xd2] = iVar5;
  fStack_2d0 = 0.0;
  piVar4 = param_1 + 0xdc;
  do {
    fVar2 = fStack_2d0;
    sprintf(acStack_220,"RepairCheckBox%d",fStack_2d0);
    fStack_2d0 = (float)(int)fStack_2d0 * _DAT_005d53e8;
    fVar1 = _DAT_005d53e4 - fStack_2d0;
    uStack_2bc = 0xbe5c28f6;
    uStack_2b4 = 0;
    fStack_2b8 = fVar1;
    iVar5 = FUN_005a0fb0(acStack_220,"Interface\\NeuroNet\\Inventory\\check.3db",
                         "Interface\\NeuroNet\\Inventory\\repairblackbox.3db","ui_select_item",0,
                         &uStack_2bc,0,&stack0xfffffd38,0,0,1,0,0x43a,0);
    piVar4[-9] = iVar5;
    sprintf(acStack_220,"RepairCheckBoxFrame%d",fVar2);
    uStack_22c = 0x3c656042;
    uStack_228 = 0x3c656042;
    uStack_224 = 0;
    uStack_250 = 0xbe5c28f6;
    uStack_248 = 0;
    fStack_24c = fVar1;
    iVar5 = FUN_005a0d00(acStack_220,"ui_select_item",&uStack_250,&uStack_22c,0,0,0,0,0);
    *piVar4 = iVar5;
    sprintf(acStack_220,"RepairIconFrames%d",fVar2);
    fVar1 = _DAT_005d53b4 - fStack_2d0;
    uStack_238 = 0x3c656042;
    uStack_234 = 0x3c656042;
    uStack_230 = 0;
    uStack_28c = 0xbe343958;
    uStack_284 = 0;
    fStack_288 = fVar1;
    iVar5 = FUN_005a0d00(acStack_220,"ui_select_item",&uStack_28c,&uStack_238,0,0,0,0,0);
    piVar4[9] = iVar5;
    sprintf(acStack_220,"RepairSmallIcons%d",fVar2);
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    uStack_274 = 0x3c656042;
    uStack_270 = 0x3c656042;
    uStack_26c = 0;
    uStack_244 = 0xbe343958;
    uStack_23c = 0xbf8ccccd;
    fStack_240 = fVar1;
    iVar5 = FUN_005a0db0(acStack_220,"Interface\\NeuroNet\\Inventory\\repairblackbox.3db",
                         &uStack_244,0,&uStack_274,0,0,0,1,0,1,1,0x6e,0,0,&uStack_2a4);
    piVar4[0x12] = iVar5;
    *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) & 0xf7;
    sprintf(acStack_220,"RepairTextArea%d",fVar2);
    fStack_294 = _DAT_005d53b4 - fStack_2d0;
    uStack_25c = 0x3e2f1aa0;
    uStack_258 = 0x3c656042;
    uStack_254 = 0;
    uStack_298 = 0x3ca3d70a;
    uStack_290 = 0;
    iVar5 = FUN_005a0d00(acStack_220,"ui_select_item",&uStack_298,&uStack_25c,0,0,0,0,0);
    piVar4[0x1b] = iVar5;
    sprintf(acStack_220,"RepairItemName%d",fVar2);
    fVar1 = (float)_DAT_005d5370 - fStack_2d0;
    uStack_280 = 0xbc23d70a;
    uStack_278 = 0;
    fStack_27c = fVar1;
    iVar5 = FUN_005a0e30(acStack_220,"ItemName",&uStack_280,0,0x3e8a3d71,0x3cf5c28f,0x3f99999a,0x3f6
                         ,0,0,0);
    piVar4[0x24] = iVar5;
    sprintf(acStack_220,"RepairItemPrice%d",fVar2);
    uStack_268 = 0x3e0b4396;
    uStack_260 = 0;
    fStack_264 = fVar1;
    iVar5 = FUN_005a0e30(acStack_220,"ItemName",&uStack_268,0,0x3dd70a3d,0x3cf5c28f,0x3f99999a,0x40e
                         ,2,0,0);
    piVar4[0x2d] = iVar5;
    sprintf(acStack_220,"RepairItemDamage%d",fVar2);
    piStack_2d8 = (int *)(_DAT_005d0434 - fStack_2d0);
    uStack_2b0 = 0x3c656042;
    puStack_2ac = (undefined1 *)0x3b03126f;
    uStack_2a8 = 0;
    uStack_2dc = 0xbe343958;
    pcStack_2d4 = (char *)0x3a83126f;
    piVar6 = (int *)FUN_005a1080(acStack_220,&DAT_005c865c,&uStack_2dc,0,&uStack_2b0,1,0x43c,
                                 DAT_00679bac,DAT_00679bac);
    piVar4[0x36] = (int)piVar6;
    (**(code **)(*piVar6 + 0xa8))(0x19,0x10000,0);
    fStack_2d0 = (float)((int)fVar2 + 1);
    piVar4 = piVar4 + 1;
  } while ((int)fStack_2d0 < 9);
  uStack_2dc = 0x3e428f5c;
  piStack_2d8 = (int *)0x3e0f5c29;
  pcStack_2d4 = (char *)0xbf800000;
  iVar5 = FUN_005a17e0("RepairScroll",&uStack_2dc,0x3c9374bc,0x3e6b851f,0,5,9,0);
  param_1[0x11b] = iVar5;
  uStack_2dc = 0x3c23d70a;
  piStack_2d8 = (int *)0x3e6e978d;
  pcStack_2d4 = (char *)0x0;
  FUN_005a0e30("RepairList","PageHeader",&uStack_2dc,0,0x3ef74bc7,0x3cf5c28f,0x3fd9999a,0x4a8,1,0,0)
  ;
  uStack_2dc = 0x3ca3d70a;
  piStack_2d8 = (int *)0x3ca3d70a;
  pcStack_2d4 = (char *)0x0;
  uStack_2b0 = 0xbe5c28f6;
  puStack_2ac = &DAT_be051eb8;
  uStack_2a8 = 0;
  iVar5 = FUN_005a0c90("RepairToggleChecks","Interface\\NeuroNet\\Inventory\\checktoggle.3db",0,
                       "ui_select_item",0,&uStack_2b0,0,&uStack_2dc,0,0,0,0,0x439,0,0);
  param_1[0x11c] = iVar5;
  uStack_2dc = 0x3ba3d70a;
  piStack_2d8 = (int *)0x3e449ba6;
  pcStack_2d4 = (char *)0x0;
  iVar5 = FUN_005a0e30("RepairPlayerCash","Normal",&uStack_2dc,0,0x3ef9db23,0x3cf5c28f,0x3fb33333,0,
                       1,0,0);
  param_1[0x11f] = iVar5;
  uStack_2dc = 0xbd89374c;
  piStack_2d8 = (int *)&DAT_be051eb8;
  pcStack_2d4 = (char *)0x0;
  FUN_005a0e30("RepairTotalCostText","Normal",&uStack_2dc,0,0x3e19999a,0x3cf5c28f,0x3f99999a,0x4a9,0
               ,0,0);
  uStack_2dc = 0x3df5c28f;
  piStack_2d8 = (int *)&DAT_be051eb8;
  pcStack_2d4 = (char *)0x0;
  iVar5 = FUN_005a0e30("RepairTotalCost","Normal",&uStack_2dc,0,0x3e19999a,0x3cf5c28f,0x3f99999a,0,2
                       ,0,0);
  param_1[0x11d] = iVar5;
  uStack_2dc = 0x3ba3d70a;
  piStack_2d8 = (int *)0xbe47ae14;
  pcStack_2d4 = (char *)0x0;
  piVar4 = (int *)FUN_005a0e30("RepairNotEnoughCash","Normal",&uStack_2dc,0,0x3ef9db23,0x3cf5c28f,
                               0x3f99999a,0x4aa,1,0,0);
  param_1[0x120] = (int)piVar4;
  (**(code **)(*piVar4 + 0xa8))(1,1,0);
  uVar7 = FUN_004c4ce0(0x476);
  FUN_004779a0(&uStack_22c,uVar7);
  (**(code **)(*(int *)param_1[0x11f] + 0xa8))(0x1d,&uStack_22c,0);
  FUN_00576360(0);
  cVar3 = FUN_004b5060(uStack_34,uStack_30);
  return cVar3 != '\0';
}

