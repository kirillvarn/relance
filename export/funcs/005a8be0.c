
undefined4 * __fastcall FUN_005a8be0(undefined4 *param_1)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  char cVar1;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_19;
  allocator<unsigned_short> local_18;
  allocator<unsigned_short> local_17;
  allocator<char> local_16;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_15;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c545f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005c9348;
  local_10 = param_1;
  CDPClient::CDPClient((CDPClient *)(param_1 + 1));
  local_14 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_1 + 0x25);
  local_4 = 0;
  *local_14 = local_19;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(local_14,false);
  local_4._0_1_ = 1;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0;
  FUN_005a6900(&local_19);
  local_4._0_1_ = 2;
  param_1[0x2f] = 0;
  param_1[0x30] = 0xfffffffe;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)((int)param_1 + 0xd1) = 0;
  *(undefined1 *)((int)param_1 + 0xd2) = 0;
  param_1[0x35] = 0;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_1 + 0x36),&local_18);
  local_4._0_1_ = 3;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_1 + 0x3a),&local_17);
  local_4._0_1_ = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x3e),
             &local_16);
  local_4._0_1_ = 5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x42),
             (allocator<char> *)&local_15);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((int)param_1 + 0x129) = 1;
  *(undefined1 *)((int)param_1 + 0x12a) = 1;
  param_1[0x4b] = 0;
  local_4._0_1_ = 6;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x4c) = local_15;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x4c),false);
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x50) = local_15;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x54) = local_15;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x58) = local_15;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x5c) = local_15;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          *)(param_1 + 0x62);
  param_1[0x60] = DAT_005e64c0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  *this = local_15;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy(this,false);
  local_14 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)wcslen(L"SinglePlayer");
  bVar3 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow(this,(uint)local_14,true);
  pbVar2 = local_14;
  if (bVar3) {
    FUN_0041d8a0(param_1[99],L"SinglePlayer",local_14);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Eos(this,(uint)pbVar2);
  }
  local_4._0_1_ = 0xc;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x66) = local_15;
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_1 + 0x66),false);
  *(undefined1 *)(param_1 + 0x6a) = 0;
  local_4._0_1_ = 0xd;
  param_1[0x6b] = DAT_005e64c4;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((int)param_1 + 0x1b1) = 5;
  FUN_005ae6e0(0);
  param_1[0x6d] = &PTR_FUN_005e6520;
  param_1[0x74] = DAT_005e64c8;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *)
   (param_1 + 0x76) = local_15;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x88);
  param_1[0x86] = DAT_005e64cc;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)local_15;
  local_4._0_1_ = 0xf;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this_00,false);
  uVar4 = 0xffffffff;
  pcVar5 = "FLListServer2";
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this_00,"FLListServer2",~uVar4 - 1);
  local_4._0_1_ = 0x10;
  param_1[0x8c] = 0x708a;
  param_1[0x8d] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  FUN_00531050(&local_16,&local_15);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  param_1[0x97] = 0;
  *param_1 = &PTR_LAB_005e6508;
  param_1[1] = &PTR_OnReceive_005e64f0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  FUN_005b62a0();
  ExceptionList = local_c;
  return param_1;
}

