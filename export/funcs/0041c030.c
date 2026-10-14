
/* public: class CDPMsgList & __thiscall CDPMsgList::operator=(class CDPMsgList const &) */

CDPMsgList * __thiscall CDPMsgList::operator=(CDPMsgList *this,CDPMsgList *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  CDPMsgList *pCVar6;
  int *piVar7;
  CDPMsgList *pCVar8;
  
                    /* 0x1c030  17  ??4CDPMsgList@@QAEAAV0@ABV0@@Z */
  if (this + 4 != param_1 + 4) {
    piVar1 = *(int **)(this + 8);
    piVar7 = (int *)*piVar1;
    puVar2 = *(undefined4 **)(param_1 + 8);
    for (puVar3 = (undefined4 *)*puVar2; (piVar7 != piVar1 && (puVar3 != puVar2));
        puVar3 = (undefined4 *)*puVar3) {
      piVar7[2] = puVar3[2];
      piVar7 = (int *)*piVar7;
    }
    while (piVar7 != piVar1) {
      piVar4 = (int *)*piVar7;
      *(int *)piVar7[1] = *piVar7;
      *(int *)(*piVar7 + 4) = piVar7[1];
      FUN_005b7e1d(piVar7);
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      piVar7 = piVar4;
    }
    for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      piVar7 = (int *)piVar1[1];
      piVar4 = operator_new(0xc);
      *piVar4 = (int)piVar1;
      if (piVar7 == (int *)0x0) {
        piVar7 = piVar4;
      }
      piVar4[1] = (int)piVar7;
      piVar1[1] = (int)piVar4;
      *(int **)piVar4[1] = piVar4;
      if (piVar4 + 2 != (int *)0x0) {
        piVar4[2] = puVar3[2];
      }
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    }
  }
  pCVar6 = param_1 + 0x10;
  pCVar8 = this + 0x10;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar8 = pCVar8 + 4;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}

