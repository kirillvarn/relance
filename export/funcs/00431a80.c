
int FUN_00431a80(undefined4 *param_1)

{
  char cVar1;
  int local_38 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8fd1;
  local_c = ExceptionList;
  local_30[0] = param_1._0_1_;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = *param_1;
  local_4 = 0;
  local_1c[0] = param_1._0_1_;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_1c,false);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_1c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_30,0,*(uint *)npos_exref);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00432530(local_38,&local_20);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_2c + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return local_38[0] + 0x10;
    }
    FUN_005b7e1d((char *)(local_2c + -1));
    ExceptionList = local_c;
    return local_38[0] + 0x10;
  }
  ExceptionList = local_c;
  return local_38[0] + 0x10;
}

