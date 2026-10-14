
undefined2 * __thiscall FUN_004dfa30(undefined2 *param_1,undefined2 *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar7 = *(uint *)npos_exref;
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8);
  uVar6 = uVar4;
  if (uVar7 < uVar4) {
    uVar6 = uVar7;
  }
  if (this == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 8)) {
    if (*(uint *)(param_1 + 0xc) < uVar6) {
      std::_Xran();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
    uVar4 = *(int *)(param_1 + 0xc) - uVar6;
    if (uVar4 < uVar7) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) {
      memmove((void *)(uVar6 + *(int *)(param_1 + 10)),
              (void *)((int)(uVar6 + *(int *)(param_1 + 10)) + uVar7),uVar4 - uVar7);
      iVar2 = *(int *)(param_1 + 0xc);
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (this,iVar2 - uVar7,false);
      if (bVar3) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                  (this,iVar2 - uVar7);
      }
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    return param_1;
  }
  if ((uVar6 != 0) && (uVar6 == uVar4)) {
    pcVar5 = *(code **)(param_2 + 10);
    if (*(code **)(param_2 + 10) == (code *)0x0) {
      pcVar5 = _C_exref;
    }
    if ((byte)pcVar5[-1] < 0xfe) {
      iVar2 = *(int *)(param_1 + 10);
      if (iVar2 != 0) {
        cVar1 = *(char *)(iVar2 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005b7e1d((char *)(iVar2 + -1));
        }
        else {
          *(char *)(iVar2 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)(param_1 + 10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0xe) = 0;
      pcVar5 = _C_exref;
      if (*(code **)(param_2 + 10) != (code *)0x0) {
        pcVar5 = *(code **)(param_2 + 10);
      }
      *(code **)(param_1 + 10) = pcVar5;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      return param_1;
    }
  }
  bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                    (this,uVar6,true);
  if (bVar3) {
    pcVar5 = *(code **)(param_2 + 10);
    if (*(code **)(param_2 + 10) == (code *)0x0) {
      pcVar5 = _C_exref;
    }
    pcVar8 = *(code **)(param_1 + 10);
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    }
    *(uint *)(param_1 + 0xc) = uVar6;
    *(undefined1 *)(uVar6 + *(int *)(param_1 + 10)) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}

