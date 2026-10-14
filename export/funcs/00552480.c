
int FUN_00552480(byte param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 0x40) != 0) {
    iVar1 = 4;
  }
  if ((char)param_1 < '\0') {
    iVar1 = iVar1 + 4;
  }
  return iVar1;
}

