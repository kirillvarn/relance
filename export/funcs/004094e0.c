
void __thiscall FUN_004094e0(int param_1,undefined4 param_2)

{
  IDPMsgHandler *this;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  
  iVar3 = __RTDynamicCast(param_2,0,&Archetype::ICliObj::RTTI_Type_Descriptor,
                          &Archetype::CliEQEngine::RTTI_Type_Descriptor,0);
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
    uVar4 = FUN_005995f0();
    uVar5 = FUN_005995f0();
    if (uVar4 < uVar5) {
      uVar4 = FUN_0040d760();
      uVar5 = FUN_005995f0();
      if (uVar5 <= uVar4) {
        iVar7 = *(int *)(iVar3 + 0x24);
        iVar8 = FUN_005995f0();
        iVar7 = iVar7 + iVar8 * 8;
        FUN_00591460(*(undefined4 *)(iVar3 + 0x24),iVar7,*(undefined4 *)(param_1 + 0x24));
        FUN_0040d780(iVar7,*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(param_1 + 0x28));
        iVar7 = FUN_005995f0();
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24) + iVar7 * 8;
        goto LAB_0040964a;
      }
      IDPMsgHandler::OnReceive(this,*(uchar **)(param_1 + 0x24),*(ulong *)(param_1 + 0x28));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x24));
      iVar7 = FUN_005995f0();
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      pvVar9 = operator_new(iVar7 << 3);
      *(void **)(param_1 + 0x24) = pvVar9;
      iVar7 = FUN_0040d780(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),pvVar9);
      *(int *)(param_1 + 0x2c) = iVar7;
    }
    else {
      puVar6 = (uchar *)FUN_00591460(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28),
                                     *(undefined4 *)(param_1 + 0x24));
      IDPMsgHandler::OnReceive(this,puVar6,*(ulong *)(param_1 + 0x28));
      iVar7 = FUN_005995f0();
      iVar7 = *(int *)(param_1 + 0x24) + iVar7 * 8;
    }
    *(int *)(param_1 + 0x28) = iVar7;
  }
LAB_0040964a:
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
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar3 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar3 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar3 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar3 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar3 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar3 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar3 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar3 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar3 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar3 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar3 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar3 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar3 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar3 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar3 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar3 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar3 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar3 + 0xa8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

