
int * __thiscall FUN_0046be00(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  undefined4 uStack_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bb8ad;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x5a8);
  local_4 = 0;
  local_10 = piVar2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0057b8d0();
    local_4._0_1_ = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar2 + 0x150),
               (allocator<char> *)((int)&uStack_14 + 3));
    piVar2[0x14f] = (int)&PTR_FUN_005cef80;
    *(undefined1 *)((int)piVar2 + 0x551) = 0;
    piVar2[0x158] = 0;
    piVar2[0x157] = 0;
    piVar2[0x156] = 0;
    piVar2[0x155] = -1;
    piVar2[0x159] = (int)&PTR_LAB_005cff9c;
    piVar2[0x159] = (int)_vftable__exref;
    local_4._0_1_ = 2;
    *(undefined2 *)(piVar2 + 0x15a) = 0;
    *(undefined1 *)((int)piVar2 + 0x56a) = 0;
    *(undefined1 *)((int)piVar2 + 0x56b) = 0;
    FUN_0046ba60(&param_3);
    local_4._0_1_ = 3;
    FUN_0046ba60(&param_3);
    local_4._0_1_ = 4;
    FUN_0046ba60(&param_3);
    local_4._0_1_ = 5;
    FUN_0046ba60(&param_3);
    local_4 = CONCAT31(local_4._1_3_,6);
    RenderDisplayList::RenderDisplayList((RenderDisplayList *)(piVar2 + 0x167));
    *piVar2 = (int)&PTR_FUN_005cfec4;
    piVar2[0x1f] = (int)&PTR_OnReceive_005cfeb8;
    piVar2[0x126] = (int)&PTR_LAB_005cfeb0;
  }
  local_4 = 0xffffffff;
  piVar2[4] = param_1 + 0xc;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    ExceptionList = unaff_EBX;
    return (int *)0x0;
  }
  ExceptionList = uStack_14;
  return piVar2;
}

