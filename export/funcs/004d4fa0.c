
bool __fastcall FUN_004d4fa0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_2c = 0;
  pcStack_30 = "Interface\\hud\\HUD_guagewindow.cmp";
  puStack_34 = (undefined4 *)0x4d4fb5;
  (**(code **)(*param_1 + 0x98))();
  puStack_34 = &uStack_2c;
  uStack_38 = 0;
  uStack_3c = 0;
  puStack_40 = (undefined4 *)0x0;
  uStack_44 = 1;
  uStack_2c = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0x3ba3d70a;
  uStack_10 = 0xbebae148;
  uStack_c = 0xbf800000;
  iVar2 = FUN_005a0db0("Background2","Interface\\hud\\HUD_numberboxes.cmp",&uStack_14,0,&uStack_20,0
                       ,0,0,1,0,0);
  puStack_34 = &uStack_14;
  uStack_38 = 0;
  uStack_3c = 0;
  puStack_40 = (undefined4 *)0x0;
  uStack_44 = 1;
  param_1[0xd3] = iVar2;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_20 = 0x3dae147b;
  uStack_1c = 0x3bb43958;
  uStack_18 = 0;
  uStack_2c = 0x3ba3d70a;
  piVar3 = (int *)FUN_005a0db0("HealthBar","Interface\\hud\\HUD_hullgauge.3db",&uStack_2c,0,
                               &uStack_20,0,0,0,1,0,0);
  puStack_34 = (undefined4 *)0x0;
  uStack_38 = 0x470;
  param_1[0xcc] = (int)piVar3;
  uStack_3c = 3;
  puStack_40 = (undefined4 *)0x4d50d0;
  (**(code **)(*piVar3 + 0xa8))();
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_2c = 0x3dae147b;
  uStack_38 = 0x3ba3d70a;
  puStack_40 = &uStack_20;
  uStack_44 = 0;
  puStack_34 = (undefined4 *)0xbebb645a;
  pcStack_30 = (char *)0xbf800000;
  piVar3 = (int *)FUN_005a0db0("ShieldBar","Interface\\hud\\HUD_shieldgauge.3db",&uStack_38,0,
                               &uStack_2c,0,0,0,1,0,0,1,0,0);
  puStack_40 = (undefined4 *)0x0;
  uStack_44 = 0x471;
  param_1[0xcd] = (int)piVar3;
  (**(code **)(*piVar3 + 0xa8))(3);
  uStack_2c = 0;
  uStack_38 = 0x3dae147b;
  puStack_34 = (undefined4 *)0x3bb43958;
  pcStack_30 = (char *)0x0;
  uStack_44 = 0x3ba3d70a;
  puStack_40 = (undefined4 *)0xbeb5c28f;
  uStack_3c = 0xbf800000;
  piVar3 = (int *)FUN_005a0db0("PowerBar","Interface\\hud\\HUD_energygauge.3db",&uStack_44,0,
                               &uStack_38,0,0,0,1,0,0,1,0,0,0,&uStack_2c);
  param_1[0xce] = (int)piVar3;
  (**(code **)(*piVar3 + 0xa8))(3,0x3f2,0);
  uStack_38 = 0x3ddd2f1b;
  puStack_34 = (undefined4 *)0x3c03126f;
  pcStack_30 = (char *)0x0;
  iVar2 = FUN_005a0e30("VelocityText","Normal",&uStack_38,0,0x3d656042,0x3cf5c28f,0x3f800000,0,1,0,1
                      );
  param_1[0xcf] = iVar2;
  uStack_38 = 0xbe23d70a;
  puStack_34 = (undefined4 *)0x3c03126f;
  pcStack_30 = (char *)0x0;
  iVar2 = FUN_005a0e30("ThrustText","Normal",&uStack_38,0,0x3d656042,0x3cf5c28f,0x3f800000,0,1,0,1);
  param_1[0xd0] = iVar2;
  param_1[0x2d] = 0x3dcccccd;
  param_1[0x2e] = 0x3ca3d70a;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x3ba3d70a;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_005760d0(0x6d);
  (**(code **)(*param_1 + 0x7c))(0x3ba3d70a,0xbebae148,0xbf800000);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  cVar1 = FUN_004b5060(uStack_38,puStack_34);
  return cVar1 != '\0';
}

