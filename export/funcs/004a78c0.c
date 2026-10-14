
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_004a78c0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_1d4;
  float fVar7;
  int iStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  float afStack_1a0 [2];
  int *piStack_198;
  undefined4 uStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int aiStack_144 [12];
  char acStack_114 [244];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1d4 = 0;
  (**(code **)(*param_1 + 0x98))("Interface\\NeuroNet\\Inventory\\CHAR_infowindow.cmp");
  FUN_005a1340(param_1 + 0x20);
  uStack_1b0 = 0x3c9374bc;
  fStack_1ac = 0.018;
  uStack_1a8 = 0;
  iVar3 = FUN_005a0c90("PlayerInfoCloseButton","Interface\\NeuroNet\\Inventory\\x.3db",0,
                       "ui_select_item",0,&stack0xfffffe3c,0,&uStack_1b0,0,0,0,0,0x409,0,0);
  param_1[0xcb] = iVar3;
  FUN_005a0e30("PlayerInfoMainTitle","PageHeader",&stack0xfffffe3c,0,0x3f56c8b4,0x3cf5c28f,
               0x3fd33333,0x3a3,1,0,1);
  FUN_005a0e30("PlayerInfoTitle","SubHeader",&stack0xfffffe3c,0,0x3eb33333,0x3cf5c28f,0x3fd33333,
               0x632,1,0,1);
  iVar3 = FUN_005a0e30("PlayerStatsTitle","SubHeader",&stack0xfffffe3c,0,0x3eb5c28f,0x3cf5c28f,
                       0x3fd33333,0x640,1,0,1);
  param_1[0xcc] = iVar3;
  iVar3 = FUN_005a10e0("FactionInfoCard",0x3ec49ba6,0x3eae147b,&stack0xfffffe3c,1);
  param_1[0x100] = iVar3;
  *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) & 0xfd;
  uStack_1b0 = 0x3e4ccccd;
  fStack_1ac = -0.21;
  uStack_1a8 = 0;
  iVar3 = FUN_005a0d00("NavMapCloseInfocardButton","ui_select_item",&uStack_1b0,&stack0xfffffe3c,0,0
                       ,0x32b,0,0);
  param_1[0x101] = iVar3;
  iVar3 = FUN_005a0e30("NavMapCloseInfocardText","ButtonText",&stack0xfffffe3c,0,0x3e8624dd,
                       0x3cf5c28f,0x3ff33333,0x3a1,1,0,1);
  param_1[0x102] = iVar3;
  *(byte *)(param_1[0x101] + 0x6c) = *(byte *)(param_1[0x101] + 0x6c) & 0xfc;
  *(byte *)(param_1[0x102] + 0x6c) = *(byte *)(param_1[0x102] + 0x6c) & 0xfc;
  iStack_1b8 = 0;
  piVar6 = param_1 + 0xd3;
  do {
    sprintf(acStack_114 + 0xc,"PlayerInfoFactionFrame%d",iStack_1b8);
    fVar7 = _DAT_005d4954 - (float)iStack_1b8 * _DAT_005d4958;
    fStack_1ac = fVar7 + _DAT_005d2c10;
    uStack_1b0 = 0xbe6c8b44;
    uStack_1a8 = 0;
    iVar3 = FUN_005a0d00(acStack_114 + 0xc,"ui_item_select",&uStack_1b0,&stack0xfffffe3c,0,0,0,0,0);
    piVar6[-6] = iVar3;
    sprintf(acStack_114 + 0xc,"PlayerInfoFactionName%d",iStack_1b8);
    fStack_180 = fVar7 + _DAT_005d4938;
    uStack_184 = 0xbe666667;
    uStack_17c = 0;
    iVar3 = FUN_005a0e30(acStack_114 + 0xc,"ItemName",&uStack_184,0,0x3eb74bc7,0x3d23d70a,0x3fc00000
                         ,0,1,0,0);
    *piVar6 = iVar3;
    sprintf(acStack_114 + 0xc,"PlayerInfoUnfriendlyBar%d",iStack_1b8);
    fStack_150 = fVar7 + (float)s_L7_>PlayerInfoUnfriendlyBar_d_005d4918._0_4_;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0x3d79db23;
    uStack_168 = 0x3c656042;
    uStack_164 = 0;
    uStack_154 = 0xbe958106;
    uStack_14c = 0;
    piVar4 = (int *)FUN_005a0db0(acStack_114 + 0xc,
                                 "Interface\\NeuroNet\\Inventory\\PSTAT_grandienthate.3db",
                                 &uStack_154,0,&uStack_16c,0,0,1,0,0,0,1,0,0,0,&uStack_178);
    piVar6[6] = (int)piVar4;
    (**(code **)(*piVar4 + 0xa8))(0x18,&stack0xfffffe38,&stack0xfffffe38);
    sprintf(acStack_114,"PlayerInfofriendlyBar%d",iStack_1b8);
    fStack_1ac = 0.173;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    afStack_1a0[0] = 0.061;
    afStack_1a0[1] = 0.014;
    piStack_198 = (int *)0x0;
    uStack_1b0 = 0xbe2e7d57;
    uStack_1a8 = 0;
    piVar4 = (int *)FUN_005a0db0(acStack_114,
                                 "Interface\\NeuroNet\\Inventory\\PSTAT_grandientlove.3db",
                                 &uStack_1b0,0,afStack_1a0,0,0,1,0,0,0,1,0,0,0,&uStack_16c);
    piVar6[0xc] = (int)piVar4;
    (**(code **)(*piVar4 + 0xa8))(0x18,&uStack_1d4,&uStack_1d4);
    iStack_1b8 = iStack_1b8 + 1;
    piVar6 = piVar6 + 1;
  } while (iStack_1b8 < 6);
  uStack_1a4 = 0xbd3851ec;
  afStack_1a0[0] = 0.176;
  afStack_1a0[1] = 0.0;
  iVar3 = FUN_005a17e0("PlayerInfoScroll",&uStack_1a4,0x3c9ba5e3,0x3ed2f1aa,0,5,6,0);
  param_1[0xe5] = iVar3;
  acStack_114[8] = '\0';
  acStack_114[9] = '\0';
  acStack_114[10] = '\0';
  acStack_114[0xb] = '\0';
  iStack_1b4 = 0;
  iVar3 = 0x61d;
  piVar6 = param_1 + 0xe6;
  uStack_148 = 0x61d;
  aiStack_144[0] = 0x61e;
  aiStack_144[1] = 0x61f;
  aiStack_144[2] = 1;
  aiStack_144[3] = 0x64b;
  aiStack_144[4] = 0x641;
  aiStack_144[5] = 0x646;
  aiStack_144[6] = 0x647;
  aiStack_144[7] = 0x648;
  aiStack_144[8] = 0x649;
  aiStack_144[9] = 1;
  aiStack_144[10] = 0x64a;
  aiStack_144[0xb] = 0x64c;
  acStack_114[0] = 'M';
  acStack_114[1] = '\x06';
  acStack_114[2] = '\0';
  acStack_114[3] = '\0';
  acStack_114[4] = 'N';
  acStack_114[5] = '\x06';
  acStack_114[6] = '\0';
  acStack_114[7] = '\0';
  iStack_1b8 = 0;
  fVar7 = 0.0;
  piStack_198 = piVar6;
  do {
    if (iVar3 == 1) {
      fVar7 = fVar7 + _DAT_005d1f04;
    }
    else {
      sprintf(acStack_114 + 0xc,"PlayerInfoHeading%d",iStack_1b4);
      afStack_1a0[0] = (_DAT_005d4248 - fVar7) - _DAT_005d011c;
      uStack_1a4 = 0x3e428f5c;
      afStack_1a0[1] = 0.0;
      fStack_188 = afStack_1a0[0];
      iVar3 = FUN_005a0e30(acStack_114 + 0xc,"ItemName",&uStack_1a4,0,0x3eb74bc7,0x3d23d70a,
                           0x3fc00000,iVar3,0,0,0);
      piVar6[0xd] = iVar3;
      sprintf(acStack_114 + 0xc,"PlayerInfoStat%d",iStack_1b4);
      uStack_194 = 0x3ec28f5c;
      fStack_190 = fStack_188;
      uStack_18c = 0;
      iVar5 = FUN_005a0e30(acStack_114 + 0xc,"ItemName",&uStack_194,0,0x3e408312,0x3d23d70a,
                           0x3fc00000,0,0,0,0);
      *piVar6 = iVar5;
      bVar1 = SinglePlayer();
      if ((bVar1) || ((iStack_1b8 != 1 && (iStack_1b8 != 2)))) {
        fVar7 = fVar7 + _DAT_005d011c;
      }
      else {
        *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) & 0xfc;
        *(byte *)(*piStack_198 + 0x6c) = *(byte *)(*piStack_198 + 0x6c) & 0xfc;
      }
      iStack_1b4 = iStack_1b4 + 1;
      piVar6 = piStack_198 + 1;
      piStack_198 = piVar6;
    }
    iVar3 = aiStack_144[iStack_1b8];
    iStack_1b8 = iStack_1b8 + 1;
  } while (iVar3 != 0);
  param_1[0x107] = 0;
  (**(code **)(*(int *)param_1[0xe5] + 0xa8))(0x37,0,0xffffffff);
  (**(code **)(*param_1 + 0x7c))(0,0,0);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  param_1[0x109] = 0x3f800000;
  cVar2 = FUN_004b5060(uStack_20,uStack_1c);
  return cVar2 != '\0';
}

