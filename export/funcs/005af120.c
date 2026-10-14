
void FUN_005af120(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c5803;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1) =
         *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 1);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_2 + 1),0,*(uint *)npos_exref);
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
    local_4._0_1_ = 1;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    FUN_005afcf0();
    FUN_005afbf0(param_2 + 5);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    *(undefined1 *)((int)param_1 + 0x29) = *(undefined1 *)((int)param_2 + 0x29);
    local_4._0_1_ = 2;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    iVar1 = FUN_005afe40(0,1);
    param_1[0xc] = iVar1;
    *(undefined1 *)(iVar1 + 0x11) = 1;
    *(undefined4 *)param_1[0xc] = 0;
    *(undefined4 *)(param_1[0xc] + 8) = 0;
    uVar2 = FUN_005afe40(param_1[0xc],0);
    param_1[0xb] = uVar2;
    *(undefined4 *)uVar2 = uVar2;
    *(undefined4 *)(param_1[0xb] + 8) = param_1[0xb];
    param_1[0xe] = 0;
    FUN_005afbf0(param_2 + 10);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    *(undefined1 *)((int)param_1 + 0x3d) = *(undefined1 *)((int)param_2 + 0x3d);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_005afcf0();
    FUN_005afbf0(param_2 + 0xf);
  }
  ExceptionList = local_c;
  return;
}

