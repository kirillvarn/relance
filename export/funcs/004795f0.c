
void __thiscall FUN_004795f0(int param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x91c);
  if (iVar2 != 0) {
    if (param_2 == '\0') {
      *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x920) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x924) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x928) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x92c) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x930) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x934) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x938) + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      iVar2 = *(int *)(param_1 + 0x4bc);
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x944) != 0)) {
        *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) | 3;
        pbVar1 = (byte *)(*(int *)(param_1 + 0x944) + 0x6c);
        *pbVar1 = *pbVar1 | 3;
      }
    }
    else {
      *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x920) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x924) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x928) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x92c) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x930) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x934) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x938) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      iVar2 = *(int *)(param_1 + 0x4bc);
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x944) != 0)) {
        *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) & 0xfc;
        pbVar1 = (byte *)(*(int *)(param_1 + 0x944) + 0x6c);
        *pbVar1 = *pbVar1 & 0xfc;
        return;
      }
    }
  }
  return;
}

