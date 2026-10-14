
undefined4 __fastcall FUN_005aa210(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  size_t sVar11;
  int iVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  
  if (*(char *)(param_1 + 0x184) != '\0') {
    return 0;
  }
  sVar4 = wcslen(L"localpass");
  bVar3 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)(param_1 + 0x94),sVar4,true);
  if (bVar3) {
    pwVar5 = *(wchar_t **)(param_1 + 0x98);
    pwVar7 = L"localpass";
    for (sVar11 = sVar4; sVar11 != 0; sVar11 = sVar11 - 1) {
      *pwVar5 = *pwVar7;
      pwVar5 = pwVar5 + 1;
      pwVar7 = pwVar7 + 1;
    }
    *(size_t *)(param_1 + 0x9c) = sVar4;
    *(undefined2 *)(*(int *)(param_1 + 0x98) + sVar4 * 2) = 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 300) = 2;
  *(undefined4 *)(param_1 + 0x120) = DAT_0067ecb8;
  sVar4 = wcslen(L"");
  bVar3 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)(param_1 + 0xd8),sVar4,true);
  if (bVar3) {
    puVar6 = *(undefined2 **)(param_1 + 0xdc);
    puVar8 = &DAT_005c8ce0;
    for (sVar11 = sVar4; sVar11 != 0; sVar11 = sVar11 - 1) {
      *puVar6 = *puVar8;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    *(size_t *)(param_1 + 0xe0) = sVar4;
    *(undefined2 *)(*(int *)(param_1 + 0xdc) + sVar4 * 2) = 0;
  }
  sVar4 = wcslen(L"");
  bVar3 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)(param_1 + 0xe8),sVar4,true);
  if (bVar3) {
    puVar6 = *(undefined2 **)(param_1 + 0xec);
    puVar8 = &DAT_005c8ce0;
    for (sVar11 = sVar4; sVar11 != 0; sVar11 = sVar11 - 1) {
      *puVar6 = *puVar8;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    *(size_t *)(param_1 + 0xf0) = sVar4;
    *(undefined2 *)(*(int *)(param_1 + 0xec) + sVar4 * 2) = 0;
  }
  uVar9 = 0xffffffff;
  pcVar14 = "";
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9 - 1;
  bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (param_1 + 0x108),uVar9,true);
  if (bVar3) {
    puVar13 = (undefined4 *)&DAT_005c865c;
    puVar15 = *(undefined4 **)(param_1 + 0x10c);
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    *(uint *)(param_1 + 0x110) = uVar9;
    *(undefined1 *)(uVar9 + *(int *)(param_1 + 0x10c)) = 0;
  }
  CDPClient::CancelEnums((CDPClient *)(param_1 + 4));
  FUN_005ad8b0(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148));
  FUN_005ad8b0(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x168));
  FUN_005ad8b0(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x178));
  iVar2 = *(int *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x25c) = 0;
  for (iVar12 = *(int *)(param_1 + 0x154); iVar12 != iVar2; iVar12 = iVar12 + 0x9c) {
    *(undefined1 *)(iVar12 + 0x3d) = 0;
    FUN_005adfc0(*(undefined4 *)(param_1 + 0x168),1,iVar12);
  }
  return 1;
}

