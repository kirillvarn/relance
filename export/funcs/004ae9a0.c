
void __fastcall FUN_004ae9a0(int param_1)

{
  byte *pbVar1;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined1 local_80 [128];
  
  if ((*(int *)(param_1 + 0x7f4) != 4) || (*(char *)(param_1 + 0x8a0) != '\0')) {
    if (*(char *)(param_1 + 0x8a0) == '\0') {
      *(undefined4 *)(param_1 + 0x7f4) = 4;
      *(undefined1 *)(param_1 + 0x8a0) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x374) + 0x348) = DAT_00679ba4;
      return;
    }
    uStack_88 = 0x40;
    puStack_8c = local_80;
    FUN_004347e0(DAT_0067eca8,0x765);
    uStack_88 = 0;
    puStack_8c = local_80;
    (**(code **)(**(int **)(param_1 + 0x7b4) + 0xa8))(0x1d);
    *(undefined4 *)(param_1 + 0x8a8) = 0;
    *(undefined4 *)(param_1 + 0x8ac) = 0;
    *(byte *)(*(int *)(param_1 + 0x7f0) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x7f0) + 0x6c) | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7b0) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7b4) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    *(byte *)(*(int *)(param_1 + 0x344) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x344) + 0x6c) | 3;
    FUN_004347e0(DAT_0067eca8,0x532,&puStack_8c,0x40);
    (**(code **)(**(int **)(param_1 + 0x344) + 0xa8))(0x1d,&puStack_8c,0);
    FUN_004abdf0(0);
  }
  return;
}

