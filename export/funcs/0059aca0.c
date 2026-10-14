
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0059aca0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4c96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_004215b0();
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_005d5544;
  param_1[4] = 0;
  param_1[0x1c] = 0;
  param_1[0xe] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xf8 | 8;
  DAT_0067dcd4 = DAT_0067dcd4 + 1;
  local_4 = 0;
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1f) = local_15;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1f),
             false);
  local_4._0_1_ = 1;
  FUN_005b7fba(param_1 + 0x24,0x10,4,FUN_00420d40,FUN_00420d10);
  local_4._0_1_ = 2;
  puVar1 = param_1 + 0x34;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = puVar1 + 0x21;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_004215b0();
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0x23] = 0;
  puVar3 = param_1 + 0xb8;
  puVar1 = param_1 + 0x34;
  iVar2 = 4;
  do {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 0x21;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0xbc] = 0x3f800000;
  local_4._0_1_ = 3;
  FUN_0040f150();
  local_4 = CONCAT31(local_4._1_3_,4);
  *param_1 = &PTR_FUN_005e5804;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xfb] = 0xc0a00000;
  param_1[0xfc] = 0xbf800000;
  FUN_0040fd60(&DAT_0067dca4);
  FUN_0040fb60(_DAT_0067dc9c,_DAT_0067dca0);
  FUN_0040f8c0(_DAT_0067dc90);
  ExceptionList = local_c;
  return param_1;
}

