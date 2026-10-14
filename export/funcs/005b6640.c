
undefined4
FUN_005b6640(int *param_1,
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *param_2,LPCSTR param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  DWORD DVar4;
  LSTATUS LVar5;
  HKEY pHVar6;
  DWORD DVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  size_t sVar11;
  wchar_t local_808 [1024];
  DWORD local_8;
  
  piVar3 = param_1;
  local_8 = 0;
  if (*param_1 < 1) {
    pHVar6 = (HKEY)0x0;
  }
  else {
    pHVar6 = (HKEY)param_1[*param_1];
  }
  LVar5 = RegQueryValueExA(pHVar6,param_3,(LPDWORD)0x0,(LPDWORD)&param_1,(LPBYTE)0x0,&local_8);
  DVar4 = local_8;
  if (((LVar5 != 0) || (param_1 != (int *)0x1)) || (local_8 == 0xffffffff)) {
    return 0;
  }
  FUN_005b7e90();
  iVar2 = *piVar3;
  param_1 = (int *)DVar4;
  if (iVar2 < 1) {
    pHVar6 = (HKEY)0x0;
  }
  else {
    pHVar6 = (HKEY)piVar3[iVar2];
  }
  LVar5 = RegQueryValueExA(pHVar6,param_3,(LPDWORD)0x0,(LPDWORD)&param_3,&stack0xfffff7ec,
                           (LPDWORD)&param_1);
  if (LVar5 == 0) {
    DVar7 = (DWORD)param_1;
    if (param_3 != (LPCSTR)0x1) {
      DVar7 = 0xffffffff;
    }
  }
  else {
    DVar7 = 0xffffffff;
  }
  if (DVar7 != DVar4) {
    return 0;
  }
  HexToWide(&stack0xfffff7ec,(ushort *)local_808);
  sVar8 = wcslen(local_808);
  if (0x7ffffffd < sVar8) {
    std::_Xlen();
  }
  this = param_2;
  iVar2 = *(int *)(param_2 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (sVar8 == 0) {
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Tidy(param_2,true);
      return 1;
    }
    if ((*(uint *)(param_2 + 0xc) < 0x20) && (sVar8 <= *(uint *)(param_2 + 0xc))) goto LAB_005b678d;
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Tidy(param_2,true);
  }
  else if (sVar8 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Tidy(param_2,false);
    return 1;
  }
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Copy(this,sVar8);
LAB_005b678d:
  pwVar9 = *(wchar_t **)(this + 4);
  pwVar10 = local_808;
  for (sVar11 = sVar8; sVar11 != 0; sVar11 = sVar11 - 1) {
    *pwVar9 = *pwVar10;
    pwVar9 = pwVar9 + 1;
    pwVar10 = pwVar10 + 1;
  }
  *(size_t *)(this + 8) = sVar8;
  *(undefined2 *)(*(int *)(this + 4) + sVar8 * 2) = 0;
  return 1;
}

