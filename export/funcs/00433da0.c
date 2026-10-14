
void FUN_00433da0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  uint uVar6;
  code *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b9021;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1);
    *this = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 1);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar3 = param_2[3];
    uVar6 = *(uint *)npos_exref;
    uVar5 = uVar3;
    if (uVar6 < uVar3) {
      uVar5 = uVar6;
    }
    if (this == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 1)) {
      if (uVar5 != 0) {
        std::_Xran();
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
      uVar3 = param_1[3] - uVar5;
      if (uVar3 < uVar6) {
        uVar6 = uVar3;
      }
      if (uVar6 != 0) {
        memmove((void *)(uVar5 + param_1[2]),(void *)((int)(uVar5 + param_1[2]) + uVar6),
                uVar3 - uVar6);
        iVar1 = param_1[3];
        bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                          (this,iVar1 - uVar6,false);
        if (bVar2) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                    (this,iVar1 - uVar6);
        }
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
      ExceptionList = local_c;
      return;
    }
    if ((uVar5 != 0) && (uVar5 == uVar3)) {
      pcVar4 = (code *)param_2[2];
      if ((code *)param_2[2] == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      if ((byte)pcVar4[-1] < 0xfe) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
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
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this,uVar5,true);
    if (bVar2) {
      pcVar4 = (code *)param_2[2];
      if ((code *)param_2[2] == (code *)0x0) {
        pcVar4 = _C_exref;
      }
      pcVar7 = (code *)param_1[2];
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
      param_1[3] = uVar5;
      *(undefined1 *)(uVar5 + param_1[2]) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

