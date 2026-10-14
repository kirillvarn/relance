
void __thiscall
FUN_004f5e50(int param_1,byte *param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  code cVar1;
  byte bVar2;
  void **ppvVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  code *pcVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  code *local_28;
  uint local_24;
  undefined4 local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  code *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf3c2;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  }
  iVar9 = 0;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (0 < iVar11) {
    do {
      ExceptionList = ppvVar3;
      if (*(int *)(*(int *)(param_1 + 0xc) + iVar9 * 4) != 0) {
        FUN_004f6150(1);
      }
      iVar9 = iVar9 + 1;
      ppvVar3 = ExceptionList;
    } while (iVar9 < iVar11);
  }
  FUN_0042ec80();
  pbVar8 = param_3;
joined_r0x004f5eb4:
  if ((int)pbVar8 < 1) {
    ExceptionList = local_c;
    return;
  }
  for (; (0 < (int)pbVar8 && ((bVar2 = *param_2, bVar2 < 0x30 || (0x39 < bVar2))));
      param_2 = param_2 + 1) {
    if (bVar2 < 0x20) {
      ExceptionList = local_c;
      return;
    }
    pbVar8 = pbVar8 + -1;
  }
  iVar11 = 0;
  for (; 0 < (int)pbVar8; pbVar8 = pbVar8 + -1) {
    bVar2 = *param_2;
    if ((bVar2 < 0x30) || (0x39 < bVar2)) {
      if (0 < (int)pbVar8) goto LAB_004f5f20;
      break;
    }
    param_2 = param_2 + 1;
    iVar11 = (bVar2 - 0x30) + iVar11 * 10;
  }
  goto LAB_004f5f5c;
  while( true ) {
    if (*param_2 < 0x20) {
      ExceptionList = local_c;
      return;
    }
    param_2 = param_2 + 1;
    pbVar8 = pbVar8 + -1;
    if ((int)pbVar8 < 1) break;
LAB_004f5f20:
    if (*param_2 == 0x2c) {
      if (0 < (int)pbVar8) goto LAB_004f5f40;
      break;
    }
  }
  goto LAB_004f5f5c;
  while( true ) {
    if (bVar2 < 0x20) {
      ExceptionList = local_c;
      return;
    }
    param_2 = param_2 + 1;
    pbVar8 = pbVar8 + -1;
    if ((int)pbVar8 < 1) break;
LAB_004f5f40:
    bVar2 = *param_2;
    if ((bVar2 != 0x2c) && (bVar2 != 0x20)) break;
  }
LAB_004f5f5c:
  local_1c[0] = param_2._0_1_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_1c,false);
  local_4 = 0;
  for (; 0 < (int)pbVar8; pbVar8 = pbVar8 + -1) {
    bVar2 = *param_2;
    if (bVar2 < 0x20) {
      if (0 < (int)pbVar8) goto LAB_004f5fa4;
      break;
    }
    if (bVar2 != 0x20) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(local_1c,1,bVar2)
      ;
    }
    param_2 = param_2 + 1;
  }
LAB_004f5fcf:
  param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  }
  iVar5 = 0;
  if (0 < iVar9) {
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4) + 0x10) == iVar11) {
        if (iVar5 != -1) {
          param_3 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                     (*(int *)(param_1 + 0xc) + iVar5 * 4);
          goto LAB_004f604d;
        }
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar9);
  }
  param_3 = operator_new(0x14);
  if (param_3 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    param_3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    *param_3 = param_2._0_1_;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  *(int *)(param_3 + 0x10) = iVar11;
  FUN_00537260(*(undefined4 *)(param_1 + 0x10),1,&param_3);
LAB_004f604d:
  pcVar10 = local_18;
  if (local_18 == (code *)0x0) {
    pcVar10 = _C_exref;
  }
  local_2c[0] = param_2._0_1_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_2c,false);
  uVar6 = 0xffffffff;
  pcVar12 = pcVar10;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != (code)0x0);
  uVar6 = ~uVar6 - 1;
  bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_2c,uVar6,true);
  if (bVar4) {
    pcVar12 = local_28;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    local_28[uVar6] = (code)0x0;
    local_24 = uVar6;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004e5ab0(*(undefined4 *)(param_3 + 8),1,local_2c);
  if (local_28 != (code *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == (code)0x0) || (cVar1 == (code)0xff)) {
      FUN_005b7e1d(local_28 + -1);
    }
    else {
      local_28[-1] = (code)((char)cVar1 + -1);
    }
  }
  local_28 = (code *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0xffffffff;
  if (local_18 != (code *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == (code)0x0) || (cVar1 == (code)0xff)) {
      FUN_005b7e1d(local_18 + -1);
    }
    else {
      local_18[-1] = (code)((char)cVar1 + -1);
    }
  }
  local_18 = (code *)0x0;
  local_14 = 0;
  local_10 = 0;
  goto joined_r0x004f5eb4;
  while( true ) {
    param_2 = param_2 + 1;
    pbVar8 = pbVar8 + -1;
    if ((int)pbVar8 < 1) break;
LAB_004f5fa4:
    if (*param_2 < 0x21) {
      if (0 < (int)pbVar8) goto LAB_004f5fc0;
      break;
    }
  }
  goto LAB_004f5fcf;
  while( true ) {
    param_2 = param_2 + 1;
    pbVar8 = pbVar8 + -1;
    if ((int)pbVar8 < 1) break;
LAB_004f5fc0:
    if (0x1f < *param_2) break;
  }
  goto LAB_004f5fcf;
}

