
void __thiscall FUN_004f6200(int param_1,int param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *_Str1;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf3d9;
  local_c = ExceptionList;
  iVar8 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  }
  iVar3 = 0;
  if (iVar5 < 1) {
    return;
  }
  while (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + 0x10) != param_2) {
    iVar3 = iVar3 + 1;
    if (iVar5 <= iVar3) {
      return;
    }
  }
  if (iVar3 == -1) {
    return;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4);
  if (*(int *)(iVar5 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 4;
  }
  ExceptionList = &local_c;
  if (0 < iVar3) {
    iVar9 = 0;
    ExceptionList = &local_c;
    do {
      _Str1 = *(code **)(iVar9 + 4 + *(int *)(iVar5 + 4));
      if (_Str1 == (code *)0x0) {
        _Str1 = _C_exref;
      }
      iVar4 = stricmp((char *)_Str1,param_3);
      if (iVar4 == 0) {
        ExceptionList = local_c;
        return;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar8 < iVar3);
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  uVar6 = 0xffffffff;
  pcVar10 = param_3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_1c[0] = param_3._0_1_;
  bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (local_1c,uVar6,true);
  if (bVar2) {
    pcVar10 = local_18;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *param_3;
      param_3 = param_3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_1c,uVar6);
  }
  local_4 = 0;
  FUN_004e5ab0(*(undefined4 *)(iVar5 + 8),1,local_1c);
  local_4 = 0xffffffff;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_004f5c20();
  ExceptionList = local_c;
  return;
}

