
int __thiscall FUN_0043f8e0(int *param_1,int param_2,undefined1 param_3,char *param_4,char *param_5)

{
  code cVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  char *pcVar11;
  code *pcVar12;
  bool bVar13;
  int unaff_retaddr;
  int iVar14;
  undefined4 uStack_164;
  undefined1 uStack_161;
  int local_15c;
  code *local_158;
  uint uStack_150;
  undefined1 auStack_148 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_140 [12];
  undefined1 auStack_134 [292];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b96b7;
  pvStack_c = ExceptionList;
  local_15c = CONCAT31(local_15c._1_3_,uStack_161);
  ExceptionList = &pvStack_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_15c,false);
  iVar5 = 10;
  bVar13 = true;
  pcVar8 = param_5;
  pcVar11 = "Cityscape";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar13 = *pcVar8 == *pcVar11;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  } while (bVar13);
  local_4 = 0;
  if (bVar13) {
LAB_0043f981:
    param_4 = (char *)CONCAT31(param_4._1_3_,1);
  }
  else {
    iVar5 = 5;
    bVar13 = true;
    pcVar8 = param_5;
    pcVar11 = "Deck";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar13 = *pcVar8 == *pcVar11;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar13);
    if (bVar13) goto LAB_0043f981;
    iVar5 = 0xc;
    bVar13 = true;
    pcVar8 = param_5;
    pcVar11 = "Planetscape";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar13 = *pcVar8 == *pcVar11;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar13);
    if (bVar13) goto LAB_0043f981;
    iVar5 = 0x11;
    bVar13 = true;
    pcVar8 = param_5;
    pcVar11 = "IDS_HOTSPOT_DECK";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar13 = *pcVar8 == *pcVar11;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar13);
    if (bVar13) goto LAB_0043f981;
    iVar5 = 0x18;
    bVar13 = true;
    pcVar8 = param_5;
    pcVar11 = "IDS_HOTSPOT_PLANETSCAPE";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar13 = *pcVar8 == *pcVar11;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar13);
    if (bVar13) goto LAB_0043f981;
    if ((char)param_4 == '\0') {
      pcVar9 = _C_exref;
      if (*(code **)(*(int *)param_1[0xe9] + 0xc) != (code *)0x0) {
        pcVar9 = *(code **)(*(int *)param_1[0xe9] + 0xc);
      }
      uVar6 = 0xffffffff;
      pcVar12 = pcVar9;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != (code)0x0);
      uVar6 = ~uVar6 - 1;
      bVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_15c,uVar6,true);
      if (bVar13) {
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)local_158 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          local_158 = local_158 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_158 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          local_158 = local_158 + 1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_15c,
                   uVar6);
      }
      goto LAB_0043fa4e;
    }
  }
  pcVar9 = _C_exref;
  if (*(code **)(*(int *)param_1[0xec] + 0xc) != (code *)0x0) {
    pcVar9 = *(code **)(*(int *)param_1[0xec] + 0xc);
  }
  uVar6 = 0xffffffff;
  pcVar12 = pcVar9;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != (code)0x0);
  uVar6 = ~uVar6 - 1;
  bVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_15c,
                      uVar6,true);
  if (bVar13) {
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_158 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      local_158 = local_158 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_158 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      local_158 = local_158 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_15c,uVar6);
  }
LAB_0043fa4e:
  FUN_004324c0();
  if (param_2 == -1) {
    puVar4 = (uint *)FUN_0043b630();
    MakeLocationID(*puVar4,param_5);
  }
  iVar5 = (**(code **)(*param_1 + 0x94))();
  iVar10 = 0;
  if (iVar5 != 0) {
    FUN_0043fd00();
    puStack_8._0_1_ = 1;
    FUN_0053e430();
    FUN_00442ab0(auStack_148);
    iVar2 = *(int *)param_1[0xe0];
    iVar10 = iVar2 + 8;
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(abStack_140,true);
    *(char **)(iVar2 + 0x1c) = param_5;
    uVar6 = 0xffffffff;
    pcVar8 = param_4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6 - 1;
    uStack_150 = uVar6;
    bVar13 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (iVar2 + 0xc),uVar6,true);
    if (bVar13) {
      pcVar8 = *(char **)(iVar2 + 0x10);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)param_4;
        param_4 = param_4 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar8 = *param_4;
        param_4 = param_4 + 1;
        pcVar8 = pcVar8 + 1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(iVar2 + 0xc),
                 uVar6);
    }
    *(undefined1 *)(iVar2 + 9) = param_3;
    *(int *)(iVar2 + 0x38) = unaff_retaddr;
    *(int *)(iVar2 + 0x20) = iVar5;
    cVar3 = FUN_004d9ca0(*(undefined4 *)(iVar2 + 0x1c));
    if (cVar3 == '\0') {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: unknown HotspotName = \'%s\'\n",
                 "E:\\FL\\Scratch\\Source\\Client\\GF\\NavBar.cpp");
    }
    iVar14 = 0;
    iVar5 = 0;
    (**(code **)(**(int **)(iVar2 + 0x20) + 0xa8))(1);
    (**(code **)(**(int **)(iVar2 + 0x20) + 0xa8))(3,unaff_ESI,0);
    if ((iVar14 == 0x196b) && (unaff_retaddr == 8)) {
      (**(code **)(**(int **)(iVar2 + 0x20) + 0xa8))(3,0x1968,0);
    }
    *(int *)(*(int *)(iVar2 + 0x20) + 0x2ec) = iVar14;
    if ((char)pvStack_10 == '\0') {
      (**(code **)(**(int **)(iVar2 + 0x20) + 0xa8))(0x36,1,0);
    }
    FUN_00442cb0(&stack0xfffffe78,iVar2 + 0xc);
    if (iVar5 == param_1[0xe3]) {
      (**(code **)(**(int **)(iVar2 + 0x20) + 0xa8))(4,param_1[0xe7],0);
      (**(code **)(**(int **)(iVar2 + 0x20) + 0xa8))(0xb,auStack_134,0x100);
      FUN_0043f060();
    }
    else {
      (**(code **)(**(int **)(iVar2 + 0x20) + 0xa8))(4,*(undefined4 *)(iVar5 + 0x1c));
    }
  }
  if (local_15c != 0) {
    cVar3 = *(char *)(local_15c + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(local_15c + -1) = cVar3 + -1;
    }
  }
  ExceptionList = pvStack_10;
  return iVar10;
}

