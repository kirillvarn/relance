
undefined4 FUN_00572100(int param_1)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_1c [4];
  int local_18;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c35c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_005a9c30(param_1);
  if (cVar1 == '\0') {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : ERROR:General:%s",
               "E:\\FL\\Scratch\\Source\\Client\\Interface\\Intro.cpp",0x14cb,
               "Internal error: invalid server data.\n");
  }
  else {
    local_1c[0] = param_1._0_1_;
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Tidy(local_1c,false);
    sVar3 = wcslen(L"");
    bVar2 = std::
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::_Grow(local_1c,sVar3,true);
    if (bVar2) {
      FUN_0041d8a0(local_18,&DAT_005c8ce0,sVar3);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Eos(local_1c,sVar3);
    }
    local_4 = 0;
    if (*(char *)(param_1 + 0x94) != '\0') {
      cVar1 = FUN_00473f70(0x60071,local_1c,0,0xd48);
      if (cVar1 == '\0') {
        (**(code **)FDUMP_exref)
                  (0x100003,"%s(%d) : NOTICE:General:%s",
                   "E:\\FL\\Scratch\\Source\\Client\\Interface\\Intro.cpp",0x14b4,
                   "Password cancelled.\n");
        local_4 = 0xffffffff;
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(local_1c,true);
        ExceptionList = local_c;
        return 0;
      }
    }
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)&DAT_0067e8e8,
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)local_1c,0,*(uint *)npos_exref);
    cVar1 = FUN_005a8770(&DAT_00679d04);
    if (cVar1 != '\0') {
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(local_18 + -1) = cVar1 + -1;
          ExceptionList = local_c;
          return 1;
        }
        FUN_005b7e1d(local_18 + -2);
      }
      ExceptionList = local_c;
      return 1;
    }
    FUN_005ab4c0();
    (**(code **)FDUMP_exref)
              (0x100003,"%s(%d) : NOTICE:General:%s",
               "E:\\FL\\Scratch\\Source\\Client\\Interface\\Intro.cpp",0x14c5,
               "Failed to connect to the server.\n");
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return 0;
      }
      FUN_005b7e1d(local_18 + -2);
      ExceptionList = local_c;
      return 0;
    }
  }
  ExceptionList = local_c;
  return 0;
}

