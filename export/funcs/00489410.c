
void FUN_00489410(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
  uint uVar8;
  
  if (param_1 != param_2) {
    piVar7 = param_1 + 2;
    do {
      *param_1 = *param_3;
      uVar2 = param_3[3];
      uVar3 = *(uint *)npos_exref;
      uVar8 = uVar2;
      if (uVar3 < uVar2) {
        uVar8 = uVar3;
      }
      if (piVar7 + -1 == param_3 + 1) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(piVar7 + -1),uVar8,uVar3);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 *)(piVar7 + -1),0,0);
      }
      else {
        if ((uVar8 != 0) && (uVar8 == uVar2)) {
          pcVar6 = (code *)param_3[2];
          if ((code *)param_3[2] == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          if ((byte)pcVar6[-1] < 0xfe) {
            iVar4 = *piVar7;
            if (iVar4 != 0) {
              cVar1 = *(char *)(iVar4 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_005b7e1d(iVar4 + -2);
              }
              else {
                *(char *)(iVar4 + -1) = cVar1 + -1;
              }
            }
            *piVar7 = 0;
            piVar7[1] = 0;
            piVar7[2] = 0;
            pcVar6 = (code *)param_3[2];
            if ((code *)param_3[2] == (code *)0x0) {
              pcVar6 = _C_exref;
            }
            *piVar7 = (int)pcVar6;
            piVar7[1] = param_3[3];
            piVar7[2] = param_3[4];
            pcVar6[-1] = (code)((char)pcVar6[-1] + '\x01');
            goto LAB_00489510;
          }
        }
        bVar5 = std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::_Grow((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                         *)(piVar7 + -1),uVar8,true);
        if (bVar5) {
          pcVar6 = (code *)param_3[2];
          if ((code *)param_3[2] == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          FUN_0041d8a0(*piVar7,pcVar6,uVar8);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Eos((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  *)(piVar7 + -1),uVar8);
        }
      }
LAB_00489510:
      uVar2 = *(uint *)npos_exref;
      uVar3 = param_3[7];
      uVar8 = uVar3;
      if (uVar2 < uVar3) {
        uVar8 = uVar2;
      }
      this = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
              *)(piVar7 + 3);
      if (this == (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                   *)(param_3 + 5)) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase(this,uVar8,uVar2);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::erase(this,0,0);
      }
      else {
        if ((uVar8 != 0) && (uVar8 == uVar3)) {
          pcVar6 = (code *)param_3[6];
          if ((code *)param_3[6] == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          if ((byte)pcVar6[-1] < 0xfe) {
            iVar4 = piVar7[4];
            if (iVar4 != 0) {
              cVar1 = *(char *)(iVar4 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_005b7e1d(iVar4 + -2);
              }
              else {
                *(char *)(iVar4 + -1) = cVar1 + -1;
              }
            }
            piVar7[4] = 0;
            piVar7[5] = 0;
            piVar7[6] = 0;
            pcVar6 = (code *)param_3[6];
            if ((code *)param_3[6] == (code *)0x0) {
              pcVar6 = _C_exref;
            }
            piVar7[4] = (int)pcVar6;
            piVar7[5] = param_3[7];
            piVar7[6] = param_3[8];
            pcVar6[-1] = (code)((char)pcVar6[-1] + '\x01');
            goto LAB_004895f2;
          }
        }
        bVar5 = std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::_Grow(this,uVar8,true);
        if (bVar5) {
          pcVar6 = (code *)param_3[6];
          if ((code *)param_3[6] == (code *)0x0) {
            pcVar6 = _C_exref;
          }
          FUN_0041d8a0(piVar7[4],pcVar6,uVar8);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Eos(this,uVar8);
        }
      }
LAB_004895f2:
      param_1 = param_1 + 9;
      piVar7 = piVar7 + 9;
    } while (param_1 != param_2);
  }
  return;
}

