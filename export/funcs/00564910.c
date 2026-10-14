
/* public: __thiscall MD5Hash::MD5Hash(class MD5Hash const &) */

void __thiscall MD5Hash::MD5Hash(MD5Hash *this,MD5Hash *param_1)

{
  int iVar1;
  MD5Hash *pMVar2;
  MD5Hash *pMVar3;
  
                    /* 0x164910  13  ??0MD5Hash@@QAE@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  pMVar2 = param_1 + 0x1c;
  pMVar3 = this + 0x1c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pMVar3 = *(undefined4 *)pMVar2;
    pMVar2 = pMVar2 + 4;
    pMVar3 = pMVar3 + 4;
  }
  pMVar2 = param_1 + 0x5c;
  pMVar3 = this + 0x5c;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pMVar3 = *(undefined4 *)pMVar2;
    pMVar2 = pMVar2 + 4;
    pMVar3 = pMVar3 + 4;
  }
  *(undefined ***)this = &_vftable_;
  return;
}

