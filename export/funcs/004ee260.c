
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ee260(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  IObjRW *pIVar7;
  float *pfVar8;
  undefined4 uVar9;
  uint uVar10;
  CShip *this;
  int iVar11;
  size_t sVar12;
  wchar_t *_Source;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  float10 fVar16;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  int iStack_414;
  CShip *pCStack_410;
  uint uStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  int iStack_3fc;
  int iStack_3f8;
  uint uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  CShip *pCStack_3d0;
  undefined1 uStack_3cc;
  undefined4 uStack_3c8;
  undefined1 uStack_3c4;
  undefined1 uStack_3c3;
  undefined1 uStack_3c2;
  undefined1 uStack_3c1;
  undefined1 uStack_3c0;
  undefined1 uStack_3bf;
  int iStack_3bc;
  undefined1 *puStack_3b8;
  undefined4 uStack_3b4;
  uint uStack_3b0;
  int iStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined1 auStack_36c [4];
  undefined1 auStack_368 [12];
  uint uStack_35c;
  undefined1 auStack_358 [44];
  undefined1 auStack_32c [20];
  wchar_t awStack_318 [128];
  wchar_t awStack_218 [256];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bf045;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x40c) + 0xa8))(1,0,0);
  bVar1 = false;
  DAT_00674b74 = 0;
  FUN_00422950(&DAT_0067dbf8);
  bVar4 = false;
  bVar2 = false;
  bVar3 = false;
  iVar6 = FUN_0054baf0();
  if ((*(int *)(param_1 + 0x368) == 0) || (iVar6 == 0)) goto LAB_004eedd9;
  if (iVar6 == -0xc) {
    ExceptionList = pvStack_18;
    return;
  }
  pCStack_410 = *(CShip **)(iVar6 + 0x10);
  if (pCStack_410 == (CShip *)0x0) {
    ExceptionList = pvStack_18;
    return;
  }
  if ((*(uint *)(pCStack_410 + 0x4c) & 0x503) != 0x503) {
    ExceptionList = pvStack_18;
    return;
  }
  pIVar7 = CShip::get_target(pCStack_410);
  uStack_3f4 = 0;
  if (pIVar7 == (IObjRW *)0x0) {
    *(undefined4 *)(param_1 + 0x930) = 0;
LAB_004ee3de:
    if (*(char *)(param_1 + 0x3af) != '\0') {
      if (*(char *)(param_1 + 0x3ad) == '\0') {
        FUN_004f0620(param_1 + 0x380);
      }
      else {
        FUN_004ebde0(param_1 + 0x380,&DAT_00679b80,0);
        piVar14 = *(int **)(param_1 + 0x40c);
        fStack_418 = (float)_DAT_005d5060 / -_DAT_0067dc9c;
        fStack_420 = (_DAT_0067dc9c / _DAT_0067dc70) * (*(float *)(param_1 + 900) - _DAT_0067dc60) *
                     fStack_418;
        fStack_41c = (_DAT_0067dc9c / _DAT_0067dc74) *
                     ((*(float *)(param_1 + 0x388) -
                      *(float *)(param_1 + 0x3a0) * (float)_DAT_005d9618) - _DAT_0067dc64) *
                     fStack_418;
        fStack_418 = fStack_418 * -_DAT_0067dc9c;
        uVar9 = FUN_0058a5d0();
        FUN_0058a5e0(param_1 + 0x7dc);
        (**(code **)(*piVar14 + 0xa8))(5,&fStack_420,0);
        (**(code **)(*piVar14 + 0x34))();
        FUN_0058a5e0(uVar9);
      }
    }
  }
  else {
    uStack_3f4 = (**(code **)(*(int *)pIVar7 + 0x20))();
    if (*(uint *)(param_1 + 0x930) != uStack_3f4) {
      *(undefined4 *)(param_1 + 0x934) = 0;
      *(uint *)(param_1 + 0x930) = uStack_3f4;
    }
    if ((((*(char *)(param_1 + 0x3af) != '\0') &&
         (pfVar8 = (float *)(*(code *)**(undefined4 **)pIVar7)(),
         *pfVar8 == *(float *)(param_1 + 0x390))) && (pfVar8[1] == *(float *)(param_1 + 0x394))) &&
       (pfVar8[2] == *(float *)(param_1 + 0x398))) {
      bVar1 = true;
      bVar2 = true;
      bVar3 = true;
    }
    bVar4 = false;
    if (((*(char *)(param_1 + 0x3e3) != '\0') &&
        (pfVar8 = (float *)(*(code *)**(undefined4 **)pIVar7)(),
        *pfVar8 == *(float *)(param_1 + 0x3c4))) &&
       ((pfVar8[1] == *(float *)(param_1 + 0x3c8) && (pfVar8[2] == *(float *)(param_1 + 0x3cc))))) {
      bVar2 = true;
      bVar4 = true;
      bVar3 = true;
    }
    if (!bVar1) goto LAB_004ee3de;
  }
  if ((!bVar4) && (*(char *)(param_1 + 0x3e3) != '\0')) {
    if (*(char *)(param_1 + 0x3e1) == '\0') {
      FUN_004f0620(param_1 + 0x3b4);
    }
    else {
      FUN_004ebde0(param_1 + 0x3b4,&DAT_00679b80,1);
      piVar14 = *(int **)(param_1 + 0x40c);
      fStack_418 = (float)_DAT_005d5060 / -_DAT_0067dc9c;
      fStack_420 = (_DAT_0067dc9c / _DAT_0067dc70) * (*(float *)(param_1 + 0x3b8) - _DAT_0067dc60) *
                   fStack_418;
      fStack_41c = (_DAT_0067dc9c / _DAT_0067dc74) *
                   ((*(float *)(param_1 + 0x3bc) -
                    *(float *)(param_1 + 0x3d4) * (float)_DAT_005d9618) - _DAT_0067dc64) *
                   fStack_418;
      fStack_418 = fStack_418 * -_DAT_0067dc9c;
      uVar9 = FUN_0058a5d0();
      FUN_0058a5e0(param_1 + 0x810);
      (**(code **)(*piVar14 + 0xa8))(5,&fStack_420,0);
      (**(code **)(*piVar14 + 0x34))();
      FUN_0058a5e0(uVar9);
    }
  }
  iVar6 = *(int *)(param_1 + 0x36c);
  iStack_414 = 0;
  if (0 < *(int *)(iVar6 + 0x800)) {
    iStack_3fc = 0;
    do {
      uVar15 = uStack_3f4;
      iVar6 = *(int *)(iVar6 + iStack_414 * 8);
      if (iVar6 == 0) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = (int *)(iVar6 + -8);
      }
      iVar6 = *(int *)(param_1 + 0x374) + iStack_3fc;
      if (piVar14 != (int *)0x0) {
        uVar10 = (**(code **)(*piVar14 + 0x20))();
        if (uVar10 == uVar15) {
          bVar2 = true;
        }
        if (*(char *)(iVar6 + 0x2d) == '\0') {
          uVar10 = (**(code **)(*piVar14 + 0x20))();
          FUN_004f0900(piVar14,iVar6,uVar10 == uVar15);
        }
        else if (uVar10 != uVar15) {
          if ((*(char *)(iVar6 + 0x2e) != '\0') && (*(float *)(iVar6 + 0x28) < _DAT_005d95a8)) {
            fStack_408 = (_DAT_0067dc9c / _DAT_0067dc70) * (*(float *)(iVar6 + 4) - _DAT_0067dc60);
            fStack_404 = (_DAT_0067dc9c / _DAT_0067dc74) *
                         (((*(float *)(iVar6 + 8) - *(float *)(iVar6 + 0x20)) - _DAT_005d55b4) -
                         _DAT_0067dc64);
            fStack_400 = -_DAT_0067dc9c;
            this = (CShip *)(**(code **)(*piVar14 + 0x150))();
            if ((this != (CShip *)0x0) && ((*(uint *)(this + 0x4c) & 0x503) == 0x503)) {
              uStack_40c = *(uint *)(this + 0xb0);
              FUN_00432240(&iStack_3f8,&uStack_40c);
              if (iStack_3f8 == *(int *)(param_1 + 0x900)) {
                uVar9 = FUN_004144b0();
                uStack_10 = 0;
                uStack_35c = uStack_40c;
                FUN_004f2910(uVar9);
                uStack_10._0_1_ = 1;
                FUN_004f2a80(&fStack_420,&uStack_35c);
                puStack_3b8 = auStack_358;
                uStack_10._0_1_ = 3;
                FUN_004144f0();
                uStack_10 = CONCAT31(uStack_10._1_3_,2);
                FUN_00445d70();
                FUN_00444e20();
                uStack_10 = 5;
                FUN_004144f0();
                uStack_10 = CONCAT31(uStack_10._1_3_,4);
                FUN_00445dc0(uStack_38c,uStack_388);
                FUN_005b7e1d(uStack_38c);
                uStack_38c = 0;
                uStack_388 = 0;
                uStack_384 = 0;
                uStack_10 = 0xffffffff;
                FUN_00444e20();
                FUN_0041bd10(&iStack_3bc,&uStack_40c);
                if ((iStack_3bc == *(int *)(param_1 + 0x900)) ||
                   (uStack_40c < *(uint *)(iStack_3bc + 0xc))) {
                  iStack_3ac = *(int *)(param_1 + 0x900);
                  piVar14 = &iStack_3ac;
                }
                else {
                  piVar14 = &iStack_3bc;
                }
                iVar6 = *piVar14;
                uVar15 = 0;
                puStack_3b8 = *(undefined1 **)(this + 0x104);
                iStack_3f8 = iVar6;
                iVar11 = Reputation::Vibe::GetAffiliation((int *)&puStack_3b8,&uStack_3b0,false);
                if (iVar11 == 0) {
                  uVar15 = Reputation::get_short_name(uStack_3b0);
                }
                awStack_218[0] = L'\0';
                if ((((uVar15 != 0) && (uVar15 != 0xffffffff)) && (uVar15 != 0x30386)) &&
                   (uVar15 != 0x303b8)) {
                  iVar11 = FUN_004347e0(DAT_0067eca8,uVar15,awStack_318,0x80);
                  if (iVar11 == 0) {
                    awStack_318[0] = L'\0';
                  }
                  sVar12 = wcslen(awStack_318);
                  if ((1 < sVar12) || (awStack_318[0] != L' ')) {
                    wcscat(awStack_218,awStack_318);
                    wcscat(awStack_218,L" - ");
                  }
                }
                _Source = (wchar_t *)CShip::get_pilot_name(this);
                wcscat(awStack_218,_Source);
                uStack_3b4 = DAT_005d8f0c;
                if (*(int *)(iVar6 + 0x2c) != *(int *)(param_1 + 0x8f8)) {
                  *(int *)(iVar6 + 0x2c) = *(int *)(param_1 + 0x8f8);
                  for (uVar15 = 0;
                      (iVar11 = *(int *)(iVar6 + 0x20), iVar11 != 0 &&
                      (uVar15 < (uint)(*(int *)(iVar6 + 0x24) - iVar11 >> 3))); uVar15 = uVar15 + 1)
                  {
                    (**(code **)(**(int **)(iVar11 + uVar15 * 8) + 8))
                              (*(undefined4 *)(iVar6 + 0x2c));
                  }
                  *(undefined4 *)(iVar6 + 0x38) = 0;
                }
                FUN_004145d0(uStack_3b4,0xbf800000);
                FUN_00415860(awStack_218);
              }
              piVar14 = *(int **)(param_1 + 0x40c);
              iVar6 = iStack_3f8 + 0x10;
              uVar9 = FUN_0058a5d0();
              FUN_0058a5e0(iVar6);
              (**(code **)(*piVar14 + 0xa8))(5,&stack0xfffffbd4,0);
              (**(code **)(*piVar14 + 0x34))();
              FUN_0058a5e0(uVar9);
            }
          }
        }
        else if (!bVar3) {
          FUN_004ef030(piVar14,iVar6);
        }
      }
      iVar6 = *(int *)(param_1 + 0x36c);
      iStack_414 = iStack_414 + 1;
      iStack_3fc = iStack_3fc + 0x34;
    } while (iStack_414 < *(int *)(iVar6 + 0x800));
  }
  if (((!bVar2) || (bVar3)) && (pIVar7 = CShip::get_target(pCStack_410), pIVar7 != (IObjRW *)0x0)) {
    uStack_3ec = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    uStack_3e4 = 0;
    uStack_3dc = 0;
    uStack_3d8 = 0;
    uStack_3f0 = 0;
    fStack_408 = 0.0;
    fStack_404 = 0.0;
    fStack_400 = 0.0;
    uStack_3d4 = 0;
    pCStack_3d0 = (CShip *)0x0;
    uStack_3cc = 0;
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    uStack_3c3 = 0;
    uStack_3c2 = 0;
    uStack_3c1 = 1;
    uStack_3c0 = 0;
    uStack_3bf = 0;
    (**(code **)(*(int *)pIVar7 + 0x88))(&uStack_3f0);
    puVar13 = (undefined4 *)(*(code *)**(undefined4 **)pIVar7)();
    uStack_3e4 = *puVar13;
    uStack_3e0 = puVar13[1];
    uStack_3dc = puVar13[2];
    if ((uStack_3f4 & 0x107ffdff) != 0) {
      uVar9 = (**(code **)(*(int *)pIVar7 + 0x20))(0);
      iVar6 = FUN_005416c0(uVar9);
      if (iVar6 != 0) {
        uStack_3c8 = CONCAT31(uStack_3c8._1_3_,*(undefined1 *)(iVar6 + 0xa8));
      }
    }
    iVar6 = (**(code **)(*(int *)pIVar7 + 0x150))();
    if (((iVar6 != 0) && ((*(uint *)(iVar6 + 0x4c) & 0x503) == 0x503)) &&
       (*(char *)(iVar6 + 0x2bd) != '\0')) {
      uStack_3c8._0_3_ = CONCAT12(1,(undefined2)uStack_3c8);
    }
    (**(code **)(*(int *)pIVar7 + 0x14))(auStack_36c);
    piVar14 = (int *)(**(code **)(*(int *)pIVar7 + 0x150))();
    fVar16 = (float10)(**(code **)(*piVar14 + 100))(auStack_32c);
    pCStack_410 = (CShip *)(float)fVar16;
    cVar5 = FUN_004ecfd0(auStack_368,pCStack_410,&uStack_3a8,&pCStack_410,&iStack_414);
    if (cVar5 == '\0') {
      uStack_3c8 = iStack_414;
      if (((*(char *)(param_1 + 0x3e3) == '\0') ||
          (pfVar8 = (float *)(*(code *)**(undefined4 **)pIVar7)(),
          *pfVar8 != *(float *)(param_1 + 0x3c4))) ||
         ((pfVar8[1] != *(float *)(param_1 + 0x3c8) ||
          (uStack_3c0 = 1, pfVar8[2] != *(float *)(param_1 + 0x3cc))))) {
        uStack_3c0 = 0;
      }
      if ((((*(char *)(param_1 + 0x3af) == '\0') ||
           (pfVar8 = (float *)(*(code *)**(undefined4 **)pIVar7)(),
           *pfVar8 != *(float *)(param_1 + 0x390))) || (pfVar8[1] != *(float *)(param_1 + 0x394)))
         || (uStack_3bf = 1, pfVar8[2] != *(float *)(param_1 + 0x398))) {
        uStack_3bf = 0;
      }
      FUN_004f0900(pIVar7,&uStack_3f0,1);
    }
    else {
      uStack_3e4 = uStack_3a0;
      uStack_3ec = uStack_3a8;
      uStack_3e8 = uStack_3a4;
      pCStack_3d0 = pCStack_410;
      uStack_3c8 = iStack_414;
      if (((*(char *)(param_1 + 0x3e3) == '\0') ||
          (pfVar8 = (float *)(*(code *)**(undefined4 **)pIVar7)(),
          *pfVar8 != *(float *)(param_1 + 0x3c4))) ||
         ((pfVar8[1] != *(float *)(param_1 + 0x3c8) ||
          (uStack_3c0 = 1, pfVar8[2] != *(float *)(param_1 + 0x3cc))))) {
        uStack_3c0 = 0;
      }
      if (((*(char *)(param_1 + 0x3af) == '\0') ||
          (pfVar8 = (float *)(*(code *)**(undefined4 **)pIVar7)(),
          *pfVar8 != *(float *)(param_1 + 0x390))) ||
         ((pfVar8[1] != *(float *)(param_1 + 0x394) ||
          (uStack_3bf = 1, pfVar8[2] != *(float *)(param_1 + 0x398))))) {
        uStack_3bf = 0;
      }
      FUN_004ef030(pIVar7,&uStack_3f0);
    }
  }
LAB_004eedd9:
  (**(code **)(**(int **)(param_1 + 0x40c) + 0xa8))(1,1,0);
  ExceptionList = pvStack_18;
  return;
}

