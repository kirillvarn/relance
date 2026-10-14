
void __fastcall FUN_004d0170(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_004e5470(0);
  if ((iVar3 != 0) && (iVar3 != 2)) {
    *(undefined4 *)(param_1 + 0x444) = 0xffffffff;
    *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) & 0xfc;
    return;
  }
  *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) | 3;
  if (iVar3 != *(int *)(param_1 + 0x444)) {
    *(int *)(param_1 + 0x444) = iVar3;
    iVar2 = *(int *)(param_1 + 0x424);
    *(undefined1 *)(param_1 + 0x43c) = 1;
    if (iVar3 == 2) {
      *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x428) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x42c) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x434) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x430) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x448) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      return;
    }
    *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x428) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x42c) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x430) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x434) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x448) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  return;
}

