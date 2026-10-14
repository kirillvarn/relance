
basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_004f6650(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar6 = *(uint *)npos_exref;
    uVar4 = *(uint *)(param_1 + 8);
    uVar7 = uVar4;
    if (uVar6 < uVar4) {
      uVar7 = uVar6;
    }
    if (param_3 == param_1) {
      if (*(uint *)(param_3 + 8) < uVar7) {
        std::_Xran();
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(param_3);
      uVar4 = *(int *)(param_3 + 8) - uVar7;
      if (uVar4 < uVar6) {
        uVar6 = uVar4;
      }
      if (uVar6 != 0) {
        memmove((void *)(uVar7 + *(int *)(param_3 + 4)),
                (void *)((int)(uVar7 + *(int *)(param_3 + 4)) + uVar6),uVar4 - uVar6);
        iVar2 = *(int *)(param_3 + 8);
        bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                          (param_3,iVar2 - uVar6,false);
        if (bVar3) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                    (param_3,iVar2 - uVar6);
        }
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(param_3);
    }
    else {
      if ((uVar7 != 0) && (uVar7 == uVar4)) {
        pcVar5 = *(code **)(param_1 + 4);
        if (*(code **)(param_1 + 4) == (code *)0x0) {
          pcVar5 = _C_exref;
        }
        if ((byte)pcVar5[-1] < 0xfe) {
          iVar2 = *(int *)(param_3 + 4);
          if (iVar2 != 0) {
            cVar1 = *(char *)(iVar2 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005b7e1d((char *)(iVar2 + -1));
            }
            else {
              *(char *)(iVar2 + -1) = cVar1 + -1;
            }
          }
          *(undefined4 *)(param_3 + 4) = 0;
          *(undefined4 *)(param_3 + 8) = 0;
          *(undefined4 *)(param_3 + 0xc) = 0;
          pcVar5 = *(code **)(param_1 + 4);
          if (*(code **)(param_1 + 4) == (code *)0x0) {
            pcVar5 = _C_exref;
          }
          *(code **)(param_3 + 4) = pcVar5;
          *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
          pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
          goto LAB_004f6785;
        }
      }
      bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                        (param_3,uVar7,true);
      if (bVar3) {
        pcVar5 = *(code **)(param_1 + 4);
        if (*(code **)(param_1 + 4) == (code *)0x0) {
          pcVar5 = _C_exref;
        }
        pcVar8 = *(code **)(param_3 + 4);
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
        *(uint *)(param_3 + 8) = uVar7;
        *(undefined1 *)(uVar7 + *(int *)(param_3 + 4)) = 0;
      }
    }
LAB_004f6785:
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 0x10;
    if (param_1 == param_2) {
      return param_3;
    }
  } while( true );
}

