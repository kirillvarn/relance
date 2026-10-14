
int FUN_004fd500(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  bool bVar7;
  
  iVar4 = 0;
  ppuVar6 = &PTR_s_EFT_NONE_00612a68;
  do {
    pbVar2 = *ppuVar6;
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004fd538:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004fd53d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004fd538;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_004fd53d:
    if (iVar3 == 0) {
      return iVar4;
    }
    ppuVar6 = ppuVar6 + 10;
    iVar4 = iVar4 + 1;
    if (0x6131bf < (int)ppuVar6) {
      return iVar4;
    }
  } while( true );
}

