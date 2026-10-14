
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0051d070(undefined4 *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  SHORT SVar3;
  undefined4 *puVar4;
  CEquip *pCVar5;
  CEGun *pCVar6;
  int iVar7;
  Munition *pMVar8;
  float *pfVar9;
  float fVar10;
  int *piVar11;
  CEqObj *this;
  float10 fVar12;
  undefined4 uVar13;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  undefined4 *local_7c;
  float local_78;
  float local_74;
  float local_70;
  CEquipManager *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  CEquipTraverser local_5c [8];
  float fStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined2 auStack_40 [32];
  
  iVar7 = param_1[0x30];
  local_7c = param_1;
  if ((((iVar7 == 0) || (iVar7 == 8)) || (iVar7 == -4)) ||
     ((this = *(CEqObj **)(iVar7 + 8), this == (CEqObj *)0x0 ||
      ((*(uint *)(this + 0x4c) & 0x503) != 0x503)))) {
    this = (CEqObj *)0x0;
    goto LAB_0051d10c;
  }
  bVar1 = CEqObj::is_control_excluded(this,4);
  if (bVar1) {
    cVar2 = FUN_0042d730();
    if (cVar2 != '\0') goto LAB_0051d10c;
    FUN_0041dda0(0);
    cVar2 = FUN_0041a3e0();
    if (cVar2 != '\0') goto LAB_0051d10c;
    uVar13 = 0x3f800000;
  }
  else {
    FUN_0041dda0(1);
    cVar2 = FUN_0041a3e0();
    if (cVar2 == '\0') goto LAB_0051d10c;
    uVar13 = 0;
  }
  FUN_0041a0f0(uVar13,0x40400000);
LAB_0051d10c:
  if ((DAT_0067529c != '\0') &&
     (((cVar2 = FUN_005784a0(199), cVar2 == '\0' ||
       (bVar1 = CEqObj::is_control_excluded(this,4), bVar1)) || (DAT_0067dcc8 != '\0')))) {
    DAT_0067529c = '\0';
  }
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  puVar4 = (undefined4 *)FUN_004f1da0(local_5c);
  local_68 = *puVar4;
  local_64 = puVar4[1];
  local_60 = puVar4[2];
  if (this != (CEqObj *)0x0) {
    CEquipTraverser::CEquipTraverser(local_5c,0x80);
    pCVar5 = CEquipManager::Traverse((CEquipManager *)(this + 0xe4),local_5c);
    pCVar6 = CEGun::cast(pCVar5);
    param_1 = local_7c;
    while (local_7c = param_1, pCVar6 != (CEGun *)0x0) {
      CEGun::SetTargetPoint(pCVar6,(Vector *)&local_68);
      pCVar5 = CEquipManager::Traverse((CEquipManager *)(this + 0xe4),local_5c);
      pCVar6 = CEGun::cast(pCVar5);
      param_1 = local_7c;
    }
  }
  if (DAT_0067529c != '\0') {
    FUN_0059df40(0x3006,0,0);
    if (DAT_006752a0 == 0) {
      if (this != (CEqObj *)0x0) {
        local_80 = 0;
        CEquipTraverser::CEquipTraverser(local_5c,0x80);
        local_6c = (CEquipManager *)(this + 0xe4);
        pCVar5 = CEquipManager::Traverse(local_6c,local_5c);
        pCVar6 = CEGun::cast(pCVar5);
        param_1 = local_7c;
        if (pCVar6 != (CEGun *)0x0) {
          do {
            pMVar8 = CEGun::MunitionArch(pCVar6);
            if ((*(int *)(pMVar8 + 0x90) == 0) &&
               (cVar2 = (**(code **)(*(int *)pCVar6 + 4))(), cVar2 != '\0')) {
              auStack_40[local_80] = *(undefined2 *)(pCVar6 + 8);
              local_80 = local_80 + 1;
            }
            pCVar5 = CEquipManager::Traverse(local_6c,local_5c);
            pCVar6 = CEGun::cast(pCVar5);
          } while (pCVar6 != (CEGun *)0x0);
          param_1 = local_7c;
          if (local_80 != 0) {
            if (local_7c[0x30] == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = local_7c[0x30] + -8;
            }
            (**(code **)(*(int *)(iVar7 + 4) + 0x34))(auStack_40,local_80,&local_68,DAT_00673344);
            param_1 = local_7c;
          }
        }
      }
    }
    else {
      DAT_006752a0 = 0;
      if (param_1[0x30] == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_1[0x30] + -8;
      }
      (**(code **)(*(int *)(iVar7 + 4) + 0x34))(0,0,&local_68,DAT_00673344);
    }
  }
  FUN_0051cc00();
  FUN_004f5330(param_2);
  if ((DAT_00675268 & 1) == 0) {
    DAT_00675268 = DAT_00675268 | 1;
    _DAT_0067525c = 0.0;
    _DAT_00675260 = 0.0;
    _DAT_00675264 = 0.0;
    FUN_005b7e6c(&DAT_0051d7e0);
  }
  if ((DAT_00675268 & 2) == 0) {
    DAT_00675268 = DAT_00675268 | 2;
    _DAT_00675250 = 0.0;
    _DAT_00675254 = 0.0;
    _DAT_00675258 = 0.0;
    FUN_005b7e6c(&DAT_0051d7d0);
  }
  FUN_00422b80(_DAT_0067526c + _DAT_00675278,_DAT_00675270 + _DAT_0067527c,
               _DAT_00675274 + _DAT_00675280);
  FUN_00422b80(local_8c - _DAT_0067525c,local_88 - _DAT_00675260,local_84 - _DAT_00675264);
  local_6c = (CEquipManager *)(local_78 * local_78 + local_74 * local_74 + local_70 * local_70);
  fVar10 = (float)(0x5f3759df - ((int)local_6c >> 1));
  if (_DAT_005c75e0 <
      (_DAT_005ca220 - fVar10 * fVar10 * (float)local_6c * _DAT_005c75e0) * fVar10 * (float)local_6c
     ) {
    _DAT_006752a4 = 0.0;
  }
  _DAT_00675260 = local_88;
  _DAT_0067525c = local_8c;
  _DAT_00675264 = local_84;
  if ((float)_DAT_005d5060 <= local_8c) {
    if ((float)_DAT_005c89b8 < local_8c) {
      local_8c = 1.0;
    }
  }
  else {
    local_8c = -1.0;
  }
  if ((float)_DAT_005d5060 <= local_88) {
    if ((float)_DAT_005c89b8 < local_88) {
      local_88 = 1.0;
    }
  }
  else {
    local_88 = -1.0;
  }
  if ((float)_DAT_005d5060 <= local_84) {
    if ((float)_DAT_005c89b8 < local_84) {
      local_84 = 1.0;
    }
  }
  else {
    local_84 = -1.0;
  }
  if ((float)_DAT_005d5138 <= local_84 * local_84 + local_8c * local_8c + local_88 * local_88) {
    _DAT_006752a4 = _DAT_00613740 * param_2 + _DAT_006752a4;
    if (_DAT_005c75dc < _DAT_006752a4) {
      _DAT_006752a4 = 1.0;
    }
  }
  else {
    _DAT_006752a4 = 0.0;
  }
  SVar3 = GetKeyState(0x10);
  if (SVar3 < 0) {
    local_7c = (undefined4 *)0x0;
    if (param_1[0x30] == 0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)(param_1[0x30] + -8);
    }
    (**(code **)(*piVar11 + 0x74))(&local_7c);
    if (local_7c != (undefined4 *)0x0) {
      pfVar9 = (float *)(**(code **)*local_7c)();
      local_78 = *pfVar9;
      local_74 = pfVar9[1];
      local_70 = pfVar9[2];
      if (param_1[0x30] == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)(param_1[0x30] + -8);
      }
      pfVar9 = (float *)(**(code **)*puVar4)();
      local_78 = local_78 - *pfVar9;
      local_74 = local_74 - pfVar9[1];
      local_70 = local_70 - pfVar9[2];
      fVar10 = _DAT_005c75dc / SQRT(local_78 * local_78 + local_74 * local_74 + local_70 * local_70)
      ;
      local_78 = local_78 * fVar10;
      local_74 = local_74 * fVar10;
      local_70 = local_70 * fVar10;
      if (param_1[0x30] == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)(param_1[0x30] + -8);
      }
      iVar7 = (**(code **)(*piVar11 + 0xc))();
      fStack_54 = *(float *)(iVar7 + 0x20);
      fStack_4c = -*(float *)(iVar7 + 8);
      fStack_48 = -*(float *)(iVar7 + 0x14);
      fStack_44 = -fStack_54;
      fVar12 = (float10)_CIpow();
      fVar12 = ((float10)_DAT_005c89b8 - fVar12) * (float10)_DAT_005d3c48;
      if (fVar12 < (float10)_DAT_005c7720) {
        fVar12 = (float10)_DAT_005d3ee0;
      }
      if ((float10)_DAT_005c89b8 < fVar12) {
        fVar12 = (float10)_DAT_005c75dc;
      }
      local_8c = (float)((float10)local_8c * fVar12);
      local_88 = (float)((float10)local_88 * fVar12);
      local_84 = (float)((float10)local_84 * fVar12);
    }
  }
  else {
    local_8c = local_8c * _DAT_006752a4;
    local_88 = local_88 * _DAT_006752a4;
    local_84 = _DAT_006752a4 * local_84;
  }
  fVar10 = (local_8c - _DAT_00675250) * (local_8c - _DAT_00675250);
  if (((fVar10 < _DAT_005dc124 == (fVar10 == _DAT_005dc124)) ||
      (fVar10 = (local_88 - _DAT_00675254) * (local_88 - _DAT_00675254),
      fVar10 < _DAT_005dc124 == (fVar10 == _DAT_005dc124))) ||
     (fVar10 = (local_84 - _DAT_00675258) * (local_84 - _DAT_00675258),
     fVar10 < _DAT_005dc124 == (fVar10 == _DAT_005dc124))) {
    FUN_004c78d0(-local_88,-local_8c,-local_84);
    _DAT_00675250 = local_8c;
    _DAT_00675254 = local_88;
    _DAT_00675258 = local_84;
  }
  FUN_0051b650(param_2);
  return;
}

