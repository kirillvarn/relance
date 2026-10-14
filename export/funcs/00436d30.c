
void FUN_00436d30(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
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
  
  puStack_8 = &LAB_005b91a1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar5 = *(uint *)npos_exref;
    uVar3 = *(uint *)(param_2 + 8);
    uVar6 = uVar3;
    if (uVar5 < uVar3) {
      uVar6 = uVar5;
    }
    if (param_1 == param_2) {
      if (uVar6 != 0) {
        std::_Xran();
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(param_1);
      uVar3 = *(int *)(param_1 + 8) - uVar6;
      if (uVar3 < uVar5) {
        uVar5 = uVar3;
      }
      if (uVar5 != 0) {
        memmove((void *)(uVar6 + *(int *)(param_1 + 4)),
                (void *)((int)(uVar6 + *(int *)(param_1 + 4)) + uVar5),uVar3 - uVar5);
        iVar1 = *(int *)(param_1 + 8);
        bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                          (param_1,iVar1 - uVar5,false);
        if (bVar2) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                    (param_1,iVar1 - uVar5);
        }
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(param_1);
      ExceptionList = local_c;
      return;
    }
    if ((uVar6 != 0) && (uVar6 == uVar3)) {
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
        ExceptionList = local_c;
        return;
      }
    }
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (param_1,uVar6,true);
    if (bVar2) {
      pcVar4 = *(code **)(param_2 + 4);
      if (*(code **)(param_2 + 4) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      pcVar7 = *(code **)(param_1 + 4);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(uint *)(param_1 + 8) = uVar6;
      *(undefined1 *)(uVar6 + *(int *)(param_1 + 4)) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

