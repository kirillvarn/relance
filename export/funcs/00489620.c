
void FUN_00489620(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bc25d;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      *)(param_1 + 1) =
         *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
           *)(param_2 + 1);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 1),
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)(param_2 + 1),0,*(uint *)npos_exref);
    this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 5);
    *this = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_2 + 5);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    uVar1 = *(uint *)npos_exref;
    uVar2 = param_2[7];
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar5 = uVar2;
    if (uVar1 < uVar2) {
      uVar5 = uVar1;
    }
    if (this == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(param_2 + 5)) {
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::erase(this,uVar5,uVar1);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::erase(this,0,0);
      ExceptionList = local_c;
      return;
    }
    if ((uVar5 != 0) && (uVar5 == uVar2)) {
      pcVar4 = (code *)param_2[6];
      if ((code *)param_2[6] == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        pcVar4 = (code *)param_2[6];
        if ((code *)param_2[6] == (code *)0x0) {
          pcVar4 = _C_exref;
        }
        param_1[6] = pcVar4;
        param_1[7] = param_2[7];
        param_1[8] = param_2[8];
        pcVar4[-1] = (code)((char)pcVar4[-1] + '\x01');
        ExceptionList = local_c;
        return;
      }
    }
    bVar3 = std::
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::_Grow(this,uVar5,true);
    if (bVar3) {
      pcVar4 = (code *)param_2[6];
      if ((code *)param_2[6] == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      FUN_0041d8a0(param_1[6],pcVar4,uVar5);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Eos(this,uVar5);
    }
  }
  ExceptionList = local_c;
  return;
}

