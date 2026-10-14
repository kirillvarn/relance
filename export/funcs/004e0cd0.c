
void __fastcall FUN_004e0cd0(undefined4 *param_1)

{
  IDPMsgHandler *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  IDPMsgHandler *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_005be7cc;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d896c;
  param_1[0xe] = &PTR_LAB_005d88b4;
  param_1[0x2d] = &PTR_OnReceive_005d88a4;
  param_1[0xd9] = &PTR_LAB_005d8898;
  param_1[0xe1] = &PTR_LAB_005d8890;
  param_1[0x138] = &PTR_LAB_005d89b4;
  DAT_00674b04 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1[0x161];
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1[0x160];
  local_4 = 3;
  local_1c = param_1;
  for (; this_00 != pbVar1; this_00 = this_00 + 0x10) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this_00,true);
  }
  FUN_005b7e1d(param_1[0x160]);
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  local_4._0_1_ = 2;
  FUN_004e5760(&local_20,*(undefined4 *)param_1[0x159],(undefined4 *)param_1[0x159]);
  FUN_005b7e1d(param_1[0x159]);
  param_1[0x159] = 0;
  param_1[0x15c] = 0;
  FUN_005b7e1d(param_1[0x15a]);
  param_1[0x15a] = 0;
  puVar2 = (undefined4 *)param_1[0x14b];
  local_20 = (undefined4 *)*puVar2;
  local_4 = CONCAT31(local_4._1_3_,1);
  while (local_20 != puVar2) {
    puVar3 = (undefined4 *)FUN_0053ab20(local_18,0);
    FUN_0046d680(local_14,*puVar3);
  }
  FUN_005b7e1d(param_1[0x14b]);
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  FUN_005b7e1d(param_1[0x13a]);
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  this = (IDPMsgHandler *)(param_1 + 0xee);
  local_4._0_1_ = 10;
  local_4._1_3_ = 0;
  local_10 = this;
  BaseWatcher::set((BaseWatcher *)(param_1 + 0x11e),(Watchable *)0x0);
  local_4._0_1_ = 9;
  *(undefined ***)this = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect(this);
  local_4._0_1_ = 8;
  FUN_004058e0();
  local_4._0_1_ = 7;
  BaseWatcher::set((BaseWatcher *)(param_1 + 0xe6),(Watchable *)0x0);
  local_4._0_1_ = 6;
  FUN_00576010();
  local_4._0_1_ = 5;
  FUN_004de730();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0059fa50();
  *param_1 = &PTR_FUN_005d6eac;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 10) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 10),(Watchable *)0x0);
  }
  ExceptionList = local_c;
  return;
}

