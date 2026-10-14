
undefined4 __thiscall FUN_00599ac0(int *param_1,int *param_2)

{
  int iVar1;
  
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfb | 3;
  FUN_005a1c50();
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfe;
  param_1[0x2d] = 0x3dcccccd;
  param_1[0x2e] = 0x3dcccccd;
  *(undefined1 *)((int)param_1 + 0xe1) = 0;
  (**(code **)(*param_1 + 0x70))(L"StaticText");
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    param_1[0x3b] = iVar1;
    param_1[0x2d] = iVar1;
    iVar1 = param_2[1];
    param_1[0x3c] = iVar1;
    param_1[0x2e] = iVar1;
    (**(code **)(*param_1 + 0x70))(param_2[2]);
    *(undefined1 *)(param_1 + 0x36) = 0;
    *(undefined1 *)((int)param_1 + 0xd9) = 0;
    *(undefined1 *)((int)param_1 + 0xda) = 0;
    *(undefined1 *)((int)param_1 + 0xdb) = 0xff;
  }
  return 1;
}

