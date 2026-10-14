
int FUN_005ad350(undefined4 *param_1)

{
  char cVar1;
  int local_60 [2];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_58 [4];
  int local_54;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_30 [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c5784;
  local_c = ExceptionList;
  local_58[0] = param_1._0_1_;
  ExceptionList = &local_c;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_58,false);
  local_48[0] = param_1._0_1_;
  local_4 = 0;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_48,false);
  local_38 = 0;
  local_34 = *param_1;
  local_4 = 1;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            (local_30,(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                       *)local_58);
  local_4._0_1_ = 2;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            (local_20,(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                       *)local_48);
  local_10 = local_38;
  local_4._0_1_ = 3;
  FUN_005ad990(local_60,&local_34);
  local_4._0_1_ = 4;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_20,true);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_30,true);
  local_4 = 5;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_48,true);
  if (local_54 == 0) {
    ExceptionList = local_c;
    return local_60[0] + 0x10;
  }
  cVar1 = *(char *)(local_54 + -1);
  if ((cVar1 != '\0') && (cVar1 != -1)) {
    *(char *)(local_54 + -1) = cVar1 + -1;
    ExceptionList = local_c;
    return local_60[0] + 0x10;
  }
  FUN_005b7e1d(local_54 + -2);
  ExceptionList = local_c;
  return local_60[0] + 0x10;
}

