
undefined4 FUN_00552440(byte param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0xc) == 0xc) {
    return 0x1c;
  }
  if ((param_1 & 4) == 4) {
    return 0x10;
  }
  if ((param_1 & 2) == 2) {
    uVar1 = 0xc;
  }
  return uVar1;
}

