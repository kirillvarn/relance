
uint FUN_005a8960(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_005a8770(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_005a8840();
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

