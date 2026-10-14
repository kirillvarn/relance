
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00579e90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  HDC hdc;
  HDC pHVar7;
  HBITMAP h;
  HGDIOBJ pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *unaff_EBX;
  undefined4 *puVar11;
  int *piStack_114;
  undefined1 *puStack_110;
  int *piStack_10c;
  float *pfStack_108;
  int *piStack_104;
  undefined1 **ppuStack_100;
  undefined4 *puStack_fc;
  undefined1 **ppuStack_f8;
  undefined1 ***pppuStack_f4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_7c [4];
  int iStack_78;
  int *piStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined1 **local_68;
  undefined4 local_64;
  char *pcStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  code *pcStack_3c;
  void *pvStack_38;
  undefined4 uStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c3d2b;
  pvStack_c = ExceptionList;
  piStack_104 = *(int **)Pipeline_exref;
  pppuStack_f4 = &local_68;
  ppuStack_f8 = &local_50;
  puStack_fc = &local_64;
  ppuStack_100 = &local_54;
  pfStack_108 = (float *)0x579edc;
  ExceptionList = &pvStack_c;
  (**(code **)(*piStack_104 + 0x58))();
  piStack_10c = *(int **)Pipeline_exref;
  pfStack_108 = &fStack_c0;
  puStack_110 = (undefined1 *)0x579ef1;
  (**(code **)(*piStack_10c + 0x88))();
  if (DAT_0067c480 == (int *)0x0) {
    puStack_110 = (undefined1 *)0x579f17;
    DAT_0067c480 = (int *)FUN_005b73e0();
  }
  puStack_110 = &stack0xffffff14;
  piStack_114 = (int *)(param_1 + 0x3c);
  (**(code **)(*DAT_0067c480 + 0x28))(DAT_0067c480,auStack_7c);
  CRect::CRect((CRect *)&piStack_10c,
               (int)(fStack_d8 * fStack_8c + fStack_d4 * fStack_88 + fStack_d0 * fStack_84 +
                    fStack_cc),
               (int)(fStack_c8 * fStack_8c + fStack_c4 * fStack_88 + fStack_c0 * fStack_84 +
                    fStack_bc),
               (int)(fStack_b8 * fStack_8c + fStack_b4 * fStack_88 + fStack_b0 * fStack_84 +
                    fStack_ac),
               (int)(fStack_a8 * fStack_8c + fStack_a4 * fStack_88 + fStack_a0 * fStack_84 +
                    fStack_9c));
  if ((float)ppuStack_100 == _DAT_005c7474) {
    ExceptionList = pvStack_38;
    return;
  }
  piStack_10c = *(int **)(param_1 + 0x330);
  piStack_104 = (int *)0x0;
  pfStack_108 = (float *)-*(float *)(param_1 + 0x334);
  if (DAT_0067c480 == (int *)0x0) {
    DAT_0067c480 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_0067c480 + 0x28))(DAT_0067c480,&puStack_fc,(int *)(param_1 + 0x3c),&piStack_10c)
  ;
  CRect::CRect((CRect *)&piStack_10c,
               (int)(fStack_d8 * (float)puStack_fc +
                     fStack_d4 * (float)ppuStack_f8 + (float)pppuStack_f4 * fStack_d0 + fStack_cc),
               (int)(fStack_c8 * (float)puStack_fc +
                     fStack_c4 * (float)ppuStack_f8 + fStack_c0 * (float)pppuStack_f4 + fStack_bc),
               (int)(fStack_b8 * (float)puStack_fc +
                     fStack_b4 * (float)ppuStack_f8 + fStack_b0 * (float)pppuStack_f4 + fStack_ac),
               (int)((float)pppuStack_f4 * fStack_a0 +
                     fStack_a8 * (float)puStack_fc + fStack_a4 * (float)ppuStack_f8 + fStack_9c));
  piStack_74 = piStack_10c;
  uStack_6c = piStack_104;
  local_68 = ppuStack_100;
  if ((float)ppuStack_100 == _DAT_005c7474) {
    ExceptionList = pvStack_38;
    return;
  }
  fStack_70 = _DAT_005c75dc / (float)ppuStack_100;
  *(float *)(param_1 + 0x338) = fStack_8c;
  *(undefined4 **)(param_1 + 0x340) = puStack_fc;
  *(float *)(param_1 + 0x33c) = fStack_88;
  *(undefined1 ***)(param_1 + 0x344) = ppuStack_f8;
  fStack_70 = fStack_70 * (float)pfStack_108;
  iVar2 = ftol();
  piStack_114 = (int *)(float)iStack_94;
  *(int *)(param_1 + 0x348) = iVar2;
  puStack_110 = (undefined1 *)(float)iStack_90;
  iVar3 = ftol();
  *(int *)(param_1 + 0x34c) = iVar3;
  iVar4 = ftol();
  *(int *)(param_1 + 0x350) = iVar4;
  iVar5 = ftol();
  iStack_98 = *(int *)(param_1 + 0x358);
  iStack_78 = *(int *)(param_1 + 0x35c);
  uVar6 = iVar4 - iVar2;
  *(int *)(param_1 + 0x354) = iVar5;
  uVar10 = iVar5 - iVar3;
  *(uint *)(param_1 + 0x358) = uVar6;
  *(uint *)(param_1 + 0x35c) = uVar10;
  puStack_110 = (undefined1 *)0x1;
  if ((int)uVar6 < 0) {
    puStack_110 = (undefined1 *)0x1;
  }
  else if ((uVar6 & uVar6 - 1) == 0) {
    for (; uVar6 != 0; uVar6 = (int)uVar6 >> 1) {
      puStack_110 = (undefined1 *)((int)puStack_110 << 1);
    }
    puStack_110 = (undefined1 *)((int)puStack_110 >> 1);
  }
  else {
    for (; uVar6 != 0; uVar6 = (int)uVar6 >> 1) {
      puStack_110 = (undefined1 *)((int)puStack_110 << 1);
    }
  }
  iVar2 = 1;
  if ((int)uVar10 < 0) {
    iVar2 = 1;
  }
  else {
    if ((uVar10 & uVar10 - 1) == 0) {
      for (; uVar10 != 0; uVar10 = (int)uVar10 >> 1) {
        iVar2 = iVar2 << 1;
      }
      iVar2 = iVar2 >> 1;
    }
    else {
      for (; uVar10 != 0; uVar10 = (int)uVar10 >> 1) {
        iVar2 = iVar2 << 1;
      }
    }
    if (iVar2 < 1) goto LAB_0057a591;
  }
  if ((0 < (int)puStack_110) &&
     ((*(int *)(param_1 + 0x3e4) != iVar2 ||
      ((undefined1 *)*(int *)(param_1 + 0x3e0) != puStack_110)))) {
    puVar11 = (undefined4 *)(param_1 + 0x3d4);
    if (*(HDC *)(param_1 + 0x3d4) != (HDC)0x0) {
      if (*(HGDIOBJ *)(param_1 + 0x3dc) != (HGDIOBJ)0x0) {
        SelectObject(*(HDC *)(param_1 + 0x3d4),*(HGDIOBJ *)(param_1 + 0x3dc));
      }
      if (*(HGDIOBJ *)(param_1 + 0x3d8) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)(param_1 + 0x3d8));
      }
      DeleteDC((HDC)*puVar11);
    }
    *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3dc) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    *puVar11 = 0;
    if ((puStack_110 != (undefined1 *)0xffffffff) || (iVar2 != -1)) {
      FUN_00579390();
      *(undefined1 **)(param_1 + 0x3e0) = puStack_110;
      *(int *)(param_1 + 0x3e4) = iVar2;
      hdc = GetDC((HWND)0x0);
      pHVar7 = CreateCompatibleDC(hdc);
      *puVar11 = pHVar7;
      if (pHVar7 != (HDC)0x0) {
        h = CreateCompatibleBitmap(hdc,*(int *)(param_1 + 0x3e0),*(int *)(param_1 + 0x3e4));
        *(HBITMAP *)(param_1 + 0x3d8) = h;
        if (h != (HBITMAP)0x0) {
          pvVar8 = SelectObject((HDC)*puVar11,h);
          *(HGDIOBJ *)(param_1 + 0x3dc) = pvVar8;
        }
      }
      ReleaseDC((HWND)0x0,hdc);
    }
    uVar6 = *(int *)(param_1 + 0x3e0) * 2;
    *(undefined1 *)(param_1 + 0x401) = 1;
    *(uint *)(param_1 + 1000) = uVar6;
    if ((uVar6 & 3) != 0) {
      *(uint *)(param_1 + 1000) = (uVar6 - (uVar6 & 3)) + 4;
    }
    uVar10 = *(int *)(param_1 + 1000) * *(int *)(param_1 + 0x3e4);
    puVar9 = operator_new(uVar10);
    puVar11 = puVar9;
    for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    FUN_005b7010(0);
    FUN_005b7010(0);
    FUN_005b7050(0x10,5,5,5,1);
    FUN_005b7050(0x10,5,5,5,1);
    uStack_5c = *(undefined4 *)Pipeline_exref;
    uStack_44 = *(undefined4 *)(param_1 + 0x3e4);
    uStack_48 = *(undefined4 *)(param_1 + 0x3e0);
    uStack_40 = *(undefined4 *)(param_1 + 1000);
    local_54 = &stack0xffffff14;
    local_50 = &stack0xffffff10;
    pcStack_60 = "BigImage";
    uStack_58 = 0;
    local_64 = 0x2c;
    pcStack_3c = FUN_00404720;
    piStack_114 = (int *)0x0;
    uStack_30 = 0;
    puStack_4c = puVar9;
    iVar2 = (**(code **)(**(int **)Dacom_exref + 0xc))(*(int **)Dacom_exref,&local_64,&piStack_114);
    if (iVar2 == 0) {
      piVar1 = *(int **)(param_1 + 0x3ec);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1 + 0x3ec) = 0;
      }
      iVar2 = (**(code **)*unaff_EBX)(unaff_EBX,"1.11_IBigImage2",(undefined4 *)(param_1 + 0x3ec));
      if (iVar2 != 0) {
        (**(code **)FDUMP_exref)
                  (0x100001,"%s(%d) : ERROR:General:%s",
                   "E:\\FL\\Scratch\\Source\\Client\\Interface\\RichDisplay.cpp",0x3c7,
                   "Failed to query IBigImage2 interface.\n");
      }
    }
    else {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : ERROR:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\Interface\\RichDisplay.cpp",0x3cc,
                 "Failed to create BigImage instance.\n");
    }
    FUN_005b7e1d(puVar9);
    uStack_30 = 0xffffffff;
    if (piStack_114 != (int *)0x0) {
      (**(code **)(*piStack_114 + 8))(piStack_114);
      piStack_114 = (int *)0x0;
    }
  }
LAB_0057a591:
  if ((iStack_98 != *(int *)(param_1 + 0x358)) || (iStack_78 != *(int *)(param_1 + 0x35c))) {
    *(undefined1 *)(param_1 + 0x400) = 1;
    *(undefined1 *)(param_1 + 0x401) = 1;
  }
  DeviceTRC::bind_to_dc((DeviceTRC *)(param_1 + 900),*(HDC__ **)(param_1 + 0x3d4));
  ExceptionList = pvStack_38;
  return;
}

