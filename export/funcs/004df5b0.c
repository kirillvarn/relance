
undefined2 * FUN_004df5b0(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  code *pcVar13;
  
  if (param_1 != param_2) {
    piVar9 = (int *)(param_3 + 10);
    piVar11 = (int *)(param_2 + 0x14);
    do {
      puVar1 = (undefined2 *)(param_2 + -0x24);
      param_2 = param_2 + -0x24;
      piVar12 = piVar11 + -9;
      param_3 = param_3 + -0x12;
      *param_3 = *puVar1;
      piVar10 = piVar9 + -9;
      piVar9[-0xd] = piVar11[-0xd];
      piVar9[-0xc] = piVar11[-0xc];
      *(char *)(piVar9 + -0xb) = (char)piVar11[-0xb];
      uVar7 = *(uint *)npos_exref;
      uVar5 = piVar11[-8];
      uVar8 = uVar5;
      if (uVar7 < uVar5) {
        uVar8 = uVar7;
      }
      if (piVar9 + -10 == piVar11 + -10) {
        if ((uint)piVar9[-8] < uVar8) {
          std::_Xran();
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar9 + -10)
                  );
        uVar5 = piVar9[-8] - uVar8;
        if (uVar5 < uVar7) {
          uVar7 = uVar5;
        }
        if (uVar7 != 0) {
          memmove((void *)(uVar8 + *piVar10),(void *)((int)(uVar8 + *piVar10) + uVar7),uVar5 - uVar7
                 );
          iVar3 = piVar9[-8];
          bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (piVar9 + -10),iVar3 - uVar7,false);
          if (bVar4) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (piVar9 + -10),iVar3 - uVar7);
          }
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar9 + -10)
                  );
      }
      else {
        if ((uVar8 != 0) && (uVar8 == uVar5)) {
          pcVar6 = (code *)*piVar12;
          if ((code *)*piVar12 == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          if ((byte)pcVar6[-1] < 0xfe) {
            iVar3 = *piVar10;
            if (iVar3 != 0) {
              cVar2 = *(char *)(iVar3 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005b7e1d((char *)(iVar3 + -1));
              }
              else {
                *(char *)(iVar3 + -1) = cVar2 + -1;
              }
            }
            *piVar10 = 0;
            piVar9[-8] = 0;
            piVar9[-7] = 0;
            pcVar6 = (code *)*piVar12;
            if ((code *)*piVar12 == (code *)0x0) {
              pcVar6 = _C_exref;
            }
            *piVar10 = (int)pcVar6;
            piVar9[-8] = piVar11[-8];
            piVar9[-7] = piVar11[-7];
            pcVar6[-1] = (code)((char)pcVar6[-1] + '\x01');
            goto LAB_004df72a;
          }
        }
        bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (piVar9 + -10),uVar8,true);
        if (bVar4) {
          pcVar6 = (code *)*piVar12;
          if ((code *)*piVar12 == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          pcVar13 = (code *)*piVar10;
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar13 = pcVar13 + 1;
          }
          piVar9[-8] = uVar8;
          *(undefined1 *)(uVar8 + *piVar10) = 0;
        }
      }
LAB_004df72a:
      piVar9[-6] = piVar11[-6];
      piVar9 = piVar10;
      piVar11 = piVar12;
    } while (param_2 != param_1);
  }
  return param_3;
}

