
void __fastcall FUN_004ae890(int param_1)

{
  byte *pbVar1;
  undefined1 local_80 [128];
  
  if ((*(int *)(param_1 + 0x7f4) != 3) || (*(char *)(param_1 + 0x8a0) != '\0')) {
    if (*(char *)(param_1 + 0x8a0) == '\0') {
      *(undefined4 *)(param_1 + 0x7f4) = 3;
      *(undefined1 *)(param_1 + 0x8a0) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 0x348) = DAT_00679ba4;
      return;
    }
    FUN_004b0920(0xffffffff);
    FUN_004b0530();
    *(undefined1 *)(param_1 + 0x848) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x348) = DAT_00679b94;
    *(undefined1 *)(*(int *)(param_1 + 0x7a8) + 0x37c) = 1;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7a8) + 0x388);
    *pbVar1 = *pbVar1 & 0xfb;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7a8) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7ac) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7b0) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7b4) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x344) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    FUN_004347e0(DAT_0067eca8,0x68f,local_80,0x40);
    (**(code **)(**(int **)(param_1 + 0x344) + 0xa8))(0x1d,local_80,0);
    FUN_004abdf0(0);
  }
  return;
}

