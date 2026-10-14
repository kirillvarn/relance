
undefined4 * FUN_00489200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  *this;
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  if (param_1 != param_2) {
    piVar8 = param_3 + 2;
    piVar7 = param_1 + 2;
    do {
      *param_3 = *param_1;
      uVar2 = *(uint *)npos_exref;
      uVar3 = piVar7[1];
      uVar9 = uVar3;
      if (uVar2 < uVar3) {
        uVar9 = uVar2;
      }
      if (piVar8 + -1 == piVar7 + -1) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(piVar8 + -1),uVar9,uVar2);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(piVar8 + -1),0,0);
      }
      else {
        if ((uVar9 != 0) && (uVar9 == uVar3)) {
          pcVar6 = (code *)*piVar7;
          if ((code *)*piVar7 == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          if ((byte)pcVar6[-1] < 0xfe) {
            iVar4 = *piVar8;
            if (iVar4 != 0) {
              cVar1 = *(char *)(iVar4 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_005b7e1d(iVar4 + -2);
              }
              else {
                *(char *)(iVar4 + -1) = cVar1 + -1;
              }
            }
            *piVar8 = 0;
            piVar8[1] = 0;
            piVar8[2] = 0;
            pcVar6 = (code *)*piVar7;
            if ((code *)*piVar7 == (code *)0x0) {
              pcVar6 = _C_exref;
            }
            *piVar8 = (int)pcVar6;
            piVar8[1] = piVar7[1];
            piVar8[2] = piVar7[2];
            pcVar6[-1] = (code)((char)pcVar6[-1] + '\x01');
            goto LAB_004892fd;
          }
        }
        bVar5 = std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::_Grow((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                         *)(piVar8 + -1),uVar9,true);
        if (bVar5) {
          pcVar6 = (code *)*piVar7;
          if ((code *)*piVar7 == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          FUN_0041d8a0(*piVar8,pcVar6,uVar9);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Eos((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  *)(piVar8 + -1),uVar9);
        }
      }
LAB_004892fd:
      uVar2 = *(uint *)npos_exref;
      uVar3 = piVar7[5];
      uVar9 = uVar3;
      if (uVar2 < uVar3) {
        uVar9 = uVar2;
      }
      this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(piVar8 + 3);
      if (this == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)(piVar7 + 3)) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase(this,uVar9,uVar2);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase(this,0,0);
      }
      else {
        if ((uVar9 != 0) && (uVar9 == uVar3)) {
          pcVar6 = (code *)piVar7[4];
          if ((code *)piVar7[4] == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          if ((byte)pcVar6[-1] < 0xfe) {
            iVar4 = piVar8[4];
            if (iVar4 != 0) {
              cVar1 = *(char *)(iVar4 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_005b7e1d(iVar4 + -2);
              }
              else {
                *(char *)(iVar4 + -1) = cVar1 + -1;
              }
            }
            piVar8[4] = 0;
            piVar8[5] = 0;
            piVar8[6] = 0;
            pcVar6 = (code *)piVar7[4];
            if ((code *)piVar7[4] == (code *)0x0) {
              pcVar6 = _C_exref;
            }
            piVar8[4] = (int)pcVar6;
            piVar8[5] = piVar7[5];
            piVar8[6] = piVar7[6];
            pcVar6[-1] = (code)((char)pcVar6[-1] + '\x01');
            goto LAB_004893d5;
          }
        }
        bVar5 = std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::_Grow(this,uVar9,true);
        if (bVar5) {
          pcVar6 = (code *)piVar7[4];
          if ((code *)piVar7[4] == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          FUN_0041d8a0(piVar8[4],pcVar6,uVar9);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Eos((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  *)(piVar8 + 3),uVar9);
        }
      }
LAB_004893d5:
      param_3 = param_3 + 9;
      param_1 = param_1 + 9;
      piVar8 = piVar8 + 9;
      piVar7 = piVar7 + 9;
    } while (param_1 != param_2);
  }
  return param_3;
}

