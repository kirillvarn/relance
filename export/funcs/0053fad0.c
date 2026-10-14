
/* public: class CDeadReckonedVector & __thiscall CDeadReckonedVector::operator=(class
   CDeadReckonedVector const &) */

CDeadReckonedVector * __thiscall
CDeadReckonedVector::operator=(CDeadReckonedVector *this,CDeadReckonedVector *param_1)

{
  CDeadReckonedVector *pCVar1;
  CDeadReckonedVector *pCVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
                    /* 0x13fad0  19  ??4CDeadReckonedVector@@QAEAAV0@ABV0@@Z */
  pCVar2 = this + 8;
  iVar3 = (int)param_1 - (int)this;
  local_c = 3;
  do {
    pCVar1 = pCVar2 + iVar3;
    *(undefined4 *)pCVar2 = *(undefined4 *)pCVar1;
    *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(pCVar1 + 4);
    *(undefined4 *)(pCVar2 + 8) = *(undefined4 *)(pCVar1 + 8);
    pCVar2 = pCVar2 + 0xc;
    local_c = local_c + -1;
  } while (local_c != 0);
  pCVar2 = this + 0x30;
  iVar4 = 3;
  do {
    *(undefined4 *)pCVar2 = *(undefined4 *)(pCVar2 + iVar3);
    *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(pCVar2 + iVar3 + 4);
    pCVar2 = pCVar2 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  return this;
}

