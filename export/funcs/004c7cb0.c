
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c7cb0(void)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  IObjRW *pIVar8;
  IBehaviorManager *pIVar9;
  CEqObj *pCVar10;
  bool bVar11;
  float10 fVar12;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar6 = FUN_0054baf0();
  pCVar10 = (CEqObj *)0x0;
  pIVar9 = (IBehaviorManager *)0x0;
  if (iVar6 != 0) {
    if (((iVar6 == -0xc) || (pCVar10 = *(CEqObj **)(iVar6 + 0x10), pCVar10 == (CEqObj *)0x0)) ||
       ((*(uint *)(pCVar10 + 0x4c) & 0x503) != 0x503)) {
      pCVar10 = (CEqObj *)0x0;
    }
    else {
      pIVar9 = CEqObj::get_behavior_interface(pCVar10);
    }
  }
  bVar11 = false;
  if (pIVar9 != (IBehaviorManager *)0x0) {
    bVar11 = pIVar9[0x168] == (IBehaviorManager)0x0;
  }
  cVar4 = FUN_0041a3e0();
  if ((cVar4 != '\0') ||
     ((pCVar10 != (CEqObj *)0x0 && (bVar5 = CShip::is_using_tradelane((CShip *)pCVar10), bVar5)))) {
    bVar11 = true;
  }
  if (((((byte)DAT_00616850 & 1) != 1) && (DAT_0067354c == '\0')) || (bVar11)) {
    _DAT_00673550 = 0.0;
    if (DAT_00673554 != '\0') {
      DAT_00673554 = '\0';
      DAT_00673555 = '\0';
      pIVar8 = (IObjRW *)FUN_0054baf0();
      pIVar9 = GetBehaviorManager(pIVar8);
      if (pIVar9 != (IBehaviorManager *)0x0) {
        local_c = 0.0;
        local_8 = 0.0;
        local_4 = 0;
        IBehaviorManager::update_current_behavior_direction(pIVar9,(Vector *)&local_c);
      }
      iVar6 = FUN_0054baf0();
      if (((((iVar6 != 0) && (iVar6 != -0xc)) &&
           (pCVar10 = *(CEqObj **)(iVar6 + 0x10), pCVar10 != (CEqObj *)0x0)) &&
          (((*(uint *)(pCVar10 + 0x4c) & 0x503) == 0x503 &&
           (pIVar9 = CEqObj::get_behavior_interface(pCVar10), pIVar9 != (IBehaviorManager *)0x0))))
         && (*(int *)(pIVar9 + 0xc0) == 0x12)) {
        IDPMsgHandler::OnAddHost(DAT_00674a58,(_DPNMSG_ENUM_HOSTS_RESPONSE *)0x0);
      }
    }
  }
  else if ((DAT_00673555 != '\0') || (DAT_0067354c != '\0')) {
    if ((DAT_00673554 == '\0') && (iVar6 = FUN_0059daa0(), iVar6 != 0)) {
      _DAT_00673550 = 0.0;
      return;
    }
    if (_DAT_00673550 == _DAT_005c7474) {
      _DAT_00673558 = (float)DAT_00616840;
      cVar4 = FUN_0045a470();
      if ((((cVar4 == '\0') && (DAT_0067354c != '\0')) ||
          (iVar6 = DAT_00616844, DAT_00612270 <= _DAT_00673550)) &&
         (iVar7 = FUN_005792b0(0x17), iVar6 = DAT_00616844, iVar7 != 0)) {
        iVar6 = DAT_00610854 - DAT_00616844;
      }
      _DAT_0067355c = (float)iVar6;
    }
    fVar12 = (float10)FUN_0042d680();
    fVar1 = (float10)_DAT_00673550;
    _DAT_00673550 = (float)(fVar12 + fVar1);
    if ((float10)DAT_00612270 <= fVar12 + fVar1) {
      fVar2 = ((float)DAT_00616840 - (float)DAT_00610850 * _DAT_005c75e0) /
              ((float)DAT_00610850 * _DAT_005c75e0);
      fVar3 = (float)DAT_00610854 * _DAT_005c75e0;
      cVar4 = FUN_0045a470();
      if ((((cVar4 == '\0') && (DAT_0067354c != '\0')) ||
          (iVar6 = DAT_00616844, DAT_00612270 <= _DAT_00673550)) &&
         (iVar7 = FUN_005792b0(0x17), iVar6 = DAT_00616844, iVar7 != 0)) {
        iVar6 = DAT_00610854 - DAT_00616844;
      }
      fVar3 = ((float)iVar6 - fVar3) / fVar3;
      if (((fVar2 == _DAT_005c7474) && (fVar3 == _DAT_005c7474)) ||
         ((*(char *)(DAT_00674aa0 + 0x5b9) == '\0' && (*(char *)(DAT_00674aa0 + 0x5ba) == '\0')))) {
        pIVar8 = (IObjRW *)FUN_0054baf0();
        pIVar9 = GetBehaviorManager(pIVar8);
        if (pIVar9 != (IBehaviorManager *)0x0) {
          local_4 = 0;
          local_c = fVar2;
          local_8 = fVar3;
          IBehaviorManager::update_current_behavior_direction(pIVar9,(Vector *)&local_c);
        }
      }
      DAT_00673554 = '\x01';
      return;
    }
    fVar2 = (float)DAT_00616840 - _DAT_00673558;
    cVar4 = FUN_0045a470();
    if ((((cVar4 == '\0') && (DAT_0067354c != '\0')) ||
        (iVar6 = DAT_00616844, DAT_00612270 <= _DAT_00673550)) &&
       (iVar7 = FUN_005792b0(0x17), iVar6 = DAT_00616844, iVar7 != 0)) {
      iVar6 = DAT_00610854 - DAT_00616844;
    }
    fVar3 = (_DAT_005d6e20 / (float)DAT_00610850) * _DAT_005d440c;
    if (fVar3 * fVar3 <
        fVar2 * fVar2 + ((float)iVar6 - _DAT_0067355c) * ((float)iVar6 - _DAT_0067355c)) {
      _DAT_00673550 = DAT_00612270;
      return;
    }
  }
  return;
}

