
void FUN_004f7230(char *param_1)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  uchar *puVar6;
  uchar *puVar7;
  char *local_4;
  
  CacheString::clear((CacheString *)&local_4);
  local_4 = StringAlloc(param_1,true);
  puVar4 = DAT_00674f1c;
  if ((int)DAT_00674f20 - (int)DAT_00674f1c >> 2 != 0) {
    FUN_0042f0b0(DAT_00674f1c,DAT_00674f1c,DAT_00674f1c + 4);
    FUN_0042fdf0(DAT_00674f1c,1 - ((int)DAT_00674f1c - (int)puVar4 >> 2),&local_4);
    puVar7 = DAT_00674f1c;
    for (; puVar4 != puVar7; puVar4 = puVar4 + 4) {
      *(char **)puVar4 = local_4;
    }
    DAT_00674f1c = DAT_00674f1c + 4;
    return;
  }
  if ((DAT_00674f18 == (uchar *)0x0) ||
     (uVar5 = (int)DAT_00674f1c - (int)DAT_00674f18 >> 2, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (DAT_00674f18 == (uchar *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)DAT_00674f1c - (int)DAT_00674f18 >> 2;
  }
  iVar1 = iVar1 + uVar5;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 * 4);
  puVar7 = puVar3;
  for (puVar6 = DAT_00674f18; puVar6 != puVar4; puVar6 = puVar6 + 4) {
    FUN_004304b0(puVar7,puVar6);
    puVar7 = puVar7 + 4;
  }
  FUN_0042fdf0(puVar7,1,&local_4);
  FUN_0042f0b0(puVar4,DAT_00674f1c,puVar7 + 4);
  IDPMsgHandler::OnReceive((IDPMsgHandler *)&DAT_00674f14,DAT_00674f18,(ulong)DAT_00674f1c);
  FUN_005b7e1d(DAT_00674f18);
  DAT_00674f20 = puVar3 + iVar1 * 4;
  iVar1 = FUN_005ad970();
  DAT_00674f18 = puVar3;
  DAT_00674f1c = puVar3 + iVar1 * 4 + 4;
  return;
}

