
int __thiscall FUN_004d9a70(IDPMsgHandler *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc) - iVar4 >> 0x1f;
  if ((*(int *)(param_1 + 0xc) - iVar4) / 0x148 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar5 = (iVar4 - iVar1) / 0x148, uVar5 < 2)) {
      uVar5 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar1) / 0x148;
    }
    iVar4 = iVar4 + uVar5;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x148);
    pvVar6 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); iVar2 != param_2; iVar2 = iVar2 + 0x148) {
      FUN_004da0a0(pvVar6,iVar2);
      pvVar6 = (void *)((int)pvVar6 + 0x148);
    }
    FUN_004da0a0(pvVar6,param_3);
    FUN_004d9cf0(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar6 + 0x148);
    IDPMsgHandler::OnReceive(param_1,*(uchar **)(param_1 + 4),*(ulong *)(param_1 + 8));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)(iVar4 * 0x148 + (int)pvVar3);
    iVar4 = FUN_004d9c70();
    pvVar6 = (void *)((iVar4 + 1) * 0x148 + (int)pvVar3);
    *(void **)(param_1 + 4) = pvVar3;
  }
  else {
    iVar2 = iVar4 - param_2 >> 0x1f;
    if ((iVar4 - param_2) / 0x148 + iVar2 == iVar2) {
      FUN_004d9cf0(param_2,iVar4,param_2 + 0x148);
      FUN_004d9d30(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2) / 0x148,param_3);
      FUN_004d9d70(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_004d9cf0(iVar4 + -0x148,iVar4,iVar4);
      FUN_004d9f00(param_2,*(int *)(param_1 + 8) + -0x148,*(int *)(param_1 + 8));
      FUN_004d9d70(param_2,param_2 + 0x148,param_3);
    }
    pvVar6 = (void *)(*(int *)(param_1 + 8) + 0x148);
  }
  *(void **)(param_1 + 8) = pvVar6;
  return ((param_2 - iVar1) / 0x148) * 0x148 + *(int *)(param_1 + 4);
}

