
/* public: class MD5Hash & __thiscall MD5Hash::operator=(class MD5Hash const &) */

MD5Hash * __thiscall MD5Hash::operator=(MD5Hash *this,MD5Hash *param_1)

{
  int iVar1;
  int iVar2;
  MD5Hash *pMVar3;
  
                    /* 0x164970  24  ??4MD5Hash@@QAEAAV0@ABV0@@Z */
  iVar2 = (int)param_1 - (int)this;
  iVar1 = 4;
  pMVar3 = this;
  do {
    pMVar3 = pMVar3 + 4;
    *(undefined4 *)pMVar3 = *(undefined4 *)(pMVar3 + iVar2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pMVar3 = this + 0x14;
  iVar1 = 2;
  do {
    *(undefined4 *)pMVar3 = *(undefined4 *)(pMVar3 + iVar2);
    pMVar3 = pMVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pMVar3 = this + 0x1c;
  do {
    *pMVar3 = pMVar3[iVar2];
    pMVar3 = pMVar3 + 1;
  } while (pMVar3 + (-0x1c - (int)this) < (MD5Hash *)&DAT_00000040);
  pMVar3 = this + 0x5c;
  do {
    *pMVar3 = pMVar3[iVar2];
    pMVar3 = pMVar3 + 1;
  } while (pMVar3 + (-0x5c - (int)this) < (MD5Hash *)0x80);
  return this;
}

