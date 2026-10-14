
void FUN_00421ad0(void)

{
  uint uVar1;
  uint uVar2;
  uint uStack00000004;
  
  uStack00000004 = ftol();
  if ((int)uStack00000004 < 0) {
    uStack00000004 = 0;
  }
  else if (0xff < (int)uStack00000004) {
    uStack00000004 = 0xff;
  }
  uVar1 = ftol();
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  uVar2 = ftol();
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  DAT_00616898 = ((uStack00000004 & 0xff | 0xffffff00) << 8 | uVar1 & 0xff) << 8 | uVar2 & 0xff;
  return;
}

