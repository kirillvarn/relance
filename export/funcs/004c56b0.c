
/* WARNING: Removing unreachable block (ram,0x004c5837) */
/* WARNING: Removing unreachable block (ram,0x004c5855) */
/* WARNING: Removing unreachable block (ram,0x004c5864) */
/* WARNING: Removing unreachable block (ram,0x004c586d) */
/* WARNING: Removing unreachable block (ram,0x004c5870) */

void FUN_004c56b0(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  uchar *puVar3;
  int iVar4;
  uchar *puVar5;
  void *pvVar6;
  
  puVar3 = DAT_006728d0;
  if ((int)DAT_006728d4 - (int)DAT_006728d0 >> 2 == 0) {
    if ((DAT_006728cc == (uchar *)0x0) || ((uint)((int)DAT_006728d0 - (int)DAT_006728cc >> 2) < 2))
    {
      iVar4 = 1;
    }
    else {
      iVar4 = (int)DAT_006728d0 - (int)DAT_006728cc >> 2;
    }
    if (DAT_006728cc == (uchar *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)DAT_006728d0 - (int)DAT_006728cc >> 2;
    }
    iVar1 = iVar1 + iVar4;
    iVar4 = iVar1;
    if (iVar1 < 0) {
      iVar4 = 0;
    }
    pvVar2 = operator_new(iVar4 * 4);
    pvVar6 = pvVar2;
    for (puVar5 = DAT_006728cc; puVar5 != puVar3; puVar5 = puVar5 + 4) {
      FUN_005999b0(pvVar6,puVar5);
      pvVar6 = (void *)((int)pvVar6 + 4);
    }
    FUN_00427730(pvVar6,1,&param_1);
    FUN_00597c70(puVar3,DAT_006728d0,(int)pvVar6 + 4);
    IDPMsgHandler::OnReceive((IDPMsgHandler *)&DAT_006728c8,DAT_006728cc,(ulong)DAT_006728d0);
    FUN_005b7e1d(DAT_006728cc);
    DAT_006728d4 = (void *)((int)pvVar2 + iVar1 * 4);
    if (DAT_006728cc == (uchar *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)DAT_006728d0 - (int)DAT_006728cc >> 2;
    }
    DAT_006728cc = pvVar2;
    DAT_006728d0 = (uchar *)((int)pvVar2 + iVar4 * 4 + 4);
    return;
  }
  FUN_00597c70(DAT_006728d0,DAT_006728d0,DAT_006728d0 + 4);
  FUN_00427730(DAT_006728d0,1 - ((int)DAT_006728d0 - (int)puVar3 >> 2),&param_1);
  puVar5 = DAT_006728d0;
  if (puVar3 == DAT_006728d0) {
    DAT_006728d0 = DAT_006728d0 + 4;
    return;
  }
  do {
    *(undefined4 *)puVar3 = param_1;
    puVar3 = puVar3 + 4;
  } while (puVar3 != puVar5);
  DAT_006728d0 = DAT_006728d0 + 4;
  return;
}

