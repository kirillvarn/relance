
bool __thiscall FUN_00472230(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0041dde0("Arrow",0);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0xbf800000;
  FUN_005a0db0("ExitFrame","Interface\\NeuroNet\\Options\\alt-f4window.cmp",&local_c,0,&local_18,0,0
               ,0,1,1,0,1,0,0,0,&local_24);
  local_c = 0;
  local_8 = 0x3d71a9fc;
  local_4 = 0xbf800000;
  iVar3 = FUN_005a0e30("ExitText","Normal",&local_c,0,0x3eb851ec,0x3cf5c28f,0x3fa00000,0x736,1,0,0);
  *(int *)(param_1 + 0x33c) = iVar3;
  iVar3 = *(int *)(iVar3 + 0x334);
  if (*(char *)(iVar3 + 0x30) != '\x01') {
    *(undefined1 *)(iVar3 + 0x30) = 1;
    *(undefined4 *)(iVar3 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0x6e;
  *(undefined4 *)(param_1 + 0x78) = 6;
  uVar1 = FUN_004a7670();
  *(undefined1 *)(param_1 + 0x338) = uVar1;
  FUN_0059d8c0(param_1);
  FUN_00577b40(param_1 + 0x32c);
  FUN_005760d0(0xf);
  FUN_005760d0(0x11);
  cVar2 = FUN_004b5060(param_2,param_3);
  return cVar2 != '\0';
}

