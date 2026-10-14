
int * __thiscall FUN_0055d3c0(void *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c1741;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x3cc);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0055a560();
    local_4._0_1_ = 1;
    FUN_00420d40();
    piVar2[0xe6] = 0x3f800000;
    piVar2[0xe5] = 0x3f800000;
    piVar2[0xe4] = 0x3f800000;
    piVar2[0xe3] = 0x3f800000;
    piVar2[0xe7] = 0x3f800000;
    piVar2[0xde] = (int)&PTR_FUN_005d2efc;
    piVar2[0xe2] = -1;
    local_4 = CONCAT31(local_4._1_3_,2);
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar2 + 0xe9) =
         param_3._0_1_;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar2 + 0xe9),
               false);
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar2 + 0xed) =
         param_3._0_1_;
    piVar2[0xee] = 0;
    piVar2[0xef] = 0;
    piVar2[0xf0] = 0;
    *piVar2 = (int)&PTR_FUN_005e1764;
    piVar2[0x1f] = (int)&PTR_OnReceive_005e1754;
  }
  piVar2[4] = (int)param_1 + 0xc;
  local_4 = 0xffffffff;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    ExceptionList = unaff_EBX;
    return (int *)0x0;
  }
  ExceptionList = param_1;
  return piVar2;
}

