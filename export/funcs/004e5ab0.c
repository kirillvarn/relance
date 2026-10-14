
void __thiscall
FUN_004e5ab0(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
            uint param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  int iVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  void *pvVar9;
  
  pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)pbVar7 >> 4)) {
    if (param_3 <= (uint)((int)pbVar7 - (int)param_2 >> 4)) {
      if (param_3 != 0) {
        pbVar8 = pbVar7;
        for (pbVar5 = pbVar7 + param_3 * -0x10; pbVar5 != pbVar7; pbVar5 = pbVar5 + 0x10) {
          FUN_00433a50(pbVar8,pbVar5);
          pbVar8 = pbVar8 + 0x10;
        }
        pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
        pbVar8 = pbVar7 + param_3 * -0x10;
        while (param_2 != pbVar8) {
          pbVar8 = pbVar8 + -0x10;
          pbVar7 = pbVar7 + -0x10;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (pbVar7,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             *)pbVar8,0,*(uint *)npos_exref);
        }
        pbVar7 = param_2 + param_3 * 0x10;
        for (; param_2 != pbVar7; param_2 = param_2 + 0x10) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (param_2,param_4,0,*(uint *)npos_exref);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
      }
      return;
    }
    for (pbVar8 = param_2; pbVar8 != pbVar7; pbVar8 = pbVar8 + 0x10) {
      FUN_00433a50(pbVar8 + param_3 * 0x10,pbVar8);
    }
    iVar6 = *(int *)(param_1 + 8);
    for (iVar3 = param_3 - (iVar6 - (int)param_2 >> 4); iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_00433a50(iVar6,param_4);
      iVar6 = iVar6 + 0x10;
    }
    pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
    for (; param_2 != pbVar7; param_2 = param_2 + 0x10) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,param_4,0,*(uint *)npos_exref);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
    return;
  }
  iVar6 = *(int *)(param_1 + 4);
  if ((iVar6 == 0) || (uVar2 = (int)pbVar7 - iVar6 >> 4, uVar2 <= param_3)) {
    uVar2 = param_3;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)pbVar7 - iVar6 >> 4;
  }
  iVar6 = uVar2 + iVar6;
  iVar3 = iVar6;
  if (iVar6 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 << 4);
  pvVar9 = pvVar4;
  for (pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 4);
      uVar2 = param_3, pvVar1 = pvVar9, pbVar7 != param_2; pbVar7 = pbVar7 + 0x10) {
    FUN_00433a50(pvVar9,pbVar7);
    pvVar9 = (void *)((int)pvVar9 + 0x10);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_00433a50(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0x10);
  }
  pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
  if (param_2 != pbVar7) {
    iVar3 = param_3 * 0x10 - (int)param_2;
    do {
      FUN_00433a50(param_2 + (int)pvVar9 + iVar3,param_2);
      param_2 = param_2 + 0x10;
    } while (param_2 != pbVar7);
  }
  pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
  for (pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 4);
      pbVar8 != pbVar7; pbVar8 = pbVar8 + 0x10) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(pbVar8,true);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)(iVar6 * 0x10 + (int)pvVar4);
  if (*(int *)(param_1 + 4) != 0) {
    *(void **)(param_1 + 8) =
         (void *)(((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4) + param_3) * 0x10 +
                 (int)pvVar4);
    *(void **)(param_1 + 4) = pvVar4;
    return;
  }
  *(void **)(param_1 + 8) = (void *)(param_3 * 0x10 + (int)pvVar4);
  *(void **)(param_1 + 4) = pvVar4;
  return;
}

