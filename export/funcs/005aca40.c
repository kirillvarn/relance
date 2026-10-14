
/* WARNING: Removing unreachable block (ram,0x005aca5d) */
/* WARNING: Removing unreachable block (ram,0x005aca60) */

void __thiscall FUN_005aca40(int param_1,IDPMsgHandler *param_2,code *param_3,undefined4 *param_4)

{
  uchar *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  IDPMsgHandler *this;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  
  this = param_2;
  puVar1 = *(uchar **)(param_2 + 4);
  IDPMsgHandler::OnReceive(param_2,puVar1,*(ulong *)(param_2 + 8));
  *(uchar **)(param_2 + 8) = puVar1;
  if (*(int *)(param_1 + 0x144) == 0) {
    param_2 = (IDPMsgHandler *)0x0;
  }
  else {
    param_2 = (IDPMsgHandler *)((*(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x144)) / 0x9c);
  }
  if (*(int *)(this + 4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(this + 0xc) - *(int *)(this + 4) >> 2;
  }
  if (uVar5 < param_2) {
    uVar5 = (uint)param_2;
    if ((int)param_2 < 0) {
      uVar5 = 0;
    }
    pvVar6 = operator_new(uVar5 * 4);
    iVar7 = *(int *)(this + 8);
    pvVar10 = pvVar6;
    for (iVar12 = *(int *)(this + 4); iVar12 != iVar7; iVar12 = iVar12 + 4) {
      FUN_005999b0(pvVar10,iVar12);
      pvVar10 = (void *)((int)pvVar10 + 4);
    }
    IDPMsgHandler::OnReceive(this,*(uchar **)(this + 4),*(ulong *)(this + 8));
    FUN_005b7e1d(*(undefined4 *)(this + 4));
    *(void **)(this + 0xc) = (void *)((int)pvVar6 + (int)param_2 * 4);
    iVar7 = FUN_005ad970();
    *(void **)(this + 8) = (void *)((int)pvVar6 + iVar7 * 4);
    *(void **)(this + 4) = pvVar6;
  }
  puVar2 = param_4;
  if (0 < (int)param_2) {
    iVar7 = 0;
    do {
      param_4 = (undefined4 *)(*(int *)(param_1 + 0x144) + iVar7);
      if ((puVar2 == (undefined4 *)0x0) || (cVar4 = (**(code **)*puVar2)(param_4), cVar4 != '\0')) {
        FUN_00537260(*(undefined4 *)(this + 8),1,&param_4);
      }
      iVar7 = iVar7 + 0x9c;
      param_2 = (IDPMsgHandler *)((int)param_2 - 1);
    } while (param_2 != (IDPMsgHandler *)0x0);
  }
  if (param_3 != (code *)0x0) {
    puVar2 = *(undefined4 **)(this + 8);
    puVar3 = *(undefined4 **)(this + 4);
    puVar11 = puVar3;
    puVar13 = puVar2;
    if ((int)puVar2 - (int)puVar3 >> 2 < 0x11) {
      FUN_005affc0(puVar3,puVar2,param_3,0);
      return;
    }
    do {
      uVar8 = FUN_005b0060(*puVar11,puVar11[((int)puVar13 - (int)puVar11 >> 2) -
                                            ((int)puVar13 - (int)puVar11 >> 0x1f) >> 1],puVar13[-1],
                           param_3,param_3);
      puVar9 = (undefined4 *)FUN_005b00d0(puVar11,puVar13,uVar8);
      if ((int)((int)puVar9 - (int)puVar11 & 0xfffffffcU) <
          (int)((int)puVar13 - (int)puVar9 & 0xfffffffcU)) {
        FUN_005afea0(puVar11,puVar9,param_3,0);
        puVar11 = puVar9;
      }
      else {
        FUN_005afea0(puVar9,puVar13,param_3,0);
        puVar13 = puVar9;
      }
    } while (0x40 < (int)((int)puVar13 - (int)puVar11 & 0xfffffffcU));
    puVar11 = puVar3 + 0x10;
    FUN_005affc0(puVar3,puVar11,param_3,0);
    for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
      param_4 = (undefined4 *)*puVar11;
      cVar4 = (*param_3)(param_4,puVar11[-1]);
      puVar3 = puVar11;
      while (cVar4 != '\0') {
        *puVar3 = puVar3[-1];
        cVar4 = (*param_3)(param_4,puVar3[-2]);
        puVar3 = puVar3 + -1;
      }
      *puVar3 = param_4;
    }
  }
  return;
}

