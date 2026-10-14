
bool __fastcall FUN_004bcd30(int *param_1)

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
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3e947ae1;
  local_10 = 0xbfa00000;
  iVar2 = FUN_005a0c90("DummyMissionLog","interface\\NeuroNet\\icons\\NN_storystar.3db",0,0,0,
                       &local_18,0,&local_24,0,0,0,0,0,0,0);
  param_1[0xd3] = iVar2;
  FUN_0055e120(0x3e99999a);
  local_c = 0x3ed0e561;
  local_8 = 0x3eeb020c;
  local_4 = 0xbfa00000;
  local_18 = 0;
  local_14 = 0x3e947ae1;
  local_10 = 0xbfa00000;
  FUN_0055dee0(param_1[0xd3],&local_18,&local_c);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  (**(code **)(*param_1 + 0x7c))(0,0,0);
  cVar1 = FUN_004b5060(local_8,local_4);
  return cVar1 != '\0';
}

