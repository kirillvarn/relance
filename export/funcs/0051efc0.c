
void FUN_0051efc0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uchar *puVar4;
  uint uVar5;
  uchar *puVar6;
  void *pvVar7;
  
  puVar4 = DAT_006752f8;
  if ((int)DAT_006752fc - (int)DAT_006752f8 >> 2 != 0) {
    FUN_00597c70(DAT_006752f8,DAT_006752f8,DAT_006752f8 + 4);
    FUN_00427730(DAT_006752f8,1 - ((int)DAT_006752f8 - (int)puVar4 >> 2),&param_1);
    puVar6 = DAT_006752f8;
    for (; puVar4 != puVar6; puVar4 = puVar4 + 4) {
      *(undefined4 *)puVar4 = param_1;
    }
    DAT_006752f8 = DAT_006752f8 + 4;
    return;
  }
  if ((DAT_006752f4 == (uchar *)0x0) ||
     (uVar5 = (int)DAT_006752f8 - (int)DAT_006752f4 >> 2, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (DAT_006752f4 == (uchar *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)DAT_006752f8 - (int)DAT_006752f4 >> 2;
  }
  iVar1 = iVar1 + uVar5;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 4);
  pvVar7 = pvVar3;
  for (puVar6 = DAT_006752f4; puVar6 != puVar4; puVar6 = puVar6 + 4) {
    FUN_005999b0(pvVar7,puVar6);
    pvVar7 = (void *)((int)pvVar7 + 4);
  }
  FUN_00427730(pvVar7,1,&param_1);
  FUN_00597c70(puVar4,DAT_006752f8,(int)pvVar7 + 4);
  IDPMsgHandler::OnReceive((IDPMsgHandler *)&DAT_006752f0,DAT_006752f4,(ulong)DAT_006752f8);
  FUN_005b7e1d(DAT_006752f4);
  DAT_006752fc = (void *)((int)pvVar3 + iVar1 * 4);
  if (DAT_006752f4 == (uchar *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)DAT_006752f8 - (int)DAT_006752f4 >> 2;
  }
  DAT_006752f4 = pvVar3;
  DAT_006752f8 = (uchar *)((int)pvVar3 + iVar1 * 4 + 4);
  return;
}

