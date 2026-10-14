
void FUN_004df8d0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                 basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005be671;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = *(uint *)(param_2 + 8);
  uVar6 = *(uint *)npos_exref;
  uVar5 = uVar3;
  if (uVar6 < uVar3) {
    uVar5 = uVar6;
  }
  if (param_1 == param_2) {
    if (uVar5 != 0) {
      std::_Xran();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(param_1);
    uVar3 = *(int *)(param_1 + 8) - uVar5;
    if (uVar3 < uVar6) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      memmove((void *)(uVar5 + *(int *)(param_1 + 4)),
              (void *)((int)(uVar5 + *(int *)(param_1 + 4)) + uVar6),uVar3 - uVar6);
      iVar1 = *(int *)(param_1 + 8);
      bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (param_1,iVar1 - uVar6,false);
      if (bVar2) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                  (param_1,iVar1 - uVar6);
      }
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(param_1);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == uVar3)) {
      pcVar4 = *(code **)(param_2 + 4);
      if (*(code **)(param_2 + 4) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(param_1,true);
        pcVar4 = *(code **)(param_2 + 4);
        if (*(code **)(param_2 + 4) == (code *)0x0) {
          pcVar4 = _C_exref;
        }
        *(code **)(param_1 + 4) = pcVar4;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        pcVar4[-1] = (code)((char)pcVar4[-1] + '\x01');
        goto LAB_004dfa0d;
      }
    }
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (param_1,uVar5,true);
    if (bVar2) {
      pcVar4 = _C_exref;
      if (*(code **)(param_2 + 4) != (code *)0x0) {
        pcVar4 = *(code **)(param_2 + 4);
      }
      pcVar7 = *(code **)(param_1 + 4);
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(uint *)(param_1 + 8) = uVar5;
      *(undefined1 *)(uVar5 + *(int *)(param_1 + 4)) = 0;
    }
  }
LAB_004dfa0d:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  ExceptionList = local_c;
  return;
}

