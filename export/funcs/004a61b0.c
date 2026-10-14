
bool __thiscall FUN_004a61b0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_005a0db0("OfferDialogBackground","Interface\\NeuroNet\\Inventory\\CHAR_infowindow.cmp",
               &local_18,0,&local_24,0,0,0,1,0,0,1,0,0,0,&local_30);
  local_18 = 0xbed60419;
  local_14 = 0x3e818937;
  local_10 = 0;
  iVar2 = FUN_005a0e30("OfferDialogTitle","PageHeader",&local_18,0,0x3f56c8b4,0x3d75c28f,0x3f99999a,
                       1000,1,0,1);
  param_1[0xd2] = iVar2;
  local_18 = 0xbecccccd;
  local_14 = 0x3e395810;
  local_10 = 0;
  iVar2 = FUN_005a10e0("OfferDialogOfferText",0x3f48f5c3,0x3eae147b,&local_18,1);
  param_1[0xd3] = iVar2;
  local_18 = 0x3db851ec;
  local_14 = 0x3cd4fdf4;
  local_10 = 0;
  local_24 = 0xbe116873;
  local_20 = 0xbe570a3d;
  local_1c = 0;
  iVar2 = FUN_005a0d00("OfferDialogAcceptButton","ui_select_item",&local_24,&local_18,0,0,0x332,0,0)
  ;
  param_1[0xcf] = iVar2;
  local_18 = 0x3c9374bc;
  local_14 = 0x3c9374bc;
  local_10 = 0;
  local_24 = 0x3ecb4396;
  local_20 = 0x3e6c8b44;
  local_1c = 0;
  iVar2 = FUN_005a0c90("OfferDialogCloseButton","Interface\\TextOffer\\x.3db",0,"ui_select_item",0,
                       &local_24,0,&local_18,0,0,0,0,0x409,0,0);
  param_1[0xd1] = iVar2;
  local_18 = 0x3db851ec;
  local_14 = 0x3cd4fdf4;
  local_10 = 0;
  local_24 = 0x3e051eb8;
  local_20 = 0xbe570a3d;
  local_1c = 0;
  iVar2 = FUN_005a0d00("OfferDialogDeclineButton","ui_select_item",&local_24,&local_18,0,0,0x333,0,0
                      );
  param_1[0xd5] = iVar2;
  local_18 = 0xbe6b851f;
  local_14 = 0xbe408312;
  local_10 = 0;
  iVar2 = FUN_005a0e30("OfferDialogAcceptText","ButtonText",&local_18,0,0x3e3020c5,0x3d75c28f,
                       0x3fc00000,0x4ad,1,0,1);
  param_1[0xd0] = iVar2;
  local_18 = 0x3d27ef9e;
  local_14 = 0xbe408312;
  local_10 = 0;
  iVar2 = FUN_005a0e30("OfferDialogDeclineText","ButtonText",&local_18,0,0x3e353f7d,0x3d75c28f,
                       0x3fc00000,0x548,1,0,1);
  param_1[0xd6] = iVar2;
  local_18 = 0x3db851ec;
  local_14 = 0x3cd4fdf4;
  local_10 = 0;
  local_24 = 0;
  local_20 = 0xbe570a3d;
  local_1c = 0;
  iVar2 = FUN_005a0d00("OfferDialogClose2Button","ui_select_item",&local_24,&local_18,0,0,0x334,0,0)
  ;
  param_1[0xd7] = iVar2;
  local_18 = 0xbdb851ec;
  local_14 = 0xbe428f5c;
  local_10 = 0;
  iVar2 = FUN_005a0e30("OfferDialogCloseText","ButtonText",&local_18,0,0x3e374bc7,0x3d75c28f,
                       0x3fc00000,0x3a1,1,0,1);
  param_1[0xd8] = iVar2;
  local_c = 0;
  local_8 = 0;
  local_4 = 0xbfa4dd2f;
  (**(code **)(*param_1 + 0x14))(&local_c);
  FUN_005760d0(0xf);
  cVar1 = FUN_004b5060(param_1[1],param_2);
  return cVar1 != '\0';
}

