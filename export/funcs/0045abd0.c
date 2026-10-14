
bool __fastcall FUN_0045abd0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0xbee66666;
  local_8 = 0x3e75c28f;
  local_4 = 0;
  piVar2 = (int *)FUN_005a0e30("ArrivalText","PageHeader",&local_c,0,0x3f733333,0x3d75c28f,
                               0x3fb33333,0,0,0,1);
  param_1[0xcb] = (int)piVar2;
  (**(code **)(*piVar2 + 0xa8))(0x33,&DAT_00679b90,1);
  *(byte *)(param_1[0xcb] + 0x6c) = *(byte *)(param_1[0xcb] + 0x6c) & 0xfc;
  uVar3 = 0;
  (**(code **)(*param_1 + 0x7c))(0,0,0xbf800000);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  param_1[0xcc] = 0x40000000;
  param_1[0xcd] = 0x40800000;
  cVar1 = FUN_004b5060(param_1[1],uVar3);
  return cVar1 != '\0';
}

