
void __fastcall FUN_004abfb0(int param_1)

{
  byte *pbVar1;
  undefined4 uStack_8c;
  undefined1 local_80 [128];
  
  uStack_8c = 0x40;
  FUN_004347e0(DAT_0067eca8,0x5e8,local_80);
  uStack_8c = 0;
  (**(code **)(**(int **)(param_1 + 0x4fc) + 0xa8))(0x1d,local_80);
  FUN_004347e0(DAT_0067eca8,0x2148,&uStack_8c,0x40);
  (**(code **)(**(int **)(param_1 + 0x500) + 0xa8))(0x1d,&uStack_8c,0);
  *(byte *)(*(int *)(param_1 + 0x4e4) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x4e4) + 0x6c) | 3;
  FUN_004abdf0(1);
  pbVar1 = (byte *)(*(int *)(param_1 + 0x4f4) + 0x6c);
  *pbVar1 = *pbVar1 | 3;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x4f8) + 0x6c);
  *pbVar1 = *pbVar1 | 3;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x4fc) + 0x6c);
  *pbVar1 = *pbVar1 | 3;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x500) + 0x6c);
  *pbVar1 = *pbVar1 | 3;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x4e8) + 0x6c);
  *pbVar1 = *pbVar1 | 3;
  if ((*(char *)(param_1 + 0x84d) != '\0') || (*(char *)(param_1 + 0x84c) != '\0')) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4ec) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4f0) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
  }
  return;
}

