
basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_> *
__thiscall
FUN_005a96b0(int param_1,
            basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined2 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  
  *param_2 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               *)(param_1 + 0x188);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar6 = *(uint *)npos_exref;
  uVar3 = *(uint *)(param_1 + 400);
  uVar7 = uVar3;
  if (uVar6 < uVar3) {
    uVar7 = uVar6;
  }
  if (param_2 ==
      (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
       *)(param_1 + 0x188)) {
    if (uVar7 != 0) {
      std::_Xran();
    }
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Split(param_2);
    uVar3 = *(int *)(param_2 + 8) - uVar7;
    if (uVar3 < uVar6) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      FUN_004899c0(*(int *)(param_2 + 4) + uVar7 * 2,*(int *)(param_2 + 4) + (uVar6 + uVar7) * 2,
                   uVar3 - uVar6);
      iVar1 = *(int *)(param_2 + 8);
      bVar2 = std::
              basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              ::_Grow(param_2,iVar1 - uVar6,false);
      if (bVar2) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Eos(param_2,iVar1 - uVar6);
      }
    }
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    _Split(param_2);
    return param_2;
  }
  if ((uVar7 != 0) && (uVar7 == uVar3)) {
    pcVar5 = *(code **)(param_1 + 0x18c);
    if (*(code **)(param_1 + 0x18c) == (code *)0x0) {
      pcVar5 = _C_exref;
    }
    if ((byte)pcVar5[-1] < 0xfe) {
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Tidy(param_2,true);
      pcVar5 = *(code **)(param_1 + 0x18c);
      if (*(code **)(param_1 + 0x18c) == (code *)0x0) {
        pcVar5 = _C_exref;
      }
      *(code **)(param_2 + 4) = pcVar5;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 400);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x194);
      pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
      return param_2;
    }
  }
  bVar2 = std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Grow(param_2,uVar7,true);
  if (bVar2) {
    pcVar5 = _C_exref;
    if (*(code **)(param_1 + 0x18c) != (code *)0x0) {
      pcVar5 = *(code **)(param_1 + 0x18c);
    }
    puVar4 = *(undefined2 **)(param_2 + 4);
    for (uVar6 = uVar7; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = *(undefined2 *)pcVar5;
      puVar4 = puVar4 + 1;
      pcVar5 = pcVar5 + 2;
    }
    *(uint *)(param_2 + 8) = uVar7;
    *(undefined2 *)(*(int *)(param_2 + 4) + uVar7 * 2) = 0;
  }
  return param_2;
}

