
/* public: class CDPServer & __thiscall CDPServer::operator=(class CDPServer const &) */

CDPServer * __thiscall CDPServer::operator=(CDPServer *this,CDPServer *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  CDPServer *pCVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  CDPServer *pCVar9;
  
                    /* 0x1a5180  18  ??4CDPServer@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  iVar7 = (int)param_1 - (int)this;
  pCVar4 = param_1 + 8;
  pCVar9 = this + 8;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pCVar4;
    pCVar4 = pCVar4 + 4;
    pCVar9 = pCVar9 + 4;
  }
  pCVar4 = this + 0x50;
  iVar6 = 0x104;
  do {
    *(undefined2 *)pCVar4 = *(undefined2 *)(pCVar4 + iVar7);
    pCVar4 = pCVar4 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  pCVar4 = this + 600;
  iVar6 = 0x104;
  do {
    *(undefined2 *)pCVar4 = *(undefined2 *)(pCVar4 + iVar7);
    pCVar4 = pCVar4 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  pCVar4 = this + 0x460;
  iVar6 = 0x40;
  do {
    *(undefined4 *)pCVar4 = *(undefined4 *)(pCVar4 + iVar7);
    pCVar4 = pCVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined4 *)(this + 0x560) = *(undefined4 *)(param_1 + 0x560);
  this[0x564] = param_1[0x564];
  *(undefined4 *)(this + 0x568) = *(undefined4 *)(param_1 + 0x568);
  if (this + 0x570 != param_1 + 0x570) {
    piVar1 = *(int **)(this + 0x574);
    piVar8 = (int *)*piVar1;
    puVar2 = *(undefined4 **)(param_1 + 0x574);
    for (puVar3 = (undefined4 *)*puVar2; (piVar8 != piVar1 && (puVar3 != puVar2));
        puVar3 = (undefined4 *)*puVar3) {
      piVar8[2] = puVar3[2];
      piVar8 = (int *)*piVar8;
    }
    while (piVar8 != piVar1) {
      piVar5 = (int *)*piVar8;
      *(int *)piVar8[1] = *piVar8;
      *(int *)(*piVar8 + 4) = piVar8[1];
      FUN_005b7e1d(piVar8);
      *(int *)(this + 0x578) = *(int *)(this + 0x578) + -1;
      piVar8 = piVar5;
    }
    for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      piVar8 = (int *)piVar1[1];
      piVar5 = operator_new(0xc);
      *piVar5 = (int)piVar1;
      if (piVar8 == (int *)0x0) {
        piVar8 = piVar5;
      }
      piVar5[1] = (int)piVar8;
      piVar1[1] = (int)piVar5;
      *(int **)piVar5[1] = piVar5;
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = puVar3[2];
      }
      *(int *)(this + 0x578) = *(int *)(this + 0x578) + 1;
    }
  }
  pCVar4 = param_1 + 0x57c;
  pCVar9 = this + 0x57c;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pCVar4;
    pCVar4 = pCVar4 + 4;
    pCVar9 = pCVar9 + 4;
  }
  *(undefined4 *)(this + 0x594) = *(undefined4 *)(param_1 + 0x594);
  pCVar4 = this + 0x598;
  do {
    *pCVar4 = pCVar4[iVar7];
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 + (-0x598 - (int)this) < (CDPServer *)0x400);
  *(undefined4 *)(this + 0x998) = *(undefined4 *)(param_1 + 0x998);
  return this;
}

