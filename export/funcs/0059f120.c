
void __fastcall FUN_0059f120(int param_1)

{
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    FUN_0059e5c0();
    if ((*(byte *)(param_1 + 0xa4) & 2) == 0) {
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x17,8);
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,1);
      FUN_0059efa0(&DAT_0067dbf8,0,0x3f800000,0);
    }
    if ((*(byte *)(param_1 + 0xa4) & 1) != 0) {
      FUN_00434630(&DAT_0067dbf8,*(undefined4 *)(param_1 + 0x80),1,param_1 + 0xa5,
                   (byte)~*(byte *)(param_1 + 0xa4) >> 1 & 1,0x3f800000,0);
    }
  }
  return;
}

