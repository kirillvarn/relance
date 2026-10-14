
int FUN_005b36b0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  bool bVar6;
  
  if ((DAT_0067ed0c & 1) == 0) {
    DAT_0067ed0c = DAT_0067ed0c | 1;
    DAT_0067ed00 = param_1._0_1_;
    DAT_0067ed04 = (int *)FUN_0042a7e0(0,0);
    DAT_0067ed08 = 0;
    FUN_005b7e6c(&LAB_005b3640);
  }
  piVar5 = (int *)*DAT_0067ed04;
  if (piVar5 == DAT_0067ed04) {
    return 0;
  }
  do {
    pbVar4 = *(byte **)(piVar5[2] + 4);
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_005b373c:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005b3741;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005b373c;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005b3741:
    if (iVar3 == 0) {
      return piVar5[2];
    }
    piVar5 = (int *)*piVar5;
    if (piVar5 == DAT_0067ed04) {
      return 0;
    }
  } while( true );
}

