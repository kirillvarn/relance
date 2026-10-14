
void FUN_00443430(undefined1 *param_1,undefined1 *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
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
  
  puStack_8 = &LAB_005b9721;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4);
  *this = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar5 = *(uint *)npos_exref;
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar6 = uVar3;
  if (uVar5 < uVar3) {
    uVar6 = uVar5;
  }
  if (this == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 4)) {
    if (uVar6 != 0) {
      std::_Xran();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
    uVar3 = *(int *)(param_1 + 0xc) - uVar6;
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      memmove((void *)(uVar6 + *(int *)(param_1 + 8)),
              (void *)((int)(uVar6 + *(int *)(param_1 + 8)) + uVar5),uVar3 - uVar5);
      iVar1 = *(int *)(param_1 + 0xc);
      bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (this,iVar1 - uVar5,false);
      if (bVar2) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                  (this,iVar1 - uVar5);
      }
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase(this,0,0);
  }
  else {
    if ((uVar6 != 0) && (uVar6 == uVar3)) {
      pcVar4 = *(code **)(param_2 + 8);
      if (*(code **)(param_2 + 8) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
        pcVar4 = *(code **)(param_2 + 8);
        if (*(code **)(param_2 + 8) == (code *)0x0) {
          pcVar4 = _C_exref;
        }
        *(code **)(param_1 + 8) = pcVar4;
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        pcVar4[-1] = (code)((char)pcVar4[-1] + '\x01');
        goto LAB_00443582;
      }
    }
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this,uVar6,true);
    if (bVar2) {
      pcVar4 = *(code **)(param_2 + 8);
      if (*(code **)(param_2 + 8) == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      pcVar7 = *(code **)(param_1 + 8);
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
      *(uint *)(param_1 + 0xc) = uVar6;
      *(undefined1 *)(uVar6 + *(int *)(param_1 + 8)) = 0;
    }
  }
LAB_00443582:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  ExceptionList = local_c;
  return;
}

