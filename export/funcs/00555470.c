
undefined1 * FUN_00555470(void)

{
  int iVar1;
  
  iVar1 = FUN_005792b0(0x3b);
  DAT_0067986c = 0xff;
  if ((int)((uint)DAT_006798f8 + iVar1) < 0x100) {
    DAT_0067986c = (undefined1)((uint)DAT_006798f8 + iVar1);
  }
  DAT_0067986d = 0xff;
  if ((int)((uint)DAT_006798f9 + iVar1) < 0x100) {
    DAT_0067986d = (undefined1)((uint)DAT_006798f9 + iVar1);
  }
  DAT_0067986e = 0xff;
  if ((int)(iVar1 + (uint)DAT_006798fa) < 0x100) {
    DAT_0067986e = (undefined1)(iVar1 + (uint)DAT_006798fa);
  }
  return &DAT_0067986c;
}

