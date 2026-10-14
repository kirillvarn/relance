
/* public: __thiscall CDPMsgList::CDPMsgList(class CDPMsgList const &) */

CDPMsgList * __thiscall CDPMsgList::CDPMsgList(CDPMsgList *this,CDPMsgList *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  CDPMsgList *pCVar6;
  CDPMsgList *pCVar7;
  
                    /* 0x1bf80  4  ??0CDPMsgList@@QAE@ABV0@@Z */
  this[4] = param_1[4];
  piVar3 = operator_new(0xc);
  *piVar3 = (int)piVar3;
  piVar3[1] = (int)piVar3;
  *(int **)(this + 8) = piVar3;
  *(undefined4 *)(this + 0xc) = 0;
  puVar1 = *(undefined4 **)(param_1 + 8);
  iVar5 = *piVar3;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    piVar3 = *(int **)(iVar5 + 4);
    piVar4 = operator_new(0xc);
    *piVar4 = iVar5;
    if (piVar3 == (int *)0x0) {
      piVar3 = piVar4;
    }
    piVar4[1] = (int)piVar3;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    if (piVar4 + 2 != (int *)0x0) {
      piVar4[2] = puVar2[2];
    }
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  pCVar6 = param_1 + 0x10;
  pCVar7 = this + 0x10;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined ***)this = &_vftable_;
  return this;
}

