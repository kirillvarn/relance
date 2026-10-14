
/* WARNING: Removing unreachable block (ram,0x004ed1ad) */
/* WARNING: Removing unreachable block (ram,0x004ed1b0) */
/* WARNING: Removing unreachable block (ram,0x004ed1c1) */
/* WARNING: Removing unreachable block (ram,0x004ed1c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ed180(int param_1)

{
  uchar *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  int *piVar8;
  CSolar *pCVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  ID_String *pIVar14;
  uint *puVar15;
  int iVar16;
  CSolar *pCVar17;
  float10 fVar18;
  CSolar *pCStack_88;
  CSolar *pCStack_84;
  int local_80;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  CSolar *pCStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  int *piStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  *(int *)(param_1 + 0x36c) = *(int *)(param_1 + 0x368) + 0x24;
  puVar1 = *(uchar **)(param_1 + 0x374);
  IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0x370),puVar1,*(ulong *)(param_1 + 0x378));
  *(uchar **)(param_1 + 0x378) = puVar1;
  local_50 = FUN_0054baf0();
  local_7c = 0;
  if ((local_50 != 0) &&
     (((local_50 == -0xc || (local_7c = *(int *)(local_50 + 0x10), local_7c == 0)) ||
      ((*(uint *)(local_7c + 0x4c) & 0x503) != 0x503)))) {
    local_7c = 0;
  }
  *(undefined1 *)(param_1 + 0x3ad) = 0;
  *(undefined1 *)(param_1 + 0x3af) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  iVar5 = FUN_004c4690();
  if (((0 < iVar5) && (pfVar6 = (float *)FUN_004c46a0(0), pfVar6 != (float *)0x0)) &&
     (fVar7 = (float)FUN_004c4830(), pfVar6[3] == fVar7)) {
    local_78 = *pfVar6;
    local_74 = pfVar6[1];
    local_70 = pfVar6[2];
    local_80 = 0x42200000;
    if ((pfVar6[4] != 0.0) && (piVar8 = (int *)FUN_005416c0(pfVar6[4],0), piVar8 != (int *)0x0)) {
      *(float *)(param_1 + 0x39c) = pfVar6[4];
      iVar5 = (**(code **)(*piVar8 + 0x150))();
      local_80 = *(undefined4 *)(iVar5 + 0x38);
      local_78 = *(float *)(iVar5 + 0x2c);
      local_74 = *(float *)(iVar5 + 0x30);
      local_70 = *(float *)(iVar5 + 0x34);
    }
    *(float *)(param_1 + 0x390) = local_78;
    *(float *)(param_1 + 0x394) = local_74;
    *(float *)(param_1 + 0x398) = local_70;
    pfVar6 = (float *)(param_1 + 0x3a0);
    *(undefined1 *)(param_1 + 0x3af) = 1;
    uVar2 = FUN_004ecfd0(&local_78,local_80,param_1 + 900,pfVar6,param_1 + 0x3a8);
    bVar4 = *pfVar6 < _DAT_005d3e40;
    *(undefined1 *)(param_1 + 0x3ad) = uVar2;
    if (bVar4) {
      *pfVar6 = 30.0;
    }
  }
  *(undefined1 *)(param_1 + 0x3e1) = 0;
  *(undefined1 *)(param_1 + 0x3e3) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  iVar5 = FUN_004c4fb0();
  if ((((0 < iVar5) && (iVar5 = FUN_004c4ff0(0), iVar5 != 0)) &&
      (cVar3 = FUN_004c52d0(&fStack_68,&pCStack_84), cVar3 != '\0')) &&
     (pCVar9 = (CSolar *)FUN_004c4830(), pCStack_84 == pCVar9)) {
    *(float *)(param_1 + 0x3c4) = fStack_68;
    *(float *)(param_1 + 0x3c8) = fStack_64;
    *(undefined1 *)(param_1 + 0x3e3) = 1;
    *(float *)(param_1 + 0x3cc) = fStack_60;
    piVar8 = (int *)FUN_004c5110();
    if (piVar8 == (int *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*piVar8 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x3d0) = uVar10;
    pfVar6 = (float *)(param_1 + 0x3d4);
    uVar2 = FUN_004ecfd0(&fStack_68,0x42200000,param_1 + 0x3b8,pfVar6,param_1 + 0x3dc);
    bVar4 = *pfVar6 < _DAT_005d3e40;
    *(undefined1 *)(param_1 + 0x3e1) = uVar2;
    if (bVar4) {
      *pfVar6 = 30.0;
    }
  }
  piStack_54 = (int *)0x0;
  pCStack_84 = (CSolar *)0x0;
  *(undefined4 *)(param_1 + 0x3ec) = 0x4cbebc20;
  *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x408) = 0;
  FUN_0040f130();
  iVar5 = *(int *)(param_1 + 0x36c);
  local_80 = 0;
  if (0 < *(int *)(iVar5 + 0x800)) {
    do {
      iVar5 = *(int *)(iVar5 + local_80 * 8);
      if ((iVar5 != 0) && (piVar8 = (int *)(iVar5 + -8), piVar8 != (int *)0x0)) {
        fStack_68 = 0.0;
        fStack_64 = 0.0;
        uStack_48 = 0;
        uStack_3c = 0;
        fStack_60 = 0.0;
        uStack_44 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_34 = 0;
        uStack_4c = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1f = 0;
        uStack_1e = 0;
        uStack_1d = 1;
        uStack_1c = 0;
        uStack_1b = 0;
        FUN_004f2da0(*(undefined4 *)(param_1 + 0x378),1,&uStack_4c);
        iVar5 = *(int *)(param_1 + 0x378);
        puVar15 = (uint *)(iVar5 + -0x34);
        *puVar15 = 0;
        *(undefined1 *)(iVar5 + -0x10) = 0;
        *(undefined1 *)(iVar5 + -8) = 0;
        if (local_7c != 0) {
          puVar11 = (undefined4 *)(**(code **)*piVar8)();
          *(undefined4 *)(iVar5 + -0x24) = *puVar11;
          *(undefined4 *)(iVar5 + -0x20) = puVar11[1];
          *(undefined4 *)(iVar5 + -0x1c) = puVar11[2];
          if ((*(char *)(param_1 + 0x3e3) == '\0') ||
             (iVar12 = (**(code **)(*piVar8 + 0x20))(), iVar12 != *(int *)(param_1 + 0x3d0))) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
          *(undefined1 *)(iVar5 + -4) = uVar2;
          if ((*(char *)(param_1 + 0x3af) == '\0') ||
             (iVar12 = (**(code **)(*piVar8 + 0x20))(), iVar12 != *(int *)(param_1 + 0x39c))) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
          *(undefined1 *)(iVar5 + -3) = uVar2;
          uVar10 = (**(code **)(*piVar8 + 0x20))();
          *(undefined4 *)(iVar5 + -0x18) = uVar10;
          iVar12 = (**(code **)(*piVar8 + 0x88))(&uStack_58);
          if (iVar12 == 0) {
            iVar12 = (**(code **)(*piVar8 + 0x150))();
            if (((iVar12 != 0) && ((*(uint *)(iVar12 + 0x4c) & 0x503) == 0x503)) &&
               (*(char *)(iVar12 + 0x2bd) != '\0')) {
              *(undefined1 *)(iVar5 + -6) = 1;
            }
            if ((uStack_58 & 0x20004000) == 0) {
              if ((uStack_58 & 0x7f0000) == 0) {
                if ((uStack_58 & 0xfdff) != 0) {
                  uVar10 = 2;
                  goto LAB_004ed5de;
                }
                if ((uStack_58 & 0x10000000) != 0) {
                  uVar10 = 7;
                  goto LAB_004ed5de;
                }
              }
              else {
                uVar10 = 1;
LAB_004ed5de:
                uVar10 = (**(code **)(*piVar8 + 0x20))(uVar10);
                iVar12 = FUN_005416c0(uVar10);
                if (iVar12 != 0) {
                  *(undefined1 *)(iVar5 + -8) = *(undefined1 *)(iVar12 + 0xa8);
                }
              }
              (**(code **)(*piVar8 + 0x14))(auStack_18);
              piVar13 = (int *)(**(code **)(*piVar8 + 0x150))();
              fVar18 = (float10)(**(code **)(*piVar13 + 100))(auStack_10);
              fStack_5c = (float)fVar18;
              cVar3 = FUN_004ecfd0(auStack_18,fStack_5c,&local_78,&pCStack_88,&pCStack_6c);
              if (cVar3 == '\0') {
                *puVar15 = uStack_58;
                *(undefined1 *)(iVar5 + -7) = 0;
                *(CSolar **)(iVar5 + -0xc) = pCStack_6c;
              }
              else {
                *puVar15 = uStack_58;
                *(float *)(iVar5 + -0x30) = local_78;
                *(float *)(iVar5 + -0x2c) = local_74;
                *(float *)(iVar5 + -0x28) = local_70;
                *(CSolar **)(iVar5 + -0x14) = pCStack_88;
                *(CSolar **)(iVar5 + -0xc) = pCStack_6c;
                *(undefined1 *)(iVar5 + -7) = 1;
                fVar7 = (float)DAT_00616840;
                if ((((local_78 - (float)pCStack_88 <= fVar7) &&
                     (fVar7 < local_78 + (float)pCStack_88 !=
                      (fVar7 == local_78 + (float)pCStack_88))) &&
                    ((fVar7 = (float)DAT_00616844, local_74 - (float)pCStack_88 <= fVar7 &&
                     (fVar7 < local_74 + (float)pCStack_88 !=
                      (fVar7 == local_74 + (float)pCStack_88))))) &&
                   (((piStack_54 != (int *)0x0 &&
                     ((float)pCStack_88 < *(float *)(param_1 + 0x3ec) ==
                      ((float)pCStack_88 == *(float *)(param_1 + 0x3ec)))) ||
                    (((float)pCStack_88 != *(float *)(param_1 + 0x3ec) ||
                     ((float)pCStack_6c <= (float)pCStack_84)))))) {
                  *(int *)(param_1 + 1000) = local_80;
                  pCStack_84 = pCStack_6c;
                  *(CSolar **)(param_1 + 0x3ec) = pCStack_88;
                  piStack_54 = piVar8;
                }
              }
            }
          }
        }
      }
      iVar5 = *(int *)(param_1 + 0x36c);
      local_80 = local_80 + 1;
    } while (local_80 < *(int *)(iVar5 + 0x800));
  }
  if (-1 < *(int *)(param_1 + 1000)) {
    *(undefined1 *)(*(int *)(param_1 + 1000) * 0x34 + 0x24 + *(int *)(param_1 + 0x374)) = 1;
    return;
  }
  if ((((local_7c != 0) && (pCVar9 = *(CSolar **)(param_1 + 0x3f0), pCVar9 != (CSolar *)0x0)) &&
      (((byte)*(undefined4 *)(pCVar9 + 0x4c) & 3) == 3)) &&
     ((*(uint *)(pCVar9 + 0xe0) & 0x20004000) == 0)) {
    pCStack_84 = pCVar9;
    fVar18 = (float10)(**(code **)(*(int *)pCVar9 + 100))(&fStack_68);
    fStack_60 = (float)fVar18;
    pfVar6 = (float *)(**(code **)*piStack_54)();
    if (SQRT((fStack_68 - pfVar6[1]) * (fStack_68 - pfVar6[1]) +
             (fStack_64 - pfVar6[2]) * (fStack_64 - pfVar6[2]) +
             ((float)pCStack_6c - *pfVar6) * ((float)pCStack_6c - *pfVar6)) / fStack_60 <
        _DAT_005d95ac) {
      pCVar17 = pCVar9;
      if ((*(uint *)(pCVar9 + 0x4c) & 0x303) == 0x303) {
        pIVar14 = CSolar::GetParentNickname(pCVar9);
        bVar4 = ID_String::IsEmpty(pIVar14);
        pCVar17 = pCStack_88;
        if (!bVar4) {
          pIVar14 = CSolar::GetParentNickname(pCVar9);
          iVar5 = FUN_005416c0(*(undefined4 *)pIVar14,2);
          pCVar17 = pCStack_88;
          if (iVar5 != 0) {
            if (iVar5 == -0xc) {
              return;
            }
            pCVar17 = *(CSolar **)(iVar5 + 0x10);
            if (pCVar17 == (CSolar *)0x0) {
              return;
            }
            if ((*(uint *)(pCVar17 + 0x4c) & 0x303) != 0x303) {
              return;
            }
          }
        }
      }
      iVar5 = *(int *)(param_1 + 0x36c);
      *(CSolar **)(param_1 + 0x408) = pCVar17;
      iVar12 = *(int *)(pCVar17 + 0xb0);
      iVar16 = 0;
      if (0 < *(int *)(iVar5 + 0x800)) {
        while (((iVar5 = *(int *)(iVar5 + iVar16 * 8), iVar5 == 0 ||
                (piVar8 = (int *)(iVar5 + -8), piVar8 == (int *)0x0)) ||
               (iVar5 = (**(code **)(*piVar8 + 0x20))(), iVar5 != iVar12))) {
          iVar5 = *(int *)(param_1 + 0x36c);
          iVar16 = iVar16 + 1;
          if (*(int *)(iVar5 + 0x800) <= iVar16) {
            return;
          }
        }
        *(int *)(param_1 + 1000) = iVar16;
        *(undefined1 *)(iVar16 * 0x34 + 0x24 + *(int *)(param_1 + 0x374)) = 1;
      }
    }
  }
  return;
}

