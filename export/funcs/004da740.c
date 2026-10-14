
void __fastcall FUN_004da740(undefined4 *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_005be5a2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005d85bc;
  param_1[0xe] = &PTR_LAB_005d8504;
  param_1[0x2d] = &PTR_OnReceive_005d84f4;
  param_1[0xd9] = &PTR_LAB_005d84e8;
  param_1[0xe1] = &PTR_LAB_005d84e0;
  param_1[0x138] = &PTR_LAB_005d84d4;
  DAT_00674aa0 = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1[0x179];
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1[0x178];
  local_4 = 3;
  for (; this != pbVar1; this = this + 0x14) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
  }
  FUN_005b7e1d(param_1[0x178]);
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  if ((void *)param_1[0x174] != (void *)0x0) {
    free((void *)param_1[0x174]);
    param_1[0x174] = 0;
    param_1[0x175] = 0;
  }
  iVar2 = param_1[0x165];
  iVar3 = param_1[0x164];
  local_4 = CONCAT31(local_4._1_3_,1);
  for (; iVar3 != iVar2; iVar3 = iVar3 + 0x24) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(iVar3 + 0x10),
               true);
  }
  FUN_005b7e1d(param_1[0x164]);
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  FUN_005b7e1d(param_1[0x13a]);
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  local_4._0_1_ = 10;
  local_4._1_3_ = 0;
  BaseWatcher::set((BaseWatcher *)(param_1 + 0x11e),(Watchable *)0x0);
  local_4._0_1_ = 9;
  *(undefined ***)(param_1 + 0xee) = &PTR_LAB_005c8944;
  IDPMsgHandler::OnDisconnect((IDPMsgHandler *)(param_1 + 0xee));
  local_4._0_1_ = 8;
  FUN_004058e0();
  local_4._0_1_ = 7;
  if (param_1[0xe6] != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0xe6),(Watchable *)0x0);
  }
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

