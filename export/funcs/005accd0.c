
void FUN_005accd0(int param_1)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined1 *puStack_964;
  uint local_948;
  undefined4 uStack_944;
  wchar_t *local_940;
  int local_93c;
  undefined4 local_938;
  undefined4 local_934 [3];
  undefined1 uStack_926;
  undefined4 local_924;
  undefined4 local_920 [4];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  abStack_910 [4];
  undefined4 local_90c;
  undefined4 local_908;
  DWORD local_904;
  undefined4 local_900;
  char *local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f7;
  undefined1 local_8f6;
  undefined4 local_8f4;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_8f0 [4];
  undefined1 *local_8ec;
  undefined4 local_8e0;
  undefined4 uStack_8dc;
  int iStack_8d8;
  int iStack_8d4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8d0;
  undefined1 uStack_8cf;
  undefined1 uStack_8ce;
  int iStack_8cc;
  int iStack_8c4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8c0 [12];
  undefined4 uStack_8b4;
  int local_8b0;
  int local_8ac [3];
  char local_8a0 [4];
  undefined4 local_89c;
  undefined4 local_890;
  wchar_t awStack_820 [10];
  undefined1 local_80c [2000];
  void *pvStack_3c;
  undefined4 uStack_34;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c5746;
  pvStack_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0xc);
  local_934[0] = CONCAT31(local_934[0]._1_3_,uStack_944._3_1_);
  ExceptionList = &pvStack_c;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)local_934,false);
  local_4 = 0;
  local_924 = 0xffffffff;
  local_920[0] = 0;
  FUN_005a6900();
  local_4._0_1_ = 1;
  local_90c = 0;
  local_908 = 0xfffffffe;
  local_904 = 0;
  local_900 = 0;
  local_8fc = (char *)0x0;
  local_8f8 = 0;
  local_8f7 = 0;
  local_8f6 = 0;
  local_8f4 = 0;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            (local_8f0,(allocator<unsigned_short> *)((int)&local_938 + 1));
  local_4._0_1_ = 2;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)&local_8e0,(allocator<unsigned_short> *)&local_938);
  local_4._0_1_ = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (&local_8d0,(allocator<char> *)((int)&local_938 + 2));
  local_4 = CONCAT31(local_4._1_3_,4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_8c0,(allocator<char> *)((int)&local_938 + 3));
  local_8ac[1] = 0;
  local_8ac[2] = 0;
  local_8a0[0] = '\0';
  local_8a0[1] = 1;
  local_8a0[2] = 1;
  local_908 = *(undefined4 *)(param_1 + 0x1c);
  local_920[0] = 0;
  local_90c = 1;
  local_4 = 5;
  if (*(int *)(iVar6 + 0x2c) == 0) {
    local_8b0 = 0;
  }
  else {
    local_8b0 = *(int *)(iVar6 + 0x2c) + -1;
  }
  local_8ac[0] = *(int *)(iVar6 + 0x28) + -1;
  local_89c = 2;
  local_904 = timeGetTime();
  local_8ac[1] = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_8f6 = 1;
  }
  local_940 = *(wchar_t **)(iVar6 + 0x30);
  local_948 = wcslen(local_940);
  puStack_964 = (undefined1 *)0x5ace83;
  bVar2 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow(local_8f0,local_948,true);
  uVar8 = local_948;
  if (bVar2) {
    puStack_964 = local_8ec;
    FUN_0041d8a0();
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Eos(local_8f0,uVar8);
  }
  puStack_964 = local_80c;
  local_93c = 0x800;
  local_890 = 1;
  (**(code **)(**(int **)(param_1 + 4) + 0x40))(*(int **)(param_1 + 4),L"hostname");
  sVar3 = wcslen(awStack_820);
  bVar2 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)&local_948,sVar3,true);
  if (bVar2) {
    FUN_0041d8a0(uStack_944,awStack_820,sVar3);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Eos((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          *)&local_948,sVar3);
  }
  if (uStack_944 == (code *)0x0) {
    uStack_944 = _C_exref;
  }
  sprintf(local_8a0,"%S",uStack_944);
  uVar4 = Ordinal_11(local_8a0);
  local_940 = (wchar_t *)Ordinal_14(uVar4);
  uStack_8b4 = 0;
  (**(code **)(**(int **)(param_1 + 4) + 0x40))
            (*(int **)(param_1 + 4),L"port",&uStack_8b4,&stack0xfffff6a8,local_8ac);
  pcVar7 = *(char **)(param_1 + 0x10);
  local_8d0 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)
              ((byte)(*(uint *)(iVar6 + 4) >> 7) & 1);
  if (pcVar7 != (char *)0x0) {
    pcVar5 = strchr(pcVar7,0x3a);
    if (pcVar5 == (char *)0x0) goto LAB_005ad21f;
    *pcVar5 = '\0';
    iVar6 = atoi(pcVar7);
    uStack_8ce = iVar6 != 0;
    pcVar5 = pcVar5 + 1;
    pcVar7 = strchr(pcVar5,0x3a);
    if (pcVar7 == (char *)0x0) goto LAB_005ad21f;
    *pcVar7 = '\0';
    iVar6 = atoi(pcVar5);
    uStack_8cf = iVar6 != 0;
    pcVar7 = pcVar7 + 1;
    pcVar5 = strchr(pcVar7,0x3a);
    if (pcVar5 == (char *)0x0) goto LAB_005ad21f;
    *pcVar5 = '\0';
    iStack_8d8 = atoi(pcVar7);
    pcVar5 = pcVar5 + 1;
    pcVar7 = strchr(pcVar5,0x3a);
    if (pcVar7 == (char *)0x0) goto LAB_005ad21f;
    *pcVar7 = '\0';
    iStack_8d4 = atoi(pcVar5);
    pcVar7 = pcVar7 + 1;
    pcVar5 = strchr(pcVar7,0x3a);
    if (pcVar5 == (char *)0x0) goto LAB_005ad21f;
    uVar8 = 0xffffffff;
    *pcVar5 = '\0';
    pcVar11 = pcVar7;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_900
                       ,uVar8,true);
    if (bVar2) {
      pcVar11 = local_8fc;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar11 = pcVar11 + 1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_900,uVar8
                );
    }
    sVar3 = wcslen((wchar_t *)(pcVar5 + 1));
    bVar2 = std::
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::_Grow(abStack_910,sVar3,true);
    if (bVar2) {
      FUN_0041d8a0(local_90c,pcVar5 + 1,sVar3);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Eos(abStack_910,sVar3);
    }
  }
  iVar6 = iStack_8c4;
  if (iStack_8d4 != -1) {
    FUN_005ac010(&puStack_964);
    FUN_005abde0(&puStack_964);
    iVar10 = *(int *)(iVar6 + 0x140);
    iVar12 = iStack_8d4;
    if (iVar10 != *(int *)(iVar6 + 0x144)) {
      do {
        bVar2 = std::operator==((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                (iVar10 + 100),
                                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_900);
        if ((bVar2) && (*(int *)(iVar10 + 0x90) == iVar12)) {
          *(undefined1 *)(iVar10 + 0x96) = uStack_8ce;
          *(undefined1 *)(iVar10 + 0x95) = uStack_8cf;
          *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(iVar10 + 0x94) =
               local_8d0;
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                    *)(iVar10 + 0x54),
                   (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                    *)abStack_910,0,*(uint *)npos_exref);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                    *)(iVar10 + 0x44),
                   (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                    *)local_920,0,*(uint *)npos_exref);
          *(undefined4 *)(iVar10 + 0x84) = local_8e0;
          *(undefined4 *)(iVar10 + 0x88) = uStack_8dc;
          *(int *)(iVar10 + 0x38) = *(int *)(iVar10 + 0x38) + 1;
          uVar8 = *(uint *)(iVar10 + 0x2c);
          if (local_938 < *(uint *)(iVar10 + 0x2c)) {
            uVar8 = local_938;
          }
          *(uint *)(iVar10 + 0x2c) = uVar8;
          *(undefined4 *)(iVar10 + 0x40) = 0;
          *(undefined4 *)(iVar10 + 0x30) = local_934[0];
          *(int *)(iVar10 + 0x8c) = iStack_8d8;
          *(undefined1 *)(iVar10 + 0x3e) = uStack_926;
          *(undefined1 *)(iStack_8c4 + 0x234) = 1;
          *(undefined1 *)(iVar10 + 0x3d) = 0;
          goto LAB_005ad21f;
        }
        iVar10 = iVar10 + 0x9c;
      } while (iVar10 != *(int *)(iVar6 + 0x144));
    }
    if ((local_93c != 0) && (iStack_8cc != 0)) {
      iVar10 = *(int *)(iVar6 + 0x140);
      if (iVar10 != *(int *)(iVar6 + 0x144)) {
        do {
          if ((*(int *)(iVar10 + 0x90) == iStack_8d4) &&
             (bVar2 = std::operator==((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)(iVar10 + 100),
                                      (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                       *)&local_900), bVar2)) goto LAB_005ad21f;
          iVar10 = iVar10 + 0x9c;
        } while (iVar10 != *(int *)(iVar6 + 0x144));
      }
      FUN_005ad6a0(*(undefined4 *)(iVar6 + 0x144),&puStack_964);
      *(undefined1 *)(iVar6 + 0x234) = 1;
    }
  }
LAB_005ad21f:
  uStack_34 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_8f0,true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_900,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(abStack_910,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)local_920,true);
  FUN_004de730();
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)&puStack_964,true);
  ExceptionList = pvStack_3c;
  return;
}

