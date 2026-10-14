
undefined4 * __thiscall FUN_00431d90(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9002;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005cad10;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
  iVar1 = FUN_00433650(0,1);
  param_1[5] = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(undefined4 *)param_1[5] = 0;
  *(undefined4 *)(param_1[5] + 8) = 0;
  uVar2 = FUN_00433650(param_1[5],0);
  param_1[4] = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(undefined4 *)(param_1[4] + 8) = param_1[4];
  param_1[7] = 0;
  FUN_004322b0(param_2 + 0xc);
  local_4 = 0;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x20);
  puVar3 = operator_new(0x18);
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  param_1[9] = puVar3;
  param_1[10] = 0;
  FUN_00432450(*puVar3,**(undefined4 **)(param_2 + 0x24),*(undefined4 **)(param_2 + 0x24));
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xb) =
       *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x2c);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xb),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x2c),0,*(uint *)npos_exref);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)((int)param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x48);
  FUN_00432c60();
  FUN_00432b20(param_2 + 0x3c);
  *param_1 = &PTR_LAB_005cacec;
  ExceptionList = local_c;
  return param_1;
}

