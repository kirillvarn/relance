
int FUN_0057d800(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  uchar *puVar7;
  void *pvVar8;
  
  puVar7 = DAT_0067c404;
  if (DAT_0067c400 == (uchar *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)DAT_0067c404 - (int)DAT_0067c400 >> 2;
  }
  if ((int)DAT_0067c408 - (int)DAT_0067c404 >> 2 != 0) {
    FUN_00597c70(DAT_0067c404,DAT_0067c404,DAT_0067c404 + 4);
    FUN_00427730(DAT_0067c404,1 - ((int)DAT_0067c404 - (int)puVar7 >> 2),&param_1);
    puVar6 = DAT_0067c404;
    for (; puVar7 != puVar6; puVar7 = puVar7 + 4) {
      *(undefined4 *)puVar7 = param_1;
    }
    DAT_0067c404 = DAT_0067c404 + 4;
    return iVar4 << 0x10;
  }
  if ((DAT_0067c400 == (uchar *)0x0) ||
     (uVar5 = (int)DAT_0067c404 - (int)DAT_0067c400 >> 2, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (DAT_0067c400 == (uchar *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)DAT_0067c404 - (int)DAT_0067c400 >> 2;
  }
  iVar1 = iVar1 + uVar5;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 4);
  pvVar8 = pvVar3;
  for (puVar6 = DAT_0067c400; puVar6 != puVar7; puVar6 = puVar6 + 4) {
    FUN_005999b0(pvVar8,puVar6);
    pvVar8 = (void *)((int)pvVar8 + 4);
  }
  FUN_00427730(pvVar8,1,&param_1);
  FUN_00597c70(puVar7,DAT_0067c404,(int)pvVar8 + 4);
  IDPMsgHandler::OnReceive((IDPMsgHandler *)&DAT_0067c3fc,DAT_0067c400,(ulong)DAT_0067c404);
  FUN_005b7e1d(DAT_0067c400);
  DAT_0067c408 = (void *)((int)pvVar3 + iVar1 * 4);
  iVar1 = FUN_005ad970();
  DAT_0067c400 = pvVar3;
  DAT_0067c404 = (uchar *)((int)pvVar3 + iVar1 * 4 + 4);
  return iVar4 << 0x10;
}

