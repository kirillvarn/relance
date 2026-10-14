
undefined4 * __thiscall FUN_00489780(undefined4 *param_1,undefined4 *param_2)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *pbVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = *param_2;
  uVar6 = *(uint *)npos_exref;
  uVar4 = param_2[3];
  pbVar1 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 1);
  uVar7 = uVar4;
  if (uVar6 < uVar4) {
    uVar7 = uVar6;
  }
  if (pbVar1 == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(param_2 + 1)) {
    if ((uint)param_1[3] < uVar7) {
      std::_Xran();
    }
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Split(pbVar1);
    uVar4 = param_1[3] - uVar7;
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      FUN_004899c0(param_1[2] + uVar7 * 2,param_1[2] + (uVar6 + uVar7) * 2,uVar4 - uVar6);
      iVar2 = param_1[3];
      bVar3 = std::
              basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              ::_Grow(pbVar1,iVar2 - uVar6,false);
      if (bVar3) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Eos(pbVar1,iVar2 - uVar6);
      }
    }
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    erase(pbVar1,0,0);
  }
  else {
    if ((uVar7 != 0) && (uVar7 == uVar4)) {
      pcVar5 = (code *)param_2[2];
      if ((code *)param_2[2] == (code *)0x0) {
        pcVar5 = _C_exref;
      }
      if ((byte)pcVar5[-1] < 0xfe) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(pbVar1,true);
        pcVar5 = (code *)param_2[2];
        if ((code *)param_2[2] == (code *)0x0) {
          pcVar5 = _C_exref;
        }
        param_1[2] = pcVar5;
        param_1[3] = param_2[3];
        param_1[4] = param_2[4];
        pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
        goto LAB_00489894;
      }
    }
    bVar3 = std::
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            ::_Grow(pbVar1,uVar7,true);
    if (bVar3) {
      pcVar5 = (code *)param_2[2];
      if ((code *)param_2[2] == (code *)0x0) {
        pcVar5 = _C_exref;
      }
      FUN_0041d8a0(param_1[2],pcVar5,uVar7);
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Eos(pbVar1,uVar7);
    }
  }
LAB_00489894:
  uVar6 = *(uint *)npos_exref;
  uVar4 = param_2[7];
  pbVar1 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(param_1 + 5);
  uVar7 = uVar4;
  if (uVar6 < uVar4) {
    uVar7 = uVar6;
  }
  if (pbVar1 == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(param_2 + 5)) {
    if ((uint)param_1[7] < uVar7) {
      std::_Xran();
    }
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Split(pbVar1);
    uVar4 = param_1[7] - uVar7;
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      FUN_004899c0(param_1[6] + uVar7 * 2,param_1[6] + (uVar6 + uVar7) * 2,uVar4 - uVar6);
      iVar2 = param_1[7];
      bVar3 = std::
              basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              ::_Grow(pbVar1,iVar2 - uVar6,false);
      if (bVar3) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Eos(pbVar1,iVar2 - uVar6);
      }
    }
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    erase(pbVar1,0,0);
    return param_1;
  }
  if ((uVar7 != 0) && (uVar7 == uVar4)) {
    pcVar5 = (code *)param_2[6];
    if ((code *)param_2[6] == (code *)0x0) {
      pcVar5 = _C_exref;
    }
    if ((byte)pcVar5[-1] < 0xfe) {
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Tidy(pbVar1,true);
      pcVar5 = (code *)param_2[6];
      if ((code *)param_2[6] == (code *)0x0) {
        pcVar5 = _C_exref;
      }
      param_1[6] = pcVar5;
      param_1[7] = param_2[7];
      param_1[8] = param_2[8];
      pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
      return param_1;
    }
  }
  bVar3 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow(pbVar1,uVar7,true);
  if (bVar3) {
    pcVar5 = (code *)param_2[6];
    if ((code *)param_2[6] == (code *)0x0) {
      pcVar5 = _C_exref;
    }
    FUN_0041d8a0(param_1[6],pcVar5,uVar7);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Eos(pbVar1,uVar7);
  }
  return param_1;
}

