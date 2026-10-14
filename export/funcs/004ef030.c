
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ef030(int param_1,IObjInspect *param_2,uint *param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  CSimple *this;
  int *piVar9;
  size_t sVar10;
  wchar_t *_Format;
  CShip *this_00;
  int *piVar11;
  float unaff_EBX;
  uint uVar12;
  undefined4 *puVar13;
  float unaff_EBP;
  float unaff_ESI;
  Watchable **ppWVar14;
  undefined4 unaff_EDI;
  undefined4 *puVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  undefined4 *puVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_44c;
  float fStack_448;
  float fStack_444;
  undefined4 *puStack_440;
  float fStack_43c;
  float fStack_438;
  undefined4 uStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  undefined4 *puStack_424;
  float fStack_420;
  float fStack_41c;
  undefined4 *puStack_418;
  float fStack_414;
  uint uStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  undefined1 auStack_400 [4];
  wchar_t *pwStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  BaseWatcher *pBStack_3f0;
  uint uStack_3ec;
  BaseWatcher *pBStack_3e8;
  Watchable *apWStack_3e4 [2];
  float fStack_3dc;
  float fStack_3d8;
  int iStack_3d4;
  int iStack_3d0;
  int iStack_3cc;
  int iStack_3c8;
  undefined4 auStack_3c4 [4];
  undefined4 auStack_3b4 [5];
  float fStack_3a0;
  float fStack_39c;
  undefined1 auStack_398 [8];
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  float fStack_384;
  float fStack_380;
  int iStack_37c;
  wchar_t awStack_36c [112];
  undefined1 auStack_28c [48];
  undefined1 auStack_25c [16];
  undefined1 auStack_24c [64];
  wchar_t awStack_20c [248];
  int *piStack_1c;
  uint *puStack_18;
  int *piStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bf0c0;
  piStack_c = ExceptionList;
  uVar12 = *param_3;
  ExceptionList = &piStack_c;
  if ((uVar12 & 0x7f0000) != 0) {
    ExceptionList = &piStack_c;
    iVar6 = (**(code **)(*(int *)param_2 + 0x150))();
    if (iVar6 == 0) {
      ExceptionList = piStack_c;
      return;
    }
    if ((*(uint *)(iVar6 + 0x4c) & 0x503) != 0x503) {
      ExceptionList = piStack_c;
      return;
    }
    fStack_43c = *(float *)(iVar6 + 0x104);
    iVar6 = Reputation::Vibe::GetAffiliation((int *)&fStack_43c,(uint *)&pBStack_3e8,false);
    if (iVar6 != 0) {
      ExceptionList = piStack_c;
      return;
    }
  }
  uStack_434 = (float)((uint)uStack_434 & 0xffffff);
  uVar7 = (**(code **)(*(int *)param_2 + 0x20))();
  cVar4 = FUN_004d4220(uVar7);
  if (cVar4 != '\0') {
    uVar12 = 0x200;
    uStack_434 = (float)CONCAT13(1,(undefined3)uStack_434);
  }
  pBStack_3e8 = (BaseWatcher *)FUN_0054baf0();
  uVar7 = (**(code **)(*(int *)param_2 + 0x20))();
  uVar5 = FUN_004cc880(uVar7);
  uStack_44c._0_3_ = CONCAT12(uVar5,(ushort)uStack_44c);
  if ((char)param_3[0xb] == '\0') {
    uStack_44c = (undefined4 *)(CONCAT22(uStack_44c._2_2_,(ushort)uStack_44c) & 0xffff00ff);
    if ((char)param_3[0xc] == '\0') goto LAB_004ef113;
  }
  uStack_44c._0_2_ = CONCAT11(1,(byte)uStack_44c);
LAB_004ef113:
  pwStack_3fc = (wchar_t *)0x3da3d70a;
  fStack_3f8 = 0.05;
  fStack_3f4 = 0.0;
  fStack_42c = 0.091;
  fStack_428 = 0.0;
  puStack_424 = (undefined4 *)0x0;
  fStack_438 = (float)_DAT_005c89b8 -
               ((float)_DAT_005c89b8 - (float)param_3[8] / DAT_005d8eec) * (float)_DAT_005cbf58;
  if (*(float *)(param_1 + 0x934) < _DAT_005d8f08) {
    if (*(float *)(param_1 + 0x934) == _DAT_005c7474) {
      FUN_005645c0(0x24);
    }
    fVar17 = (float10)FUN_0042d680();
    fVar17 = fVar17 + (float10)*(float *)(param_1 + 0x934);
    *(float *)(param_1 + 0x934) = (float)fVar17;
    fVar17 = fVar17 / (float10)_DAT_005d8f08;
    if (fVar17 < (float10)_DAT_005c75dc) {
      if (_DAT_005c94f8 < fStack_438) {
        fStack_438 = (float)(((float10)fStack_438 - (float10)_DAT_005c94f8) * fVar17 +
                            (float10)_DAT_005c94f8);
      }
      pwStack_3fc = (wchar_t *)(float)((float10)_DAT_005cb890 * fVar17);
      fStack_3f8 = (float)((float10)_DAT_005cb88c * fVar17);
      fVar18 = (float10)_DAT_005c7474 * fVar17;
      fStack_3f4 = (float)fVar18;
      fStack_42c = (float)(fVar17 * (float10)_DAT_005d964c);
      fStack_428 = (float)fVar18;
      puStack_424 = (undefined4 *)(float)fVar18;
    }
  }
  fVar20 = (float)param_3[2];
  auStack_3c4[0] = 0x3f800000;
  iStack_3d4 = 0x3f800000;
  apWStack_3e4[0] = (Watchable *)0x3f800000;
  iStack_3c8 = 0;
  iStack_3cc = 0;
  iStack_3d0 = 0;
  fStack_3d8 = 0.0;
  fStack_3dc = 0.0;
  apWStack_3e4[1] = (Watchable *)0x0;
  fStack_420 = (_DAT_0067dc9c / _DAT_0067dc70) * ((float)param_3[1] - _DAT_0067dc60);
  ppWVar14 = apWStack_3e4;
  puVar15 = auStack_3b4;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar15 = *ppWVar14;
    ppWVar14 = ppWVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  uStack_388 = 0;
  uStack_38c = 0;
  uStack_390 = 0;
  fStack_41c = (_DAT_0067dc9c / _DAT_0067dc74) * (fVar20 - _DAT_0067dc64);
  puStack_418 = (undefined4 *)-_DAT_0067dc9c;
  fVar20 = (float)_DAT_005d5060 / (float)puStack_418;
  fStack_448 = fStack_420 * fVar20;
  fStack_444 = fStack_41c * fVar20;
  puStack_440 = (undefined4 *)(fVar20 * (float)puStack_418);
  if (DAT_00674b6c == (int *)0x0) {
    DAT_00674b6c = (int *)FUN_005b73e0();
  }
  puVar15 = auStack_3b4;
  puVar19 = auStack_3b4;
  piVar11 = DAT_00674b6c;
  fVar20 = fStack_438;
  (**(code **)(*DAT_00674b6c + 0x10))(DAT_00674b6c,puVar19,puVar15,fStack_438);
  piVar9 = piStack_c;
  cVar4 = (char)((uint)piVar11 >> 0x18);
  puVar13 = (undefined4 *)(uVar12 & 0x200);
  puStack_424 = puVar13;
  fStack_3a0 = unaff_ESI;
  fStack_39c = unaff_EBP;
  if ((puVar13 == (undefined4 *)0x0) && (puStack_8[0x30] == '\0')) {
    puVar8 = (uint *)FUN_004eeea0(auStack_400,piStack_c);
  }
  else {
    puVar8 = &DAT_00679b80;
  }
  uStack_410 = *puVar8;
  if ((char)((uint)unaff_EDI >> 0x10) != '\0') {
    uStack_410 = DAT_00679ba4;
  }
  if (puVar13 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x7a0) != 0) {
      fStack_430 = -fStack_40c;
      fVar21 = fStack_448 * _DAT_005d845c;
      fStack_42c = fStack_408;
      fStack_414 = fStack_404 + unaff_EBX;
      fStack_428 = fStack_404;
      puStack_418 = (undefined4 *)(fStack_408 + unaff_EBP);
      fStack_41c = fStack_40c + unaff_ESI;
      uStack_44c = (undefined4 *)fVar21;
      FUN_00559900(*(int *)(param_1 + 0x7a0),&fStack_41c,&uStack_410,fVar21,1,0);
      fStack_414 = unaff_EBX - fStack_404;
      puStack_418 = (undefined4 *)(unaff_EBP - fStack_408);
      fStack_41c = unaff_ESI - fStack_40c;
      FUN_00559900(*(undefined4 *)(param_1 + 0x7a0),&fStack_41c,&uStack_410,fVar21,2,0);
      fStack_414 = fStack_428 + unaff_EBX;
      puStack_418 = (undefined4 *)(fStack_42c + unaff_EBP);
      fStack_41c = unaff_ESI + fStack_430;
      FUN_00559900(*(undefined4 *)(param_1 + 0x7a0),&fStack_41c,&uStack_410,fVar21,0,0);
      fStack_414 = unaff_EBX - fStack_428;
      puStack_418 = (undefined4 *)(unaff_EBP - fStack_42c);
      fStack_41c = unaff_ESI - fStack_430;
      FUN_00559900(*(undefined4 *)(param_1 + 0x7a0),&fStack_41c,&uStack_410,fVar21,3,0);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x7b4);
    if (iVar6 != 0) {
      puStack_440 = (undefined4 *)(fStack_448 * _DAT_005c94f8);
      uStack_44c = (undefined4 *)uStack_410;
      uVar5 = ftol();
      uStack_44c = (undefined4 *)CONCAT13(uVar5,(uint3)uStack_44c);
      FUN_00559900(iVar6,&stack0xfffffba8,&uStack_44c,puStack_440,0,0);
      piVar9 = piStack_c;
    }
  }
  if (((char)((uint)unaff_EDI >> 8) != '\0') && (puVar13 == (undefined4 *)0x0)) {
    fStack_414 = unaff_EBX - uStack_434;
    puStack_418 = (undefined4 *)(unaff_EBP - fStack_438);
    fStack_41c = unaff_ESI - fStack_43c;
    FUN_00559900(*(undefined4 *)(param_1 + 0x7b0),&fStack_41c,&uStack_410,0x3d23d70a,0,0);
    fStack_414 = uStack_434 + unaff_EBX;
    puStack_418 = (undefined4 *)(fStack_438 + unaff_EBP);
    fStack_41c = fStack_43c + unaff_ESI;
    FUN_00559900(*(undefined4 *)(param_1 + 0x7b0),&fStack_41c,&uStack_410,0x3d23d70a,1,0);
  }
  iVar6 = (**(code **)(*piVar9 + 0x150))();
  if ((((iVar6 == 0) || (((byte)*(uint *)(iVar6 + 0x4c) & 3) != 3)) ||
      (((*(uint *)(iVar6 + 0x4c) & 0x303) == 0x303 &&
       ((*(int *)(iVar6 + 0x88) != 0 && (*(char *)(*(int *)(iVar6 + 0x88) + 0x94) == '\0')))))) ||
     ((*(byte *)(iVar6 + 0xe0) & 3) != 0)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  this = (CSimple *)(**(code **)(*piVar9 + 0x150))();
  if ((this == (CSimple *)0x0) || (((byte)*(undefined4 *)(this + 0x4c) & 3) != 3)) {
    this = (CSimple *)0x0;
  }
  fStack_420 = 0.0;
  puStack_440 = (undefined4 *)0x0;
  if (((this != (CSimple *)0x0) &&
      (fStack_420 = CSimple::get_relative_health(this), (*(uint *)(this + 0x4c) & 0x103) == 0x103))
     && (FUN_004d4b50(this,&uStack_44c,&pwStack_3fc,&stack0xfffffba7),
        _DAT_005c7474 < (float)uStack_44c)) {
    puStack_440 = (undefined4 *)((float)pwStack_3fc / (float)uStack_44c);
  }
  if (puStack_424 != (undefined4 *)0x0) {
    fStack_3a0 = fStack_3a0 + _DAT_005d3e90;
    fStack_39c = fStack_39c - _DAT_005d845c;
  }
  if (DAT_00674b6c == (int *)0x0) {
    DAT_00674b6c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674b6c + 0x1c))(DAT_00674b6c,auStack_24c,auStack_3c4,&DAT_0067dbfc);
  FUN_00406880(auStack_25c);
  FUN_00422690(0,auStack_28c);
  FUN_00421670(8);
  FUN_00421b70(0,0,0,0xff);
  if (bVar16) {
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x784),0);
    FUN_00421cc0(*(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x788),
                 *(undefined4 *)(param_1 + 0x784),0);
    FUN_00421cc0(*(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x788),
                 *(undefined4 *)(param_1 + 0x78c),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x78c),0);
  }
  if (cVar4 != '\0') {
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x794),0);
    FUN_00421cc0(*(float *)(param_1 + 0x798) + *(float *)(param_1 + 0x790),
                 *(undefined4 *)(param_1 + 0x794),0);
    FUN_00421cc0(*(float *)(param_1 + 0x798) + *(float *)(param_1 + 0x790),
                 *(undefined4 *)(param_1 + 0x79c),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x79c),0);
  }
  if ((bVar16) && (_DAT_005c7474 < fStack_430)) {
    FUN_00421b70(DAT_00679ba8,DAT_00679ba8 >> 8 & 0xff,DAT_00679ba8 >> 0x10 & 0xff,0xff);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x784),0);
    FUN_00421cc0(fStack_430 * *(float *)(param_1 + 0x788) + *(float *)(param_1 + 0x780),
                 *(undefined4 *)(param_1 + 0x784),0);
    FUN_00421cc0(fStack_430 * *(float *)(param_1 + 0x788) + *(float *)(param_1 + 0x780),
                 *(undefined4 *)(param_1 + 0x78c),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x78c),0);
  }
  if ((cVar4 != '\0') && (_DAT_005c7474 < unaff_EBX)) {
    FUN_00421b70(DAT_00679b98,DAT_00679b98 >> 8 & 0xff,DAT_00679b98 >> 0x10 & 0xff,0xff);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x794),0);
    FUN_00421cc0(unaff_EBX * *(float *)(param_1 + 0x798) + *(float *)(param_1 + 0x790),
                 *(undefined4 *)(param_1 + 0x794),0);
    FUN_00421cc0(unaff_EBX * *(float *)(param_1 + 0x798) + *(float *)(param_1 + 0x790),
                 *(undefined4 *)(param_1 + 0x79c),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x79c),0);
  }
  FUN_00421690();
  if (bVar16) {
    FUN_00421670(7);
    FUN_00421b70((int)((DAT_00679ba8 & 0xff) * 3) >> 2,(int)((DAT_00679ba8 >> 8 & 0xff) * 3) >> 2,
                 (int)((DAT_00679ba8 >> 0x10 & 0xff) * 3) >> 2,0xff);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x784),0);
    FUN_00421cc0(*(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x788),
                 *(undefined4 *)(param_1 + 0x784),0);
    FUN_00421cc0(*(float *)(param_1 + 0x780) + *(float *)(param_1 + 0x788),
                 *(undefined4 *)(param_1 + 0x78c),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x78c),0);
    FUN_00421690();
  }
  if (cVar4 != '\0') {
    FUN_00421670(7);
    FUN_00421b70((int)((DAT_00679b98 & 0xff) * 3) >> 2,(int)((DAT_00679b98 >> 8 & 0xff) * 3) >> 2,
                 (int)((DAT_00679b98 >> 0x10 & 0xff) * 3) >> 2,0xff);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x794),0);
    FUN_00421cc0(*(float *)(param_1 + 0x798) + *(float *)(param_1 + 0x790),
                 *(undefined4 *)(param_1 + 0x794),0);
    FUN_00421cc0(*(float *)(param_1 + 0x798) + *(float *)(param_1 + 0x790),
                 *(undefined4 *)(param_1 + 0x79c),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x79c),0);
    FUN_00421690();
  }
  uStack_410 = *puStack_18;
  if ((uStack_410 & 0x200) == 0) {
    fStack_3dc = (*(float *)(param_1 + 0x77c) * _DAT_005c75e0 -
                 *(float *)(param_1 + 0x77c) * (float)_DAT_005c7720) * unaff_ESI + (float)puVar15;
    fVar21 = 0.0;
    apWStack_3e4[1] = (Watchable *)puVar19;
    fStack_3d8 = fVar20;
    iVar6 = (**(code **)(*piStack_1c + 0x150))();
    if (iVar6 != 0) {
      piVar9 = (int *)(**(code **)(*piStack_1c + 0x150))();
      fVar17 = (float10)(**(code **)(*piVar9 + 100))(auStack_398);
      fVar21 = (float)fVar17;
    }
    ppWVar14 = apWStack_3e4 + 1;
    uVar7 = ftol(ppWVar14);
    FUN_004eef50(&DAT_00674b54,fVar21,puStack_18,uVar7,ppWVar14);
    fStack_43c = (float)(**(code **)(*piStack_1c + 0x150))();
    if ((fStack_43c == 0.0) || ((*(uint *)((int)fStack_43c + 0x4c) & 0x503) != 0x503)) {
      fStack_43c = 0.0;
    }
    pwStack_3fc = (wchar_t *)0x0;
    fStack_3f8 = 0.0;
    iStack_4 = 0;
    bVar2 = (byte)uStack_44c;
    uStack_44c._0_2_ = (ushort)(byte)uStack_44c;
    if ((fStack_43c != 0.0) && (*(int *)((int)fStack_43c + 0xb4) != 0)) {
      uStack_44c._0_2_ = CONCAT11(1,bVar2);
    }
    if (this != (CSimple *)0x0) {
      fStack_430 = 1.4013e-45;
      if ((*(uint *)(this + 0x4c) & 0x803) == 0x803) {
        fStack_430 = *(float *)(this + 0xf0);
      }
      uStack_410 = 1;
      cVar4 = FUN_004d4c70(this);
      fVar20 = fStack_43c;
      if (cVar4 != '\0') {
        uStack_410 = 0;
      }
      bVar16 = (char)*(uint *)(this + 0xe0) < '\0';
      uVar3 = (ushort)uStack_44c;
      uStack_44c._0_3_ = (uint3)(ushort)uStack_44c;
      if (bVar16) {
        uStack_44c._0_3_ = CONCAT12(1,uVar3);
      }
      if (((*(int *)(param_1 + 0x844) != *(int *)(this + 0xb0)) ||
          (*(float *)(param_1 + 0x848) != fStack_430)) ||
         ((uint)(cVar4 == '\0') != *(uint *)(param_1 + 0x84c))) {
        bVar1 = false;
        if (((*(uint *)(this + 0x4c) & 0x103) == 0x103) && (*(int *)(this + 0x160) != 0)) {
          bVar1 = true;
        }
        if (((fStack_43c != 0.0) || (bVar1)) || ((bVar16 || ((*(uint *)(this + 0xe0) & 0x40) != 0)))
           ) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        cVar4 = FUN_004e8100(this,&pwStack_3fc,uVar7,0);
        if (cVar4 == '\0') {
          *(undefined4 *)(param_1 + 0x848) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x84c) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x844) = 0;
          *(undefined4 *)(param_1 + 0x850) = 0;
          FUN_004144f0();
        }
        else {
          awStack_20c[0] = L'\0';
          if (fVar20 == 0.0) {
            if (uStack_410 == 0) {
              uVar7 = FUN_004d4d50(this);
              iVar6 = FUN_004347e0(DAT_0067eca8,uVar7,awStack_36c,0x80);
              if (iVar6 == 0) {
                awStack_36c[0] = L'\0';
              }
              wcscpy(awStack_20c,awStack_36c);
            }
            else {
              wcscat(awStack_20c,pwStack_3fc);
            }
          }
          else {
            fStack_414 = *(float *)((int)fVar20 + 0x104);
            iVar6 = Reputation::Vibe::GetAffiliation((int *)&fStack_414,&uStack_3ec,false);
            if ((((iVar6 == 0) && (uVar12 = Reputation::get_short_name(uStack_3ec), uVar12 != 0)) &&
                (uVar12 != 0xffffffff)) && ((uVar12 != 0x30386 && (uVar12 != 0x303b8)))) {
              iVar6 = FUN_004347e0(DAT_0067eca8,uVar12,awStack_36c,0x80);
              if (iVar6 == 0) {
                awStack_36c[0] = L'\0';
              }
              sVar10 = wcslen(awStack_36c);
              if ((1 < sVar10) || (awStack_36c[0] != L' ')) {
                wcscat(awStack_20c,awStack_36c);
                wcscat(awStack_20c,L" - ");
              }
            }
            wcscat(awStack_20c,pwStack_3fc);
          }
          uVar7 = *(undefined4 *)(this + 0xb0);
          *(uint *)(param_1 + 0x84c) = uStack_410;
          *(undefined4 *)(param_1 + 0x844) = uVar7;
          *(float *)(param_1 + 0x848) = fStack_430;
          *(undefined4 *)(param_1 + 0x850) = 0;
          if (uStack_44c._1_1_ == '\0') {
            fStack_414 = DAT_005d8f0c;
            if (*(int *)(param_1 + 0x870) != *(int *)(param_1 + 0x8f4)) {
              *(int *)(param_1 + 0x870) = *(int *)(param_1 + 0x8f4);
              for (uVar12 = 0;
                  (iVar6 = *(int *)(param_1 + 0x864), iVar6 != 0 &&
                  (uVar12 < (uint)(*(int *)(param_1 + 0x868) - iVar6 >> 3))); uVar12 = uVar12 + 1) {
                (**(code **)(**(int **)(iVar6 + uVar12 * 8) + 8))(*(undefined4 *)(param_1 + 0x870));
              }
              *(undefined4 *)(param_1 + 0x87c) = 0;
            }
            FUN_004145d0(fStack_414,0xbf800000);
            FUN_00415860(awStack_20c);
          }
          else {
            fStack_414 = DAT_005d8f0c;
            if (*(int *)(param_1 + 0x8a4) != *(int *)(param_1 + 0x8f8)) {
              *(int *)(param_1 + 0x8a4) = *(int *)(param_1 + 0x8f8);
              for (uVar12 = 0;
                  (iVar6 = *(int *)(param_1 + 0x898), iVar6 != 0 &&
                  (uVar12 < (uint)(*(int *)(param_1 + 0x89c) - iVar6 >> 3))); uVar12 = uVar12 + 1) {
                (**(code **)(**(int **)(iVar6 + uVar12 * 8) + 8))(*(undefined4 *)(param_1 + 0x8a4));
              }
              *(undefined4 *)(param_1 + 0x8b0) = 0;
            }
            FUN_004145d0(fStack_414,0xbf800000);
            FUN_00415860(awStack_20c);
          }
        }
      }
      if (uStack_44c._2_1_ != '\0') {
        fVar17 = (float10)FUN_0042d680();
        fVar17 = fVar17 + (float10)*(float *)(param_1 + 0x850);
        *(float *)(param_1 + 0x850) = (float)fVar17;
        if ((float10)_DAT_005d49b0 < fVar17) {
          *(undefined4 *)(param_1 + 0x844) = 0;
        }
        fVar17 = (float10)FUN_0042d680();
        fVar17 = fVar17 + (float10)*(float *)(param_1 + 0x850);
        *(float *)(param_1 + 0x850) = (float)fVar17;
        if ((float10)_DAT_005d49b0 < fVar17) {
          *(undefined4 *)(param_1 + 0x844) = 0;
        }
      }
      cVar4 = uStack_434._3_1_;
      fStack_42c = fStack_448;
      puStack_424 = puStack_440;
      fStack_428 = (*(float *)(param_1 + 0x77c) * _DAT_005c75e0 +
                   *(float *)(param_1 + 0x77c) * (float)_DAT_005d5b58) * fStack_438 + fStack_444;
      if (uStack_434._3_1_ != '\0') {
        fStack_428 = fStack_428 + _DAT_005d011c;
      }
      piVar9 = *(int **)(param_1 + 0x40c);
      if (uStack_44c._1_1_ == '\0') {
        uVar7 = FUN_0058a5d0();
        iVar6 = param_1 + 0x854;
      }
      else {
        uVar7 = FUN_0058a5d0();
        iVar6 = param_1 + 0x888;
      }
      FUN_0058a5e0(iVar6);
      (**(code **)(*piVar9 + 0xa8))(5,&fStack_42c,0);
      (**(code **)(*piVar9 + 0x34))();
      FUN_0058a5e0(uVar7);
      if ((char)param_3[0xc] != '\0') {
        fStack_42c = fStack_448;
        puStack_424 = puStack_440;
        if (cVar4 == '\0') {
          fVar20 = *(float *)(param_1 + 0x77c) * _DAT_005c75e0 +
                   *(float *)(param_1 + 0x77c) * (float)_DAT_005cf100;
        }
        else {
          fVar20 = *(float *)(param_1 + 0x77c);
        }
        fStack_428 = fVar20 * fStack_438 + fStack_444;
        piVar9 = *(int **)(param_1 + 0x40c);
        uVar7 = FUN_0058a5d0();
        FUN_0058a5e0(param_1 + 0x810);
        (**(code **)(*piVar9 + 0xa8))(5,&fStack_42c,0);
        (**(code **)(*piVar9 + 0x34))();
        FUN_0058a5e0(uVar7);
      }
    }
    if (fStack_43c != 0.0) {
      _Format = (wchar_t *)(**(code **)(*(int *)param_2 + 0x144))();
      if (_Format != *(wchar_t **)(param_1 + 0x8bc)) {
        awStack_36c[0] = L'\0';
        if ((-1 < (int)_Format) && ((int)_Format < 10000)) {
          swprintf(awStack_36c,0x5d0ec4,_Format);
          *(wchar_t **)(param_1 + 0x8bc) = _Format;
        }
        fStack_414 = DAT_005d8f0c;
        if (*(int *)(param_1 + 0x8dc) != *(int *)(param_1 + 0x8f4)) {
          *(int *)(param_1 + 0x8dc) = *(int *)(param_1 + 0x8f4);
          for (uVar12 = 0;
              (iVar6 = *(int *)(param_1 + 0x8d0), iVar6 != 0 &&
              (uVar12 < (uint)(*(int *)(param_1 + 0x8d4) - iVar6 >> 3))); uVar12 = uVar12 + 1) {
            (**(code **)(**(int **)(iVar6 + uVar12 * 8) + 8))(*(undefined4 *)(param_1 + 0x8dc));
          }
          *(undefined4 *)(param_1 + 0x8e8) = 0;
        }
        FUN_004145d0(fStack_414,0xbf800000);
        FUN_00415860(awStack_36c);
      }
      piVar9 = *(int **)(param_1 + 0x40c);
      puStack_418 = puStack_440;
      fStack_41c = (*(float *)(param_1 + 0x77c) * _DAT_005c75e0 -
                   *(float *)(param_1 + 0x77c) * (float)_DAT_005d9630) * fStack_438 + fStack_444;
      fStack_420 = (*(float *)(param_1 + 0x778) * _DAT_005c75e0 -
                   *(float *)(param_1 + 0x778) * (float)_DAT_005d4ef0) * fStack_438 + fStack_448;
      uVar7 = FUN_0058a5d0();
      FUN_0058a5e0(param_1 + 0x8c0);
      (**(code **)(*piVar9 + 0xa8))(5,&fStack_420,0);
      (**(code **)(*piVar9 + 0x34))();
      FUN_0058a5e0(uVar7);
    }
    if (((uint)pBStack_3f0 & 0xfdff) == 0) {
      if ((((pBStack_3e8 == (BaseWatcher *)0x0) || (pBStack_3e8 == (BaseWatcher *)0xfffffff4)) ||
          (this_00 = *(CShip **)(pBStack_3e8 + 0x10), this_00 == (CShip *)0x0)) ||
         ((*(uint *)(this_00 + 0x4c) & 0x503) != 0x503)) {
        this_00 = (CShip *)0x0;
      }
      bVar16 = CShip::get_tgt_lead_fire_pos(this_00,param_2,(Vector *)&fStack_384);
      if (bVar16) {
        apWStack_3e4[0] = (Watchable *)0x0;
        apWStack_3e4[1] = (Watchable *)0x0;
        iStack_4._0_1_ = 2;
        if ((Watchable *)(param_2 + 8) != (Watchable *)0x0) {
          BaseWatcher::set_pointer((BaseWatcher *)apWStack_3e4,(Watchable *)(param_2 + 8));
        }
        fStack_3dc = fStack_384;
        fStack_3d8 = fStack_380;
        iStack_3d4 = iStack_37c;
        piVar9 = (int *)FUN_0040f130();
        (**(code **)(*piVar9 + 0x44))(piVar9,&iStack_3d0,&fStack_3dc);
        iVar6 = *(int *)(param_1 + 0x914);
        piVar9 = *(int **)(iVar6 + 4);
        iStack_4._0_1_ = 3;
        piVar11 = operator_new(0x28);
        *piVar11 = iVar6;
        if (piVar9 == (int *)0x0) {
          piVar9 = piVar11;
        }
        piVar11[1] = (int)piVar9;
        *(int **)(iVar6 + 4) = piVar11;
        pBStack_3f0 = (BaseWatcher *)(piVar11 + 2);
        *(int **)piVar11[1] = piVar11;
        pBStack_3e8 = pBStack_3f0;
        if (pBStack_3f0 != (BaseWatcher *)0x0) {
          *(undefined4 *)pBStack_3f0 = 0;
          piVar11[3] = 0;
          iStack_4._0_1_ = 5;
          if (((apWStack_3e4[0] != (Watchable *)0x0) && (apWStack_3e4[0] != (Watchable *)0x8)) &&
             (apWStack_3e4[0] != (Watchable *)0x0)) {
            BaseWatcher::set_pointer(pBStack_3f0,apWStack_3e4[0]);
          }
          piVar11[4] = (int)fStack_3dc;
          piVar11[5] = (int)fStack_3d8;
          piVar11[6] = iStack_3d4;
          piVar11[7] = iStack_3d0;
          piVar11[8] = iStack_3cc;
          piVar11[9] = iStack_3c8;
        }
        *(int *)(param_1 + 0x918) = *(int *)(param_1 + 0x918) + 1;
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        if (apWStack_3e4[0] != (Watchable *)0x0) {
          BaseWatcher::set_pointer((BaseWatcher *)apWStack_3e4,(Watchable *)0x0);
        }
      }
    }
    if (pwStack_3fc != (wchar_t *)0x0) {
      free(pwStack_3fc);
    }
  }
  else {
    fStack_448 = *(float *)(param_1 + 0x77c) * _DAT_005d9638 * unaff_ESI + (float)puVar15;
    puVar13 = &uStack_44c;
    uStack_44c = puVar19;
    fStack_444 = fVar20;
    uVar7 = ftol(puVar13);
    FUN_004eef50(&DAT_00674b54,0,puStack_18,uVar7,puVar13);
    piVar9 = *(int **)(param_1 + 0x40c);
    fStack_43c = *(float *)(param_1 + 0x77c) * _DAT_005d8d40 * unaff_ESI + (float)puVar15;
    puStack_440 = puVar19;
    fStack_438 = fVar20;
    if (*(char *)((int)puStack_18 + 0x31) == '\0') {
      uVar7 = FUN_0058a5d0();
      param_1 = param_1 + 0x810;
    }
    else {
      uVar7 = FUN_0058a5d0();
      param_1 = param_1 + 0x7dc;
    }
    FUN_0058a5e0(param_1);
    (**(code **)(*piVar9 + 0xa8))(5,&puStack_440,0);
    (**(code **)(*piVar9 + 0x34))();
    FUN_0058a5e0(uVar7);
  }
  ExceptionList = piStack_c;
  return;
}

