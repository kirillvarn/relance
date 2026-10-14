
int __thiscall FUN_00555b20(int *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (*param_1 < 1) {
    return -1;
  }
  puVar4 = (undefined4 *)param_1[1];
  do {
    pbVar5 = (byte *)*puVar4;
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00555b64:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00555b69;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00555b64;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00555b69:
    if (iVar3 == 0) {
      return iVar6;
    }
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 1;
    if (*param_1 <= iVar6) {
      return -1;
    }
  } while( true );
}

