
void FUN_0046a4a0(char param_1)

{
  DAT_0066da88 = param_1;
  if (param_1 == '\0') {
    if (DAT_0066da80 != 0) {
      *(byte *)(DAT_0066da80 + 0x6c) = *(byte *)(DAT_0066da80 + 0x6c) & 0xfc;
    }
  }
  else if (DAT_0066da80 != 0) {
    *(byte *)(DAT_0066da80 + 0x6c) = *(byte *)(DAT_0066da80 + 0x6c) | 3;
    return;
  }
  return;
}

