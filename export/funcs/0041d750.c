
void FUN_0041d750(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  *param_1,
                 basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                 *param_2)

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
  
  puStack_8 = &LAB_005b8a6a;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 !=
      (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
       *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)param_2;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    assign(param_1,param_2,0,*(uint *)npos_exref);
    this = param_1 + 0x10;
    *this = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar1 = *(uint *)npos_exref;
    uVar2 = *(uint *)(param_2 + 0x18);
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar5 = uVar2;
    if (uVar1 < uVar2) {
      uVar5 = uVar1;
    }
    if (this == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(param_2 + 0x10)) {
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
      pcVar4 = *(code **)(param_2 + 0x14);
      if (*(code **)(param_2 + 0x14) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        pcVar4 = *(code **)(param_2 + 0x14);
        if (*(code **)(param_2 + 0x14) == (code *)0x0) {
          pcVar4 = _C_exref;
        }
        *(code **)(param_1 + 0x14) = pcVar4;
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        pcVar4[-1] = (code)((char)pcVar4[-1] + '\x01');
        ExceptionList = local_c;
        return;
      }
    }
    bVar3 = std::
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::_Grow(this,uVar5,true);
    if (bVar3) {
      pcVar4 = *(code **)(param_2 + 0x14);
      if (*(code **)(param_2 + 0x14) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      FUN_0041d8a0(*(undefined4 *)(param_1 + 0x14),pcVar4,uVar5);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Eos(this,uVar5);
    }
  }
  ExceptionList = local_c;
  return;
}

