
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004b7440(int *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  Ship *pSVar6;
  uint uVar7;
  int iVar8;
  GoodInfoList *pGVar9;
  GoodInfo *pGVar10;
  undefined4 uVar11;
  int *piVar12;
  float10 fVar13;
  char *pcStack_78c;
  char *pcStack_788;
  char *pcStack_784;
  char *pcStack_780;
  GoodInfo **ppGStack_77c;
  int **ppiStack_778;
  int **ppiStack_774;
  undefined4 *puStack_770;
  undefined4 *puStack_76c;
  char *pcStack_768;
  GoodInfo *pGStack_738;
  int iStack_734;
  int iStack_730;
  undefined4 uStack_72c;
  GoodInfo *pGStack_728;
  undefined4 uStack_724;
  int *piStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  GoodInfo *pGStack_714;
  GoodInfo *pGStack_710;
  undefined4 local_70c;
  undefined4 *puStack_708;
  undefined4 local_704;
  int *local_700;
  float local_6fc;
  undefined4 uStack_6f8;
  undefined4 *puStack_6f0;
  int iStack_6e8;
  undefined1 local_6e1;
  undefined4 uStack_6e0;
  undefined4 local_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  float fStack_6d0;
  undefined4 uStack_6cc;
  int iStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  float fStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  float fStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  char acStack_694 [184];
  wchar_t awStack_5dc [64];
  undefined2 auStack_55c [64];
  undefined1 auStack_4dc [128];
  wchar_t awStack_45c [4];
  undefined1 auStack_454 [4];
  undefined1 auStack_450 [48];
  undefined1 auStack_420 [1044];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd2bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_6dc = FUN_0043a510();
  local_704 = CONCAT31(local_704._1_3_,local_6e1);
  local_700 = operator_new(0xc);
  *local_700 = (int)local_700;
  local_700[1] = (int)local_700;
  local_6fc = 0.0;
  local_4 = 0;
  iVar5 = FUN_00437f70();
  param_1[0xf3] = iVar5;
  if (iVar5 == 0) {
    local_4 = 0xffffffff;
    FUN_004a2f80();
    FUN_005b7e1d();
    uVar11 = 0;
  }
  else {
    param_1[0xf5] = -1;
    param_1[0xf4] = -1;
    *(undefined1 *)(param_1 + 0xf9) = 1;
    (**(code **)(*param_1 + 0x98))();
    pcStack_768 = (char *)0x0;
    param_1[0x2d] = 0x3f28f5c3;
    param_1[0x2e] = 0x3f23d70a;
    param_1[0x2f] = 0;
    puStack_76c = (undefined4 *)0x0;
    puStack_770 = (undefined4 *)0x0;
    param_1[0x30] = 0x3f23d70a;
    param_1[0x31] = -0x4175c28f;
    ppiStack_774 = &piStack_720;
    ppiStack_778 = (int **)0x0;
    param_1[0x32] = 0;
    ppGStack_77c = (GoodInfo **)&uStack_6e0;
    pcStack_780 = (char *)0x0;
    pcStack_784 = "ui_select_item";
    pcStack_788 = (char *)0x0;
    pcStack_78c = "Interface\\NeuroNet\\Inventory\\X.3db";
    piStack_720 = (int *)0x3ca3d70a;
    uStack_71c = 0x3ca3d70a;
    uStack_718 = 0;
    uStack_6e0 = 0x3fa00000;
    local_6dc = 0xbd23d70a;
    uStack_6d8 = 0;
    iVar5 = FUN_005a0c90("ShipTraderCancelButton");
    param_1[0xcc] = iVar5;
    if (3 < param_1[0xf3]) {
      param_1[0xf3] = 3;
    }
    puStack_6f0 = (undefined4 *)*puStack_708;
    iStack_6e8 = 0;
    if (0 < param_1[0xf3]) {
      piVar12 = param_1 + 0xed;
      do {
        iVar5 = iStack_6e8;
        iStack_730 = 0;
        iStack_734 = 0;
        uVar7 = *(uint *)puStack_6f0[2];
        piVar12[3] = uVar7;
        pGStack_738 = GoodList::find_by_id(uVar7);
        *piVar12 = (int)pGStack_738;
        piVar12[0xe] = 0;
        if (pGStack_738 != (GoodInfo *)0x0) {
          pGStack_710 = GoodList::find_by_id(*(uint *)(pGStack_738 + 0x90));
          pSVar6 = Archetype::GetShip(*(uint *)(pGStack_710 + 0x54));
          iVar8 = *(int *)(pSVar6 + 0xf8);
          piVar12[0xe] = iVar8;
          if ((iVar8 < 0) || (3 < iVar8)) {
            piVar12[0xe] = 0;
          }
          iStack_730 = *(int *)(pSVar6 + 0x14);
          FUN_00438060();
          iStack_734 = ftol();
          pGStack_714 = *(GoodInfo **)(pGStack_738 + 0x98);
          pGStack_738 = *(GoodInfo **)pGStack_714;
          if (pGStack_738 != pGStack_714) {
            do {
              uVar7 = Arch2Good(*(uint *)(pGStack_738 + 0xc));
              if ((uVar7 & 0x3fffffff) != 0) {
                iStack_6c8 = *(int *)(pGStack_738 + 0x18);
                FUN_00438060();
                iVar8 = ftol();
                iStack_734 = iStack_734 + *(int *)(pGStack_738 + 0x1c) * iVar8;
              }
              pGStack_738 = *(GoodInfo **)pGStack_738;
            } while (pGStack_738 != pGStack_714);
          }
          pGVar9 = GoodList_get();
          if ((pGVar9 != (GoodInfoList *)0x0) &&
             (pGStack_710 = GoodInfoList::find_by_ship_arch(pGVar9,*(uint *)(pGStack_710 + 0x54)),
             pGStack_710 != (GoodInfo *)0x0)) {
            sprintf(acStack_694,"ShipTraderShipMesh%d");
            fStack_6b4 = _DAT_005d0434 - (float)iStack_6e8 * _DAT_005d4958;
            pcStack_768 = (char *)0x1;
            puStack_76c = (undefined4 *)0x1;
            puStack_770 = (undefined4 *)0x1;
            ppiStack_774 = (int **)0x1;
            ppiStack_778 = (int **)0x0;
            ppGStack_77c = (GoodInfo **)0x0;
            pcStack_780 = (char *)0x0;
            pcStack_784 = (char *)&piStack_720;
            pcStack_788 = (char *)0x0;
            pcStack_78c = (char *)&uStack_6b8;
            uStack_6e0 = 0;
            local_6dc = 0;
            uStack_6d8 = 0;
            piStack_720 = (int *)0x3d1374bc;
            uStack_71c = 0x3d27ef9e;
            uStack_718 = 0;
            uStack_6b8 = 0x3e8dd2f2;
            uStack_6b0 = 0xbfa4dd2f;
            iVar8 = FUN_005a0db0(acStack_694,*(undefined4 *)(pGStack_710 + 0x78));
            piVar12[-0x1a] = iVar8;
            *(byte *)(iVar8 + 0x6c) = *(byte *)(iVar8 + 0x6c) & 0xf7;
            piVar12[0x1c] = *(int *)(pGStack_710 + 0x78);
          }
        }
        sprintf(acStack_694,"ShipTraderShipNameIconFrame%d");
        pGStack_738 = (GoodInfo *)((float)iStack_6e8 * _DAT_005d4958);
        pcStack_768 = (char *)0x0;
        puStack_76c = &uStack_6c4;
        pGStack_714 = (GoodInfo *)(_DAT_005d58c8 - (float)pGStack_738);
        puStack_770 = &uStack_6ac;
        ppiStack_774 = (int **)0x5ced30;
        ppiStack_778 = (int **)acStack_694;
        uStack_6c4 = 0x3d0f5c29;
        uStack_6c0 = 0x3d09374c;
        uStack_6bc = 0;
        uStack_6ac = 0x3f6a7efa;
        uStack_6a4 = 0;
        ppGStack_77c = (GoodInfo **)0x4b78b4;
        fStack_6a8 = (float)pGStack_714;
        iVar8 = FUN_005a0d00();
        piVar12[-0x1d] = iVar8;
        sprintf(acStack_694,"ShipTraderShipNameFrame%d");
        pcStack_768 = (char *)0x0;
        puStack_76c = &uStack_6a0;
        puStack_770 = &uStack_6d4;
        fStack_6d0 = (float)pGStack_714;
        ppiStack_774 = (int **)0x5ced30;
        ppiStack_778 = (int **)acStack_694;
        uStack_6a0 = 0x3e0d4fdf;
        uStack_69c = 0x3d0b4396;
        uStack_698 = 0;
        uStack_6d4 = 0x3f8c8b44;
        uStack_6cc = 0;
        ppGStack_77c = (GoodInfo **)0x4b793a;
        iVar8 = FUN_005a0d00();
        piVar12[-0x20] = iVar8;
        sprintf(acStack_694,"ShipTraderShipName%d");
        local_6fc = _DAT_005d5890 - (float)pGStack_738;
        pcStack_768 = (char *)0x3fcccccd;
        puStack_76c = (undefined4 *)0x3cf5c28f;
        puStack_770 = (undefined4 *)0x3e872b02;
        local_700 = (int *)0x3f7851ec;
        uStack_6f8 = 0;
        ppiStack_774 = (int **)0x0;
        ppiStack_778 = &local_700;
        ppGStack_77c = (GoodInfo **)0x5d010c;
        pcStack_780 = acStack_694;
        pcStack_784 = (char *)0x4b79a3;
        iVar8 = FUN_005a0e30();
        piVar12[-0x17] = iVar8;
        piVar12[0x1f] = iStack_730;
        sprintf(acStack_694,"ShipTraderShipClass%d");
        pGStack_728 = (GoodInfo *)(_DAT_005d5874 - (float)pGStack_738);
        pcStack_768 = (char *)0x3fcccccd;
        puStack_76c = (undefined4 *)0x3cf5c28f;
        puStack_770 = (undefined4 *)0x3e19999a;
        ppiStack_774 = (int **)0x0;
        ppiStack_778 = (int **)&uStack_72c;
        ppGStack_77c = (GoodInfo **)0x5d010c;
        pcStack_780 = acStack_694;
        uStack_72c = 0x3f7851ec;
        uStack_724 = 0;
        pcStack_784 = (char *)0x4b7a1d;
        pGStack_714 = pGStack_728;
        iVar8 = FUN_005a0e30();
        piVar12[0x22] = iVar8;
        sprintf(acStack_694,"ShipTraderShipPrice%d");
        pcStack_768 = (char *)0x3fcccccd;
        puStack_76c = (undefined4 *)0x3cf5c28f;
        puStack_770 = (undefined4 *)0x3e1cac08;
        ppiStack_774 = (int **)0x0;
        ppiStack_778 = (int **)&stack0xfffff8bc;
        ppGStack_77c = (GoodInfo **)0x5d010c;
        pcStack_780 = acStack_694;
        pcStack_784 = (char *)0x4b7a83;
        iVar8 = FUN_005a0e30();
        piVar12[-0x14] = iVar8;
        FUN_004779a0();
        (**(code **)(*(int *)piVar12[-0x14] + 0xa8))();
        piVar12[-3] = iStack_734;
        puStack_6f0 = (undefined4 *)*puStack_6f0;
        iStack_6e8 = iVar5 + 1;
        piVar12 = piVar12 + 1;
      } while (iStack_6e8 < param_1[0xf3]);
    }
    pcStack_768 = (char *)0x0;
    puStack_76c = (undefined4 *)&stack0xfffff8bc;
    puStack_770 = &uStack_72c;
    ppiStack_774 = &local_700;
    ppiStack_778 = (int **)&uStack_6d4;
    ppGStack_77c = (GoodInfo **)0x5d5848;
    iStack_730 = 0xffffffff;
    iStack_734 = 0xffffdc0c;
    uStack_72c = 0;
    pGStack_728 = (GoodInfo *)0x0;
    uStack_724 = 0;
    local_700 = (int *)0x3ba3d70a;
    local_6fc = 0.078;
    uStack_6f8 = 0xbfa4dd2f;
    uStack_6d4 = 0;
    fStack_6d0 = 0.0;
    uStack_6cc = 0;
    pcStack_780 = (char *)0x4b7ba4;
    iVar5 = FUN_005a1020();
    pcStack_768 = (char *)0x3fcccccd;
    puStack_76c = (undefined4 *)0x3cf5c28f;
    puStack_770 = (undefined4 *)0x3ebbe76d;
    ppiStack_774 = (int **)0x0;
    ppiStack_778 = (int **)&stack0xfffff8bc;
    ppGStack_77c = (GoodInfo **)0x5ce91c;
    pcStack_780 = "ShipTraderViewName";
    param_1[0xdc] = iVar5;
    pcStack_784 = (char *)0x4b7bed;
    iVar5 = FUN_005a0e30();
    pcStack_768 = (char *)0x3fcccccd;
    puStack_76c = (undefined4 *)0x3cf5c28f;
    puStack_770 = (undefined4 *)0x3ebbe76d;
    ppiStack_774 = (int **)0x0;
    ppiStack_778 = (int **)&stack0xfffff8bc;
    ppGStack_77c = (GoodInfo **)0x5d01a8;
    pcStack_780 = "ShipTraderViewClass";
    param_1[0xe1] = iVar5;
    pcStack_784 = (char *)0x4b7c36;
    iVar5 = FUN_005a0e30();
    param_1[0xe2] = iVar5;
    uStack_72c = 0x3f245a1d;
    pGStack_728 = (GoodInfo *)0xbef1a9fc;
    uStack_724 = 0;
    pcStack_768 = (char *)0x0;
    puStack_76c = (undefined4 *)&stack0xfffff8bc;
    puStack_770 = &uStack_72c;
    ppiStack_774 = (int **)0x5ced30;
    ppiStack_778 = (int **)0x5d580c;
    ppGStack_77c = (GoodInfo **)0x4b7c90;
    iVar5 = FUN_005a0d00();
    pcStack_768 = (char *)0x3fcccccd;
    puStack_76c = (undefined4 *)0x3cf5c28f;
    puStack_770 = (undefined4 *)0x3e4ac083;
    ppiStack_774 = (int **)0x0;
    ppiStack_778 = (int **)&stack0xfffff8bc;
    ppGStack_77c = (GoodInfo **)0x5d0410;
    pcStack_780 = "ShipTraderBuytext";
    param_1[0xe0] = iVar5;
    pcStack_784 = (char *)0x4b7cdd;
    iVar5 = FUN_005a0e30();
    param_1[0xe3] = iVar5;
    pcStack_768 = "ShipInfoCard_Facts";
    puStack_76c = (undefined4 *)0x4b7d18;
    iVar5 = FUN_005a10e0();
    pcStack_768 = "ShipInfoCard_Stats";
    param_1[0xdd] = iVar5;
    puStack_76c = (undefined4 *)0x4b7d53;
    iVar5 = FUN_005a10e0();
    pcStack_768 = "ShipInfoCard_Values";
    param_1[0xde] = iVar5;
    puStack_76c = (undefined4 *)0x4b7d8e;
    iVar5 = FUN_005a10e0();
    pcStack_768 = (char *)0x3fcccccd;
    puStack_76c = (undefined4 *)0x3cf5c28f;
    puStack_770 = (undefined4 *)0x3ed374bc;
    param_1[0xdf] = iVar5;
    ppiStack_774 = (int **)0x0;
    ppiStack_778 = (int **)&stack0xfffff8bc;
    ppGStack_77c = (GoodInfo **)0x5d0608;
    pcStack_780 = "PlayerCash";
    pcStack_784 = "hv\x04";
    iVar5 = FUN_005a0e30();
    param_1[0xe4] = iVar5;
    FUN_004c4ce0();
    FUN_004779a0();
    (**(code **)(*(int *)param_1[0xe4] + 0xa8))();
    pcStack_768 = (char *)0x0;
    puStack_76c = (undefined4 *)0x1;
    puStack_770 = (undefined4 *)0x460;
    ppiStack_774 = (int **)0x3fcccccd;
    ppiStack_778 = (int **)0x3cf5c28f;
    ppGStack_77c = (GoodInfo **)0x3ed81062;
    pcStack_780 = (char *)0x0;
    pcStack_784 = &stack0xfffff8b0;
    pcStack_788 = "PageHeader";
    pcStack_78c = "ShipTraderTitle";
    FUN_005a0e30();
    param_1[0xf6] = 0;
    param_1[0xf7] = 0;
    uVar7 = FUN_004c3e10();
    if (uVar7 != 0) {
      pcStack_768 = (char *)0x0;
      puStack_76c = (undefined4 *)0x1;
      puStack_770 = (undefined4 *)0x62e;
      ppiStack_774 = (int **)0x3fcccccd;
      ppiStack_778 = (int **)0x3cf5c28f;
      ppGStack_77c = (GoodInfo **)0x3ed1eb85;
      pcStack_780 = (char *)0x0;
      pcStack_784 = &stack0xfffff8b0;
      pcStack_788 = "PageHeader";
      pcStack_78c = "ShipTraderCurrentShipText";
      FUN_005a0e30();
      pcStack_768 = (char *)0x4b7ec1;
      pSVar6 = Archetype::GetShip(uVar7);
      if (pSVar6 != (Ship *)0x0) {
        pGVar9 = GoodList_get();
        if (pGVar9 != (GoodInfoList *)0x0) {
          pcStack_768 = (char *)0x4b7ee5;
          pGVar10 = GoodInfoList::find_by_ship_arch(pGVar9,uVar7);
          if (pGVar10 != (GoodInfo *)0x0) {
            pcStack_768 = (char *)0x0;
            puStack_76c = (undefined4 *)0x0;
            puStack_770 = (undefined4 *)0x50;
            ppiStack_774 = (int **)0x1;
            ppiStack_778 = (int **)0x1;
            ppGStack_77c = (GoodInfo **)0x1;
            pcStack_780 = (char *)0x1;
            pcStack_784 = (char *)0x0;
            pcStack_788 = (char *)0x0;
            pcStack_78c = (char *)0x0;
            pGStack_738 = (GoodInfo *)0x3d0f5c29;
            iStack_734 = 0x3d27ef9e;
            iStack_730 = 0;
            local_70c = 0xbf0e978d;
            puStack_708 = (undefined4 *)0x3e051eb8;
            local_704 = 0xbfa4dd2f;
            iVar5 = FUN_005a0db0("ShipTraderCurrentShipMesh",*(undefined4 *)(pGVar10 + 0x78),
                                 &local_70c,0,&pGStack_738);
            param_1[0xf8] = iVar5;
            *(byte *)(iVar5 + 0x6c) = *(byte *)(iVar5 + 0x6c) & 0xf7;
          }
        }
        pcStack_768 = (char *)0x0;
        puStack_76c = (undefined4 *)0x0;
        puStack_770 = (undefined4 *)0x0;
        ppiStack_774 = (int **)0x0;
        ppiStack_778 = (int **)&stack0xfffff8b0;
        ppGStack_77c = &pGStack_738;
        pcStack_780 = "ui_item_select";
        pcStack_784 = "ShipTraderCurrentShip";
        pGStack_738 = (GoodInfo *)0x3da7ef9e;
        iStack_734 = 0xbe4ccccd;
        iStack_730 = 0;
        pcStack_788 = (char *)0x4b7fca;
        iVar5 = FUN_005a0d00();
        pcStack_768 = (char *)0x0;
        puStack_76c = (undefined4 *)0x0;
        puStack_770 = (undefined4 *)0x0;
        ppiStack_774 = (int **)0x0;
        ppiStack_778 = (int **)&stack0xfffff8b0;
        ppGStack_77c = &pGStack_738;
        pcStack_780 = "ui_item_select";
        pcStack_784 = "ShipTraderCurrentShipFrame";
        param_1[0xf6] = iVar5;
        pGStack_738 = (GoodInfo *)0x3e872b02;
        iStack_734 = 0xbe4ccccd;
        iStack_730 = 0;
        pcStack_788 = (char *)0x4b8020;
        iVar5 = FUN_005a0d00();
        pcStack_768 = (char *)0x0;
        puStack_76c = (undefined4 *)0x0;
        param_1[0xf7] = iVar5;
        puStack_770 = *(undefined4 **)(pSVar6 + 0x14);
        ppiStack_774 = (int **)0x3fcccccd;
        ppiStack_778 = (int **)0x3cf5c28f;
        ppGStack_77c = (GoodInfo **)0x3e851eb8;
        pcStack_780 = (char *)0x0;
        pcStack_784 = &stack0xfffff8b0;
        pcStack_788 = "ItemName";
        pcStack_78c = "ShipTraderCurrentShipName";
        FUN_005a0e30();
        iVar5 = *(int *)(pSVar6 + 0xf8);
        param_1[0xfa] = iVar5;
        if ((iVar5 < 0) || (3 < iVar5)) {
          param_1[0xfa] = 0;
        }
        puStack_770 = *(undefined4 **)(&DAT_00611f78 + param_1[0xfa] * 4);
        pcStack_768 = (char *)0x0;
        puStack_76c = (undefined4 *)0x0;
        ppiStack_774 = (int **)0x3fcccccd;
        ppiStack_778 = (int **)0x3cf5c28f;
        ppGStack_77c = (GoodInfo **)0x3e158106;
        pcStack_780 = (char *)0x0;
        pcStack_784 = &stack0xfffff8b0;
        pcStack_788 = "ItemName";
        pcStack_78c = "ShipTraderCurrentShipClass";
        FUN_005a0e30();
        puStack_76c = (undefined4 *)0x4b80df;
        pcStack_768 = (char *)uVar7;
        uVar11 = FUN_004c6e90();
        pcStack_768 = (char *)0x0;
        puStack_76c = (undefined4 *)0x2;
        puStack_770 = (undefined4 *)0x1;
        ppiStack_774 = (int **)0x3fcccccd;
        ppiStack_778 = (int **)0x3cf5c28f;
        ppGStack_77c = (GoodInfo **)0x3e0f5c29;
        pcStack_780 = (char *)0x0;
        pcStack_784 = &stack0xfffff8b0;
        pcStack_788 = "ItemName";
        pcStack_78c = "ShipTraderCurrentShipPrice";
        piVar12 = (int *)FUN_005a0e30();
        puStack_76c = (undefined4 *)auStack_420;
        puStack_770 = (undefined4 *)0x4b813b;
        pcStack_768 = (char *)uVar11;
        FUN_004779a0();
        pcStack_768 = auStack_420;
        puStack_76c = (undefined4 *)0x1d;
        puStack_770 = (undefined4 *)0x4b8153;
        (**(code **)(*piVar12 + 0xa8))();
      }
    }
    pcStack_768 = (char *)0x1;
    puStack_76c = (undefined4 *)0x1;
    puStack_770 = (undefined4 *)0x4b8166;
    (**(code **)(*(int *)param_1[0xdc] + 0xa8))();
    puStack_770 = (undefined4 *)0x0;
    ppiStack_774 = (int **)0x1;
    ppiStack_778 = (int **)0x1;
    ppGStack_77c = (GoodInfo **)0x4b8179;
    (**(code **)(*(int *)param_1[0xe0] + 0xa8))();
    ppGStack_77c = (GoodInfo **)0x0;
    pcStack_780 = (char *)0x1;
    pcStack_784 = (char *)0x1;
    pcStack_788 = (char *)0x4b818c;
    (**(code **)(*(int *)param_1[0xe3] + 0xa8))();
    pcStack_788 = (char *)0x0;
    pcStack_78c = (char *)0x1;
    (**(code **)(*(int *)param_1[0xe1] + 0xa8))(1);
    (**(code **)(*(int *)param_1[0xe2] + 0xa8))(1,1,0);
    IDPMsgHandler::OnAddHost((IDPMsgHandler *)param_1[0xdc],(_DPNMSG_ENUM_HOSTS_RESPONSE *)0x1);
    pcStack_78c = (char *)0x3f251eb8;
    pcStack_788 = (char *)0xbd79db23;
    pcStack_784 = (char *)0x0;
    iVar5 = FUN_005a0e30("WelcomeText","SubHeader",&pcStack_78c,0,0x3ebd70a4,0x3d75c28f,0x3fcccccd,0
                         ,1,0,0);
    param_1[0xe5] = iVar5;
    iVar5 = *(int *)(iVar5 + 0x334);
    if (*(char *)(iVar5 + 0x30) != '\x01') {
      *(undefined1 *)(iVar5 + 0x30) = 1;
      *(undefined4 *)(iVar5 + 0x28) = 0;
    }
    pcStack_78c = (char *)0x0;
    pcStack_788 = (char *)0x0;
    pcStack_784 = (char *)0x0;
    ppiStack_774 = (int **)0x0;
    puStack_770 = (undefined4 *)0x0;
    puStack_76c = (undefined4 *)0x0;
    iVar5 = FUN_005a0db0("WelcomeLine","Interface\\NeuroNet\\Inventory\\partitionline.3db",
                         &stack0xfffff8b8,0,&ppiStack_774,0,0,0,1,0,0,1,0,0,0,&pcStack_78c);
    param_1[0xe6] = iVar5;
    pcStack_78c = (char *)0x3f283127;
    pcStack_788 = (char *)0xbe5e353f;
    pcStack_784 = (char *)0x0;
    iVar5 = FUN_005a0e30("WelcomeHelp","Normal",&pcStack_78c,0,0x3eb33333,0x3d75c28f,0x3fb33333,
                         0x485,0,0,0);
    param_1[0xe7] = iVar5;
    iVar5 = *(int *)(iVar5 + 0x334);
    if (*(char *)(iVar5 + 0x30) != '\x01') {
      *(undefined1 *)(iVar5 + 0x30) = 1;
      *(undefined4 *)(iVar5 + 0x28) = 0;
    }
    iVar5 = FUN_0043bbe0();
    if (iVar5 != 0) {
      iVar8 = FUN_004347e0(DAT_0067eca8,0x48d,auStack_55c,0x40);
      if (iVar8 == 0) {
        auStack_55c[0] = 0;
      }
      iVar5 = FUN_004347e0(DAT_0067eca8,iVar5,awStack_5dc,0x40);
      if (iVar5 == 0) {
        awStack_5dc[0] = L'\0';
      }
      FUN_004347e0(DAT_0067eca8,0x477,auStack_4dc,0x3f);
      swprintf(awStack_45c,(size_t)auStack_4dc,awStack_5dc);
      (*(code *)PTR_FUN_00616420)(auStack_450);
      (**(code **)(*(int *)param_1[0xe5] + 0xa8))(0x1d,auStack_454,0);
    }
    pcStack_78c = (char *)0x3f283127;
    pcStack_788 = (char *)0xbee04189;
    pcStack_784 = (char *)0x0;
    piVar12 = (int *)FUN_005a0e30("ErrorHelp","Normal",&pcStack_78c,0,0x3ebd70a4,0x3d75c28f,
                                  0x3fb33333,0x49a,0,0,0);
    param_1[0xe8] = (int)piVar12;
    (**(code **)(*piVar12 + 0xa8))(1,1,0);
    iVar5 = *(int *)(param_1[0xe8] + 0x334);
    if (*(char *)(iVar5 + 0x30) != '\x01') {
      *(undefined1 *)(iVar5 + 0x30) = 1;
      *(undefined4 *)(iVar5 + 0x28) = 0;
    }
    (**(code **)(*(int *)param_1[0xe8] + 0xa8))(0x33,&stack0xfffff8b8,1);
    iVar5 = FUN_004c4ce0();
    param_1[0xe9] = iVar5;
    uVar11 = FUN_004c4060(0,0);
    iVar5 = FUN_004c6f70(uVar11);
    param_1[0xe9] = param_1[0xe9] + iVar5;
    uVar11 = FUN_004c3e10(1);
    iVar5 = FUN_004c6e90(uVar11);
    param_1[0xe9] = param_1[0xe9] + iVar5;
    pcStack_780 = (char *)0xbf23d70a;
    ppGStack_77c = (GoodInfo **)0x3ea8f5c3;
    ppiStack_778 = (int **)0xbfa4dd2f;
    param_1[0x1c] = 100;
    (**(code **)(*param_1 + 0x7c))(0xbf23d70a,0x3ea8f5c3,0xbfa4dd2f);
    (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
    fVar13 = (float10)FUN_00483df0();
    param_1[0xfe] = (int)(float)fVar13;
    bVar3 = SinglePlayer();
    if (bVar3) {
      FUN_004c55f0();
    }
    FUN_004b93f0();
    FUN_00576360();
    cVar4 = FUN_004b5060();
    piVar12 = local_700;
    if (cVar4 == '\0') {
      piVar2 = (int *)*local_700;
      while (piVar2 != piVar12) {
        piVar1 = (int *)*piVar2;
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        FUN_005b7e1d();
        local_6fc = (float)((int)local_6fc + -1);
        piVar2 = piVar1;
      }
      FUN_005b7e1d();
      uVar11 = 0;
    }
    else {
      piVar2 = (int *)*local_700;
      while (piVar2 != piVar12) {
        piVar1 = (int *)*piVar2;
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        FUN_005b7e1d();
        local_6fc = (float)((int)local_6fc + -1);
        piVar2 = piVar1;
      }
      FUN_005b7e1d();
      uVar11 = 1;
    }
  }
  ExceptionList = local_c;
  return uVar11;
}

