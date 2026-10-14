
void FUN_00433bc0(undefined4 *param_1,undefined4 *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9063;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = &PTR_LAB_005cad10;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)((int)param_2 + 0x11);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    FUN_00433cf0();
    FUN_004322b0(param_2 + 4);
    local_4._0_1_ = 1;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    puVar1 = operator_new(0x18);
    *puVar1 = puVar1;
    puVar1[1] = puVar1;
    param_1[10] = puVar1;
    param_1[0xb] = 0;
    FUN_00432450(*puVar1,*(undefined4 *)param_2[10],(undefined4 *)param_2[10]);
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc);
    *this = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xc);
    local_4._0_1_ = 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,false);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    (param_2 + 0xc),0,*(uint *)npos_exref);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    *(undefined1 *)((int)param_1 + 0x41) = *(undefined1 *)((int)param_2 + 0x41);
    local_4 = CONCAT31(local_4._1_3_,3);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    FUN_00432c60();
    FUN_00432b20(param_2 + 0x10);
    param_1[1] = &PTR_LAB_005cacec;
  }
  ExceptionList = local_c;
  return;
}

