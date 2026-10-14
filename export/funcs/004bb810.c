
bool __fastcall FUN_004bb810(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_004424f0(1);
  (**(code **)(*param_1 + 0x98))("Interface\\NeuroNet\\Inventory\\CHAR_infowindow.cmp",0);
  FUN_005a1340(param_1 + 0x20);
  cVar1 = FUN_0045dcd0();
  if (cVar1 == '\0') {
    puStack_14 = (undefined1 *)0x3ecf5c29;
    uStack_10 = 0x3e74bc6a;
    uStack_c = 0;
    iVar4 = FUN_005a0c90("StoryStarCloseButton","Interface\\NeuroNet\\Inventory\\x.3db",0,
                         "ui_select_item",0,&puStack_14,0,&stack0xffffffe0,0,0,0,0,0x409,0,0);
    param_1[0xcc] = iVar4;
  }
  else {
    DAT_0067dcc8 = 1;
    uVar2 = FUN_004a7670();
    *(undefined1 *)((int)param_1 + 0x37d) = uVar2;
    *(undefined1 *)(param_1 + 0xe3) = 1;
  }
  bVar3 = SinglePlayer();
  uStack_c = 0;
  uStack_10 = 0x3e808312;
  puStack_14 = (undefined1 *)0xbed70a3d;
  if (bVar3) {
    uVar5 = 0x610;
  }
  else {
    uVar5 = 0x62f;
  }
  FUN_005a0e30("StoryStarTitle","PageHeader",&puStack_14,0,0x3f59db23,0x3cf5c28f,0x40000000,uVar5,1,
               0,1);
  cVar1 = FUN_0045dcd0();
  if (cVar1 == '\0') {
LAB_004bb96b:
    uVar5 = 0x3ebc6a7f;
  }
  else {
    bVar3 = SinglePlayer();
    uVar5 = 0x3e9e353f;
    if (bVar3) goto LAB_004bb96b;
  }
  puStack_14 = (undefined1 *)0xbec7ae14;
  uStack_10 = 0x3e4ccccd;
  uStack_c = 0;
  iVar4 = FUN_005a10e0("StoryStarHistoryText",0x3f451eb8,uVar5,&puStack_14,1);
  param_1[0xcd] = iVar4;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = -1;
  cVar1 = FUN_0045dcd0();
  if (cVar1 == '\0') {
    bVar3 = SinglePlayer();
    if (bVar3) {
      puStack_14 = (undefined1 *)0x3e083127;
      uStack_10 = 0x3cd4fdf4;
      uStack_c = 0;
      iVar4 = FUN_005a0d00("MissionButton","ui_select_item",&stack0xffffffe0,&puStack_14,0,0,0x323,0
                           ,0);
      param_1[0xdb] = iVar4;
      puStack_14 = (undefined1 *)0xbeab020c;
      uStack_10 = 0xbe408312;
      uStack_c = 0;
      iVar4 = FUN_005a0e30("MissionText","ButtonText",&puStack_14,0,0x3e883127,0x3cf5c28f,0x40000000
                           ,0x628,1,0,1);
      param_1[0xdc] = iVar4;
      puStack_14 = (undefined1 *)0x3e083127;
      uStack_10 = 0x3cd4fdf4;
      uStack_c = 0;
      iVar4 = FUN_005a0d00("LogButton","ui_select_item",&stack0xffffffe0,&puStack_14,0,0,0x324,0,0);
      param_1[0xdd] = iVar4;
      puStack_14 = (undefined1 *)0x3d8b4396;
      uStack_10 = 0xbe408312;
      uStack_c = 0;
      iVar4 = FUN_005a0e30("LogText","ButtonText",&puStack_14,0,0x3e89374c,0x3cf5c28f,0x40000000,
                           0x629,1,0,1);
      param_1[0xde] = iVar4;
    }
  }
  else {
    DAT_0066d359 = 1;
    bVar3 = SinglePlayer();
    if (bVar3) {
      puStack_14 = (undefined1 *)0xbe8e5604;
      uStack_10 = 0xbe570a3d;
      uStack_c = 0;
      iVar4 = FUN_005a0d00("LoadAutosaveButton","ui_select_item",&puStack_14,&stack0xffffffe0,0,0,
                           800,0,0);
      param_1[0xcf] = iVar4;
      puStack_14 = (undefined1 *)0x3e8c49ba;
      uStack_10 = 0xbe570a3d;
      uStack_c = 0;
      iVar4 = FUN_005a0d00("LoadSavegameButton","ui_select_item",&puStack_14,&stack0xffffffe0,0,0,
                           0x321,0,0);
      param_1[0xd0] = iVar4;
    }
    puStack_14 = (undefined1 *)0xba83126f;
    uStack_10 = 0xbe570a3d;
    uStack_c = 0;
    iVar4 = FUN_005a0d00("MainMenuButton","ui_select_item",&puStack_14,&stack0xffffffe0,0,0,0x322,0,
                         0);
    param_1[0xd1] = iVar4;
    bVar3 = SinglePlayer();
    if (!bVar3) {
      puStack_14 = (undefined1 *)0xbe8e5604;
      uStack_10 = 0xbe178d50;
      uStack_c = 0;
      iVar4 = FUN_005a0d00("RespawnButtonButton","ui_select_item",&puStack_14,&stack0xffffffe0,0,0,
                           0x5d0,0,0);
      param_1[0xd5] = iVar4;
      puStack_14 = (undefined1 *)0xba83126f;
      uStack_10 = 0xbe178d50;
      uStack_c = 0;
      iVar4 = FUN_005a0d00("NewPlayerButtonButton","ui_select_item",&puStack_14,&stack0xffffffe0,0,0
                           ,0x5d1,0,0);
      param_1[0xd6] = iVar4;
      puStack_14 = (undefined1 *)0x3e8c49ba;
      uStack_10 = 0xbe178d50;
      uStack_c = 0;
      iVar4 = FUN_005a0d00("NewServerButtonButton","ui_select_item",&puStack_14,&stack0xffffffe0,0,0
                           ,0x5d2,0,0);
      param_1[0xd7] = iVar4;
    }
    bVar3 = SinglePlayer();
    if (bVar3) {
      puStack_14 = (undefined1 *)0xbed16873;
      uStack_10 = 0xbe428f5c;
      uStack_c = 0;
      iVar4 = FUN_005a0e30("LoadAutosaveText","ButtonText",&puStack_14,0,0x3e8624dd,0x3cf5c28f,
                           0x3ff33333,0x652,1,0,1);
      param_1[0xd2] = iVar4;
      puStack_14 = (undefined1 *)0x3e126e98;
      uStack_10 = 0xbe428f5c;
      uStack_c = 0;
      iVar4 = FUN_005a0e30("LoadSavegameText","ButtonText",&puStack_14,0,0x3e8624dd,0x3cf5c28f,
                           0x3ff33333,0x653,1,0,1);
      param_1[0xd3] = iVar4;
    }
    puStack_14 = &DAT_be051eb8;
    uStack_10 = 0xbe428f5c;
    uStack_c = 0;
    iVar4 = FUN_005a0e30("MainMenuText","ButtonText",&puStack_14,0,0x3e8624dd,0x3cf5c28f,0x3ff33333,
                         0x655,1,0,1);
    param_1[0xd4] = iVar4;
    bVar3 = SinglePlayer();
    if (!bVar3) {
      puStack_14 = (undefined1 *)0xbed16873;
      uStack_10 = 0xbe03126f;
      uStack_c = 0;
      iVar4 = FUN_005a0e30("RespawnTextText","ButtonText",&puStack_14,0,0x3e8624dd,0x3cf5c28f,
                           0x3ff33333,0x751,1,0,1);
      param_1[0xd8] = iVar4;
      puStack_14 = &DAT_be051eb8;
      uStack_10 = 0xbe03126f;
      uStack_c = 0;
      iVar4 = FUN_005a0e30("NewPlayerTextText","ButtonText",&puStack_14,0,0x3e8624dd,0x3cf5c28f,
                           0x3ff33333,0x5ce,1,0,1);
      param_1[0xd9] = iVar4;
      puStack_14 = (undefined1 *)0x3e126e98;
      uStack_10 = 0xbe03126f;
      uStack_c = 0;
      iVar4 = FUN_005a0e30("NewServerTextText","ButtonText",&puStack_14,0,0x3e8624dd,0x3cf5c28f,
                           0x3ff33333,0x5cf,1,0,1);
      param_1[0xda] = iVar4;
    }
  }
  if ((int *)*DAT_00672950 == DAT_00672950) {
    cVar1 = FUN_0045dcd0();
    if (cVar1 == '\0') {
      bVar3 = SinglePlayer();
      if (bVar3) {
        *(undefined1 *)(param_1 + 0xdf) = 0;
        uVar5 = 0;
        goto LAB_004bbf40;
      }
    }
  }
  uVar5 = 1;
LAB_004bbf40:
  FUN_004bbfb0(uVar5);
  (**(code **)(*param_1 + 0x7c))(0,0,0);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  cVar1 = FUN_004b5060(uStack_10,uStack_c);
  return cVar1 != '\0';
}

