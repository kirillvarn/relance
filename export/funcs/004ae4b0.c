
void __fastcall FUN_004ae4b0(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_80 [128];
  
  if ((*(int *)(param_1 + 0x7f4) != 0) || (*(char *)(param_1 + 0x8a0) != '\0')) {
    if (*(char *)(param_1 + 0x8a0) == '\0') {
      *(undefined4 *)(param_1 + 0x7f4) = 0;
      *(undefined1 *)(param_1 + 0x8a0) = 1;
      FUN_004347e0(DAT_0067eca8,0x52f,local_80,0x40);
      *(undefined4 *)(*(int *)(param_1 + 0x364) + 0x348) = DAT_00679ba4;
      return;
    }
    FUN_004ae260(0);
    piVar4 = (int *)(param_1 + 0x3b0);
    iVar5 = 0xd;
    do {
      *(byte *)(piVar4[-0xd] + 0x6c) = *(byte *)(piVar4[-0xd] + 0x6c) | 3;
      *(byte *)(*piVar4 + 0x6c) = *(byte *)(*piVar4 + 0x6c) | 3;
      *(byte *)(piVar4[0x28] + 0x6c) = *(byte *)(piVar4[0x28] + 0x6c) | 3;
      *(byte *)(piVar4[0xd] + 0x6c) = *(byte *)(piVar4[0xd] + 0x6c) | 3;
      piVar2 = piVar4 + 0x35;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
      *(byte *)(*piVar2 + 0x6c) = *(byte *)(*piVar2 + 0x6c) | 3;
    } while (iVar5 != 0);
    piVar4 = (int *)(param_1 + 0x418);
    iVar5 = 0xe;
    do {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
      *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) | 3;
    } while (iVar5 != 0);
    piVar4 = (int *)(param_1 + 0x4c4);
    iVar5 = 3;
    do {
      *(byte *)(piVar4[4] + 0x6c) = *(byte *)(piVar4[4] + 0x6c) | 3;
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
      *(byte *)(iVar3 + 0x6c) = *(byte *)(iVar3 + 0x6c) | 3;
    } while (iVar5 != 0);
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4bc) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4c0) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7a8) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7ac) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7b0) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7b4) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    *(byte *)(*(int *)(param_1 + 0x344) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x344) + 0x6c) | 3;
    FUN_004347e0(DAT_0067eca8,0x691,local_80,0x40);
    (**(code **)(**(int **)(param_1 + 0x344) + 0xa8))(0x1d,local_80,0);
    FUN_004abdf0(0);
    *(byte *)(*(int *)(param_1 + 0x7f0) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x7f0) + 0x6c) & 0xfc
    ;
  }
  return;
}

