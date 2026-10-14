
/* public: class CDPClient & __thiscall CDPClient::operator=(class CDPClient const &) */

CDPClient * __thiscall CDPClient::operator=(CDPClient *this,CDPClient *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  CDPClient *pCVar6;
  CDPClient *pCVar7;
  undefined1 local_4 [4];
  
                    /* 0x1c330  16  ??4CDPClient@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  if (this + 0x14 != param_1 + 0x14) {
    puVar1 = *(undefined4 **)(this + 0x18);
    puVar2 = (undefined4 *)*puVar1;
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    for (puVar4 = (undefined4 *)*puVar3; (puVar2 != puVar1 && (puVar4 != puVar3));
        puVar4 = (undefined4 *)*puVar4) {
      puVar2[2] = puVar4[2];
      puVar2 = (undefined4 *)*puVar2;
    }
    FUN_004a2f80(local_4,puVar2,puVar1);
    FUN_0041d630(puVar1,puVar4,puVar3);
  }
  pCVar6 = param_1 + 0x20;
  pCVar7 = this + 0x20;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  if (this + 0x40 != param_1 + 0x40) {
    puVar1 = *(undefined4 **)(this + 0x44);
    puVar2 = (undefined4 *)*puVar1;
    puVar3 = *(undefined4 **)(param_1 + 0x44);
    for (puVar4 = (undefined4 *)*puVar3; (puVar2 != puVar1 && (puVar4 != puVar3));
        puVar4 = (undefined4 *)*puVar4) {
      puVar2[2] = puVar4[2];
      puVar2 = (undefined4 *)*puVar2;
    }
    FUN_004a2f80(local_4,puVar2,puVar1);
    FUN_0041d630(puVar1,puVar4,puVar3);
  }
  pCVar6 = param_1 + 0x4c;
  pCVar7 = this + 0x4c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  if (this + 0x80 != param_1 + 0x80) {
    puVar1 = *(undefined4 **)(this + 0x84);
    puVar2 = (undefined4 *)*puVar1;
    puVar3 = *(undefined4 **)(param_1 + 0x84);
    for (puVar4 = (undefined4 *)*puVar3; (puVar2 != puVar1 && (puVar4 != puVar3));
        puVar4 = (undefined4 *)*puVar4) {
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                *)(puVar2 + 2),
               (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                *)(puVar4 + 2),0,*(uint *)npos_exref);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                *)(puVar2 + 6),
               (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                *)(puVar4 + 6),0,*(uint *)npos_exref);
      puVar2 = (undefined4 *)*puVar2;
    }
    FUN_0041d700(local_4,puVar2,puVar1);
    FUN_0041d690(puVar1,puVar4,puVar3);
  }
  this[0x8c] = param_1[0x8c];
  return this;
}

