
void __thiscall FUN_00555860(int param_1,int param_2)

{
  uchar *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint local_c;
  
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2 != 0)) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 != *(int *)(param_1 + 0x1c)) {
      do {
        FUN_0040e990();
        iVar5 = iVar5 + 4;
      } while (iVar5 != *(int *)(param_1 + 0x1c));
    }
    puVar1 = (uchar *)FUN_00527820(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x1c),
                                   *(undefined4 *)(param_1 + 0x18));
    IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x14),puVar1,*(ulong *)(param_1 + 0x1c));
    *(uchar **)(param_1 + 0x1c) = puVar1;
  }
  if (*(int *)(param_1 + 8) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18) >> 2;
  }
  if (uVar2 < local_c) {
    uVar2 = local_c;
    if ((int)local_c < 0) {
      uVar2 = 0;
    }
    pvVar3 = operator_new(uVar2 * 4);
    iVar5 = *(int *)(param_1 + 0x1c);
    pvVar4 = pvVar3;
    for (iVar6 = *(int *)(param_1 + 0x18); iVar6 != iVar5; iVar6 = iVar6 + 4) {
      FUN_005999b0(pvVar4,iVar6);
      pvVar4 = (void *)((int)pvVar4 + 4);
    }
    IDPMsgHandler::OnReceive
              ((IDPMsgHandler *)(param_1 + 0x14),*(uchar **)(param_1 + 0x18),
               *(ulong *)(param_1 + 0x1c));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 0x18));
    *(void **)(param_1 + 0x20) = (void *)((int)pvVar3 + local_c * 4);
    iVar5 = FUN_005ad970();
    *(void **)(param_1 + 0x1c) = (void *)((int)pvVar3 + iVar5 * 4);
    *(void **)(param_1 + 0x18) = pvVar3;
  }
  iVar6 = param_2;
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    do {
      param_2 = FUN_0040f080(iVar5);
      if (param_2 != 0) {
        FUN_0040e960(iVar6);
        FUN_00537260(*(undefined4 *)(param_1 + 0x1c),1,&param_2);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != *(int *)(param_1 + 0xc));
  }
  return;
}

