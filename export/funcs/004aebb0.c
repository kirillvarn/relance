
void __fastcall FUN_004aebb0(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x848) != '\0') {
    FUN_004b2540(1);
    return;
  }
  piVar2 = (int *)(param_1 + 0x5ac);
  iVar3 = 0xe;
  do {
    *(byte *)(piVar2[-0xe] + 0x6c) = *(byte *)(piVar2[-0xe] + 0x6c) & 0xfc;
    *(byte *)(*piVar2 + 0x6c) = *(byte *)(*piVar2 + 0x6c) & 0xfc;
    *(byte *)(piVar2[0xe] + 0x6c) = *(byte *)(piVar2[0xe] + 0x6c) & 0xfc;
    *(byte *)(piVar2[0x2a] + 0x6c) = *(byte *)(piVar2[0x2a] + 0x6c) & 0xfc;
    *(byte *)(piVar2[0x54] + 0x6c) = *(byte *)(piVar2[0x54] + 0x6c) & 0xfc;
    *(byte *)(piVar2[0x38] + 0x6c) = *(byte *)(piVar2[0x38] + 0x6c) & 0xfc;
    *(byte *)(piVar2[0x46] + 0x6c) = *(byte *)(piVar2[0x46] + 0x6c) & 0xfc;
    *(byte *)(piVar2[0x62] + 0x6c) = *(byte *)(piVar2[0x62] + 0x6c) & 0xfc;
    *(byte *)(piVar2[0x70] + 0x6c) = *(byte *)(piVar2[0x70] + 0x6c) & 0xfc;
    *(byte *)(piVar2[0x1c] + 0x6c) = *(byte *)(piVar2[0x1c] + 0x6c) & 0xfc;
    *(byte *)(piVar2[0xe] + 0x331) = *(byte *)(piVar2[0xe] + 0x331) | 2;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pbVar1 = (byte *)(*(int *)(param_1 + 0x564) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x568) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x56c) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x570) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x344) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7a8) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7ac) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7b0) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7b4) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined4 *)(*(int *)(param_1 + 0x368) + 0x348) = DAT_00679bb0;
  return;
}

