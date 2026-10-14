
void __fastcall FUN_00561b20(int param_1)

{
  byte *pbVar1;
  
  *(undefined1 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(byte *)(*(int *)(param_1 + 0x110) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x110) + 0x6c) & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x104) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x11c) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x114) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x118) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x498) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x498) = 0;
  FUN_00579a90(1);
  FUN_00579a90(1);
  FUN_00579890(0);
  FUN_00579890(0);
  FUN_00579890(0);
  FUN_00564570(0x1b);
  return;
}

