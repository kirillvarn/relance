
void __thiscall FUN_00587470(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)puVar6 >> 5)) {
    if (param_3 <= (uint)((int)puVar6 - (int)param_2 >> 5)) {
      if (param_3 != 0) {
        puVar8 = puVar6;
        for (puVar10 = puVar6 + param_3 * -8; puVar10 != puVar6; puVar10 = puVar10 + 8) {
          FUN_00587af0(puVar8,puVar10);
          puVar8 = puVar8 + 8;
        }
        puVar6 = *(undefined4 **)(param_1 + 8);
        for (puVar8 = *(undefined4 **)(param_1 + 8) + param_3 * -8; param_2 != puVar8;
            puVar8 = puVar8 + -8) {
          puVar6[-8] = puVar8[-8];
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (puVar6 + -7),
                     (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(puVar8 + -7),0,*(uint *)npos_exref);
          puVar6[-3] = puVar8[-3];
          puVar6[-2] = puVar8[-2];
          puVar6[-1] = puVar8[-1];
          puVar6 = puVar6 + -8;
        }
        puVar6 = param_2 + param_3 * 8;
        for (; param_2 != puVar6; param_2 = param_2 + 8) {
          FUN_00587c60(param_4);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x20;
      }
      return;
    }
    for (puVar8 = param_2; puVar8 != puVar6; puVar8 = puVar8 + 8) {
      FUN_00587af0(puVar8 + param_3 * 8,puVar8);
    }
    iVar5 = *(int *)(param_1 + 8);
    for (iVar3 = param_3 - (iVar5 - (int)param_2 >> 5); iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_00587af0(iVar5,param_4);
      iVar5 = iVar5 + 0x20;
    }
    puVar6 = *(undefined4 **)(param_1 + 8);
    if (param_2 != puVar6) {
      puVar8 = param_2 + 5;
      do {
        puVar8[-5] = *param_4;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar8 + -4),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (param_4 + 1),0,*(uint *)npos_exref);
        *puVar8 = param_4[5];
        puVar8[1] = param_4[6];
        puVar8[2] = param_4[7];
        puVar10 = puVar8 + 3;
        puVar8 = puVar8 + 8;
      } while (puVar10 != puVar6);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x20;
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((iVar5 == 0) || (uVar2 = (int)puVar6 - iVar5 >> 5, uVar2 <= param_3)) {
    uVar2 = param_3;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)puVar6 - iVar5 >> 5;
  }
  iVar5 = uVar2 + iVar5;
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 << 5);
  pvVar9 = pvVar4;
  for (puVar6 = *(undefined4 **)(param_1 + 4); uVar2 = param_3, pvVar1 = pvVar9, puVar6 != param_2;
      puVar6 = puVar6 + 8) {
    FUN_00587af0(pvVar9,puVar6);
    pvVar9 = (void *)((int)pvVar9 + 0x20);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_00587af0(pvVar1,param_4);
    pvVar1 = (void *)((int)pvVar1 + 0x20);
  }
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (param_2 != puVar6) {
    iVar3 = param_3 * 0x20 - (int)param_2;
    do {
      FUN_00587af0((int)pvVar9 + iVar3 + (int)param_2,param_2);
      param_2 = param_2 + 8;
    } while (param_2 != puVar6);
  }
  iVar3 = *(int *)(param_1 + 8);
  for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar3; iVar7 = iVar7 + 0x20) {
    FUN_00455e90();
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)(iVar5 * 0x20 + (int)pvVar4);
  if (*(int *)(param_1 + 4) != 0) {
    *(void **)(param_1 + 8) =
         (void *)(((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5) + param_3) * 0x20 +
                 (int)pvVar4);
    *(void **)(param_1 + 4) = pvVar4;
    return;
  }
  *(void **)(param_1 + 8) = (void *)(param_3 * 0x20 + (int)pvVar4);
  *(void **)(param_1 + 4) = pvVar4;
  return;
}

