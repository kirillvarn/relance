
bool __fastcall FUN_004d5db0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0xbe78d4fe;
  local_8 = 0xbe86a7f0;
  local_4 = 0;
  iVar2 = FUN_005a0e30("CruiseProgressText","SubHeader",&local_c,0,0x3ef851ec,0x3d23d70a,0x3f666666,
                       0,1,0,1);
  param_1[0xcb] = iVar2;
  iVar2 = *(int *)(iVar2 + 0x334);
  if (*(char *)(iVar2 + 0x30) != '\x01') {
    *(undefined1 *)(iVar2 + 0x30) = 1;
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  local_c = 0;
  local_8 = 0;
  local_4 = 0xbf800000;
  (**(code **)(*param_1 + 0x7c))(0,0,0xbf800000);
  FUN_004347e0(DAT_0067eca8,0x585,param_1 + 0xcc,0x30);
  FUN_004347e0(DAT_0067eca8,0x64f,param_1 + 0xe4,0x30);
  cVar1 = FUN_004b5060(local_8,local_4);
  return cVar1 != '\0';
}

