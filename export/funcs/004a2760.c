
void __thiscall FUN_004a2760(int param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  int local_28;
  int local_20;
  undefined4 local_18 [6];
  
  *(char *)(param_1 + 0xfd0) = param_2;
  if (*(int *)(param_1 + 0xfd8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)(param_1 + 0xfdc) - *(int *)(param_1 + 0xfd8)) / 0x18;
  }
  iVar4 = iVar4 + -1;
  if (param_2 == '\0') {
    do {
      bVar1 = true;
      if (iVar4 < 1) {
        return;
      }
      local_28 = 0;
      local_20 = iVar4;
      do {
        iVar3 = *(int *)(param_1 + 0xfd8);
        puVar5 = (undefined4 *)(local_28 + 0x18 + iVar3);
        puVar7 = (undefined4 *)(local_28 + iVar3);
        iVar3 = _wcsicmp(*(wchar_t **)
                          (*(int *)(param_1 + 0xff8) + *(int *)(local_28 + 0x14 + iVar3) * 8),
                         *(wchar_t **)
                          (*(int *)(param_1 + 0xff8) + *(int *)(local_28 + 0x2c + iVar3) * 8));
        bVar9 = false;
        if (iVar3 == 0) {
          iVar3 = _wcsicmp(*(wchar_t **)(*(int *)(param_1 + 0xfe8) + puVar7[4] * 8),
                           *(wchar_t **)(*(int *)(param_1 + 0xfe8) + puVar5[4] * 8));
          bVar9 = iVar3 == 0;
        }
        if (!bVar9 && -1 < iVar3) {
          puVar6 = puVar7;
          puVar8 = local_18;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar6 = puVar5;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar7 = local_18;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar5 = puVar5 + 1;
          }
          bVar1 = false;
        }
        local_28 = local_28 + 0x18;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    } while (!bVar1);
  }
  else {
    while (bVar1 = true, 0 < iVar4) {
      local_28 = 0;
      local_20 = iVar4;
      do {
        iVar3 = *(int *)(param_1 + 0xfd8);
        puVar7 = (undefined4 *)(local_28 + 0x18 + iVar3);
        iVar2 = _wcsicmp(*(wchar_t **)
                          (*(int *)(param_1 + 0xfe8) + *(int *)(local_28 + 0x10 + iVar3) * 8),
                         *(wchar_t **)
                          (*(int *)(param_1 + 0xfe8) + *(int *)(local_28 + 0x28 + iVar3) * 8));
        if (0 < iVar2) {
          puVar5 = (undefined4 *)(local_28 + iVar3);
          puVar6 = local_18;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = puVar7;
          puVar6 = (undefined4 *)(local_28 + iVar3);
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = local_18;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          bVar1 = false;
        }
        local_28 = local_28 + 0x18;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      if (bVar1) {
        return;
      }
    }
  }
  return;
}

