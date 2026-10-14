
/* public: __thiscall CDPClient::CDPClient(class CDPClient const &) */

CDPClient * __thiscall CDPClient::CDPClient(CDPClient *this,CDPClient *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  CDPClient *pCVar3;
  CDPClient *pCVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1c1c0  3  ??0CDPClient@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b8a26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &IDPMsgHandler::_vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  this[0x14] = param_1[0x14];
  puVar1 = operator_new(0xc);
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  *(undefined4 **)(this + 0x18) = puVar1;
  *(undefined4 *)(this + 0x1c) = 0;
  FUN_0041d630(*puVar1,**(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_1 + 0x18));
  pCVar3 = param_1 + 0x20;
  pCVar4 = this + 0x20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar4 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar4 = pCVar4 + 4;
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined ***)(this + 0x10) = &CDPMsgList::_vftable_;
  local_4 = 0;
  this[0x40] = param_1[0x40];
  puVar1 = operator_new(0xc);
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  *(undefined4 **)(this + 0x44) = puVar1;
  *(undefined4 *)(this + 0x48) = 0;
  FUN_0041d630(*puVar1,**(undefined4 **)(param_1 + 0x44),*(undefined4 **)(param_1 + 0x44));
  pCVar3 = param_1 + 0x4c;
  pCVar4 = this + 0x4c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar4 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar4 = pCVar4 + 4;
  }
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined ***)(this + 0x3c) = &CDPMsgList::_vftable_;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  this[0x80] = param_1[0x80];
  puVar1 = operator_new(0x28);
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  *(undefined4 **)(this + 0x84) = puVar1;
  *(undefined4 *)(this + 0x88) = 0;
  FUN_0041d690(*puVar1,**(undefined4 **)(param_1 + 0x84),*(undefined4 **)(param_1 + 0x84));
  this[0x8c] = param_1[0x8c];
  *(undefined ***)this = &_vftable_;
  ExceptionList = local_c;
  return this;
}

