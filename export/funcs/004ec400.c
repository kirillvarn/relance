
void FUN_004ec400(void)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  
  if (DAT_00674b70 != 0) {
    cVar3 = FUN_0041a3e0();
    iVar2 = DAT_00674b70;
    if (cVar3 != '\0') {
      *(byte *)(*(int *)(DAT_00674b70 + 0x410) + 0x6c) =
           *(byte *)(*(int *)(DAT_00674b70 + 0x410) + 0x6c) & 0xfc;
      pbVar1 = (byte *)(*(int *)(iVar2 + 0x414) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(iVar2 + 0x418) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(iVar2 + 0x41c) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
    }
  }
  return;
}

