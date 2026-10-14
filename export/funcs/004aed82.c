
void __fastcall FUN_004aed82(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + 0x5ac);
  iVar4 = 0xe;
  do {
    *(byte *)(piVar3[-0xe] + 0x6c) = *(byte *)(piVar3[-0xe] + 0x6c) & 0xfc;
    *(byte *)(*piVar3 + 0x6c) = *(byte *)(*piVar3 + 0x6c) & 0xfc;
    *(byte *)(piVar3[0xe] + 0x6c) = *(byte *)(piVar3[0xe] + 0x6c) & 0xfc;
    *(byte *)(piVar3[0x2a] + 0x6c) = *(byte *)(piVar3[0x2a] + 0x6c) & 0xfc;
    *(byte *)(piVar3[0x54] + 0x6c) = *(byte *)(piVar3[0x54] + 0x6c) & 0xfc;
    *(byte *)(piVar3[0x38] + 0x6c) = *(byte *)(piVar3[0x38] + 0x6c) & 0xfc;
    *(byte *)(piVar3[0x46] + 0x6c) = *(byte *)(piVar3[0x46] + 0x6c) & 0xfc;
    *(byte *)(piVar3[0x62] + 0x6c) = *(byte *)(piVar3[0x62] + 0x6c) & 0xfc;
    *(byte *)(piVar3[0x70] + 0x6c) = *(byte *)(piVar3[0x70] + 0x6c) & 0xfc;
    piVar1 = piVar3 + 0x1c;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
    *(byte *)(*piVar1 + 0x6c) = *(byte *)(*piVar1 + 0x6c) & 0xfc;
  } while (iVar4 != 0);
  pbVar2 = (byte *)(*(int *)(param_1 + 0x344) + 0x6c);
  *pbVar2 = *pbVar2 & 0xfc;
  pbVar2 = (byte *)(*(int *)(param_1 + 0x7a8) + 0x6c);
  *pbVar2 = *pbVar2 & 0xfc;
  pbVar2 = (byte *)(*(int *)(param_1 + 0x7ac) + 0x6c);
  *pbVar2 = *pbVar2 & 0xfc;
  pbVar2 = (byte *)(*(int *)(param_1 + 0x7b0) + 0x6c);
  *pbVar2 = *pbVar2 & 0xfc;
  pbVar2 = (byte *)(*(int *)(param_1 + 0x7b4) + 0x6c);
  *pbVar2 = *pbVar2 & 0xfc;
  *(undefined4 *)(*(int *)(param_1 + 0x370) + 0x348) = DAT_00679bb0;
  return;
}

