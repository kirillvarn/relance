
void __thiscall FUN_004ded10(int param_1,undefined4 *param_2,uint param_3,undefined2 *param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)((*(int *)(param_1 + 0xc) - (int)puVar9) / 0x24)) {
    if (param_3 <= (uint)(((int)puVar9 - (int)param_2) / 0x24)) {
      if (param_3 != 0) {
        puVar8 = puVar9;
        for (puVar10 = puVar9 + param_3 * -9; puVar10 != puVar9; puVar10 = puVar10 + 9) {
          FUN_004df750(puVar8,puVar10);
          puVar8 = puVar8 + 9;
        }
        puVar9 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * -0x24);
        while (param_2 != puVar9) {
          puVar9 = puVar9 + -9;
          FUN_004dfa30(puVar9);
        }
        if (param_2 != param_2 + param_3 * 9) {
          puVar9 = param_2 + 2;
          do {
            *(undefined2 *)(puVar9 + -2) = *param_4;
            puVar9[-1] = *(undefined4 *)(param_4 + 2);
            *puVar9 = *(undefined4 *)(param_4 + 4);
            *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(param_4 + 6);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (puVar9 + 2),
                       (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(param_4 + 8),0,*(uint *)npos_exref);
            puVar9[6] = *(undefined4 *)(param_4 + 0x10);
            puVar8 = puVar9 + 7;
            puVar9 = puVar9 + 9;
          } while (puVar8 != param_2 + param_3 * 9);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x24;
      }
      return;
    }
    for (puVar8 = param_2; puVar8 != puVar9; puVar8 = puVar8 + 9) {
      FUN_004df750(puVar8 + param_3 * 9,puVar8);
    }
    iVar5 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar5 - (int)param_2) / 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_004df750(iVar5,param_4);
      iVar5 = iVar5 + 0x24;
    }
    puVar9 = *(undefined4 **)(param_1 + 8);
    if (param_2 != puVar9) {
      puVar8 = param_2 + 2;
      do {
        *(undefined2 *)(puVar8 + -2) = *param_4;
        puVar8[-1] = *(undefined4 *)(param_4 + 2);
        *puVar8 = *(undefined4 *)(param_4 + 4);
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(param_4 + 6);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar8 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (param_4 + 8),0,*(uint *)npos_exref);
        puVar8[6] = *(undefined4 *)(param_4 + 0x10);
        puVar10 = puVar8 + 7;
        puVar8 = puVar8 + 9;
      } while (puVar10 != puVar9);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x24;
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar9 - iVar5) / 0x24, uVar4 <= param_3)) {
    uVar4 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar9 - iVar5) / 0x24;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x24);
  pvVar6 = pvVar3;
  for (puVar9 = *(undefined4 **)(param_1 + 4); uVar4 = param_3, pvVar1 = pvVar6, puVar9 != param_2;
      puVar9 = puVar9 + 9) {
    FUN_004df750(pvVar6,puVar9);
    pvVar6 = (void *)((int)pvVar6 + 0x24);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_004df750(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0x24);
  }
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (param_2 != puVar9) {
    iVar2 = param_3 * 0x24 - (int)param_2;
    do {
      FUN_004df750((int)pvVar6 + iVar2 + (int)param_2,param_2);
      param_2 = param_2 + 9;
    } while (param_2 != puVar9);
  }
  iVar2 = *(int *)(param_1 + 8);
  for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar2; iVar7 = iVar7 + 0x24) {
    FUN_004dde70();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x24);
  if (iVar2 != 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) =
         (void *)((int)pvVar3 + (param_3 + (*(int *)(param_1 + 8) - iVar2) / 0x24) * 0x24);
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)((int)pvVar3 + param_3 * 0x24);
  return;
}

