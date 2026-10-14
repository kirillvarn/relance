
void FUN_0048d4a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059d9c0("NN_MissionVendor");
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 8) == '\x01') {
      *(undefined1 *)(iVar1 + 0x344) = 1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x378) = 0xffffffff;
    FmtStr::destroy((FmtStr *)(iVar1 + 0x37c));
    FmtStr::operator=((FmtStr *)(iVar1 + 0x37c),(FmtStr *)(param_1 + 0xc));
    FUN_0048c8a0();
    FUN_0048cce0();
    if (*(int *)(iVar1 + 0x378) != -1) {
      iVar1 = *(int *)(iVar1 + 0x378) * 0x60 + *(int *)(iVar1 + 0x394);
      FUN_00459950(iVar1 + 0x14);
      FUN_00459950(iVar1 + 0x2c);
      FUN_00459950(iVar1 + 0x44);
    }
  }
  return;
}

