
/* public: __thiscall CDPServer::CDPServer(class CDPServer const &) */

CDPServer * __thiscall CDPServer::CDPServer(CDPServer *this,CDPServer *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  CDPServer *pCVar6;
  CDPServer *pCVar7;
  
                    /* 0x1a5020  5  ??0CDPServer@@QAE@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  pCVar6 = param_1 + 8;
  pCVar7 = this + 8;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  pCVar6 = param_1 + 0x50;
  pCVar7 = this + 0x50;
  for (iVar5 = 0x82; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  pCVar6 = param_1 + 600;
  pCVar7 = this + 600;
  for (iVar5 = 0x82; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  pCVar6 = param_1 + 0x460;
  pCVar7 = this + 0x460;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(this + 0x560) = *(undefined4 *)(param_1 + 0x560);
  this[0x564] = param_1[0x564];
  *(undefined4 *)(this + 0x568) = *(undefined4 *)(param_1 + 0x568);
  this[0x570] = param_1[0x570];
  piVar3 = operator_new(0xc);
  *piVar3 = (int)piVar3;
  piVar3[1] = (int)piVar3;
  *(int **)(this + 0x574) = piVar3;
  *(undefined4 *)(this + 0x578) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x574);
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
    *(int *)(this + 0x578) = *(int *)(this + 0x578) + 1;
  }
  pCVar6 = param_1 + 0x57c;
  pCVar7 = this + 0x57c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(this + 0x594) = *(undefined4 *)(param_1 + 0x594);
  *(undefined ***)(this + 0x56c) = &CDPMsgList::_vftable_;
  pCVar6 = param_1 + 0x598;
  pCVar7 = this + 0x598;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(this + 0x998) = *(undefined4 *)(param_1 + 0x998);
  *(undefined ***)this = &_vftable_;
  return this;
}

