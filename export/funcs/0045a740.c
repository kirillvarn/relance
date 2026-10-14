
uint FUN_0045a740(void)

{
  char extraout_AL;
  char extraout_AL_00;
  undefined4 in_EAX;
  undefined3 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar1;
  int iVar2;
  
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  if (DAT_0067dcc8 == '\0') {
    FUN_0041dd90();
    uVar3 = extraout_var;
    if (extraout_AL != '\0') {
      FUN_0042d730();
      uVar3 = extraout_var_00;
      if ((extraout_AL_00 == '\0') && (DAT_00668761 == '\0')) {
        uVar1 = FUN_004c4810();
        if ((char)uVar1 != '\0') {
          return uVar1 & 0xffffff00;
        }
        iVar2 = FUN_0054baf0();
        return CONCAT31((int3)((uint)-iVar2 >> 8),'\x01' - (iVar2 != 0));
      }
    }
  }
  return CONCAT31(uVar3,1);
}

