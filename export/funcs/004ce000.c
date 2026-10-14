
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ce000(int param_1,int param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 extraout_EDX;
  int *piVar15;
  bool bVar16;
  float10 fVar17;
  int aiStack_84 [8];
  undefined4 uStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  char *pcStack_54;
  char *pcStack_50;
  int *piStack_4c;
  int *piStack_48;
  float fStack_30;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 auStack_c [12];
  
  piVar5 = param_3;
  piStack_48 = (int *)param_3[0xf];
  piStack_4c = (int *)0x4ce01a;
  iVar8 = FUN_00430ab0();
  if (iVar8 == 0) {
    piStack_48 = (int *)param_3[0xf];
    piStack_4c = (int *)0x934;
    pcStack_50 = "E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp";
    pcStack_54 = "%s(%d) : *** WARNING: invalid VOICE id (%u) attempted to speak\n";
    uStack_58 = 0x100002;
    uStack_5c = 0x4ce046;
    (**(code **)FDUMP_exref)();
    return;
  }
  param_3[0x23] = 0;
  if (((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xa4) != 8)) &&
     (piStack_4c = (int *)*param_3, piStack_4c != (int *)0x0)) {
    piStack_48 = (int *)0x0;
    pcStack_50 = (undefined1 *)0x4ce089;
    iVar9 = FUN_005416c0();
    if (((iVar9 == 0) || (iVar9 == -0xc)) ||
       ((iVar9 = *(int *)(iVar9 + 0x10), iVar9 == 0 || ((*(uint *)(iVar9 + 0x4c) & 0x103) != 0x103))
       )) {
LAB_004ce441:
      piStack_48 = param_3;
      piStack_4c = (int *)0x4ce44b;
      FUN_004cdfc0();
      return;
    }
    piStack_48 = (int *)0x4ce0c4;
    cVar6 = FUN_004ce460();
    if (cVar6 == '\0') {
      local_18 = *(undefined4 *)(iVar9 + 0x2c);
      local_14 = *(undefined4 *)(iVar9 + 0x30);
      local_10 = *(undefined4 *)(iVar9 + 0x34);
      if (*(int *)(param_1 + 0xa4) == 0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0xa4) + -8);
      }
      piStack_48 = (int *)0x4ce0fc;
      puVar10 = (undefined4 *)(**(code **)*puVar10)();
      uStack_24 = *puVar10;
      uStack_20 = puVar10[1];
      uStack_1c = puVar10[2];
      piStack_48 = &uStack_24;
      piStack_4c = &local_18;
      pcStack_50 = auStack_c;
      pcStack_54 = (char *)0x4ce124;
      FUN_00423b60();
      piStack_48 = (int *)0x4ce130;
      fVar17 = (float10)FUN_00410190();
      fVar1 = (float)(fVar17 - (float10)*(float *)(iVar9 + 0x38));
      piStack_48 = (int *)0x4ce142;
      cVar6 = FUN_004ce490();
      if (cVar6 == '\0') {
        piStack_48 = param_3;
        piStack_4c = (int *)0x4ce178;
        iVar9 = FUN_004cdf40();
        if (*(int *)WALLA_PRIORITY_CUTOFF_exref < iVar9) {
          fStack_30 = *(float *)CHATTER_MAX_DIST_exref;
          fVar2 = *(float *)CHATTER_START_ATTEN_exref;
          fVar3 = *(float *)CHATTER_MAX_DIST_ATTEN_exref;
        }
        else {
          fStack_30 = *(float *)WALLA_MAX_DIST_exref;
          fVar2 = *(float *)WALLA_START_ATTEN_exref;
          fVar3 = *(float *)WALLA_MAX_DIST_ATTEN_exref;
        }
        if (fVar1 < (float)_DAT_005c8ba8 == (fVar1 == (float)_DAT_005c8ba8)) {
          if (fStack_30 < fVar1) goto LAB_004ce441;
          param_3[0x23] = (int)((fVar1 / fStack_30) * (fVar3 - fVar2) + fVar2);
          goto LAB_004ce1fe;
        }
      }
      else {
        fVar2 = *(float *)COMM_PLAYER_FAR_DIST_ATTEN_exref;
        if (fVar1 < *(float *)COMM_PLAYER_FAR_DIST_exref) {
          param_3[0x23] = 0;
          goto LAB_004ce1fe;
        }
      }
      param_3[0x23] = (int)fVar2;
    }
  }
LAB_004ce1fe:
  piStack_48 = (int *)param_3[0xf];
  param_3 = (int *)0xffffff9c;
  piStack_4c = (int *)0x4ce20f;
  piVar11 = (int *)FUN_00430ab0();
  if ((piVar11 != (int *)0x0) && (iVar9 = 0, 0 < piVar5[0x21])) {
    piVar15 = piVar5 + 0x11;
    do {
      piStack_48 = (int *)*piVar15;
      piStack_4c = (int *)0x4ce231;
      piVar12 = (int *)(**(code **)(*piVar11 + 0x14))();
      if (piVar12 != (int *)0x0) {
        piStack_48 = (int *)0x4ce23c;
        iVar13 = (**(code **)(*piVar12 + 0x38))();
        if ((int)param_3 < iVar13) {
          param_3 = (int *)iVar13;
        }
      }
      iVar9 = iVar9 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar9 < piVar5[0x21]);
  }
  *(int **)(param_2 + 8) = param_3;
  *(undefined1 *)(param_2 + 0xc) = 1;
  piStack_48 = (int *)0x4ce26a;
  cVar6 = FUN_004ce490();
  if (cVar6 == '\0') {
    piStack_48 = (int *)0x4ce275;
    cVar6 = FUN_004ce460();
    if (cVar6 == '\0') {
      iVar8 = *(int *)(param_2 + 4);
      piStack_48 = (int *)0x4ce283;
      FUN_004cabd0();
      piStack_48 = (int *)(iVar8 + 0x1cc);
      piStack_4c = (int *)(iVar8 + 0x1c8);
      pcStack_50 = (char *)(iVar8 + 0x1c4);
      pcStack_54 = (char *)0x1;
      uStack_58 = 0;
      uStack_5c = 0;
      piStack_60 = piVar5;
      uStack_64 = 0x4ce2a6;
      FUN_004cae10();
      *(int *)(iVar8 + 0x1b8) = piVar5[0x24];
      return;
    }
  }
  piStack_48 = (int *)0x4ce2c3;
  cVar6 = FUN_004ce490();
  bVar16 = false;
  piStack_48 = (int *)0x4ce2d1;
  piVar11 = (int *)FUN_0054baf0();
  if (piVar11 != (int *)0x0) {
    piStack_48 = (int *)0x4ce2dc;
    iVar9 = (**(code **)(*piVar11 + 0x20))();
    bVar16 = iVar9 == *piVar5;
  }
  bVar4 = true;
  if ((((piVar5[2] != 0) || (piVar5[3] != 0)) || (piVar5[4] != 0)) ||
     ((piVar5[5] != 0 || (piVar5[0xe] != 0)))) {
    bVar4 = false;
  }
  piStack_48 = (int *)0x4ce319;
  cVar7 = FUN_0041a3e0();
  if (((cVar6 == '\x01') && (!bVar16)) && ((!bVar4 && (cVar7 == '\0')))) {
    iVar9 = *(int *)(param_2 + 4);
    piStack_48 = (int *)0x4ce34e;
    FUN_004cabd0();
    piStack_48 = (int *)0x2c;
    piStack_4c = (int *)0x4ce355;
    FUN_005645c0();
    pcStack_50 = (char *)*piVar5;
    piStack_4c = (int *)0x0;
    pcStack_54 = (char *)0x4ce361;
    iVar13 = FUN_005416c0();
    if ((((iVar13 == 0) || (iVar13 == -0xc)) ||
        (param_3 = *(int **)(iVar13 + 0x10), param_3 == (int *)0x0)) ||
       ((*(uint *)((int)param_3 + 0x4c) & 0x103) != 0x103)) {
      param_3 = (int *)0x0;
    }
    piStack_4c = (int *)piVar5[1];
    piStack_48 = (int *)0x0;
    pcStack_50 = (char *)0x4ce399;
    iVar13 = FUN_005416c0();
    if (((iVar13 == 0) || (iVar13 == -0xc)) ||
       ((iVar13 = *(int *)(iVar13 + 0x10), iVar13 == 0 ||
        ((*(uint *)(iVar13 + 0x4c) & 0x103) != 0x103)))) {
      iVar13 = 0;
    }
    pcStack_50 = (char *)piVar5[0x10];
    piVar11 = piVar5 + 2;
    piVar15 = aiStack_84;
    piStack_4c = (int *)iVar8;
    piStack_48 = (int *)param_1;
    for (iVar14 = 0xd; iVar14 != 0; iVar14 = iVar14 + -1) {
      *piVar15 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar15 = piVar15 + 1;
    }
    FUN_004cb250(param_3,iVar13);
    piStack_48 = (int *)(iVar9 + 0x1cc);
    piStack_4c = (int *)(iVar9 + 0x1c8);
    pcStack_50 = (char *)(iVar9 + 0x1c4);
    pcStack_54 = (char *)0x0;
    uStack_58 = 1;
    uStack_5c = 0;
    piStack_60 = piVar5;
    uStack_64 = 0x4ce40e;
    FUN_004cae10();
    *(int *)(iVar9 + 0x1b8) = piVar5[0x24];
    return;
  }
  piStack_48 = (int *)CONCAT31((int3)((uint)extraout_EDX >> 8),cVar7 == '\0');
  piStack_4c = piVar5;
  pcStack_50 = (char *)0x4ce433;
  FUN_004cad10();
  return;
}

