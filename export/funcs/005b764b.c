
/* Library Function - Single Match
    _GetOrdinal@20
   
   Library: Visual Studio 2005 Release */

undefined2 _GetOrdinal_20(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  int local_8;
  
  local_8 = 0;
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    do {
      iVar4 = param_2 + local_8 >> 1;
      pbVar2 = (byte *)(*(int *)(param_4 + iVar4 * 4) + param_3);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar5;
        bVar6 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_005b7692:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_005b7697;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar6 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_005b7692;
        pbVar5 = pbVar5 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005b7697:
      if (iVar3 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        if (iVar3 < 1) break;
        local_8 = iVar4 + 1;
      }
    } while (local_8 <= param_2);
    if (local_8 <= param_2) {
      return *(undefined2 *)(param_5 + iVar4 * 2);
    }
  }
  return 0xffff;
}

