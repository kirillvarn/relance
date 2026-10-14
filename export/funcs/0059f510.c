
void __fastcall FUN_0059f510(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005792b0(6);
  if (iVar1 != 0) {
    iVar1 = FUN_005792b0(9);
    if (iVar1 != 0) {
      if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
        FUN_0059efa0(&DAT_0067dbf8,0,0x3f800000,0);
        if ((*(byte *)(param_1 + 0xa4) & 1) != 0) {
          FUN_00434630(&DAT_0067dbf8,*(undefined4 *)(param_1 + 0x80),1,param_1 + 0xa5,1,0x3f800000,0
                      );
        }
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        FUN_0059e5c0();
        return;
      }
    }
  }
  return;
}

