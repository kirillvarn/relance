
bool __fastcall FUN_005739c0(int param_1)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_1c [4];
  int local_18;
  size_t local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c39eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SetMultiPlayer(false);
  *(undefined1 *)(param_1 + 0x22d) = 0;
  FUN_0046b650();
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_1c,false);
  sVar3 = wcslen(L"SinglePlayer");
  bVar1 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow(local_1c,sVar3,true);
  if (bVar1) {
    FUN_0041d8a0(local_18,L"SinglePlayer",sVar3);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Eos(local_1c,sVar3);
  }
  local_4 = 0;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)&DAT_0067e940,
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)local_1c,0,*(uint *)npos_exref);
  local_4 = 0xffffffff;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_1c,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_1c,false);
  sVar3 = wcslen(L"");
  bVar1 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow(local_1c,sVar3,true);
  if (bVar1) {
    FUN_0041d8a0(local_18,&DAT_005c8ce0,sVar3);
    *(undefined2 *)(local_18 + sVar3 * 2) = 0;
    local_14 = sVar3;
  }
  local_4 = 1;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)&DAT_0067e950,
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)local_1c,0,*(uint *)npos_exref);
  local_4 = 0xffffffff;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_1c,true);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  sVar3 = wcslen(L"");
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(local_2c,&DAT_005c8ce0,sVar3);
  local_4 = 2;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)&DAT_0067e8e8,
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)local_2c,0,*(uint *)npos_exref);
  local_4 = 0xffffffff;
  if (local_28 != 0) {
    cVar2 = *(char *)(local_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d(local_28 + -2);
    }
    else {
      *(char *)(local_28 + -1) = cVar2 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  cVar2 = FUN_005a8770(&DAT_00679d04);
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return false;
  }
  cVar2 = FUN_005a8840();
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return false;
  }
  FUN_005a9300();
  FUN_005aade0();
  iVar4 = FUN_005aa680();
  ExceptionList = local_c;
  return iVar4 != 0;
}

