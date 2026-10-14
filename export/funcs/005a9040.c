
void __fastcall FUN_005a9040(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c554c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[-1] = &PTR_LAB_005e6508;
  *param_1 = &PTR_OnReceive_005e64f0;
  local_4 = 0xc;
  FUN_005abc80();
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  local_4._0_1_ = 0xb;
  FUN_005ad4b0();
  local_4._0_1_ = 10;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x87),
             true);
  iVar1 = param_1[0x77];
  iVar2 = param_1[0x76];
  local_4._0_1_ = 9;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x50) {
    FUN_005af660(0);
  }
  FUN_005b7e1d(param_1[0x76]);
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x6c] = &PTR_FUN_005e6520;
  local_4._0_1_ = 0xd;
  FUN_005ae7a0();
  local_4._0_1_ = 8;
  FUN_005ae740();
  local_4._0_1_ = 7;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x65),true);
  local_4._0_1_ = 6;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x61),true);
  iVar1 = param_1[0x5d];
  iVar2 = param_1[0x5c];
  local_4._0_1_ = 5;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x9c) {
    FUN_005af640(0);
  }
  FUN_005b7e1d(param_1[0x5c]);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  iVar1 = param_1[0x59];
  iVar2 = param_1[0x58];
  local_4._0_1_ = 4;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x9c) {
    FUN_005af640(0);
  }
  FUN_005b7e1d(param_1[0x58]);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  iVar1 = param_1[0x55];
  iVar2 = param_1[0x54];
  local_4._0_1_ = 3;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x9c) {
    FUN_005af640(0);
  }
  FUN_005b7e1d(param_1[0x54]);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  iVar1 = param_1[0x51];
  iVar2 = param_1[0x50];
  local_4._0_1_ = 2;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x9c) {
    FUN_005af640(0);
  }
  FUN_005b7e1d(param_1[0x50]);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  local_4._0_1_ = 1;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x4b),true);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x41),
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x3d),
             true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x39),true);
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x35),true);
  FUN_004de730();
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x24),true);
  local_4 = 0xffffffff;
  CDPClient::~CDPClient((CDPClient *)(-(uint)(param_1 != (undefined4 *)0x4) & (uint)param_1));
  ExceptionList = local_c;
  return;
}

