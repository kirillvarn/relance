
uint __thiscall FUN_004c9610(int *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  
  if (param_2 == (byte *)0x0) {
    return (uint)(*param_1 == 0);
  }
  pbVar2 = (byte *)(param_1 + 1);
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    pbVar2 = pbVar2 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0);
}

