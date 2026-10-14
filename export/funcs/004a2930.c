
void __fastcall FUN_004a2930(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_4;
  
  if (*(int *)(param_1 + 0xfd8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)(param_1 + 0xfdc) - *(int *)(param_1 + 0xfd8)) / 0x18;
  }
  iVar6 = *(int *)(param_1 + 0x1008);
  iVar3 = iVar6 * 0x18;
  piVar5 = (int *)(param_1 + 0xf88);
  local_4 = 0xf;
  do {
    if (iVar6 < iVar4) {
      pbVar1 = (byte *)(piVar5[-0xf] + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      *(byte *)(*piVar5 + 0x6c) = *(byte *)(*piVar5 + 0x6c) | 3;
      iVar2 = *(int *)(param_1 + 0xfd8);
      (**(code **)(*(int *)piVar5[-0xf] + 0xa8))
                (0x1d,*(undefined4 *)
                       (*(int *)(param_1 + 0xfe8) + *(int *)(iVar2 + 0x10 + iVar3) * 8),0);
      (**(code **)(*(int *)*piVar5 + 0xa8))
                (0x1d,*(undefined4 *)
                       (*(int *)(param_1 + 0xff8) + *(int *)(iVar2 + iVar3 + 0x14) * 8),0);
    }
    else {
      pbVar1 = (byte *)(piVar5[-0xf] + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      *(byte *)(*piVar5 + 0x6c) = *(byte *)(*piVar5 + 0x6c) & 0xfc;
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + 0x18;
    piVar5 = piVar5 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if (iVar4 + -0xf < 1) {
    (**(code **)(**(int **)(param_1 + 0xfc4) + 0xa8))(2,1);
    *(byte *)(*(int *)(param_1 + 0xfc4) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xfc4) + 0x6c) & 0xfd
    ;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0xfc4) + 0xa8))(2,0,0);
  *(byte *)(*(int *)(param_1 + 0xfc4) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xfc4) + 0x6c) | 2;
  (**(code **)(**(int **)(param_1 + 0xfc4) + 0xa8))(0x37,0,iVar4 + -0xd);
  return;
}

