
undefined1 __fastcall FUN_005a9440(int param_1)

{
  undefined1 uVar1;
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  *pbVar2;
  int iVar3;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  time_t tVar4;
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  local_174 [16];
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  local_164 [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_154 [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_144 [68];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_100 [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_f0 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_e0 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d0 [40];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_a8 [68];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_64 [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_54 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c559a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pbVar2 = (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)FUN_005684a0(local_a8);
  local_174[0] = *pbVar2;
  local_4 = 0;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)local_174,false);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)local_174,pbVar2,0,*(uint *)npos_exref);
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_34,true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_44,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_54,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_64,true);
  FUN_004de730();
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_a8,true);
  FUN_005a96b0(local_164);
  local_4._0_1_ = 3;
  FUN_005a9800(local_154);
  local_4._0_1_ = 4;
  iVar3 = FUN_005684a0(local_144);
  local_4._0_1_ = 5;
  FUN_005b6bd0(*(undefined4 *)(iVar3 + 0x90));
  local_4._0_1_ = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_d0,true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_e0,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_f0,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_100,true);
  FUN_004de730();
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_144,true);
  iVar3 = FUN_005684a0(local_144);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(iVar3 + 0x90);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_d0,true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(local_e0,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_f0,true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_100,true);
  FUN_004de730();
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_144,true);
  this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          *)FUN_005ad350((undefined4 *)(param_1 + 0x244));
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::assign(this,local_164,0,*(uint *)npos_exref);
  tVar4 = time((time_t *)0x0);
  FUN_005b6c40((int)tVar4);
  uVar1 = FUN_005b67e0();
  local_4._0_1_ = 3;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_154,true);
  local_4 = CONCAT31(local_4._1_3_,2);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)local_164,true);
  local_4 = 0xffffffff;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)local_174,true);
  ExceptionList = local_c;
  return uVar1;
}

