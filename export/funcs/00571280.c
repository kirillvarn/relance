
undefined4 * __thiscall
FUN_00571280(undefined4 *param_1,
            basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *param_2)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c351b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005cfd94;
  param_1[1] = 1;
  this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          *)(param_1 + 2);
  local_4 = 0;
  *this = param_2._0_1_;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(this,false);
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 8) = param_2._0_1_;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xfffffffe;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  param_1[0x12] = 0;
  local_4._0_1_ = 2;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x13) = param_2._0_1_;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x13),false);
  local_4._0_1_ = 3;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x17) = param_2._0_1_;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x17),false);
  local_4._0_1_ = 4;
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1b) =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_>)param_2._0_1_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1b),
             false);
  local_4._0_1_ = 5;
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1f) =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_>)param_2._0_1_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1f),
             false);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 1;
  *(undefined1 *)((int)param_1 + 0x9e) = 1;
  param_1[0x28] = 0;
  *param_1 = &PTR_FUN_005e2e64;
  local_4 = CONCAT31(local_4._1_3_,6);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(this,param_2,0,*(uint *)npos_exref);
  param_1[6] = *(undefined4 *)(param_2 + 0x10);
  param_1[7] = *(undefined4 *)(param_2 + 0x14);
  FUN_005595c0(param_2 + 0x18);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x34);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x38);
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)(param_1 + 0x11) = param_2[0x3c];
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)((int)param_1 + 0x45) = param_2[0x3d];
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)((int)param_1 + 0x46) = param_2[0x3e];
  param_1[0x12] = *(undefined4 *)(param_2 + 0x40);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 0x13),param_2 + 0x44,0,*(uint *)npos_exref);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 0x17),param_2 + 0x54,0,*(uint *)npos_exref);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1b),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 100),0,*(uint *)npos_exref);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1f),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x74),0,*(uint *)npos_exref);
  param_1[0x23] = *(undefined4 *)(param_2 + 0x84);
  param_1[0x24] = *(undefined4 *)(param_2 + 0x88);
  param_1[0x25] = *(undefined4 *)(param_2 + 0x8c);
  param_1[0x26] = *(undefined4 *)(param_2 + 0x90);
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)(param_1 + 0x27) = param_2[0x94];
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)((int)param_1 + 0x9d) = param_2[0x95];
  *(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
    *)((int)param_1 + 0x9e) = param_2[0x96];
  param_1[0x28] = *(undefined4 *)(param_2 + 0x98);
  ExceptionList = local_c;
  return param_1;
}

