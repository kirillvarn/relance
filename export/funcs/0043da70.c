
void __fastcall FUN_0043da70(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b95f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005cb584;
  param_1[0x1f] = &PTR_OnReceive_005cb574;
  param_1[0xcb] = &PTR_LAB_005cb55c;
  param_1[0xd3] = &PTR_LAB_005cb568;
  local_4 = 7;
  if (param_1[0xfa] != 0) {
    FUN_0043d2a0(param_1[0xfa]);
    param_1[0xfa] = 0;
  }
  piVar1 = (int *)param_1[0xe3];
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    FUN_005b7e1d(piVar2[7]);
    FUN_005948b0();
    piVar1 = (int *)param_1[0xe3];
  }
  FUN_00442bf0(local_10,*(undefined4 *)param_1[0xe3],(undefined4 *)param_1[0xe3]);
  local_4._0_1_ = 6;
  FUN_00432100(local_10,*(undefined4 *)param_1[0xec],(undefined4 *)param_1[0xec]);
  FUN_005b7e1d(param_1[0xec]);
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  local_4._0_1_ = 5;
  FUN_00432100(local_10,*(undefined4 *)param_1[0xe9],(undefined4 *)param_1[0xe9]);
  FUN_005b7e1d(param_1[0xe9]);
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  local_4._0_1_ = 4;
  FUN_004428e0();
  local_4._0_1_ = 3;
  FUN_00456b40(local_10,*(undefined4 *)param_1[0xe0],(undefined4 *)param_1[0xe0]);
  FUN_005b7e1d(param_1[0xe0]);
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xdb),
             true);
  FUN_005b7e1d(param_1[0xd5]);
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  FUN_005b7e1d(param_1[0xcd]);
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  local_4 = 0xffffffff;
  FUN_0059fa50();
  ExceptionList = local_c;
  return;
}

