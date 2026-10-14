
undefined4 __thiscall FUN_004b54d0(int param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
  FUN_005a1c50();
  *(undefined4 *)(param_1 + 0xb4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xb8) = 0x3dcccccd;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
  *(undefined4 *)(param_1 + 0x78) = 7;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x3a902de0;
  *(undefined1 *)(param_1 + 0xe1) = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0xff434343;
  *(undefined4 *)(param_1 + 0xcc) = 0xffe0c387;
  cVar1 = FUN_005b0880();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x170) = 0x3ec51eb8;
    *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
    FUN_004b59b0();
    return 1;
  }
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x170) = 0x3ec51eb8;
  *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
  FUN_004b59b0();
  return 1;
}

