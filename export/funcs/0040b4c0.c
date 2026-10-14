
void __thiscall FUN_0040b4c0(int param_1,uint param_2)

{
  IDPMsgHandler *this;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  undefined1 *puVar10;
  
  iVar3 = __RTDynamicCast(param_2,0,&Archetype::ICliObj::RTTI_Type_Descriptor,
                          &Archetype::CliEQTractor::RTTI_Type_Descriptor,0);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 0x18);
  this = (IDPMsgHandler *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
  if (this != (IDPMsgHandler *)(iVar3 + 0x20)) {
    if (*(int *)(iVar3 + 0x24) == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(int *)(iVar3 + 0x28) - *(int *)(iVar3 + 0x24) >> 3;
    }
    uVar4 = FUN_005995f0();
    if (uVar4 < param_2) {
      uVar4 = FUN_0040d760();
      uVar7 = FUN_005995f0();
      if (uVar7 <= uVar4) {
        iVar6 = *(int *)(iVar3 + 0x24);
        iVar8 = FUN_005995f0();
        iVar6 = iVar6 + iVar8 * 8;
        FUN_00591460(*(undefined4 *)(iVar3 + 0x24),iVar6,*(undefined4 *)(param_1 + 0x24));
        FUN_0040d780(iVar6,*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(param_1 + 0x28));
        iVar6 = FUN_005995f0();
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + iVar6 * 8;
        goto LAB_0040b638;
      }
      IDPMsgHandler::OnReceive(this,*(uchar **)(param_1 + 0x24),*(ulong *)(param_1 + 0x28));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x24));
      iVar6 = FUN_005995f0();
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      pvVar9 = operator_new(iVar6 << 3);
      *(void **)(param_1 + 0x24) = pvVar9;
      iVar6 = FUN_0040d780(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),pvVar9);
      *(int *)(param_1 + 0x2c) = iVar6;
    }
    else {
      puVar5 = (uchar *)FUN_00591460(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),
                                     *(undefined4 *)(param_1 + 0x24));
      IDPMsgHandler::OnReceive(this,puVar5,*(ulong *)(param_1 + 0x28));
      iVar6 = FUN_005995f0();
      iVar6 = *(int *)(param_1 + 0x24) + iVar6 * 8;
    }
    *(int *)(param_1 + 0x28) = iVar6;
  }
LAB_0040b638:
  FUN_005595c0(iVar3 + 0x30);
  FUN_0040d4b0(iVar3 + 0x40);
  bVar2 = (*(byte *)(iVar3 + 0x50) ^ *(byte *)(param_1 + 0x50)) & 1 ^ *(byte *)(param_1 + 0x50);
  *(byte *)(param_1 + 0x50) = bVar2;
  bVar2 = (*(byte *)(iVar3 + 0x50) ^ bVar2) & 2 ^ bVar2;
  *(byte *)(param_1 + 0x50) = bVar2;
  bVar2 = (*(byte *)(iVar3 + 0x50) ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_1 + 0x50) = bVar2;
  bVar2 = (*(byte *)(iVar3 + 0x50) ^ bVar2) & 8 ^ bVar2;
  *(byte *)(param_1 + 0x50) = bVar2;
  *(byte *)(param_1 + 0x50) = (*(byte *)(iVar3 + 0x50) ^ bVar2) & 0x10 ^ bVar2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
  puVar10 = (undefined1 *)(param_1 + 0x54);
  do {
    *puVar10 = puVar10[iVar3 - param_1];
    puVar10 = puVar10 + 1;
  } while (puVar10 + (-0x54 - param_1) < (undefined1 *)0x3);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

