
void __thiscall FUN_004a0220(int param_1,int param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = param_2 == 7;
  puVar2 = (undefined4 *)(param_1 + 0xf88);
  iVar3 = 0xf;
  do {
    (**(code **)(*(int *)puVar2[-0xf] + 0xa8))(0x24,bVar4,0);
    (**(code **)(*(int *)*puVar2 + 0xa8))(0x24,bVar4,0);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0;
  (**(code **)(**(int **)(param_1 + 0xfc8) + 0xa8))(0x24,bVar4);
  (**(code **)(**(int **)(param_1 + 0xfcc) + 0xa8))(0x24,bVar4,0);
  if ((DAT_006720a0 == 6) || (DAT_006720a0 == 7)) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0xf38) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xf3c) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xf40) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    if (*(int *)(param_1 + 2000) == 0) {
      (**(code **)(**(int **)(param_1 + 0xaf8) + 0xa8))(1,0,0);
      (**(code **)(**(int **)(param_1 + 0xafc) + 0xa8))(1,0,0);
      (**(code **)(**(int **)(param_1 + 0xb00) + 0xa8))(1,0,0);
      (**(code **)(**(int **)(param_1 + 0xb04) + 0xa8))(1,0,0);
    }
    else {
      pbVar1 = (byte *)(*(int *)(param_1 + 0x8d8) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x8dc) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xb4c) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xc14) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xc18) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0xc58) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      pbVar1 = (byte *)(*(int *)(param_1 + 0x7f0) + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      if ((*(int *)(param_1 + 0xb5c) != 0) &&
         (*(int *)(param_1 + 0xb60) - *(int *)(param_1 + 0xb5c) >> 2 != 0)) {
        pbVar1 = (byte *)(*(int *)(param_1 + 0xb50) + 0x6c);
        *pbVar1 = *pbVar1 | 3;
      }
    }
  }
  DAT_006720a0 = iVar3;
  (**(code **)(**(int **)(param_1 + 0x8d8) + 0xa8))(0xc,DAT_006720a0 == 0,0);
  (**(code **)(**(int **)(param_1 + 0x8dc) + 0xa8))(0xc,DAT_006720a0 == 1,0);
  (**(code **)(**(int **)(param_1 + 0xb4c) + 0xa8))(0xc,DAT_006720a0 == 2,0);
  (**(code **)(**(int **)(param_1 + 0xb50) + 0xa8))(0xc,DAT_006720a0 == 3,0);
  (**(code **)(**(int **)(param_1 + 0xc14) + 0xa8))(0xc,DAT_006720a0 == 4,0);
  (**(code **)(**(int **)(param_1 + 0xc18) + 0xa8))(0xc,DAT_006720a0 == 7,0);
  (**(code **)(**(int **)(param_1 + 0xc58) + 0xa8))(0xc,DAT_006720a0 == 5,0);
  if ((DAT_006720a0 == 1) || (DAT_006720a0 == 2)) {
    (**(code **)(**(int **)(param_1 + 0xc5c) + 0xa8))(1,0,0);
    (**(code **)(**(int **)(param_1 + 0xc60) + 0xa8))(1,0,0);
    (**(code **)(**(int **)(param_1 + 0xc64) + 0xa8))(1,0,0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xc5c) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0xc60) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0xc64) + 0xa8))(1,1,0);
  }
  if (DAT_006720a0 == 6) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x8d8) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x8dc) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xb4c) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xb50) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xc14) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xc18) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0xc58) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7f0) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  (**(code **)(**(int **)(param_1 + 0xb54) + 0xa8))
            (0x1e,*(undefined4 *)(&DAT_00611c84 + DAT_006720a0 * 4),0);
  return;
}

