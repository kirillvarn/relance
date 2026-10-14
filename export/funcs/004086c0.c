
int __thiscall FUN_004086c0(int param_1,int param_2)

{
  IDPMsgHandler *this;
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uchar *puVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  if ((IDPMsgHandler *)(param_1 + 0x20) != (IDPMsgHandler *)(param_2 + 0x20)) {
    puVar4 = *(undefined4 **)(param_2 + 0x24);
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_2 + 0x28) - (int)puVar4 >> 3;
    }
    puVar10 = *(undefined4 **)(param_1 + 0x24);
    if (puVar10 == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int *)(param_1 + 0x28) - (int)puVar10 >> 3;
    }
    if (uVar11 < uVar3) {
      uVar3 = FUN_0040d760();
      uVar11 = FUN_005995f0();
      if (uVar3 < uVar11) {
        IDPMsgHandler::OnReceive
                  ((IDPMsgHandler *)(param_1 + 0x20),*(uchar **)(param_1 + 0x24),
                   *(ulong *)(param_1 + 0x28));
        FUN_005b7e1d(*(undefined4 *)(param_1 + 0x24));
        iVar5 = FUN_005995f0();
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        pvVar9 = operator_new(iVar5 << 3);
        *(void **)(param_1 + 0x24) = pvVar9;
        uVar6 = FUN_0040d780(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),pvVar9)
        ;
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
      }
      else {
        iVar5 = *(int *)(param_2 + 0x24);
        iVar8 = FUN_005995f0();
        iVar5 = iVar5 + iVar8 * 8;
        FUN_00591460(*(undefined4 *)(param_2 + 0x24),iVar5,*(undefined4 *)(param_1 + 0x24));
        FUN_0040d780(iVar5,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x28));
        iVar5 = FUN_005995f0();
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + iVar5 * 8;
      }
    }
    else {
      puVar1 = *(undefined4 **)(param_2 + 0x28);
      for (; puVar4 != puVar1; puVar4 = puVar4 + 2) {
        *puVar10 = *puVar4;
        puVar10[1] = puVar4[1];
        puVar10 = puVar10 + 2;
      }
      iVar5 = FUN_005995f0();
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + iVar5 * 8;
    }
  }
  this = (IDPMsgHandler *)(param_1 + 0x30);
  if (this != (IDPMsgHandler *)(param_2 + 0x30)) {
    uVar3 = FUN_005ad970();
    uVar11 = FUN_005ad970();
    if (uVar11 < uVar3) {
      uVar3 = FUN_005ad970();
      uVar11 = FUN_0040d740();
      if (uVar3 <= uVar11) {
        iVar5 = *(int *)(param_2 + 0x34);
        iVar8 = FUN_005ad970();
        iVar5 = iVar5 + iVar8 * 4;
        FUN_00527820(*(undefined4 *)(param_2 + 0x34),iVar5,*(undefined4 *)(param_1 + 0x34));
        FUN_00597c70(iVar5,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x38));
        iVar5 = FUN_005ad970();
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34) + iVar5 * 4;
        goto LAB_00408934;
      }
      IDPMsgHandler::OnReceive(this,*(uchar **)(param_1 + 0x34),*(ulong *)(param_1 + 0x38));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x34));
      iVar5 = FUN_005ad970();
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pvVar9 = operator_new(iVar5 << 2);
      *(void **)(param_1 + 0x34) = pvVar9;
      iVar5 = FUN_00597c70(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),pvVar9);
      *(int *)(param_1 + 0x3c) = iVar5;
    }
    else {
      puVar7 = (uchar *)FUN_00527820(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38)
                                     ,*(undefined4 *)(param_1 + 0x34));
      IDPMsgHandler::OnReceive(this,puVar7,*(ulong *)(param_1 + 0x38));
      iVar5 = FUN_005ad970();
      iVar5 = *(int *)(param_1 + 0x34) + iVar5 * 4;
    }
    *(int *)(param_1 + 0x38) = iVar5;
  }
LAB_00408934:
  FUN_0040d4b0(param_2 + 0x40);
  bVar2 = (*(byte *)(param_2 + 0x50) ^ *(byte *)(param_1 + 0x50)) & 1 ^ *(byte *)(param_1 + 0x50);
  *(byte *)(param_1 + 0x50) = bVar2;
  bVar2 = (*(byte *)(param_2 + 0x50) ^ bVar2) & 2 ^ bVar2;
  *(byte *)(param_1 + 0x50) = bVar2;
  bVar2 = (*(byte *)(param_2 + 0x50) ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_1 + 0x50) = bVar2;
  bVar2 = (*(byte *)(param_2 + 0x50) ^ bVar2) & 8 ^ bVar2;
  *(byte *)(param_1 + 0x50) = bVar2;
  *(byte *)(param_1 + 0x50) = (*(byte *)(param_2 + 0x50) ^ bVar2) & 0x10 ^ bVar2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  return param_1;
}

