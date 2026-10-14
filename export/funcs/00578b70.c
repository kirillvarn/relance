
bool __fastcall FUN_00578b70(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = 0xbdc28f5c;
  local_20 = 0x3c9d4952;
  local_1c = 0;
  iVar2 = FUN_005a0e30("LoadingProgressText","PageHeader",&local_24,0,0x3e4ccccd,0x3d23d70a,
                       0x40000000,0,1,0,1);
  param_1[0xcf] = iVar2;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0xbf800000;
  iVar2 = FUN_005a0db0("LoadingProgressBar","Interface\\Intro\\objects\\FRONT_loadingbar.cmp",
                       &local_c,0,&local_18,0,0,0,1,0,0,0,0,0,0,&local_24);
  param_1[0xe0] = iVar2;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xbf800000;
  (**(code **)(*param_1 + 0x7c))(0,0,0xbf800000);
  FUN_004347e0(DAT_0067eca8,0x7c,param_1 + 0xd0,0x20);
  if ((int *)param_1[0xcf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xcf] + 0xa8))(0x1d,param_1 + 0xd0,0);
  }
  cVar1 = FUN_004b5060(local_8,local_4);
  return cVar1 != '\0';
}

