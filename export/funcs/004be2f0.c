
undefined4 FUN_004be2f0(undefined4 *param_1)

{
  int iVar1;
  
  if (DAT_0067244c != 0) {
    *param_1 = *(undefined4 *)(DAT_0067244c + 0xf4);
    param_1[1] = *(undefined4 *)(DAT_0067244c + 0xf8);
    iVar1 = DAT_0067244c;
    param_1[0x12] = *(undefined4 *)(DAT_0067244c + 0x13c);
    param_1[0x13] = *(undefined4 *)(iVar1 + 0x140);
    param_1[0x14] = *(undefined4 *)(iVar1 + 0x144);
    iVar1 = DAT_0067244c;
    param_1[0x15] = *(undefined4 *)(DAT_0067244c + 0x148);
    param_1[0x16] = *(undefined4 *)(iVar1 + 0x14c);
    param_1[0x17] = *(undefined4 *)(iVar1 + 0x150);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(DAT_0067244c + 0x154);
    return 1;
  }
  return 0;
}

