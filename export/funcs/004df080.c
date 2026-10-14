
void __thiscall
FUN_004df080(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
            uint param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  int iVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  
  pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)pbVar8) / 0x14)) {
    if (param_3 <= (uint)(((int)pbVar8 - (int)param_2) / 0x14)) {
      if (param_3 != 0) {
        pbVar7 = pbVar8;
        for (pbVar10 = pbVar8 + param_3 * -0x14; pbVar10 != pbVar8; pbVar10 = pbVar10 + 0x14) {
          FUN_004df8d0(pbVar7,pbVar10);
          pbVar7 = pbVar7 + 0x14;
        }
        pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
        pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8)
                 + param_3 * -0x14;
        while (param_2 != pbVar7) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (pbVar8 + -0x14,
                     (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(pbVar7 + -0x14),0,*(uint *)npos_exref);
          *(undefined4 *)(pbVar8 + -4) = *(undefined4 *)(pbVar7 + -4);
          pbVar8 = pbVar8 + -0x14;
          pbVar7 = pbVar7 + -0x14;
        }
        pbVar8 = param_2 + param_3 * 0x14;
        for (; param_2 != pbVar8; param_2 = param_2 + 0x14) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (param_2,param_4,0,*(uint *)npos_exref);
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_4 + 0x10);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x14;
      }
      return;
    }
    for (pbVar7 = param_2; pbVar7 != pbVar8; pbVar7 = pbVar7 + 0x14) {
      FUN_004df8d0(pbVar7 + param_3 * 0x14,pbVar7);
    }
    iVar5 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar5 - (int)param_2) / 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_004df8d0(iVar5,param_4);
      iVar5 = iVar5 + 0x14;
    }
    pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
    for (; param_2 != pbVar8; param_2 = param_2 + 0x14) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,param_4,0,*(uint *)npos_exref);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_4 + 0x10);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x14;
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)pbVar8 - iVar5) / 0x14, uVar4 <= param_3)) {
    uVar4 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)pbVar8 - iVar5) / 0x14;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x14);
  pvVar6 = pvVar3;
  for (pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 4);
      uVar4 = param_3, pvVar1 = pvVar6, pbVar8 != param_2; pbVar8 = pbVar8 + 0x14) {
    FUN_004df8d0(pvVar6,pbVar8);
    pvVar6 = (void *)((int)pvVar6 + 0x14);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_004df8d0(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0x14);
  }
  pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8);
  if (param_2 != pbVar8) {
    iVar2 = param_3 * 0x14 - (int)param_2;
    do {
      FUN_004df8d0(param_2 + (int)pvVar6 + iVar2,param_2);
      param_2 = param_2 + 0x14;
    } while (param_2 != pbVar8);
  }
  iVar2 = *(int *)(param_1 + 8);
  for (iVar9 = *(int *)(param_1 + 4); iVar9 != iVar2; iVar9 = iVar9 + 0x14) {
    FUN_004dd9a0();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x14);
  if (iVar2 != 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) =
         (void *)((int)pvVar3 + (param_3 + (*(int *)(param_1 + 8) - iVar2) / 0x14) * 0x14);
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)((int)pvVar3 + param_3 * 0x14);
  return;
}

