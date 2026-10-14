
undefined4 * __thiscall FUN_00587c60(undefined4 *param_1,undefined4 *param_2)

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
  uVar6 = *(uint *)npos_exref;
  uVar4 = param_2[3];
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1);
  uVar7 = uVar4;
  if (uVar6 < uVar4) {
    uVar7 = uVar6;
  }
  if (this == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 1)) {
    if ((uint)param_1[3] < uVar7) {
      std::_Xran();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
    uVar4 = param_1[3] - uVar7;
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      memmove((void *)(uVar7 + param_1[2]),(void *)((int)(uVar7 + param_1[2]) + uVar6),uVar4 - uVar6
             );
      iVar2 = param_1[3];
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (this,iVar2 - uVar6,false);
      if (bVar3) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                  (this,iVar2 - uVar6);
      }
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
  }
  else {
    if ((uVar7 != 0) && (uVar7 == uVar4)) {
      pcVar5 = (code *)param_2[2];
      if ((code *)param_2[2] == (code *)0x0) {
        pcVar5 = _C_exref;
      }
      if ((byte)pcVar5[-1] < 0xfe) {
        iVar2 = param_1[2];
        if (iVar2 != 0) {
          cVar1 = *(char *)(iVar2 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005b7e1d((char *)(iVar2 + -1));
          }
          else {
            *(char *)(iVar2 + -1) = cVar1 + -1;
          }
        }
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        pcVar5 = (code *)param_2[2];
        if ((code *)param_2[2] == (code *)0x0) {
          pcVar5 = _C_exref;
        }
        param_1[2] = pcVar5;
        param_1[3] = param_2[3];
        param_1[4] = param_2[4];
        pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
        goto LAB_00587d9b;
      }
    }
    bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this,uVar7,true);
    if (bVar3) {
      pcVar5 = (code *)param_2[2];
      if ((code *)param_2[2] == (code *)0x0) {
        pcVar5 = _C_exref;
      }
      pcVar8 = (code *)param_1[2];
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar8 = pcVar8 + 1;
      }
      param_1[3] = uVar7;
      *(undefined1 *)(uVar7 + param_1[2]) = 0;
    }
  }
LAB_00587d9b:
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  return param_1;
}

