
int __thiscall FUN_0059f5b0(IDPMsgHandler *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = (int)param_2 - iVar6;
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xc) - iVar3 >> 0x1f;
  if ((*(int *)(param_1 + 0xc) - iVar3) / 0xc + iVar1 == iVar1) {
    if ((iVar6 == 0) || (uVar8 = (iVar3 - iVar6) / 0xc, uVar8 < 2)) {
      uVar8 = 1;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (iVar3 - iVar6) / 0xc;
    }
    iVar6 = iVar6 + uVar8;
    iVar3 = iVar6;
    if (iVar6 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 * 0xc);
    pvVar9 = pvVar4;
    for (puVar7 = *(undefined4 **)(param_1 + 4); puVar7 != param_2; puVar7 = puVar7 + 3) {
      FUN_0059f7e0(pvVar9,puVar7);
      pvVar9 = (void *)((int)pvVar9 + 0xc);
    }
    FUN_0059f7e0(pvVar9,param_3);
    FUN_0055e830(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar9 + 0xc);
    IDPMsgHandler::OnReceive(param_1,*(uchar **)(param_1 + 4),*(ulong *)(param_1 + 8));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar6 * 0xc);
    iVar6 = FUN_0059f590();
    *(void **)(param_1 + 8) = (void *)((int)pvVar4 + (iVar6 + 1) * 0xc);
    *(void **)(param_1 + 4) = pvVar4;
  }
  else {
    iVar6 = iVar3 - (int)param_2 >> 0x1f;
    if ((iVar3 - (int)param_2) / 0xc + iVar6 == iVar6) {
      FUN_0055e830(param_2,iVar3,param_2 + 3);
      FUN_0055e870(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)param_2) / 0xc,param_3);
      puVar7 = *(undefined4 **)(param_1 + 8);
      for (; param_2 != puVar7; param_2 = param_2 + 3) {
        *param_2 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
      }
    }
    else {
      FUN_0055e830(iVar3 + -0xc,iVar3,iVar3);
      puVar7 = *(undefined4 **)(param_1 + 8);
      puVar2 = *(undefined4 **)(param_1 + 8) + -3;
      while (param_2 != puVar2) {
        puVar7[-3] = puVar2[-3];
        puVar7[-2] = puVar2[-2];
        puVar7[-1] = puVar2[-1];
        puVar7 = puVar7 + -3;
        puVar2 = puVar2 + -3;
      }
      puVar7 = param_2 + 3;
      for (; param_2 != puVar7; param_2 = param_2 + 3) {
        *param_2 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc;
  }
  return *(int *)(param_1 + 4) + (iVar5 / 0xc) * 0xc;
}

