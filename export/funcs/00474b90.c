
bool __fastcall FUN_00474b90(int *param_1)

{
  CShip *this;
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  IObjRW *pIVar5;
  uint uVar6;
  ISystem *pIVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  size_t sVar12;
  undefined4 *puVar13;
  int iVar14;
  uint unaff_EBP;
  undefined4 uVar15;
  byte bVar16;
  int *piVar17;
  undefined4 uStack_1d4;
  int *piStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int *piStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  int *piStack_1b0;
  undefined1 auStack_1ac [4];
  int *local_1a8 [2];
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  int iStack_154;
  undefined4 uStack_144;
  undefined1 uStack_140;
  int iStack_12c;
  int iStack_124;
  undefined4 uStack_114;
  undefined1 uStack_110;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  byte bStack_98;
  undefined1 auStack_94 [112];
  void *pvStack_24;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bbc33;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_1a8[0] = param_1;
  if (((((DAT_0066dc58 == '\0') &&
        (ExceptionList = &pvStack_c, cVar3 = FUN_004c4810(), cVar3 == '\0')) &&
       (iVar4 = FUN_0054baf0(), iVar4 != 0)) &&
      ((iVar4 != -0xc && (this = *(CShip **)(iVar4 + 0x10), this != (CShip *)0x0)))) &&
     (((*(uint *)(this + 0x4c) & 0x503) == 0x503 &&
      (pIVar5 = CShip::get_target(this), pIVar5 != (IObjRW *)0x0)))) {
    DAT_0066dc54 = (**(code **)(*(int *)pIVar5 + 0x20))();
    DAT_0066dc58 = '\x01';
  }
  (**(code **)(*param_1 + 0x98))("Interface\\NeuroNet\\Inventory\\CHAR_infowindow.cmp",0);
  FUN_005a1340(param_1 + 0x20);
  uStack_1d4 = 0x3c9374bc;
  piStack_1d0 = (int *)0x3c9374bc;
  iStack_1cc = 0;
  uStack_1c0 = 0x3ecb4396;
  uStack_1bc = 0x3e73b646;
  uStack_1b8 = 0;
  iVar4 = FUN_005a0c90("PlayerInfoCloseButton","Interface\\NeuroNet\\Inventory\\x.3db",0,
                       "ui_select_item",0,&uStack_1c0,0,&uStack_1d4,0,0,0,0,0x409,0,0);
  param_1[0xcb] = iVar4;
  uStack_1d4 = 0xbed60419;
  piStack_1d0 = (int *)0x3e83126f;
  iStack_1cc = 0;
  iVar4 = FUN_005a0e30("PlayerInfoTitle","PageHeader",&uStack_1d4,0,0x3f560419,0x3cf5c28f,0x3fd33333
                       ,0x389,1,0,1);
  param_1[0xcd] = iVar4;
  uStack_1d4 = 0xbed16873;
  piStack_1d0 = (int *)0x3e54fdf4;
  iStack_1cc = 0;
  iVar4 = FUN_005a10e0("PlayerInfoText",0x3f4b851f,0x3ee8f5c3,&uStack_1d4,1);
  param_1[0xcc] = iVar4;
  if (DAT_0066dc58 == '\0') {
    iStack_1c8 = 0;
    uVar6 = FUN_004c4830();
    pIVar7 = Universe::get_system(uVar6);
    if (pIVar7 != (ISystem *)0x0) {
      iStack_1c8 = (**(code **)(*(int *)pIVar7 + 0xc))();
    }
    bVar16 = (byte)(unaff_EBP >> 0x18);
    uStack_1d4 = CONCAT31(uStack_1d4._1_3_,bVar16);
    piStack_1d0 = operator_new(0xc);
    *piStack_1d0 = (int)piStack_1d0;
    piStack_1d0[1] = (int)piStack_1d0;
    iStack_1cc = 0;
    pvStack_c = (void *)0x0;
    piVar8 = (int *)StyleNode::StyleNode((StyleNode *)&uStack_1c0,0x9ca4);
    pvStack_c._0_1_ = 1;
    puVar9 = (undefined4 *)(**(code **)(*piVar8 + 0x1c))();
    puVar13 = (undefined4 *)piStack_1d0[1];
    piVar8 = piStack_1d0 + 1;
    pvStack_c._0_1_ = 2;
    piStack_1c4 = piStack_1d0;
    puVar10 = operator_new(0xc);
    *puVar10 = piStack_1c4;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = puVar10;
    }
    puVar10[1] = puVar13;
    *piVar8 = (int)puVar10;
    *(undefined4 **)puVar10[1] = puVar10;
    FUN_0046ea00(puVar10 + 2,&stack0xfffffe28);
    iStack_1cc = iStack_1cc + 1;
    pvStack_c._0_1_ = 1;
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)(1);
    }
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    StyleNode::~StyleNode((StyleNode *)&uStack_1c0);
    cVar3 = FUN_004c4810();
    if (cVar3 == '\0') {
      puVar13 = (undefined4 *)FUN_0054baf0();
      if (puVar13 != (undefined4 *)0x0) {
        FUN_004347e0(DAT_0067eca8,iStack_1c8,&DAT_0066dc60,DAT_006119f8);
        wcscpy(&DAT_0066fc60,&DAT_0066dc60);
        FUN_004347e0(DAT_0067eca8,0x561,&DAT_0066dc60,DAT_006119f8);
        wcscat(&DAT_0066fc60,&DAT_0066dc60);
        uVar15 = (**(code **)*puVar13)(&DAT_0066dc60,DAT_006119f8);
        FUN_0048dc10(uVar15);
        wcscat(&DAT_0066fc60,&DAT_0066dc60);
        uVar15 = 0;
        puVar9 = &uStack_1d4;
        sVar12 = wcslen(&DAT_0066fc60);
        FUN_0057e2c0(&DAT_0066fc60,sVar12,puVar9,uVar15);
        uVar15 = (**(code **)*puVar13)(1,0,0);
        piVar8 = (int *)FUN_004a1b50(pIVar7,uVar15);
        if (piVar8 != (int *)0x0) {
          wcscpy(&DAT_0066fc60,L"\n\n");
          uVar15 = 0;
          puVar13 = &uStack_1d4;
          sVar12 = wcslen(&DAT_0066fc60);
          FUN_0057e2c0(&DAT_0066fc60,sVar12,puVar13,uVar15);
          uVar15 = (**(code **)(*piVar8 + 0x84))(&uStack_1d4);
          FUN_0057da40(uVar15);
          wcscpy(&DAT_0066fc60,L"<RDL><TEXT><PARA/></TEXT></RDL>");
          uVar15 = 0;
          puVar13 = &uStack_1d4;
          sVar12 = wcslen(&DAT_0066fc60);
          FUN_0057e2c0(&DAT_0066fc60,sVar12,puVar13,uVar15);
          uVar15 = (**(code **)(*piVar8 + 0x88))(&uStack_1d4);
          FUN_0057da40(uVar15);
        }
      }
    }
    else {
      iVar4 = FUN_0043bbe0();
      if ((iVar4 != 0) && (iStack_1c8 != 0)) {
        FUN_004347e0(DAT_0067eca8,0x55c,auStack_94,0x80);
        iVar11 = DAT_006119f8 / 2;
        FUN_004347e0(DAT_0067eca8,iVar4,&DAT_0066dc60,iVar11);
        FUN_004347e0(DAT_0067eca8,iStack_1c8,&DAT_0066dc60 + iVar11,DAT_006119f8 / 2);
        swprintf(&DAT_0066fc60,(size_t)auStack_94,&DAT_0066dc60);
        uVar15 = 0;
        piVar8 = &iStack_1c8;
        sVar12 = wcslen(&DAT_0066fc60);
        FUN_0057e2c0(&DAT_0066fc60,sVar12,piVar8,uVar15);
        piStack_1d0._0_3_ = (uint3)(ushort)piStack_1d0;
        puVar13 = (undefined4 *)FUN_004c4900();
        uStack_1bc = *puVar13;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        piVar8 = (int *)(**(code **)(*(int *)pIVar7 + 0x3c))();
        piVar17 = (int *)0x0;
        if (piVar8 != (int *)0x0) {
          do {
            cVar3 = (**(code **)(*(int *)pIVar7 + 0x40))(piVar17,auStack_1ac);
            bVar2 = bStack_98;
            iVar4 = iStack_154;
            if ((cVar3 != '\0') && (iStack_124 == iStack_1c8)) {
              uVar6 = CreateID((char *)local_1a8);
              FUN_004c4da0(uVar6,&stack0xfffffe27,0,0);
              unaff_EBP = (uint)CONCAT11(bVar16,bVar2 | bVar16) << 0x10;
              if (iVar4 != 0) goto LAB_00475099;
              break;
            }
            piVar17 = (int *)((int)piVar17 + 1);
          } while (piVar17 < piVar8);
        }
        piVar17 = (int *)0x0;
        if (piVar8 != (int *)0x0) {
          do {
            cVar3 = (**(code **)(*(int *)pIVar7 + 0x40))(piVar17,auStack_1ac);
            if ((cVar3 != '\0') && (iStack_12c == iStack_1c8)) {
              bVar16 = (byte)(unaff_EBP >> 0x18);
              uVar6 = CreateID((char *)local_1a8);
              FUN_004c4da0(uVar6,&stack0xfffffe27,0,0);
              unaff_EBP = (uint)CONCAT11(bVar16,bStack_98 | bVar16) << 0x10;
              iVar4 = iStack_154;
              if (iStack_154 != 0) goto LAB_00475099;
              break;
            }
            piVar17 = (int *)((int)piVar17 + 1);
          } while (piVar17 < piVar8);
        }
        FUN_00476c40();
        if (DAT_0066dc0c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (DAT_0066dc10 - DAT_0066dc0c) / 0x14;
        }
        iVar11 = 0;
        if (0 < iVar4) {
          iVar14 = 0;
          do {
            if (*(int *)(DAT_0066dc0c + iVar14) == iStack_1c8) {
              iVar4 = *(int *)(DAT_0066dc0c + 0x10 + iVar11 * 0x14);
              if (iVar4 != 0) {
LAB_00475099:
                wcscpy(&DAT_0066fc60,L"\n\n");
                uVar15 = 0;
                puVar13 = &uStack_1d4;
                sVar12 = wcslen(&DAT_0066fc60);
                FUN_0057e2c0(&DAT_0066fc60,sVar12,puVar13,uVar15);
                FUN_0057da40(iVar4,&uStack_1d4);
                piStack_1c4 = (int *)((uint)piStack_1c4 & 0xffffff00);
                uStack_1b4 = uStack_1b4 & 0xffffff00;
                uStack_1c0 = uStack_1c0 & 0xffffff00;
                cVar3 = FUN_00458890(iVar4,&stack0xfffffe28);
                if (cVar3 != '\0') {
                  if (((unaff_EBP & 0x40000) != 0) && (piVar17[2] != 0)) {
                    piStack_1c4 = (int *)CONCAT31(piStack_1c4._1_3_,1);
                  }
                  if (((unaff_EBP & 0x80000) != 0) && (piVar17[1] != 0)) {
                    uStack_1c0 = CONCAT31(uStack_1c0._1_3_,1);
                  }
                  if (((unaff_EBP & 0x100000) != 0) && (piVar17[3] != 0)) {
                    uStack_1b4 = CONCAT31(uStack_1b4._1_3_,1);
                  }
                  FUN_00476080(&uStack_1d4,iStack_1c8,piStack_1c4,uStack_1c0,uStack_1b4);
                  if (((unaff_EBP & 0x20000) != 0) && (*piVar17 != 0)) {
                    wcscpy(&DAT_0066fc60,L"<RDL><TEXT><PARA/></TEXT></RDL>");
                    uVar15 = 0;
                    puVar13 = &uStack_1d4;
                    sVar12 = wcslen(&DAT_0066fc60);
                    FUN_0057e2c0(&DAT_0066fc60,sVar12,puVar13,uVar15);
                    FUN_0057da40(*piVar17,&uStack_1d4);
                  }
                }
              }
              break;
            }
            iVar11 = iVar11 + 1;
            iVar14 = iVar14 + 0x14;
          } while (iVar11 < iVar4);
        }
      }
    }
    FUN_0057b370();
    FUN_0057b3e0(&uStack_1d4);
    piVar17 = piStack_1d0;
    pvStack_c = (void *)0xffffffff;
    piVar8 = (int *)*piStack_1d0;
    while (piVar8 != piVar17) {
      piVar1 = (int *)*piVar8;
      *(int *)piVar8[1] = *piVar8;
      *(int *)(*piVar8 + 4) = piVar8[1];
      FUN_0045eeb0();
      FUN_005b7e1d(piVar8);
      iStack_1cc = iStack_1cc + -1;
      piVar8 = piVar1;
    }
    FUN_005b7e1d(piStack_1d0);
    param_1 = piStack_1b0;
  }
  else {
    iVar4 = FUN_005416c0(DAT_0066dc54,0);
    if (iVar4 != 0) {
      FUN_004754a0(iVar4);
    }
    DAT_0066dc54 = 0;
    DAT_0066dc58 = '\0';
  }
  uStack_1d4 = 0;
  piStack_1d0 = (int *)0x0;
  iStack_1cc = 0;
  (**(code **)(*param_1 + 0x7c))(0,0,0);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  cVar3 = FUN_004b5060(uStack_14,uStack_10);
  ExceptionList = pvStack_24;
  return cVar3 != '\0';
}

