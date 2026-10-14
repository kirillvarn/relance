
bool __thiscall FUN_0059a760(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  code cVar2;
  bool bVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  code *pcVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  code *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4c39;
  local_c = ExceptionList;
  bVar3 = false;
  if (param_3 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0xac) = *param_3;
    *(undefined4 *)(param_1 + 0xb0) = param_3[1];
    uVar6 = 0xffffffff;
    local_1c[0] = param_3._0_1_;
    *(undefined4 *)(param_1 + 0xb4) = param_3[3];
    pcVar8 = "";
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar4 != '\0');
    local_18 = (code *)0x0;
    local_14 = 0;
    local_10 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_1c,"",~uVar6 - 1);
    pcVar5 = (code *)param_3[2];
    uVar6 = 0xffffffff;
    pcVar9 = pcVar5;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != (code)0x0);
    uVar6 = ~uVar6 - 1;
    local_4 = 0;
    if (*(int *)npos_exref - local_14 <= uVar6) {
      std::_Xlen();
    }
    if (uVar6 != 0) {
      uVar1 = local_14 + uVar6;
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (local_1c,uVar1,false);
      if (bVar3) {
        pcVar9 = local_18 + local_14;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_18[uVar1] = (code)0x0;
        local_14 = uVar1;
      }
    }
    pcVar5 = local_18;
    if (local_18 == (code *)0x0) {
      pcVar5 = _C_exref;
    }
    cVar4 = FUN_0059ec80(pcVar5,0,0);
    bVar3 = cVar4 != '\0';
    if (bVar3) {
      FUN_0059dd00(param_1,param_2);
      FUN_0059dbf0(param_1);
      *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
    }
    if (local_18 != (code *)0x0) {
      cVar2 = local_18[-1];
      if ((cVar2 == (code)0x0) || (cVar2 == (code)0xff)) {
        FUN_005b7e1d(local_18 + -1);
        ExceptionList = local_c;
        return bVar3;
      }
      local_18[-1] = (code)((char)cVar2 + -1);
    }
  }
  ExceptionList = local_c;
  return bVar3;
}

