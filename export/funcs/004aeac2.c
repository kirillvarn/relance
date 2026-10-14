
void __fastcall FUN_004aeac2(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(param_1 + 0x3b0);
  iVar5 = 0xd;
  do {
    *(byte *)(piVar4[-0xd] + 0x6c) = *(byte *)(piVar4[-0xd] + 0x6c) & 0xfc;
    *(byte *)(*piVar4 + 0x6c) = *(byte *)(*piVar4 + 0x6c) & 0xfc;
    *(byte *)(piVar4[0xd] + 0x6c) = *(byte *)(piVar4[0xd] + 0x6c) & 0xfc;
    *(byte *)(piVar4[0x28] + 0x6c) = *(byte *)(piVar4[0x28] + 0x6c) & 0xfc;
    piVar2 = piVar4 + 0x35;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
    *(byte *)(*piVar2 + 0x6c) = *(byte *)(*piVar2 + 0x6c) & 0xfc;
  } while (iVar5 != 0);
  piVar4 = (int *)(param_1 + 0x418);
  iVar5 = 0xe;
  do {
    iVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
    *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) & 0xfc;
  } while (iVar5 != 0);
  piVar4 = (int *)(param_1 + 0x4c4);
  iVar5 = 3;
  do {
    *(byte *)(piVar4[4] + 0x6c) = *(byte *)(piVar4[4] + 0x6c) & 0xfc;
    iVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
    *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) & 0xfc;
  } while (iVar5 != 0);
  pbVar1 = (byte *)(*(int *)(param_1 + 0x4bc) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x4c0) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x4b8) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7a8) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7ac) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7b0) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7b4) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  pbVar1 = (byte *)(*(int *)(param_1 + 0x344) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined4 *)(*(int *)(param_1 + 0x364) + 0x348) = DAT_00679bb0;
  return;
}

