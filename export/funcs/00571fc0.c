
void __fastcall FUN_00571fc0(int param_1)

{
  byte *pbVar1;
  
  *(undefined1 *)(param_1 + 0x110) = 1;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  pbVar1 = (byte *)(*(int *)(param_1 + 0xc4) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 200) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0xe8) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0xd0) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0xd8) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0xdc) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0xcc) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0xec) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined1 *)(*(int *)(param_1 + 0xb8) + 0x498) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x498) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x498) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x498) = 0;
  FUN_00579a90(1);
  FUN_00579a90(1);
  FUN_00579a90(1);
  FUN_00579a90(1);
  FUN_00564570(0x1b);
  FUN_00579890(0);
  FUN_00579890(0);
  FUN_00579890(0);
  FUN_00579890(0);
  FUN_00579890(0);
  FUN_00579890(0);
  FUN_00579890(0);
  FUN_00579890(0);
  return;
}

