
undefined4 * FUN_00575970(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  
  if (param_1 != param_2) {
    piVar8 = (int *)(param_2 + 8);
    piVar10 = param_3 + 2;
    do {
      puVar1 = (undefined4 *)(param_2 + -0x24);
      param_2 = param_2 + -0x24;
      param_3 = param_3 + -9;
      piVar9 = piVar8 + -9;
      *param_3 = *puVar1;
      uVar3 = *(uint *)npos_exref;
      uVar4 = piVar8[-8];
      piVar11 = piVar10 + -9;
      uVar12 = uVar4;
      if (uVar3 < uVar4) {
        uVar12 = uVar3;
      }
      if (piVar10 + -10 == piVar8 + -10) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(piVar10 + -10),uVar12,uVar3);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(piVar10 + -10),0,0);
      }
      else {
        if ((uVar12 != 0) && (uVar12 == uVar4)) {
          pcVar7 = (code *)*piVar9;
          if ((code *)*piVar9 == (code *)0x0) {
            pcVar7 = _C_exref;
          }
          if ((byte)pcVar7[-1] < 0xfe) {
            iVar5 = *piVar11;
            if (iVar5 != 0) {
              cVar2 = *(char *)(iVar5 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005b7e1d(iVar5 + -2);
              }
              else {
                *(char *)(iVar5 + -1) = cVar2 + -1;
              }
            }
            *piVar11 = 0;
            piVar10[-8] = 0;
            piVar10[-7] = 0;
            pcVar7 = (code *)*piVar9;
            if ((code *)*piVar9 == (code *)0x0) {
              pcVar7 = _C_exref;
            }
            *piVar11 = (int)pcVar7;
            piVar10[-8] = piVar8[-8];
            piVar10[-7] = piVar8[-7];
            pcVar7[-1] = (code)((char)pcVar7[-1] + '\x01');
            goto LAB_00575a84;
          }
        }
        bVar6 = std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::_Grow((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                         *)(piVar10 + -10),uVar12,true);
        if (bVar6) {
          pcVar7 = (code *)*piVar9;
          if ((code *)*piVar9 == (code *)0x0) {
            pcVar7 = _C_exref;
          }
          FUN_0041d8a0(*piVar11,pcVar7,uVar12);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Eos((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  *)(piVar10 + -10),uVar12);
        }
      }
LAB_00575a84:
      uVar3 = *(uint *)npos_exref;
      uVar4 = piVar8[-4];
      uVar12 = uVar4;
      if (uVar3 < uVar4) {
        uVar12 = uVar3;
      }
      this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(piVar10 + -6);
      if (this == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)(piVar8 + -6)) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase(this,uVar12,uVar3);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase(this,0,0);
      }
      else {
        if ((uVar12 != 0) && (uVar12 == uVar4)) {
          pcVar7 = (code *)piVar8[-5];
          if ((code *)piVar8[-5] == (code *)0x0) {
            pcVar7 = _C_exref;
          }
          if ((byte)pcVar7[-1] < 0xfe) {
            iVar5 = piVar10[-5];
            if (iVar5 != 0) {
              cVar2 = *(char *)(iVar5 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005b7e1d(iVar5 + -2);
              }
              else {
                *(char *)(iVar5 + -1) = cVar2 + -1;
              }
            }
            piVar10[-5] = 0;
            piVar10[-4] = 0;
            piVar10[-3] = 0;
            pcVar7 = (code *)piVar8[-5];
            if ((code *)piVar8[-5] == (code *)0x0) {
              pcVar7 = _C_exref;
            }
            piVar10[-5] = (int)pcVar7;
            piVar10[-4] = piVar8[-4];
            piVar10[-3] = piVar8[-3];
            pcVar7[-1] = (code)((char)pcVar7[-1] + '\x01');
            goto LAB_00575b5c;
          }
        }
        bVar6 = std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::_Grow(this,uVar12,true);
        if (bVar6) {
          pcVar7 = (code *)piVar8[-5];
          if ((code *)piVar8[-5] == (code *)0x0) {
            pcVar7 = _C_exref;
          }
          FUN_0041d8a0(piVar10[-5],pcVar7,uVar12);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Eos((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  *)(piVar10 + -6),uVar12);
        }
      }
LAB_00575b5c:
      piVar8 = piVar9;
      piVar10 = piVar11;
    } while (param_2 != param_1);
  }
  return param_3;
}

