
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __fastcall FUN_00496e50(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined1 local_36;
  int iStack_30;
  uint local_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  local_36 = 0;
  iVar3 = FUN_004c4690();
  iVar10 = 0;
  if (0 < iVar3) {
    piVar9 = (int *)(param_1 + 0x4b8);
    do {
      if (*piVar9 == 0) {
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        iVar4 = FUN_00491f90(3,0,0,0,0,*(float *)(param_1 + 0x7e8) + *(float *)(param_1 + 0x7e8),
                             "NAV_waypointdiamond",0x219b,0,0,0,0);
        *piVar9 = iVar4;
        *(int *)(iVar4 + 0x54) = iVar10 + 1;
        *(int *)(*piVar9 + 0x58) = iVar10 + 1;
        *(undefined1 *)(*piVar9 + 0x48) = 1;
        iVar4 = *piVar9;
        *(float *)(iVar4 + 0x1c) = (float)(byte)DAT_00679b80 * _DAT_005c7f68;
        *(float *)(iVar4 + 0x20) = (float)DAT_00679b80._1_1_ * _DAT_005c7f68;
        *(float *)(iVar4 + 0x24) = (float)DAT_00679b80._2_1_ * _DAT_005c7f68;
        local_2c = (uint)DAT_00679b80._3_1_;
        *(float *)(iVar4 + 0x2c) = (float)local_2c * _DAT_005c7f68;
      }
      pfVar5 = (float *)FUN_004c46a0(iVar10);
      if (pfVar5 == (float *)0x0) {
LAB_0049700a:
        *(undefined1 *)(*piVar9 + 0x48) = 0;
      }
      else {
        fVar6 = (float)(**(code **)**(undefined4 **)(param_1 + 0x7e0))();
        if (pfVar5[3] != fVar6) goto LAB_0049700a;
        fVar6 = pfVar5[5];
        if ((0 < iVar10) && (iVar10 < iVar3 + -1)) {
          fVar6 = 0.0;
        }
        *(undefined1 *)(*piVar9 + 0x48) = 1;
        *(float *)(*piVar9 + 0x58) = pfVar5[5];
        fStack_1c = *(float *)(param_1 + 0xf48);
        fStack_24 = fStack_1c * *pfVar5;
        fStack_20 = fStack_1c * pfVar5[1];
        fStack_1c = fStack_1c * pfVar5[2];
        iVar4 = *piVar9;
        if ((((*(float *)(iVar4 + 0x30) != fStack_24) || (*(float *)(iVar4 + 0x34) != fStack_20)) ||
            (*(float *)(iVar4 + 0x38) != fStack_1c)) || (*(float *)(iVar4 + 0x54) != fVar6)) {
          *(float *)(iVar4 + 0x30) = fStack_24;
          *(float *)(iVar4 + 0x34) = fStack_20;
          *(float *)(iVar4 + 0x38) = fStack_1c;
          *(float *)(*piVar9 + 0x54) = fVar6;
          local_36 = 1;
        }
      }
      iVar10 = iVar10 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar10 < iVar3);
  }
  if (iVar3 < 99) {
    piVar9 = (int *)(param_1 + 0x4b8 + iVar3 * 4);
    iVar3 = 99 - iVar3;
    do {
      if (*piVar9 != 0) {
        *(undefined1 *)(*piVar9 + 0x48) = 0;
      }
      piVar9 = piVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  bVar1 = false;
  iVar3 = FUN_004c4fb0();
  iVar10 = 0;
  iStack_30 = 1;
  if (0 < iVar3) {
    piVar9 = (int *)(param_1 + 0x644);
    do {
      if (*piVar9 == 0) {
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        iVar4 = FUN_00491f90(4,0,0,0,0,*(float *)(param_1 + 0x7e8) + *(float *)(param_1 + 0x7e8),
                             "NAV_waypointdiamond",0x219b,0,0,0,0);
        *piVar9 = iVar4;
        *(undefined1 *)(iVar4 + 0x48) = 0;
        iVar4 = *piVar9;
        bVar1 = true;
        *(float *)(iVar4 + 0x1c) = (float)(byte)DAT_00679b80 * _DAT_005c7f68;
        *(float *)(iVar4 + 0x20) = (float)DAT_00679b80._1_1_ * _DAT_005c7f68;
        *(float *)(iVar4 + 0x24) = (float)DAT_00679b80._2_1_ * _DAT_005c7f68;
        uStack_28 = (uint)DAT_00679b80._3_1_;
        *(float *)(iVar4 + 0x2c) = (float)uStack_28 * _DAT_005c7f68;
      }
      iVar4 = FUN_004c4ff0(iVar10);
      uVar8 = *(uint *)(iVar4 + 0x18) & 0xf;
      if (uVar8 == 10) {
        *(int *)(*piVar9 + 0x54) = iStack_30;
        iStack_30 = iStack_30 + 1;
      }
      else if (uVar8 == 9) {
        *(undefined4 *)(*piVar9 + 0x54) = 0;
      }
      else {
        *(undefined4 *)(*piVar9 + 0x54) = 0xffffffff;
      }
      cVar2 = FUN_004c52d0(&fStack_c,&local_2c);
      if (cVar2 == '\0') {
        cVar2 = FUN_004a0800(iVar10,&fStack_c,&local_2c);
        if (cVar2 != '\0') goto LAB_004971af;
        *(undefined1 *)(*piVar9 + 0x48) = 0;
      }
      else {
LAB_004971af:
        uVar8 = (**(code **)**(undefined4 **)(param_1 + 0x7e0))();
        if (local_2c == uVar8) {
          *(undefined1 *)(*piVar9 + 0x48) = 1;
          fStack_1c = *(float *)(param_1 + 0xf48);
          iVar4 = *piVar9;
          fStack_24 = fStack_c * fStack_1c;
          fStack_20 = fStack_8 * fStack_1c;
          fStack_1c = fStack_4 * fStack_1c;
          if (((*(float *)(iVar4 + 0x30) != fStack_24) || (*(float *)(iVar4 + 0x34) != fStack_20))
             || (*(float *)(iVar4 + 0x38) != fStack_1c)) {
            *(float *)(iVar4 + 0x30) = fStack_24;
            *(float *)(iVar4 + 0x34) = fStack_20;
            *(float *)(iVar4 + 0x38) = fStack_1c;
            local_36 = 1;
            bVar1 = true;
          }
        }
        else {
          *(undefined1 *)(*piVar9 + 0x48) = 0;
        }
      }
      iVar10 = iVar10 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar10 < iVar3);
  }
  if (iVar3 < 99) {
    piVar9 = (int *)(param_1 + 0x644 + iVar3 * 4);
    iVar3 = 99 - iVar3;
    do {
      if (*piVar9 != 0) {
        *(undefined1 *)(*piVar9 + 0x48) = 0;
      }
      piVar9 = piVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (bVar1) {
    FUN_004a0580();
  }
  iVar3 = FUN_004c4690();
  if (iVar3 != 0) {
    cVar2 = FUN_004c58e0();
    if (cVar2 != '\0') goto LAB_004972d6;
  }
  iVar3 = FUN_004c4690();
  if ((iVar3 == 0) || (*(char *)(param_1 + 0xbcc) == '\0')) {
    cVar2 = FUN_004c58e0();
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0xbcc) != '\0')) goto LAB_004972d6;
    *(undefined1 *)(param_1 + 0xbcc) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xbcc) = 0;
  }
  FUN_0049f7a0();
LAB_004972d6:
  if (DAT_006720c9 != '\0') {
    FUN_0049f7a0();
    FUN_0049a580();
  }
  iVar3 = FUN_004c4690();
  if (*(int *)(param_1 + 0xc7c) != iVar3) {
    uVar7 = FUN_004c4690();
    *(undefined4 *)(param_1 + 0xc7c) = uVar7;
    iVar3 = FUN_004c4690();
    cVar2 = '\x01' - (iVar3 != 0);
    if (*(char *)(param_1 + 0xbcc) != '\0') {
      cVar2 = '\x01';
    }
    (**(code **)(**(int **)(param_1 + 0x8fc) + 0xa8))(1,cVar2,0);
    (**(code **)(**(int **)(param_1 + 0x900) + 0xa8))(1,cVar2,0);
    FUN_0049f7a0();
    FUN_004975a0();
  }
  return local_36;
}

