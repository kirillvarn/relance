
void FUN_005a6380(undefined4 param_1,wchar_t *param_2,undefined4 param_3,
                 basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 param_4)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  int local_48;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_30 [16];
  undefined4 local_20;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c51aa;
  local_c = ExceptionList;
  local_40[0] = param_4;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  ExceptionList = &local_c;
  sVar3 = wcslen(param_2);
  bVar2 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow(local_40,sVar3,true);
  if (bVar2) {
    FUN_0041d8a0(local_3c,param_2,sVar3);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Eos(local_40,sVar3);
  }
  local_4 = 0;
  local_30[0] = param_4;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_30,false);
  local_4._0_1_ = 1;
  local_20 = param_3;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            (local_1c,(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                       *)local_30);
  local_4._0_1_ = 2;
  FUN_005a70b0(local_50,&local_20);
  FUN_0046d660(local_50,local_4c);
  local_4._0_1_ = 1;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_1c,true);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_30,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(local_48 + 0x10),
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)local_40,0,*(uint *)npos_exref);
  FUN_0046aa10(param_2,param_3,
               param_4 ==
               (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                )0x0);
  if (local_3c != 0) {
    cVar1 = *(char *)(local_3c + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_3c + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005b7e1d(local_3c + -2);
  }
  ExceptionList = local_c;
  return;
}

