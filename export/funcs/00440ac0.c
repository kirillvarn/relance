
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00440ac0(int param_1,float param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  uint *puVar5;
  code *_Str1;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  float10 fVar14;
  char *pcVar15;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *(undefined1 *)(param_1 + 0x3d4) = 0;
  FUN_00438c00();
  uVar12 = (uint)param_2;
  iVar10 = *(int *)((int)param_2 + 0x1c);
  if ((iVar10 != 0) && (*(int *)(iVar10 + 0x10) == 0xb)) {
    FUN_0043fd30(param_2);
    return;
  }
  iVar1 = *(int *)((int)param_2 + 0x30);
  if ((iVar1 != 0) && (iVar1 == DAT_00668740)) {
    if (*(int *)(param_1 + 0x374) == 0) {
      return;
    }
    uVar11 = *(uint *)npos_exref;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x36c))
    ;
    uVar2 = *(uint *)(param_1 + 0x374);
    if (uVar2 < uVar11) {
      uVar11 = uVar2;
    }
    if (uVar11 != 0) {
      memmove(*(void **)(param_1 + 0x370),(void *)((int)*(void **)(param_1 + 0x370) + uVar11),
              uVar2 - uVar11);
      uVar11 = *(int *)(param_1 + 0x374) - uVar11;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (param_1 + 0x36c),uVar11,false);
      uVar12 = (uint)param_2;
      if (bVar3) {
        *(uint *)(param_1 + 0x374) = uVar11;
        *(undefined1 *)(uVar11 + *(int *)(param_1 + 0x370)) = 0;
      }
    }
    FUN_0043fd30(uVar12);
    return;
  }
  if (((*(char *)((int)param_2 + 1) != '\0') && (iVar1 != 0)) && (iVar10 != 0)) {
    uVar12 = *(uint *)npos_exref;
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x36c);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
    uVar11 = *(uint *)(param_1 + 0x374);
    if (uVar11 < uVar12) {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      memmove(*(void **)(param_1 + 0x370),(void *)((int)*(void **)(param_1 + 0x370) + uVar12),
              uVar11 - uVar12);
      uVar12 = *(int *)(param_1 + 0x374) - uVar12;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (this,uVar12,false);
      if (bVar3) {
        *(uint *)(param_1 + 0x374) = uVar12;
        *(undefined1 *)(uVar12 + *(int *)(param_1 + 0x370)) = 0;
      }
    }
    pcVar15 = *(char **)(*(int *)((int)param_2 + 0x1c) + 0xc);
    if (pcVar15 != (char *)0x0) {
      uVar12 = 0xffffffff;
      pcVar13 = pcVar15;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar4 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar4 != '\0');
      uVar12 = ~uVar12 - 1;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (this,uVar12,true);
      if (bVar3) {
        pcVar13 = *(char **)(param_1 + 0x370);
        for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar11 = uVar12 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(this,uVar12);
      }
      *(undefined1 *)(param_1 + 0x3c5) = 1;
      *(int *)(param_1 + 0x3c8) = DAT_00668740;
    }
    FUN_0044d240(0xffffffff,3,*(undefined4 *)((int)param_2 + 0x30));
    FUN_0043e600();
    return;
  }
  switch(iVar1) {
  case 2:
    if (*(char *)((int)param_2 + 0x20) == '\0') {
      FUN_0043e600();
      piVar6 = *(int **)(param_1 + 0x380);
      piVar9 = (int *)*piVar6;
      if (piVar9 != piVar6) {
        while ((*(char *)((int)piVar9 + 9) != '\0' || ((char)piVar9[10] == '\0'))) {
          piVar9 = (int *)*piVar9;
          if (piVar9 == piVar6) {
            FUN_004400d0(uVar12);
            return;
          }
        }
        switch(piVar9[0xe]) {
        case 2:
        case 3:
        case 7:
        case 0xc:
          FUN_00440260(piVar9 + 2);
        }
      }
      FUN_004400d0(uVar12);
      return;
    }
    piVar6 = (int *)FUN_0059da10("NN_News");
    if ((piVar6 != (int *)0x0) &&
       (piVar6 = (int *)(**(code **)(*piVar6 + 8))(), piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 0xa8))(0x4e,0,0);
    }
    cVar4 = FUN_0055e280();
    if ((cVar4 != '\0') || (cVar4 = FUN_0055e280(), cVar4 != '\0')) {
LAB_0044158e:
      *(uint *)(param_1 + 0x3f0) = uVar12;
      return;
    }
    *(uint *)(param_1 + 0x3ec) = uVar12;
    FUN_005645c0(0x1b);
    FUN_00440460(*(undefined4 *)(uVar12 + 0x30),0x3f800000);
    switch(*(undefined4 *)(uVar12 + 0x30)) {
    case 2:
    case 3:
    case 0xc:
      goto switchD_00440f73_caseD_2;
    default:
      goto switchD_00440f73_caseD_4;
    case 7:
      goto switchD_00440f73_caseD_7;
    }
  case 3:
    if (*(char *)((int)param_2 + 0x20) == '\0') {
      FUN_0043e600();
      piVar6 = *(int **)(param_1 + 0x380);
      piVar9 = (int *)*piVar6;
      if (piVar9 != piVar6) {
        while ((*(char *)((int)piVar9 + 9) != '\0' || ((char)piVar9[10] == '\0'))) {
          piVar9 = (int *)*piVar9;
          if (piVar9 == piVar6) {
            FUN_004400d0(uVar12);
            return;
          }
        }
        switch(piVar9[0xe]) {
        case 2:
        case 3:
        case 7:
        case 0xc:
          cVar4 = FUN_0055e280();
          if ((cVar4 == '\0') && (cVar4 = FUN_0055e280(), cVar4 == '\0')) {
            *(int **)(param_1 + 0x3ec) = piVar9 + 2;
            FUN_005645c0(0x1b);
            FUN_00440460(piVar9[0xe],0x3f800000);
            fVar14 = (float10)FUN_00440410(piVar9[0xe]);
            param_2 = (float)fVar14;
            FUN_0055e590(DAT_005cb4d0);
            FUN_0055e360(*(undefined4 *)(param_1 + 1000),0x3f800000,param_2);
            FUN_004400d0(uVar12);
            return;
          }
          *(int **)(param_1 + 0x3f0) = piVar9 + 2;
        }
      }
      FUN_004400d0(uVar12);
      return;
    }
    piVar6 = (int *)FUN_0059da10("NN_MissionVendor");
    if ((piVar6 != (int *)0x0) &&
       (piVar6 = (int *)(**(code **)(*piVar6 + 8))(), piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 0xa8))(0x4e,0,0);
    }
    cVar4 = FUN_0055e280();
    if ((cVar4 != '\0') || (cVar4 = FUN_0055e280(), cVar4 != '\0')) goto LAB_0044158e;
    *(uint *)(param_1 + 0x3ec) = uVar12;
    FUN_005645c0(0x1b);
    switch(*(undefined4 *)(uVar12 + 0x30)) {
    case 2:
      goto LAB_00441417;
    case 3:
LAB_00441417:
      uVar7 = FUN_00422b80(0,0xbdcccccd,0xbfbfbe77);
      pcVar15 = "Interface\\NeuroNet\\NewsVendor\\NEWS_background.cmp";
      break;
    default:
      goto switchD_004413cf_caseD_4;
    case 7:
      uVar7 = FUN_00422b80(0,0xbdb020c5,0xbfa4dd2f);
      pcVar15 = "Interface\\NeuroNet\\Inventory\\INV_biginforcard_center.cmp";
      break;
    case 0xc:
      uVar7 = FUN_00422b80(0,0,0xbf8ccccd);
      pcVar15 = "Interface\\NeuroNet\\Inventory\\repair_bakgrnd.cmp";
    }
    FUN_00441ea0(0x3f800000,pcVar15,uVar7);
switchD_004413cf_caseD_4:
    switch(*(undefined4 *)(uVar12 + 0x30)) {
    case 2:
    case 3:
    case 0xc:
switchD_00440f73_caseD_2:
      param_2 = 0.08;
      break;
    default:
switchD_00440f73_caseD_4:
      param_2 = 1.0;
      break;
    case 7:
switchD_00440f73_caseD_7:
      param_2 = 0.05;
    }
    FUN_0055e590(DAT_005cb4d0);
    FUN_0055e360(*(undefined4 *)(param_1 + 1000),0x3f800000,param_2);
    return;
  case 4:
    cVar4 = FUN_004422b0();
    if ((cVar4 != '\0') && (iVar10 = FUN_004c3e10(), iVar10 != 0)) {
      iVar10 = FUN_00446be0();
      if (iVar10 == 0) {
        FUN_00558a30();
      }
      else {
        FUN_00447cd0();
      }
      piVar6 = (int *)FUN_0059da10("NavBar");
      if (piVar6 != (int *)0x0) {
        piVar9 = (int *)piVar6[0xfa];
        if (piVar9 != (int *)0x0) {
          iVar10 = piVar9[3];
          while (iVar10 != 0) {
            iVar1 = *(int *)(iVar10 + 8);
            FUN_0043d2a0(iVar10);
            iVar10 = iVar1;
          }
          (**(code **)(*piVar9 + 0x28))();
          (**(code **)*piVar9)(1);
          piVar6[0xfa] = 0;
        }
        FUN_004420a0();
        (**(code **)(*piVar6 + 0x28))();
        (**(code **)*piVar6)(1);
        return;
      }
    }
    break;
  case 5:
    iVar10 = FUN_0043bc90();
    if (iVar10 != 0) {
      param_2 = (float)((uint)param_2 & 0xffffff00);
      FUN_004c4da0(iVar10,&param_2,0,0);
      param_2 = (float)((uint)param_2 | 4);
      FUN_004c4e00(iVar10,param_2,1);
    }
    FUN_00477ab0(1,0,0,0);
    return;
  case 6:
  case 9:
  case 10:
    break;
  case 7:
    if (*(char *)((int)param_2 + 0x20) == '\0') {
      FUN_004400d0(param_2);
      return;
    }
    piVar6 = (int *)FUN_0059da10("NN_ShipTrader");
    if ((piVar6 != (int *)0x0) &&
       (piVar6 = (int *)(**(code **)(*piVar6 + 8))(), piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 0xa8))(0x4e,0,0);
    }
    cVar4 = FUN_0055e280();
    if ((cVar4 != '\0') || (cVar4 = FUN_0055e280(), cVar4 != '\0')) goto LAB_0044158e;
    *(uint *)(param_1 + 0x3ec) = uVar12;
    FUN_005645c0(0x1b);
    switch(*(undefined4 *)(uVar12 + 0x30)) {
    case 2:
      goto LAB_0044116d;
    case 3:
LAB_0044116d:
      puVar8 = (undefined4 *)FUN_00422b80(0,0xbdcccccd,0xbfbfbe77);
      pcVar15 = "Interface\\NeuroNet\\NewsVendor\\NEWS_background.cmp";
      break;
    default:
      goto switchD_0044111b_caseD_4;
    case 7:
      puVar8 = (undefined4 *)FUN_00422b80(0,0xbdb020c5,0xbfa4dd2f);
      pcVar15 = "Interface\\NeuroNet\\Inventory\\INV_biginforcard_center.cmp";
      break;
    case 0xc:
      puVar8 = &uStack_30;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0xbf8ccccd;
      pcVar15 = "Interface\\NeuroNet\\Inventory\\repair_bakgrnd.cmp";
    }
    FUN_00441ea0(0x3f800000,pcVar15,puVar8);
switchD_0044111b_caseD_4:
    switch(*(undefined4 *)(uVar12 + 0x30)) {
    case 2:
    case 3:
    case 0xc:
      param_2 = 0.08;
      break;
    default:
      param_2 = 1.0;
      break;
    case 7:
      param_2 = 0.05;
    }
    FUN_0055e590(DAT_005cb4d0);
    FUN_0055e360(*(undefined4 *)(param_1 + 1000),0x3f800000,param_2);
    return;
  case 8:
    iVar10 = FUN_0043bc90();
    if (iVar10 != 0) {
      param_2 = (float)((uint)param_2 & 0xffffff00);
      FUN_004c4da0(iVar10,&param_2,0,0);
      param_2 = (float)((uint)param_2 | 8);
      FUN_004c4e00(iVar10,param_2,1);
    }
    FUN_00477ab0(3,0,0,0);
    return;
  default:
    iVar10 = FUN_0059da10("NN_Inventory");
    if (((iVar10 != 0) && ((*(byte *)(iVar10 + 0x6c) & 2) != 0)) && (*(int *)(iVar10 + 4) != 0)) {
      FUN_005763b0(0x6b,0);
    }
    FUN_0044d240(0xffffffff,3,*(undefined4 *)(uVar12 + 0x30));
    break;
  case 0xc:
    if (*(char *)((int)param_2 + 0x20) == '\0') {
      FUN_0045a460();
      puVar5 = (uint *)FUN_0043b630();
      uVar11 = MakeLocationID(*puVar5,"Equipment");
      if ((*(int *)(param_1 + 0x374) != 0) || (uVar11 == 0)) {
        _Str1 = *(code **)(param_1 + 0x370);
        if (*(code **)(param_1 + 0x370) == (code *)0x0) {
          _Str1 = _C_exref;
        }
        iVar10 = stricmp((char *)_Str1,"Equipment");
        if (iVar10 == 0) {
          FUN_004400d0(uVar12);
          return;
        }
        piVar6 = (int *)**(int **)(param_1 + 0x380);
        if (piVar6 != *(int **)(param_1 + 0x380)) {
          do {
            if ((*(char *)((int)piVar6 + 9) != '\0') && (*(char **)(piVar6[9] + 4) != (char *)0x0))
            {
              iVar10 = 10;
              bVar3 = true;
              pcVar15 = "Equipment";
              pcVar13 = *(char **)(piVar6[9] + 4);
              do {
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                bVar3 = *pcVar15 == *pcVar13;
                pcVar15 = pcVar15 + 1;
                pcVar13 = pcVar13 + 1;
              } while (bVar3);
              if (bVar3) {
                FUN_0043fd30(piVar6 + 2);
                *(undefined1 *)(param_1 + 0x3d4) = 1;
                break;
              }
            }
            piVar6 = (int *)*piVar6;
          } while (piVar6 != (int *)*(int *)(param_1 + 0x380));
        }
        if (*(char *)(param_1 + 0x3d4) != '\0') {
          return;
        }
        piVar6 = (int *)**(int **)(param_1 + 0x380);
        if (piVar6 == *(int **)(param_1 + 0x380)) {
          return;
        }
        do {
          if ((*(char *)((int)piVar6 + 9) != '\0') && (*(char **)(piVar6[9] + 0xc) != (char *)0x0))
          {
            iVar10 = 10;
            bVar3 = true;
            pcVar15 = "Equipment";
            pcVar13 = *(char **)(piVar6[9] + 0xc);
            do {
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              bVar3 = *pcVar15 == *pcVar13;
              pcVar15 = pcVar15 + 1;
              pcVar13 = pcVar13 + 1;
            } while (bVar3);
            if (bVar3) goto LAB_00440e58;
          }
          piVar6 = (int *)*piVar6;
          if (piVar6 == *(int **)(param_1 + 0x380)) {
            return;
          }
        } while( true );
      }
      if (DAT_00668740 == uVar11) {
        FUN_004400d0(uVar12);
        return;
      }
      puVar8 = (undefined4 *)**(undefined4 **)(param_1 + 0x380);
      do {
        if (puVar8 == *(undefined4 **)(param_1 + 0x380)) {
LAB_00440d1e:
          if (*(char *)(param_1 + 0x3d4) != '\0') {
            return;
          }
          piVar6 = (int *)**(int **)(param_1 + 0x380);
          if (piVar6 == *(int **)(param_1 + 0x380)) {
            return;
          }
          do {
            if ((*(char *)((int)piVar6 + 9) != '\0') && (*(char **)(piVar6[9] + 0xc) != (char *)0x0)
               ) {
              iVar10 = 10;
              bVar3 = true;
              pcVar15 = "Equipment";
              pcVar13 = *(char **)(piVar6[9] + 0xc);
              do {
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                bVar3 = *pcVar15 == *pcVar13;
                pcVar15 = pcVar15 + 1;
                pcVar13 = pcVar13 + 1;
              } while (bVar3);
              if (bVar3) {
LAB_00440e58:
                *(undefined4 *)(param_1 + 0x3d0) = _DAT_005cb4d4;
                FUN_00440ac0(piVar6 + 2);
                *(undefined1 *)(param_1 + 0x3d4) = 1;
                return;
              }
            }
            piVar6 = (int *)*piVar6;
            if (piVar6 == (int *)*(int *)(param_1 + 0x380)) {
              return;
            }
          } while( true );
        }
        if ((*(char *)((int)puVar8 + 9) != '\0') && (puVar8[0xe] == uVar11)) {
          FUN_00440ac0(puVar8 + 2);
          *(undefined1 *)(param_1 + 0x3d4) = 1;
          goto LAB_00440d1e;
        }
        puVar8 = (undefined4 *)*puVar8;
      } while( true );
    }
    piVar6 = (int *)FUN_0059da10("NN_Repair");
    if ((piVar6 != (int *)0x0) &&
       (piVar6 = (int *)(**(code **)(*piVar6 + 8))(), piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 0xa8))(0x4e,0,0);
    }
    cVar4 = FUN_0055e280();
    if ((cVar4 != '\0') || (cVar4 = FUN_0055e280(), cVar4 != '\0')) goto LAB_0044158e;
    *(uint *)(param_1 + 0x3ec) = uVar12;
    FUN_005645c0(0x1b);
    switch(*(undefined4 *)(uVar12 + 0x30)) {
    case 2:
      goto LAB_00440f3a;
    case 3:
LAB_00440f3a:
      uVar7 = FUN_00422b80(0,0xbdcccccd,0xbfbfbe77);
      pcVar15 = "Interface\\NeuroNet\\NewsVendor\\NEWS_background.cmp";
      break;
    default:
      goto switchD_00440ef2_caseD_4;
    case 7:
      uVar7 = FUN_00422b80(0,0xbdb020c5,0xbfa4dd2f);
      pcVar15 = "Interface\\NeuroNet\\Inventory\\INV_biginforcard_center.cmp";
      break;
    case 0xc:
      uVar7 = FUN_00422b80(0,0,0xbf8ccccd);
      pcVar15 = "Interface\\NeuroNet\\Inventory\\repair_bakgrnd.cmp";
    }
    FUN_00441ea0(0x3f800000,pcVar15,uVar7);
switchD_00440ef2_caseD_4:
    switch(*(undefined4 *)(uVar12 + 0x30)) {
    case 2:
    case 3:
    case 0xc:
      goto switchD_00440f73_caseD_2;
    default:
      goto switchD_00440f73_caseD_4;
    case 7:
      goto switchD_00440f73_caseD_7;
    }
  }
  return;
}

