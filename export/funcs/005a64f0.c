
void FUN_005a64f0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
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
  puStack_8 = &LAB_005c51da;
  local_c = ExceptionList;
  local_30[0] = param_2._0_1_;
  ExceptionList = &local_c;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_30,false);
  local_4 = 0;
  local_20 = param_2;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            (local_1c,(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                       *)local_30);
  local_4._0_1_ = 1;
  FUN_005a70b0(local_50,&local_20);
  FUN_0046d660(local_50,local_4c);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_1c,true);
  local_4 = 0xffffffff;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_30,true);
  local_40[0] = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  *)(local_48 + 0x10);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(local_40,(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                     *)(local_48 + 0x10),0,*(uint *)npos_exref);
  local_4 = 2;
  FUN_0046aeb0(param_2,1);
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

