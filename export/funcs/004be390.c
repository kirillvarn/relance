
void FUN_004be390(void)

{
  int iVar1;
  
  iVar1 = DAT_0067244c;
  if (DAT_0067244c != 0) {
    *(byte *)(DAT_0067244c + 0x6c) = *(byte *)(DAT_0067244c + 0x6c) & 0xfd;
    *(undefined1 *)(iVar1 + 0x159) = 0;
  }
  return;
}

