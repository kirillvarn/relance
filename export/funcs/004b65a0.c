
void FUN_004b65a0(void)

{
  if (DAT_00672288 != 0) {
    *(undefined4 *)(DAT_00672288 + 0x164) = 0;
    *(byte *)(DAT_00672288 + 0x6c) = *(byte *)(DAT_00672288 + 0x6c) & 0xfd;
  }
  return;
}

