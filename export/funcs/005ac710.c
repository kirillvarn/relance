
undefined4 FUN_005ac710(char *param_1)

{
  size_t sVar1;
  bool bVar2;
  char *_Str;
  char *pcVar3;
  undefined4 uVar4;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_8b6;
  allocator<char> local_8b5;
  size_t local_8b4;
  allocator<unsigned_short> local_8ae;
  allocator<char> local_8ad;
  int local_8ac;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_8a8 [4];
  int local_8a4;
  size_t local_8a0;
  undefined4 local_898;
  undefined4 local_894;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_87c;
  undefined4 local_878;
  undefined4 local_874;
  undefined4 local_870;
  undefined1 local_86c;
  undefined1 local_86b;
  undefined1 local_86a;
  undefined4 local_868;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_864 [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_854 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_844 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_834 [16];
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined1 local_814;
  undefined1 local_813;
  undefined1 local_812;
  undefined4 local_810;
  wchar_t local_80c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c56f6;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    ExceptionList = &local_c;
    _Str = _strdup(param_1);
    if (_Str == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      pcVar3 = strrchr(_Str,0x3a);
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
        mbstowcs(local_80c,_Str,0x400);
        local_8a8[0] = local_8b6;
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(local_8a8,false);
        local_898 = 0xffffffff;
        local_894 = 0;
        local_890 = local_8b6;
        local_88c = 0;
        local_888 = 0;
        local_884 = 0;
        local_4._0_1_ = 1;
        local_4._1_3_ = 0;
        local_880 = 0;
        local_87c = 0xfffffffe;
        local_878 = 0;
        local_874 = 0;
        local_870 = 0;
        local_86c = 0;
        local_86b = 0;
        local_86a = 0;
        local_868 = 0;
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  (local_864,(allocator<unsigned_short> *)&local_8b6);
        local_4._0_1_ = 2;
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  (local_854,&local_8ae);
        local_4._0_1_ = 3;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_844,&local_8ad);
        local_4 = CONCAT31(local_4._1_3_,4);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_834,&local_8b5);
        local_824 = 0;
        local_820 = 0;
        local_81c = 0;
        local_818 = 0;
        local_814 = 0;
        local_813 = 1;
        local_812 = 1;
        local_810 = 0;
        local_4 = 5;
        local_8b4 = wcslen(local_80c);
        bVar2 = std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::_Grow(local_8a8,local_8b4,true);
        sVar1 = local_8b4;
        if (bVar2) {
          FUN_0041d8a0(local_8a4,local_80c,local_8b4);
          local_8a0 = sVar1;
          *(undefined2 *)(local_8a4 + sVar1 * 2) = 0;
        }
        uVar4 = Ordinal_11(_Str);
        local_898 = Ordinal_14(uVar4);
        local_8b4 = atoi(pcVar3 + 1);
        FUN_00537260(local_888,1,&local_8b4);
        FUN_005adfc0(*(undefined4 *)(local_8ac + 0x158),1,local_8a8);
        local_4 = 0xffffffff;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_834,true);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_844,true);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(local_854,true);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(local_864,true);
        FUN_005b7e1d(local_88c);
        local_88c = 0;
        local_888 = 0;
        local_884 = 0;
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(local_8a8,true);
      }
      free(_Str);
      uVar4 = 1;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

