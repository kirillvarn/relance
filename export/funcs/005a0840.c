
undefined4 __thiscall FUN_005a0840(int *param_1,int param_2)

{
  if (param_2 == 0xef01) {
    if (param_1[1] != 0) {
      (**(code **)(*param_1 + 0x14))(param_1[1] + 0x60);
    }
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 3;
    return 1;
  }
  if (param_2 == 0xef02) {
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
    return 0xef01;
  }
  return 0;
}

