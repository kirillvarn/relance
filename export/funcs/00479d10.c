
undefined4 __thiscall FUN_00479d10(int param_1,undefined4 param_2,wchar_t *param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  void **ppvVar3;
  char cVar4;
  wchar_t *_Format;
  undefined4 *puVar5;
  size_t _Count;
  int *piVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  code *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *local_b4;
  int *local_b0;
  int local_ac;
  void **local_a8;
  size_t local_a4;
  wchar_t *pwStack_a0;
  wchar_t *pwStack_9c;
  uint local_98;
  void *local_94;
  wchar_t *local_90;
  uint local_8c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &DAT_005bbe8a;
  local_c = ExceptionList;
  ppvVar3 = &local_c;
  switch(param_2) {
  case 0x13:
    ppvVar3 = &local_c;
    if (*(int *)(param_1 + 0x360) != 0) {
      ExceptionList = &local_c;
      FUN_00483d40(param_3);
      ppvVar3 = ExceptionList;
    }
    break;
  case 0x15:
    ExceptionList = &local_c;
    uVar14 = FUN_00585e20(param_3);
    FUN_0047e270(uVar14);
    iVar7 = *(int *)(param_1 + 0x360);
    ppvVar3 = ExceptionList;
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0x3a4) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x4f4) = 0;
      FUN_004c6a50(0,0,5);
      FUN_004795f0(0);
      ppvVar3 = ExceptionList;
      if (*(int *)(iVar7 + 0x360) != 0) {
        *(undefined4 *)(*(int *)(iVar7 + 0x360) + 0x4e8) = 0;
        *(undefined4 *)(*(int *)(iVar7 + 0x360) + 0x4ec) = 0;
        ppvVar3 = ExceptionList;
      }
    }
    break;
  case 0x16:
    ExceptionList = &local_c;
    cVar4 = FUN_004c4810();
    ppvVar3 = ExceptionList;
    if (cVar4 != '\0') {
      local_b4 = StringAlloc((char *)param_3,false);
      if ((*(int *)(param_1 + 0x360) == 0) || (iVar7 = FUN_0047e790(), iVar7 == 0)) {
        iVar7 = FUN_0047e790();
        ppvVar3 = ExceptionList;
        if ((iVar7 != 0) && (iVar7 = FUN_0047e790(), ppvVar3 = ExceptionList, iVar7 != 0)) {
          FUN_00586560(local_b4);
          iVar8 = FUN_0047e460(*(undefined4 *)(iVar7 + 4));
          if (iVar8 == 0) {
            uVar14 = 0;
          }
          else {
            ppvVar3 = ExceptionList;
            if (iVar8 != 2) break;
            uVar14 = 1;
          }
          cVar4 = FUN_00586800(uVar14);
          ppvVar3 = ExceptionList;
          if (cVar4 != '\0') {
            FUN_004c6910(iVar7,local_b4);
            if (((*(int *)(param_1 + 0x360) == 0) ||
                (*(int *)(*(int *)(param_1 + 0x360) + 0x978) != 2)) &&
               (cVar4 = FUN_004c4810(), cVar4 != '\0')) {
              FUN_004c4040(param_1 + 0x34c);
              iVar7 = FUN_00446be0();
              if (iVar7 != 0) {
                FUN_00448540(param_1 + 0x34c);
                FUN_00447210();
              }
            }
            *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x4f4) = 0;
            FUN_004c6a50(0,0,5);
            FUN_004795f0(0);
            ppvVar3 = ExceptionList;
            if (*(int *)(param_1 + 0x360) != 0) {
              *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
              *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
              ppvVar3 = ExceptionList;
            }
          }
        }
      }
      else {
        iVar7 = FUN_0047e790();
        ppvVar3 = ExceptionList;
        if (iVar7 != 0) {
          FUN_00586560(local_b4);
          iVar8 = FUN_0047e460(*(undefined4 *)(iVar7 + 4));
          if (iVar8 == 0) {
            uVar14 = 0;
          }
          else {
            ppvVar3 = ExceptionList;
            if (iVar8 != 2) break;
            uVar14 = 1;
          }
          cVar4 = FUN_00586800(uVar14);
          ppvVar3 = ExceptionList;
          if (cVar4 != '\0') {
            cVar4 = FUN_004c6530(iVar7,&local_b4,0,1);
            if (cVar4 != '\0') {
              FUN_004c6430(iVar7,0);
            }
            *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x4f4) = 0;
            FUN_004c6a50(0,0,5);
            FUN_004795f0(0);
            if (*(int *)(param_1 + 0x360) != 0) {
              *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
              *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4ec) = 0;
            }
            iVar7 = *(int *)(param_1 + 0x360);
            *(undefined4 *)(iVar7 + 0x3a4) = 0xffffffff;
            *(undefined4 *)(iVar7 + 0x4f4) = 0;
            FUN_004c6a50(0,0,5);
            FUN_004795f0(0);
            ppvVar3 = ExceptionList;
            if (*(int *)(iVar7 + 0x360) != 0) {
              *(undefined4 *)(*(int *)(iVar7 + 0x360) + 0x4e8) = 0;
              *(undefined4 *)(*(int *)(iVar7 + 0x360) + 0x4ec) = 0;
              ppvVar3 = ExceptionList;
            }
          }
        }
      }
    }
    break;
  case 0x1a:
  case 0x26:
    if (param_3 == *(wchar_t **)(param_1 + 0x4d8)) {
      ExceptionList = &local_c;
      FUN_0045a460();
      ExceptionList = local_c;
      return 1;
    }
    if (param_3 == *(wchar_t **)(param_1 + 0x970)) {
      if (((*(int *)(param_1 + 0x32c) == 4) && (*(int *)(param_1 + 0x3a4) != -1)) &&
         (ExceptionList = &local_c, iVar7 = FUN_0047e790(), iVar7 != 0)) {
        uVar14 = *(undefined4 *)(iVar7 + 4);
        FUN_0045a460();
        FUN_0059db20("NN_CommodityByBase","NN_CommodityByBase",0,uVar14);
      }
      ExceptionList = local_c;
      return 1;
    }
    if (param_3 == *(wchar_t **)(param_1 + 0x92c)) {
      ExceptionList = &local_c;
      FUN_004795f0(0);
      ExceptionList = local_c;
      return 1;
    }
    if (param_3 == *(wchar_t **)(param_1 + 0x934)) {
      ExceptionList = &local_c;
      FUN_004795f0(0);
      if (((*(int *)(param_1 + 0x3a4) != -1) && (*(char *)(param_1 + 0x4e3) == '\0')) &&
         ((iVar7 = FUN_0047e790(), *(char *)(iVar7 + 0xc) == '\0' &&
          (iVar8 = FUN_0054baf0(), iVar8 != 0)))) {
        (**(code **)(*(int *)(iVar8 + 4) + 0x38))
                  (*(undefined2 *)(iVar7 + 2),*(undefined4 *)(param_1 + 0x93c),DAT_00673344);
        *(undefined4 *)(param_1 + 0x914) = 0x3f800000;
        FUN_00489e80(DAT_00671c64,0);
      }
      ExceptionList = local_c;
      return 1;
    }
    iVar7 = 0;
    piVar6 = (int *)(param_1 + 0x3fc);
    do {
      if (((param_3 == (wchar_t *)piVar6[0xf]) || (param_3 == (wchar_t *)*piVar6)) ||
         (param_3 == (wchar_t *)piVar6[0x19])) {
        ExceptionList = &local_c;
        FUN_0047e0e0(iVar7,1);
        iVar7 = *(int *)(param_1 + 0x360);
        *(undefined1 *)(param_1 + 0x4e0) = 0;
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0x3a4) = 0xffffffff;
          *(undefined4 *)(iVar7 + 0x4f4) = 0;
          FUN_004c6a50(0,0,5);
          FUN_004795f0(0);
          if (*(int *)(iVar7 + 0x360) != 0) {
            *(undefined4 *)(*(int *)(iVar7 + 0x360) + 0x4e8) = 0;
            *(undefined4 *)(*(int *)(iVar7 + 0x360) + 0x4ec) = 0;
          }
        }
        break;
      }
      if (param_3 == (wchar_t *)piVar6[0x23]) {
        ExceptionList = &local_c;
        FUN_0047e0e0(iVar7,1);
        (**(code **)(**(int **)(param_1 + 0x488 + iVar7 * 4) + 0xa8))(0x2f,&local_a8,0);
        iVar7 = FUN_0047e790();
        if (iVar7 != 0) {
          FUN_0047f720(iVar7,local_a8);
        }
        break;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      ExceptionList = &local_c;
    } while (iVar7 < 5);
    if (param_3 == *(wchar_t **)(param_1 + 0x3d8)) {
      FUN_0047f240(3,1);
      ppvVar3 = ExceptionList;
    }
    else if (param_3 == *(wchar_t **)(param_1 + 0x3d4)) {
      FUN_0047f240(0,1);
      ppvVar3 = ExceptionList;
    }
    else if (param_3 == *(wchar_t **)(param_1 + 0x3dc)) {
      FUN_0047f240(2,1);
      ppvVar3 = ExceptionList;
    }
    else if (param_3 == *(wchar_t **)(param_1 + 0x3e0)) {
      FUN_0047f240(4,1);
      ppvVar3 = ExceptionList;
    }
    else if (param_3 == *(wchar_t **)(param_1 + 0x3e4)) {
      FUN_0047f240(1,1);
      ppvVar3 = ExceptionList;
    }
    else if (param_3 == *(wchar_t **)(param_1 + 0x4b0)) {
      FUN_0047e650();
      ppvVar3 = ExceptionList;
    }
    else {
      ppvVar3 = ExceptionList;
      if (param_3 == *(wchar_t **)(param_1 + 0x344)) {
        FUN_0047e0e0(0xffffffff,1);
        *(undefined1 *)(param_1 + 0x4e0) = 1;
        ppvVar3 = ExceptionList;
      }
    }
    break;
  case 0x2c:
    iVar7 = 0;
    piVar6 = (int *)(param_1 + 0x3fc);
    do {
      if (((param_3 == (wchar_t *)piVar6[0xf]) || (param_3 == (wchar_t *)*piVar6)) ||
         ((param_3 == (wchar_t *)piVar6[0x19] ||
          ((param_3 == (wchar_t *)piVar6[0x1e] || (param_3 == (wchar_t *)piVar6[0x23])))))) {
        ExceptionList = &local_c;
        *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3c4) + iVar7;
        pwVar9 = *(wchar_t **)(param_1 + 0x438 + iVar7 * 4);
        if (param_3 != pwVar9) {
          (**(code **)(*(int *)pwVar9 + 0xa8))(0x2c,0,0);
        }
        pwVar9 = *(wchar_t **)(param_1 + 0x3fc + iVar7 * 4);
        ppvVar3 = ExceptionList;
        if (param_3 != pwVar9) {
          (**(code **)(*(int *)pwVar9 + 0xa8))(0x2c,0,0);
          ppvVar3 = ExceptionList;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      ppvVar3 = &local_c;
    } while (iVar7 < 5);
    break;
  case 0x2d:
    iVar7 = 0;
    piVar6 = (int *)(param_1 + 0x3fc);
    do {
      if ((((param_3 == (wchar_t *)piVar6[0xf]) || (param_3 == (wchar_t *)*piVar6)) ||
          (param_3 == (wchar_t *)piVar6[0x19])) ||
         ((param_3 == (wchar_t *)piVar6[0x1e] || (param_3 == (wchar_t *)piVar6[0x23])))) {
        ExceptionList = &local_c;
        if (*(int *)(param_1 + 0x3cc) == *(int *)(param_1 + 0x3c4) + iVar7) {
          ExceptionList = &local_c;
          *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
        }
        pwVar9 = *(wchar_t **)(param_1 + 0x438 + iVar7 * 4);
        if (param_3 != pwVar9) {
          (**(code **)(*(int *)pwVar9 + 0xa8))(0x2d,0,0);
        }
        pwVar9 = *(wchar_t **)(param_1 + 0x3fc + iVar7 * 4);
        ppvVar3 = ExceptionList;
        if (param_3 != pwVar9) {
          (**(code **)(*(int *)pwVar9 + 0xa8))(0x2d,0,0);
          ppvVar3 = ExceptionList;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      ppvVar3 = &local_c;
    } while (iVar7 < 5);
    break;
  case 0x3e:
    if (param_3 == *(wchar_t **)(param_1 + 0x3d0)) {
      ExceptionList = &local_c;
      *(int *)(param_1 + 0x3c4) = param_4;
      ppvVar3 = ExceptionList;
    }
    else {
      ppvVar3 = &local_c;
      if (param_3 == *(wchar_t **)(param_1 + 0x920)) {
        ExceptionList = &local_c;
        *(int *)(param_1 + 0x93c) = param_4;
        if (param_4 < 0) {
          *(undefined4 *)(param_1 + 0x93c) = 0;
        }
        swprintf((wchar_t *)(param_1 + 0x508),0x5d0ec4,*(wchar_t **)(param_1 + 0x93c));
        (**(code **)(**(int **)(param_1 + 0x928) + 0xa8))(0x1d,(wchar_t *)(param_1 + 0x508),0);
        ppvVar3 = ExceptionList;
      }
    }
    break;
  case 0x45:
    if (param_3 == (wchar_t *)0x0) {
      ExceptionList = &local_c;
      (**(code **)(**(int **)(param_1 + 0x920) + 0xa8))(0x38,1,0);
      ppvVar3 = ExceptionList;
    }
    else {
      local_b0 = (int *)0x0;
      ExceptionList = &local_c;
      swscanf(param_3,(wchar_t *)&PTR_DAT_005d0ec4,&local_b0);
      if ((int)local_b0 < 1) {
        *(undefined4 *)(param_1 + 0x93c) = 1;
      }
      else if (*(int *)(param_1 + 0x940) < (int)local_b0) {
        *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x940);
      }
      else {
        *(int **)(param_1 + 0x93c) = local_b0;
      }
      pwVar9 = (wchar_t *)(param_1 + 0x508);
      swprintf(pwVar9,0x5d0ec4,*(wchar_t **)(param_1 + 0x93c));
      iVar7 = _wcsicmp(param_3,pwVar9);
      if (iVar7 != 0) {
        (**(code **)(**(int **)(param_1 + 0x928) + 0xa8))(0x1d,pwVar9,0);
      }
      (**(code **)(**(int **)(param_1 + 0x920) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x93c),0);
      ppvVar3 = ExceptionList;
    }
    break;
  case 0x47:
    ppvVar3 = &local_c;
    if (*(int *)(param_1 + 0x360) != 0) {
      ExceptionList = &local_c;
      *(wchar_t **)(*(int *)(param_1 + 0x360) + 0x978) = param_3;
      *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x980) = 1;
      ppvVar3 = ExceptionList;
    }
    break;
  case 0x48:
    iVar7 = *(int *)(param_1 + 0x360);
    if (iVar7 == 0) {
      iVar8 = 0;
      ExceptionList = &local_c;
    }
    else {
      iVar8 = *(int *)(iVar7 + 0x978);
      ExceptionList = &local_c;
      *(undefined1 *)(param_1 + 0x4e4) = 1;
      *(int *)(iVar7 + 0x978) = iVar8;
      (**(code **)(**(int **)(param_1 + 0x360) + 0x5c))(0xef01,0,0);
    }
    *(undefined1 *)(param_1 + 0x4e5) = 1;
    *(wchar_t **)(param_1 + 0x504) = param_3;
    *(int *)(param_1 + 0x500) = param_4;
    if (iVar8 == 1) {
      uVar14 = 4;
LAB_0047a690:
      FUN_0047f240(uVar14,1);
    }
    else if ((iVar8 == 2) || (iVar8 == 3)) {
      uVar14 = 0;
      goto LAB_0047a690;
    }
    piVar6 = *(int **)(param_1 + 0x3ac);
    piVar13 = (int *)*piVar6;
    while (piVar13 != piVar6) {
      piVar11 = (int *)*piVar13;
      *(int *)piVar13[1] = *piVar13;
      *(int *)(*piVar13 + 4) = piVar13[1];
      FUN_005b7e1d(piVar13);
      *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + -1;
      piVar13 = piVar11;
    }
    iVar7 = FUN_004c4060();
    if (param_1 + 0x3a8 != iVar7) {
      piVar6 = *(int **)(param_1 + 0x3ac);
      pcVar2 = *(char **)(iVar7 + 4);
      local_b0 = (int *)*piVar6;
      for (local_b4 = *(char **)pcVar2; (local_b0 != piVar6 && (local_b4 != pcVar2));
          local_b4 = *(char **)local_b4) {
        piVar13 = local_b0 + 2;
        local_b0 = (int *)*local_b0;
        piVar11 = (int *)(local_b4 + 8);
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar13 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar13 = piVar13 + 1;
        }
      }
      while (local_b0 != piVar6) {
        puVar5 = (undefined4 *)FUN_0053ab20(&local_ac,0);
        std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
                  ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x3a8),auStack_40,
                   *puVar5);
      }
      std::list<EquipDesc,std::allocator<EquipDesc>_>::insert
                ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x3a8),piVar6,local_b4,
                 pcVar2);
    }
    uVar14 = FUN_004c3e10();
    uVar15 = 1;
    *(undefined4 *)(param_1 + 0x348) = uVar14;
    uVar14 = FUN_004c4060(1);
    FUN_004c62b0(uVar14,uVar15);
    IDPMsgHandler::OnAddHost
              ((IDPMsgHandler *)(param_1 + 0x330),
               (_DPNMSG_ENUM_HOSTS_RESPONSE *)(uint)*(byte *)(param_1 + 0x4e2));
    iVar7 = *(int *)(param_1 + 0x360);
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(iVar7 + 0x364);
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(iVar7 + 0x368);
      *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(iVar7 + 0x36c);
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(iVar7 + 0x370);
      *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(iVar7 + 0x374);
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(iVar7 + 0x378);
      *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(iVar7 + 0x37c);
    }
    FUN_0047d2f0(param_1 + 0x34c,0,1);
    ppvVar3 = ExceptionList;
    if (*(int *)(param_1 + 4) != 0) {
      FUN_005763b0(0x66,0);
      ppvVar3 = ExceptionList;
    }
    break;
  case 0x4f:
    if (param_3 == *(wchar_t **)(param_1 + 0x4d0)) {
      ExceptionList = &local_c;
      FUN_004c63e0(&local_b4,&local_ac);
      FUN_004347e0(DAT_0067eca8,0x49b,param_1 + 0x706U,0xff);
      _Format = (wchar_t *)ftol();
      pwVar9 = (wchar_t *)(param_1 + 0x508);
      ftol();
      swprintf(pwVar9,param_1 + 0x706U,_Format);
      local_90 = (wchar_t *)0x0;
      local_8c = 0;
      FUN_004144b0();
      local_94 = (void *)0x0;
      local_98 = 0xffffffff;
      local_54 = 0;
      FUN_00414280();
      local_38 = 0;
      if (pwVar9 == (wchar_t *)0x0) {
        if ((local_90 != (wchar_t *)0x0) && (*local_90 != L'\0')) {
          *local_90 = L'\0';
        }
      }
      else {
        local_a4 = wcslen(pwVar9);
        uVar1 = local_a4 + 1;
        if (local_8c < uVar1) {
          if (local_90 == (wchar_t *)0x0) {
            local_90 = malloc(uVar1 * 2);
            *local_90 = L'\0';
            local_8c = uVar1;
          }
          else {
            local_90 = realloc(local_90,uVar1 * 2);
            local_8c = uVar1;
          }
        }
        wcsncpy(local_90,pwVar9,local_a4);
        local_90[local_a4] = L'\0';
      }
      local_98 = 0x43b;
      local_94 = (void *)0x43b;
      puVar5 = (undefined4 *)
               (**(code **)(**(int **)Engine_exref + 0xa0))
                         (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 0x4d0) + 0x84));
      iVar7 = *(int *)(param_1 + 0x4d0);
      puVar12 = &uStack_3c;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar12 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      }
      uStack_5c = uStack_18;
      uStack_58 = uStack_14;
      local_54 = uStack_10;
      uStack_50 = *(undefined4 *)(iVar7 + 0xb4);
      uStack_4c = *(undefined4 *)(iVar7 + 0xb8);
      uStack_48 = *(undefined4 *)(iVar7 + 0xbc);
      uStack_44 = 1;
      FUN_004be370(&local_a4);
      local_a8 = &local_94;
      uStack_4._0_1_ = 5;
      uStack_4._1_3_ = 0;
      FUN_004144f0();
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      FUN_00445d70();
      pcVar10 = free_exref;
      if (local_94 != (void *)0x0) {
        free(local_94);
        local_94 = (void *)0x0;
        local_90 = (wchar_t *)0x0;
      }
    }
    else {
      iVar7 = 0;
      piVar6 = (int *)(param_1 + 0x438);
      while (param_3 != (wchar_t *)*piVar6) {
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
        if (4 < iVar7) {
          return 0;
        }
      }
      piVar6 = *(int **)(param_1 + 0x488 + iVar7 * 4);
      if (piVar6 == (int *)0x0) {
        return 0;
      }
      if ((*(byte *)(piVar6 + 0x1b) & 2) == 0) {
        return 0;
      }
      if (*(int *)(param_3 + 0x66) == 0) {
        return 0;
      }
      ExceptionList = &local_c;
      (**(code **)(*piVar6 + 0xa8))(0x2f,&local_ac,0);
      FUN_004347e0(DAT_0067eca8,*(undefined4 *)(param_3 + 0x66),&DAT_0066fc60,DAT_006119f8);
      if (local_ac == 0) {
        uVar14 = 0x52b;
      }
      else {
        uVar14 = 0x52a;
      }
      FUN_004347e0(DAT_0067eca8,uVar14,&DAT_0066dc60,DAT_006119f8);
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
      pwStack_9c = (wchar_t *)0x0;
      local_98 = 0;
      uStack_4 = 6;
      FUN_004144b0();
      uStack_4 = CONCAT31(uStack_4._1_3_,7);
      pwStack_a0 = (wchar_t *)0x0;
      local_a4 = 0xffffffff;
      uStack_60 = 0;
      FUN_00414280();
      uStack_44 = 0;
      uStack_4 = 8;
      _Count = wcslen(&DAT_0066fc60);
      uVar1 = _Count + 1;
      if (local_98 < uVar1) {
        if (pwStack_9c == (wchar_t *)0x0) {
          pwStack_9c = malloc(uVar1 * 2);
          *pwStack_9c = L'\0';
          local_98 = uVar1;
        }
        else {
          pwStack_9c = realloc(pwStack_9c,uVar1 * 2);
          local_98 = uVar1;
        }
      }
      wcsncpy(pwStack_9c,&DAT_0066fc60,_Count);
      pwStack_9c[_Count] = L'\0';
      iVar7 = *(int *)(param_1 + 0x438 + iVar7 * 4);
      pwStack_a0 = param_3;
      pwVar9 = param_3 + 0x196;
      puVar5 = &uStack_3c;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = *(undefined4 *)pwVar9;
        pwVar9 = pwVar9 + 2;
        puVar5 = puVar5 + 1;
      }
      uStack_5c = uStack_18;
      local_a4 = 0;
      uStack_58 = uStack_14;
      local_54 = uStack_10;
      uStack_50 = *(undefined4 *)(iVar7 + 0xb4);
      uStack_4c = *(undefined4 *)(iVar7 + 0xb8);
      uStack_48 = *(undefined4 *)(iVar7 + 0xbc);
      uStack_44 = 1;
      FUN_004be370(&local_a4);
      local_a8 = &local_94;
      uStack_4._0_1_ = 0xb;
      uStack_4._1_3_ = 0;
      FUN_004144f0();
      uStack_4 = CONCAT31(uStack_4._1_3_,10);
      FUN_00445d70();
      pcVar10 = free_exref;
      if (local_94 != (void *)0x0) {
        free(local_94);
        local_94 = (void *)0x0;
        local_90 = (wchar_t *)0x0;
      }
    }
    if (pwStack_9c != (wchar_t *)0x0) {
      (*pcVar10)(pwStack_9c);
    }
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = ppvVar3;
  iVar7 = *(int *)(param_1 + 0x360);
  if (((iVar7 != 0) && (*(int *)(iVar7 + 0x978) == 2)) &&
     ((*(int *)(iVar7 + 0x330) != 0 && (iVar7 = FUN_0047e790(), iVar7 != 0)))) {
    iVar8 = FUN_0047e790();
    iVar7 = *(int *)(param_1 + 0x360);
    *(undefined4 *)(iVar7 + 0x3a4) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x4f4) = 0;
    FUN_004c6a50(0,0,5);
    FUN_004795f0(0);
    if (*(int *)(iVar7 + 0x360) != 0) {
      *(undefined4 *)(*(int *)(iVar7 + 0x360) + 0x4e8) = 0;
      *(undefined4 *)(*(int *)(iVar7 + 0x360) + 0x4ec) = 0;
    }
    FUN_00585d20(iVar8,1);
    FUN_00585bd0(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x508),0,*(undefined4 *)(iVar8 + 4));
  }
  ExceptionList = local_c;
  return 0;
}

