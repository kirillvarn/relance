
undefined4 * __thiscall FUN_00443ed0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  HardpointSummary *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b97c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005593d0(param_2);
  local_4 = 0;
  param_1[0xc] = 0;
  puVar1 = param_1 + 0x51;
  iVar2 = 4;
  do {
    puVar1[-0x44] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  CharacterProperties::CharacterProperties((CharacterProperties *)(param_1 + 0x55));
  this = (HardpointSummary *)(param_1 + 0x7c);
  local_4._0_1_ = 1;
  FUN_005b7fba(this,0x20,8,HardpointSummary_exref,~HardpointSummary_exref);
  local_4._0_1_ = 2;
  HardpointSummary::HardpointSummary((HardpointSummary *)(param_1 + 0xc1));
  local_4._0_1_ = 3;
  FUN_005b7fba(param_1 + 0xc9,0xc,5,&LAB_00444060,FUN_00444080);
  *param_1 = &PTR_FUN_005cb930;
  param_1[0xbd] = 0;
  param_1[0xc0] = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0xffffffff;
  param_1[0x71] = 0xffffffff;
  param_1[0x72] = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x73] = 0xffffffff;
  puVar1 = param_1 + 0x74;
  param_2 = 8;
  do {
    *puVar1 = 0xffffffff;
    HardpointSummary::clear(this);
    puVar1 = puVar1 + 1;
    this = this + 0x20;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  param_1[0xbc] = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  HardpointSummary::clear((HardpointSummary *)(param_1 + 0xc1));
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  FUN_00444290(param_3);
  ExceptionList = local_c;
  return param_1;
}

