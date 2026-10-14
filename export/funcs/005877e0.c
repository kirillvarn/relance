
void FUN_005877e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  code *pcVar9;
  
  if (param_1 != param_2) {
    piVar7 = param_1 + 2;
    do {
      *param_1 = *param_3;
      uVar4 = param_3[3];
      uVar8 = *(uint *)npos_exref;
      uVar6 = uVar4;
      if (uVar8 < uVar4) {
        uVar6 = uVar8;
      }
      if (piVar7 + -1 == param_3 + 1) {
        if ((uint)piVar7[1] < uVar6) {
          std::_Xran();
        }
        this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar7 + -1);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
        uVar4 = piVar7[1] - uVar6;
        if (uVar4 < uVar8) {
          uVar8 = uVar4;
        }
        if (uVar8 != 0) {
          memmove((void *)(uVar6 + *piVar7),(void *)((int)(uVar6 + *piVar7) + uVar8),uVar4 - uVar8);
          iVar2 = piVar7[1];
          bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                            (this,iVar2 - uVar8,false);
          if (bVar3) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                      (this,iVar2 - uVar8);
          }
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
      }
      else {
        if ((uVar6 != 0) && (uVar6 == uVar4)) {
          pcVar5 = (code *)param_3[2];
          if ((code *)param_3[2] == (code *)0x0) {
            pcVar5 = _C_exref;
          }
          if ((byte)pcVar5[-1] < 0xfe) {
            iVar2 = *piVar7;
            if (iVar2 != 0) {
              cVar1 = *(char *)(iVar2 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_005b7e1d((char *)(iVar2 + -1));
              }
              else {
                *(char *)(iVar2 + -1) = cVar1 + -1;
              }
            }
            *piVar7 = 0;
            piVar7[1] = 0;
            piVar7[2] = 0;
            pcVar5 = (code *)param_3[2];
            if ((code *)param_3[2] == (code *)0x0) {
              pcVar5 = _C_exref;
            }
            *piVar7 = (int)pcVar5;
            piVar7[1] = param_3[3];
            piVar7[2] = param_3[4];
            pcVar5[-1] = (code)((char)pcVar5[-1] + '\x01');
            goto LAB_00587921;
          }
        }
        bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (piVar7 + -1),uVar6,true);
        if (bVar3) {
          pcVar5 = (code *)param_3[2];
          if ((code *)param_3[2] == (code *)0x0) {
            pcVar5 = _C_exref;
          }
          pcVar9 = (code *)*piVar7;
          for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar9 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar9 = pcVar9 + 1;
          }
          piVar7[1] = uVar6;
          *(undefined1 *)(uVar6 + *piVar7) = 0;
        }
      }
LAB_00587921:
      piVar7[3] = param_3[5];
      piVar7[4] = param_3[6];
      param_1 = param_1 + 8;
      piVar7[5] = param_3[7];
      piVar7 = piVar7 + 8;
    } while (param_1 != param_2);
  }
  return;
}

