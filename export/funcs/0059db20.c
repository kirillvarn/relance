
int FUN_0059db20(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  char *unaff_EBX;
  byte *pbVar7;
  undefined4 *puVar8;
  char *pcVar9;
  bool bVar10;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  puVar8 = DAT_0067dcec;
  if (DAT_0067dcec == (undefined4 *)0x0) {
    return 0;
  }
  do {
    pbVar6 = (byte *)(puVar8 + 3);
    pbVar7 = param_2;
    do {
      bVar2 = *pbVar6;
      bVar10 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_0059db6b:
        iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0059db70;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar10 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_0059db6b;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_0059db70:
    if (iVar3 == 0) {
      iVar3 = (**(code **)*puVar8)(param_3,param_4);
      if (iVar3 == 0) {
        return 0;
      }
      if (unaff_EBX == (char *)0x0) {
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(undefined1 *)(iVar3 + 0x18) = 0;
        return iVar3;
      }
      uVar4 = 0xffffffff;
      pcVar9 = unaff_EBX;
      break;
    }
    puVar8 = (undefined4 *)puVar8[1];
    if (puVar8 == (undefined4 *)0x0) {
      return 0;
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar1 == '\0') break;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4 - 1;
  if (0x1f < uVar4) {
    uVar4 = 0x1f;
  }
  pcVar9 = (char *)(iVar3 + 0x18);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)unaff_EBX;
    unaff_EBX = unaff_EBX + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *unaff_EBX;
    unaff_EBX = unaff_EBX + 1;
    pcVar9 = pcVar9 + 1;
  }
  ((char *)(iVar3 + 0x18))[uVar4] = '\0';
  *(uint *)(iVar3 + 0x14) = uVar4;
  return iVar3;
}

