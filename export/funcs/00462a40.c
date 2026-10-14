
undefined4 __thiscall FUN_00462a40(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0xef01) {
    if (param_1[1] != 0) {
      (**(code **)(*param_1 + 0x14))(param_1[1] + 0x60);
    }
    FUN_00462e30();
    return 1;
  }
  if (param_2 != 0xef02) {
    uVar1 = FUN_005a0840(param_2,param_3,param_4);
    return uVar1;
  }
  if (param_1[1] != 0) {
    FUN_0059dd00(param_1,0);
  }
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  FUN_00462e30();
  return 1;
}

