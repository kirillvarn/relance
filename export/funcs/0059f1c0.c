
uint __thiscall FUN_0059f1c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_0059ec80(param_3,param_4,0);
  if ((char)uVar1 != '\0') {
    uVar1 = (**(code **)(*param_1 + 0x24))(param_2,0);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

