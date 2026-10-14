
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0043fd30(int param_1,int param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  char cVar2;
  code cVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  code *pcVar10;
  char *pcVar11;
  bool bVar12;
  
  pcVar10 = *(code **)(*(int *)(param_2 + 0x1c) + 4);
  if (pcVar10 != (code *)0x0) {
    pcVar4 = *(code **)(param_1 + 0x370);
    if (*(code **)(param_1 + 0x370) == (code *)0x0) {
      pcVar4 = _C_exref;
    }
    do {
      cVar3 = *pcVar4;
      bVar12 = (byte)cVar3 < (byte)*pcVar10;
      if (cVar3 != *pcVar10) {
LAB_0043fd84:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_0043fd89;
      }
      if (cVar3 == (code)0x0) break;
      cVar3 = pcVar4[1];
      bVar12 = (byte)cVar3 < (byte)pcVar10[1];
      if (cVar3 != pcVar10[1]) goto LAB_0043fd84;
      pcVar4 = pcVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (cVar3 != (code)0x0);
    iVar5 = 0;
LAB_0043fd89:
    if (iVar5 == 0) {
      return;
    }
  }
  iVar5 = *(int *)(param_2 + 0x18);
  if ((*(uint *)(iVar5 + 0x2ec) & 0x10000) == 0) {
    *(uint *)(iVar5 + 0x2ec) = *(uint *)(iVar5 + 0x2ec) | 0x10000;
    *(int *)(param_1 + 0x3b8) = param_2;
    FUN_00412050(0x3f800000,(float)_DAT_005c89b8 / _DAT_0061650c);
    *(undefined1 *)(param_1 + 0x3bc) = 1;
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    FUN_0043a460();
    FUN_0044c490();
    FUN_0041dda0(0);
    FUN_0043e600();
    return;
  }
  *(undefined2 *)(iVar5 + 0x2ee) = 0;
  if ((*(int *)(param_2 + 0x1c) == 0) ||
     (pcVar9 = *(char **)(*(int *)(param_2 + 0x1c) + 4), pcVar9 == (char *)0x0)) {
    uVar6 = *(uint *)npos_exref;
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x36c);
    pcVar9 = *(char **)(param_1 + 0x370);
    if ((pcVar9 != (char *)0x0) && ((pcVar9[-1] != '\0' && (pcVar9[-1] != -1)))) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(pbVar1,true);
      uVar7 = 0xffffffff;
      pcVar11 = pcVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7 - 1;
      bVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                         (pbVar1,uVar7,true);
      if (bVar12) {
        pcVar11 = *(char **)(param_1 + 0x370);
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(pbVar1,uVar7);
      }
    }
    uVar7 = *(uint *)(param_1 + 0x374);
    if (uVar7 < uVar6) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      memmove(*(void **)(param_1 + 0x370),(void *)((int)*(void **)(param_1 + 0x370) + uVar6),
              uVar7 - uVar6);
      uVar6 = *(int *)(param_1 + 0x374) - uVar6;
      bVar12 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                         (pbVar1,uVar6,false);
      if (bVar12) {
        *(uint *)(param_1 + 0x374) = uVar6;
        *(undefined1 *)(uVar6 + *(int *)(param_1 + 0x370)) = 0;
      }
    }
    goto LAB_0043ff13;
  }
  uVar6 = 0xffffffff;
  pcVar11 = pcVar9;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6 - 1;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x36c);
  if (0xfffffffd < uVar6) {
    std::_Xlen();
  }
  iVar5 = *(int *)(param_1 + 0x370);
  if (((iVar5 == 0) || (cVar2 = *(char *)(iVar5 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (uVar6 == 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(pbVar1,true);
      goto LAB_0043ff13;
    }
    if ((0x1f < *(uint *)(param_1 + 0x378)) || (*(uint *)(param_1 + 0x378) < uVar6)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(pbVar1,true);
      goto LAB_0043fe38;
    }
  }
  else {
    if (uVar6 == 0) {
      *(char *)(iVar5 + -1) = cVar2 + -1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(pbVar1,false);
      goto LAB_0043ff13;
    }
LAB_0043fe38:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy(pbVar1,uVar6);
  }
  pcVar11 = *(char **)(param_1 + 0x370);
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
  *(uint *)(param_1 + 0x374) = uVar6;
  *(undefined1 *)(*(int *)(param_1 + 0x370) + uVar6) = 0;
LAB_0043ff13:
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  FUN_0043f2e0();
  FUN_0043e050();
  return;
}

