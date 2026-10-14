
undefined4 FUN_0043f060(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int *piVar5;
  undefined3 extraout_var;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int local_50;
  int local_4c [2];
  int local_44;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [4];
  char *local_3c;
  uint local_38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [4];
  char *local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9663;
  local_c = ExceptionList;
  local_30[0] = param_1._0_1_;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_30,false);
  pcVar8 = param_1;
  uVar6 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_30,uVar6,true);
  if (bVar3) {
    pcVar9 = pcVar8;
    pcVar11 = local_2c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_30,uVar6);
  }
  iVar10 = local_4c[0] + 0x388;
  local_4 = 0;
  param_1 = (char *)iVar10;
  FUN_00442cb0(&local_50,local_30);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_30,true);
  if (local_50 == *(int *)(local_4c[0] + 0x38c)) {
    local_30[0] = param_1._0_1_;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_30,false);
    uVar6 = 0xffffffff;
    pcVar9 = pcVar8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (local_30,uVar6,true);
    if (bVar3) {
      pcVar9 = pcVar8;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)local_2c = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        local_2c = local_2c + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_2c = *pcVar9;
        pcVar9 = pcVar9 + 1;
        local_2c = local_2c + 1;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_30,uVar6);
      iVar10 = (int)param_1;
    }
    local_4 = 1;
    pvVar4 = operator_new(0x80);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_20,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_30);
    local_10 = 0;
    local_4._0_1_ = 2;
    piVar5 = (int *)FUN_00442b10(local_4c,local_20);
    iVar2 = *piVar5;
    local_4 = CONCAT31(local_4._1_3_,1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_20,true);
    *(void **)(iVar2 + 0x1c) = pvVar4;
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_30,true);
  }
  local_40[0] = param_1._0_1_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_40,false);
  uVar6 = 0xffffffff;
  pcVar9 = pcVar8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_40,uVar6,true);
  if (bVar3) {
    pcVar9 = local_3c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_3c[uVar6] = '\0';
    iVar10 = (int)param_1;
    local_38 = uVar6;
  }
  local_4 = 3;
  FUN_00594de0(&local_44,local_40);
  if (local_44 != *(int *)(iVar10 + 4)) {
    bVar3 = std::operator<(local_40,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(local_44 + 0xc));
    if (!bVar3) {
      piVar5 = &local_44;
      goto LAB_0043f291;
    }
  }
  param_1 = *(char **)(iVar10 + 4);
  piVar5 = (int *)&param_1;
LAB_0043f291:
  local_50 = *piVar5;
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_40,true);
  pcVar8 = *(char **)(local_50 + 0x1c);
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  ExceptionList = local_c;
  return CONCAT31(extraout_var,1);
}

