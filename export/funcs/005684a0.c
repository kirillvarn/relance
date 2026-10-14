
basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *
__thiscall
FUN_005684a0(int param_1,
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *param_2)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c2448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_2 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               *)(param_1 + 0x94);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(param_2,false);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(param_2,(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                    *)(param_1 + 0x94),0,*(uint *)npos_exref);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0xa8);
  param_2[0x18] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_1 + 0xac);
  local_4 = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 2;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 << 2);
  *(void **)(param_2 + 0x1c) = pvVar4;
  uVar5 = FUN_00597c70(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),pvVar4);
  *(undefined4 *)(param_2 + 0x20) = uVar5;
  *(undefined4 *)(param_2 + 0x24) = uVar5;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0xcc);
  param_2[0x3c] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_1 + 0xd0);
  param_2[0x3d] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_1 + 0xd1);
  param_2[0x3e] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_1 + 0xd2);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0xd4);
  pbVar1 = param_2 + 0x44;
  *pbVar1 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_1 + 0xd8);
  local_4._0_1_ = 1;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(pbVar1,false);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(pbVar1,(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                   *)(param_1 + 0xd8),0,*(uint *)npos_exref);
  pbVar1 = param_2 + 0x54;
  *pbVar1 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_1 + 0xe8);
  local_4._0_1_ = 2;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(pbVar1,false);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(pbVar1,(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                   *)(param_1 + 0xe8),0,*(uint *)npos_exref);
  pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 100);
  *pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xf8);
  local_4._0_1_ = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(pbVar2,false);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    (param_1 + 0xf8),0,*(uint *)npos_exref);
  pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x74);
  *pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x108);
  local_4 = CONCAT31(local_4._1_3_,4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(pbVar2,false);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (pbVar2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    (param_1 + 0x108),0,*(uint *)npos_exref);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x124);
  param_2[0x94] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_1 + 0x128);
  param_2[0x95] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_1 + 0x129);
  param_2[0x96] =
       *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         *)(param_1 + 0x12a);
  *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_1 + 300);
  ExceptionList = local_c;
  return param_2;
}

