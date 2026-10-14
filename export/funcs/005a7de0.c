
void FUN_005a7de0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c5301;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 1);
    *this = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(param_2 + 1);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar3 = param_2[3];
    uVar5 = *(uint *)npos_exref;
    uVar6 = uVar3;
    if (uVar5 < uVar3) {
      uVar6 = uVar5;
    }
    if (this == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(param_2 + 1)) {
      if (uVar6 != 0) {
        std::_Xran();
      }
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Split(this);
      uVar3 = param_1[3] - uVar6;
      if (uVar3 < uVar5) {
        uVar5 = uVar3;
      }
      if (uVar5 != 0) {
        FUN_004899c0(param_1[2] + uVar6 * 2,param_1[2] + (uVar5 + uVar6) * 2,uVar3 - uVar5);
        iVar1 = param_1[3];
        bVar2 = std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::_Grow(this,iVar1 - uVar5,false);
        if (bVar2) {
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Eos(this,iVar1 - uVar5);
        }
      }
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Split(this);
      ExceptionList = local_c;
      return;
    }
    if ((uVar6 != 0) && (uVar6 == uVar3)) {
      pcVar4 = (code *)param_2[2];
      if ((code *)param_2[2] == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(this,true);
        pcVar4 = (code *)param_2[2];
        if ((code *)param_2[2] == (code *)0x0) {
          pcVar4 = _C_exref;
        }
        param_1[2] = pcVar4;
        param_1[3] = param_2[3];
        param_1[4] = param_2[4];
        pcVar4[-1] = (code)((char)pcVar4[-1] + '\x01');
        ExceptionList = local_c;
        return;
      }
    }
    bVar2 = std::
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::_Grow(this,uVar6,true);
    if (bVar2) {
      pcVar4 = (code *)param_2[2];
      if ((code *)param_2[2] == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      FUN_0041d8a0(param_1[2],pcVar4,uVar6);
      param_1[3] = uVar6;
      *(undefined2 *)(param_1[2] + uVar6 * 2) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

