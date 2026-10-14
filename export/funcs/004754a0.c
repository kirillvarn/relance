
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004754a0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  CSimple *this;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  size_t sVar12;
  wchar_t *pwVar13;
  uint uVar14;
  undefined4 *puVar15;
  GoodInfo *pGVar16;
  undefined4 unaff_EBX;
  int unaff_EBP;
  uint *puVar17;
  wchar_t **ppwVar18;
  undefined4 *puStack_244;
  undefined4 uStack_240;
  uint auStack_23c [2];
  uint uStack_234;
  uint uStack_230;
  wchar_t *pwStack_22c;
  int *piStack_228;
  float fStack_224;
  int *piStack_220;
  void *pvStack_21c;
  undefined4 uStack_218;
  int local_210;
  wchar_t awStack_20c [120];
  wchar_t awStack_11c [130];
  int *piStack_18;
  undefined1 uStack_14;
  int *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  cVar8 = (char)((uint)unaff_EBX >> 0x18);
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bbc6e;
  local_c = ExceptionList;
  if (param_2 == (int *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  local_210 = param_1;
  this = (CSimple *)(**(code **)(*param_2 + 0x150))();
  if (this == (CSimple *)0x0) {
    ExceptionList = local_c;
    return;
  }
  if (((byte)*(undefined4 *)(this + 0x4c) & 3) != 3) {
    ExceptionList = local_c;
    return;
  }
  uStack_230 = *(uint *)(this + 0xe0);
  uStack_234 = 0;
  pwStack_22c = (wchar_t *)CONCAT31(pwStack_22c._1_3_,uStack_240._3_1_);
  piStack_228 = operator_new(0xc);
  *piStack_228 = (int)piStack_228;
  piStack_228[1] = (int)piStack_228;
  fStack_224 = 0.0;
  uStack_4 = 0;
  piVar9 = (int *)StyleNode::StyleNode((StyleNode *)&pvStack_21c,0x9ca4);
  uStack_4._0_1_ = 1;
  puStack_244 = (undefined4 *)(**(code **)(*piVar9 + 0x1c))();
  piVar9 = piStack_228 + 1;
  uStack_4._0_1_ = 2;
  iVar10 = FUN_0042a7e0(piStack_228,piStack_228[1]);
  *piVar9 = iVar10;
  **(int **)(iVar10 + 4) = iVar10;
  FUN_0046ea00(iVar10 + 8,&puStack_244);
  fStack_224 = (float)((int)fStack_224 + 1);
  uStack_4._0_1_ = 1;
  if (puStack_244 != (undefined4 *)0x0) {
    (**(code **)*puStack_244)(1);
    puStack_244 = (undefined4 *)0x0;
  }
  uStack_4 = (uint)uStack_4._1_3_ << 8;
  StyleNode::~StyleNode((StyleNode *)&pvStack_21c);
  bVar6 = FUN_004d4d00(this);
  uStack_240 = CONCAT13(bVar6,(undefined3)uStack_240);
  DAT_0066fc60 = 0;
  if ((bVar6 & 1) == 0) {
    uVar11 = FUN_004d4d50();
    iVar10 = FUN_004347e0(DAT_0067eca8,uVar11,awStack_20c,0x80);
    if (iVar10 == 0) {
      awStack_20c[0] = L'\0';
    }
    wcscat(&DAT_0066fc60,awStack_20c);
    (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
    (**(code **)(**(int **)(param_1 + 0x334) + 0xa8))(0x1d,&DAT_0066fc60,0);
    FUN_004347e0(DAT_0067eca8,0xd6ef,&DAT_0066fc60,DAT_006119f8);
    uVar11 = 0;
    ppwVar18 = &pwStack_22c;
    sVar12 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar12,ppwVar18,uVar11);
    goto LAB_00475d39;
  }
  uVar11 = FUN_005472a0(this);
  iVar10 = FUN_004347e0(DAT_0067eca8,uVar11,awStack_20c,0x80);
  if (iVar10 == 0) {
    awStack_20c[0] = L'\0';
  }
  wcscat(&DAT_0066fc60,awStack_20c);
  (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
  (**(code **)(**(int **)(param_1 + 0x334) + 0xa8))(0x1d,&DAT_0066fc60,0);
  DAT_0066fc60 = 0;
  iVar10 = FUN_0054baf0();
  pwStack_22c = (wchar_t *)0x0;
  piStack_228 = (int *)0x0;
  uStack_14 = 3;
  FUN_005472d0(this,&pwStack_22c);
  if ((pwStack_22c != (wchar_t *)0x0) && (*pwStack_22c != L'\0')) {
    FUN_004347e0(DAT_0067eca8,0x454,&DAT_0066dc60,DAT_006119f8);
    wcscat(&DAT_0066fc60,&DAT_0066dc60);
    wcscat(&DAT_0066fc60,pwStack_22c);
    wcscat(&DAT_0066fc60,L"\n");
  }
  if ((iVar10 != 0) && ((uStack_240 & 0x7f0100) != 0)) {
    iVar10 = FUN_0045a490(iVar10,local_c);
    FUN_004347e0(DAT_0067eca8,0x455,&DAT_0066dc60,DAT_006119f8);
    wcscat(&DAT_0066fc60,&DAT_0066dc60);
    if (iVar10 == -1) {
      uVar11 = 0x466;
LAB_004757fa:
      FUN_004347e0(DAT_0067eca8,uVar11,&DAT_0066dc60,DAT_006119f8);
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
    }
    else {
      if (iVar10 == 0) {
        uVar11 = 0x467;
        goto LAB_004757fa;
      }
      if (iVar10 == 1) {
        uVar11 = 0x468;
        goto LAB_004757fa;
      }
    }
    wcscat(&DAT_0066fc60,L"\n");
  }
  if ((uStack_240 & 0x7f0000) != 0) {
    fStack_224 = CSimple::get_max_hit_pts(this);
    CSimple::get_hit_pts(this);
    pwVar13 = (wchar_t *)ftol();
    FUN_004347e0(DAT_0067eca8,0x457,&DAT_0066dc60,DAT_006119f8);
    wcscat(&DAT_0066fc60,&DAT_0066dc60);
    swprintf(&DAT_0066dc60,0x5d0a48,pwVar13);
    wcscat(&DAT_0066fc60,&DAT_0066dc60);
    cVar8 = '\0';
    uStack_240 = 0;
    if (((*(uint *)(this + 0x4c) & 0x103) == 0x103) &&
       (FUN_004d4b50(this,&stack0xfffffdb8,&uStack_240,0), _DAT_005c7474 < 0.0)) {
      pwVar13 = (wchar_t *)ftol();
      FUN_004347e0(DAT_0067eca8,0x464,&DAT_0066dc60,DAT_006119f8);
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
      swprintf(&DAT_0066dc60,0x5d0a48,pwVar13);
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
    }
    if (((*(uint *)(this + 0x4c) & 0x503) == 0x503) &&
       (uVar14 = CShip::get_group_name((CShip *)this), uVar14 != 0)) {
      FUN_004347e0(DAT_0067eca8,0x456,&DAT_0066dc60,DAT_006119f8);
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
      iVar10 = FUN_004347e0(DAT_0067eca8,uVar14,awStack_11c,0x80);
      if (iVar10 == 0) {
        awStack_11c[0] = L'\0';
      }
      wcscat(&DAT_0066fc60,awStack_11c);
      wcscat(&DAT_0066fc60,L"\n");
      fStack_224 = *(float *)(this + 0x104);
      Reputation::Vibe::GetAffiliation((int *)&fStack_224,&uStack_230,false);
      puVar15 = (undefined4 *)Reputation::get_info_card(uStack_230);
      if (puVar15 != (undefined4 *)0x0) {
        wcscat(&DAT_0066fc60,L"\n");
        puStack_244 = puVar15;
      }
    }
  }
  uVar14 = uStack_240;
  if (((uStack_240 & 0x200) != 0) &&
     (cVar7 = FUN_004f42a0(&stack0xfffffdbb,&stack0xfffffdb4), cVar7 != '\0')) {
    if (cVar8 == '\0') {
      iVar10 = FUN_004c4ff0(unaff_EBP);
      if (iVar10 != 0) {
        FUN_0041c970(&DAT_0066dc60,DAT_006119f8);
        wcscat(&DAT_0066fc60,&DAT_0066dc60);
        wcscat(&DAT_0066fc60,L"\n");
      }
    }
    else {
      FUN_004347e0(DAT_0067eca8,0x465,&DAT_0066dc60,DAT_006119f8);
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
      swprintf(&DAT_0066dc60,0x5d0a48,(wchar_t *)(unaff_EBP + 1));
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
    }
  }
  piVar9 = local_c;
  if ((uVar14 & 0x10000000) != 0) {
    (**(code **)(*(int *)piStack_220[0xcd] + 0xa8))(0x1d,&DAT_0066fc60,0);
    iVar10 = (**(code **)(*piStack_18 + 0x150))();
    piVar9 = piStack_18;
    if (((iVar10 != 0) && ((*(uint *)(iVar10 + 0x4c) & 0x803) == 0x803)) &&
       (iVar10 = *(int *)(iVar10 + 0xec), iVar10 != 0)) {
      pGVar16 = GoodList::find_by_archetype(*(uint *)(iVar10 + 8));
      if (pGVar16 == (GoodInfo *)0x0) {
        puStack_244 = *(undefined4 **)(iVar10 + 0x18);
      }
      else {
        puStack_244 = *(undefined4 **)(pGVar16 + 0x8c);
      }
    }
  }
  if (DAT_0066fc60 != 0) {
    uVar11 = 0;
    puVar17 = auStack_23c;
    sVar12 = wcslen(&DAT_0066fc60);
    FUN_0057e2c0(&DAT_0066fc60,sVar12,puVar17,uVar11);
  }
  if (puStack_244 != (undefined4 *)0x0) {
    FUN_0057da40(puStack_244,auStack_23c);
  }
  iVar10 = (**(code **)(*piVar9 + 0x150))();
  if ((iVar10 != 0) && ((*(uint *)(iVar10 + 0x4c) & 0x103) == 0x103)) {
    piStack_220 = *(int **)(iVar10 + 0x104);
    puStack_244 = (undefined4 *)0x0;
    Reputation::Vibe::GetInfocard((int *)&piStack_220,(uint *)&puStack_244);
    if (puStack_244 != (undefined4 *)0x0) {
      FUN_0057da40(puStack_244,&pwStack_22c);
      wcscpy(&DAT_0066fc60,L"\n");
      uVar11 = 0;
      ppwVar18 = &pwStack_22c;
      sVar12 = wcslen(&DAT_0066fc60);
      FUN_0057e2c0(&DAT_0066fc60,sVar12,ppwVar18,uVar11);
      iVar10 = *(int *)(iVar10 + 0x160);
      cVar8 = FUN_00458890(puStack_244,&piStack_220);
      uVar14 = uStack_240;
      if ((cVar8 != '\0') && (iVar10 != 0)) {
        uVar2 = uStack_234 >> 8;
        uStack_234 = uStack_234 & 0xffffff00;
        uVar4 = auStack_23c[0] >> 8;
        auStack_23c[0] = auStack_23c[0] & 0xffffff00;
        uVar3 = uStack_230 >> 8;
        uStack_230 = uStack_230 & 0xffffff00;
        if ((uStack_240 & 0x4000000) != 0) {
          uStack_234 = CONCAT31((int3)uVar2,1);
        }
        if ((uStack_240 & 0x8000000) != 0) {
          uStack_230 = CONCAT31((int3)uVar3,1);
        }
        if ((uStack_240 & 0x10000000) != 0) {
          auStack_23c[0] = CONCAT31((int3)uVar4,1);
        }
        FUN_00476080(&pwStack_22c,iVar10,uStack_234,uStack_230,auStack_23c[0]);
        wcscpy(&DAT_0066fc60,L"\n");
        uVar11 = 0;
        ppwVar18 = &pwStack_22c;
        sVar12 = wcslen(&DAT_0066fc60);
        FUN_0057e2c0(&DAT_0066fc60,sVar12,ppwVar18,uVar11);
        if (((uVar14 & 0x2000000) != 0) && (*piStack_220 != 0)) {
          FUN_0057da40(*piStack_220,&pwStack_22c);
          wcscpy(&DAT_0066fc60,L"\n");
          uVar11 = 0;
          ppwVar18 = &pwStack_22c;
          sVar12 = wcslen(&DAT_0066fc60);
          FUN_0057e2c0(&DAT_0066fc60,sVar12,ppwVar18,uVar11);
        }
      }
    }
  }
  uStack_4 = uStack_4 & 0xffffff00;
  if (pvStack_21c != (void *)0x0) {
    free(pvStack_21c);
    pvStack_21c = (void *)0x0;
    uStack_218 = 0;
  }
LAB_00475d39:
  FUN_0057b370();
  FUN_0057b3e0(&pwStack_22c);
  FUN_00579a40();
  piVar5 = piStack_228;
  uStack_4 = 0xffffffff;
  piVar9 = (int *)*piStack_228;
  while (piVar9 != piVar5) {
    piVar1 = (int *)*piVar9;
    *(int *)piVar9[1] = *piVar9;
    *(int *)(*piVar9 + 4) = piVar9[1];
    FUN_0045eeb0();
    FUN_005b7e1d(piVar9);
    fStack_224 = (float)((int)fStack_224 + -1);
    piVar9 = piVar1;
  }
  FUN_005b7e1d(piStack_228);
  ExceptionList = local_c;
  return;
}

