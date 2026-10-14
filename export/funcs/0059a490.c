
undefined4 __thiscall FUN_0059a490(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x8ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8a4) = 0;
  *(undefined4 *)(param_1 + 0x8a8) = 0x10;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  *(undefined1 *)(param_1 + 0x8a0) = 1;
  *(undefined1 *)(param_1 + 0x8a1) = 0;
  *(undefined1 *)(param_1 + 0x8a2) = 1;
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = *param_3;
    *(undefined4 *)(param_1 + 0x8b0) = uVar1;
    *(undefined4 *)(param_1 + 0x898) = uVar1;
    uVar1 = param_3[1];
    *(undefined4 *)(param_1 + 0x8b4) = uVar1;
    *(undefined4 *)(param_1 + 0x89c) = uVar1;
  }
  return 1;
}

