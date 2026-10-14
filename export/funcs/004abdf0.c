
void __thiscall FUN_004abdf0(int param_1,char param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x7f4);
  if (iVar5 == 0) {
    piVar3 = (int *)(param_1 + 0x484);
    iVar5 = 0xd;
    do {
      iVar2 = piVar3[-0xd];
      if (param_2 == '\0') {
        *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) | 3;
        *(byte *)(*piVar3 + 0x6c) = *(byte *)(*piVar3 + 0x6c) | 3;
        *(byte *)(piVar3[-0x42] + 0x6c) = *(byte *)(piVar3[-0x42] + 0x6c) | 3;
        *(byte *)(piVar3[-0x35] + 0x6c) = *(byte *)(piVar3[-0x35] + 0x6c) | 3;
        *(byte *)(piVar3[-0x28] + 0x6c) = *(byte *)(piVar3[-0x28] + 0x6c) | 3;
        *(byte *)(piVar3[-0x1b] + 0x6c) = *(byte *)(piVar3[-0x1b] + 0x6c) | 3;
        (**(code **)(*(int *)piVar3[-0x35] + 0xa8))(0x24,1,0);
        (**(code **)(*(int *)piVar3[-0x28] + 0xa8))(0x24,1,0);
      }
      else {
        *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) & 0xfc;
        *(byte *)(*piVar3 + 0x6c) = *(byte *)(*piVar3 + 0x6c) & 0xfc;
        (**(code **)(*(int *)piVar3[-0x35] + 0xa8))(0x24,0);
        (**(code **)(*(int *)piVar3[-0x28] + 0xa8))(0x24,0,0);
        *(byte *)(piVar3[-0x42] + 0x6c) = *(byte *)(piVar3[-0x42] + 0x6c) & 0xfc;
        *(byte *)(piVar3[-0x35] + 0x6c) = *(byte *)(piVar3[-0x35] + 0x6c) & 0xfc;
        *(byte *)(piVar3[-0x28] + 0x6c) = *(byte *)(piVar3[-0x28] + 0x6c) & 0xfc;
        *(byte *)(piVar3[-0x1b] + 0x6c) = *(byte *)(piVar3[-0x1b] + 0x6c) & 0xfc;
      }
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0x4b8);
    if (param_2 == '\0') {
      *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) | 3;
      *(byte *)(*(int *)(param_1 + 0x44c) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x44c) + 0x6c) | 3;
      return;
    }
    *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x44c) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  else if (((iVar5 == 1) || (iVar5 == 3)) || (iVar5 == 2)) {
    puVar4 = (undefined4 *)(param_1 + 0x5ac);
    iVar5 = 0xe;
    do {
      if (param_2 == '\0') {
        (**(code **)(*(int *)*puVar4 + 0xa8))(0x24,1,0);
      }
      else {
        *(byte *)(puVar4[0xe] + 0x6c) = *(byte *)(puVar4[0xe] + 0x6c) & 0xfc;
        *(byte *)(puVar4[0x2a] + 0x6c) = *(byte *)(puVar4[0x2a] + 0x6c) & 0xfc;
        *(byte *)(puVar4[0x62] + 0x6c) = *(byte *)(puVar4[0x62] + 0x6c) & 0xfc;
        *(byte *)(puVar4[0x70] + 0x6c) = *(byte *)(puVar4[0x70] + 0x6c) & 0xfc;
        (**(code **)(*(int *)*puVar4 + 0xa8))(0x24,0);
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (param_2 == '\0') {
      FUN_004b0920(0xffffffff);
      return;
    }
    goto LAB_004abefc;
  }
  if (param_2 == '\0') {
    return;
  }
LAB_004abefc:
  pbVar1 = (byte *)(*(int *)(param_1 + 0x7f0) + 0x6c);
  *pbVar1 = *pbVar1 & 0xfc;
  return;
}

