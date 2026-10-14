
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054a940(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  CObject *pCVar5;
  float10 fVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  char local_16 [8];
  undefined1 local_e;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_0067977c != 0) {
    if ((((DAT_00679744 == 0) || (DAT_00679744 == 8)) || (DAT_00679744 == -4)) ||
       ((pCVar5 = *(CObject **)(DAT_00679744 + 8), pCVar5 == (CObject *)0x0 ||
        (((byte)*(undefined4 *)(pCVar5 + 0x4c) & 1) != 1)))) {
      pCVar5 = (CObject *)0x0;
    }
    RefreshLoadingProgress();
    local_34 = 1.0;
    local_30 = *(float *)DEFAULT_LINEAR_DAMPING_exref;
    local_2c = *(undefined4 *)DEFAULT_ANGULAR_DAMPING_exref;
    local_28 = *(undefined4 *)(DEFAULT_ANGULAR_DAMPING_exref + 4);
    local_24 = *(undefined4 *)(DEFAULT_ANGULAR_DAMPING_exref + 8);
    local_20 = 0;
    local_1c = 2;
    local_18 = 0;
    local_17 = 1;
    local_e = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_16[0] = '\0';
    fVar6 = (float10)(**(code **)(*(int *)pCVar5 + 0x6c))();
    local_34 = (float)fVar6;
    local_e = 1;
    if (*(int *)(pCVar5 + 0x54) == 0) {
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
    }
    else {
      PhySys::GetMomentOfInertia((CObject *)&uStack_40);
    }
    local_c = uStack_40;
    local_8 = uStack_3c;
    local_4 = uStack_38;
    local_17 = PhySys::GetCollisionState(pCVar5);
    PhySys::GetDamping(pCVar5,&local_30,(Vector *)&local_2c);
    pcVar2 = PhySys::GetCollisionGroup(pCVar5);
    pcVar4 = local_16;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*(int *)pCVar5 + 0x74))();
    if (DAT_00679744 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_00679744 + -8;
    }
    FUN_00554ab0(iVar3);
    FUN_004c4840(DAT_0067977c);
    FUN_005545a0(DAT_0067977c);
    local_20 = DAT_0067977c;
    (**(code **)(*(int *)pCVar5 + 0x78))(&local_34,0);
    (**(code **)(*DAT_0067ecd0 + 0xbc))(DAT_00679774,DAT_00673344);
    _DAT_00679780 = 0;
    DAT_0067977c = 0;
    return;
  }
  if (DAT_00679784 != 0) {
    FUN_004c4910(&DAT_00679784);
    FUN_004c4a10(0);
    DAT_00679778 = 3;
    DAT_00679784 = 0;
  }
  return;
}

