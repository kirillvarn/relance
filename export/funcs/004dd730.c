
int __thiscall FUN_004dd730(int param_1,char *param_2)

{
  char cVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iVar3;
  Ship *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  int iVar11;
  char *pcVar12;
  int local_38;
  IDPMsgHandler local_30 [4];
  uchar *local_2c;
  ulong local_28;
  undefined4 local_24;
  IDPMsgHandler local_20 [16];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be5c9;
  pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 0x5e4);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (this = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 0x5e0)
      ; this != pbVar2; this = this + 0x14) {
    uVar7 = 0xffffffff;
    pcVar12 = param_2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    iVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                      (this,0,*(uint *)(this + 8),param_2,~uVar7 - 1);
    if (iVar3 == 0) break;
  }
  if (this == *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 0x5e4)
     ) {
    local_30[0] = param_2._0_1_;
    local_2c = (uchar *)0x0;
    local_28 = 0;
    local_24 = 0;
    local_4 = 0;
    if (((param_2 == (char *)0x0) || (uVar7 = FUN_004c3e10(), uVar7 == 0)) ||
       (pSVar4 = Archetype::GetShip(uVar7), pSVar4 == (Ship *)0x0)) {
      local_4 = 0xffffffff;
      IDPMsgHandler::OnReceive(local_30,local_2c,local_28);
    }
    else {
      if (*(int *)(pSVar4 + 0x134) == 0) {
        local_38 = 0;
      }
      else {
        local_38 = (*(int *)(pSVar4 + 0x138) - *(int *)(pSVar4 + 0x134)) / 0x14;
      }
      if (0 < local_38) {
        iVar3 = 0;
        do {
          iVar9 = *(int *)(iVar3 + 8 + *(int *)(pSVar4 + 0x134));
          if (iVar9 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(iVar3 + 0xc + *(int *)(pSVar4 + 0x134)) - iVar9 >> 2;
          }
          iVar10 = 0;
          if (0 < iVar9) {
            do {
              iVar5 = stricmp(param_2,*(char **)(*(int *)(iVar3 + 8 + *(int *)(pSVar4 + 0x134)) +
                                                iVar10 * 4));
              if (iVar5 == 0) {
                FUN_00537260(local_28,1,iVar3 + *(int *)(pSVar4 + 0x134));
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar9);
          }
          iVar3 = iVar3 + 0x14;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      if ((local_2c != (uchar *)0x0) && (iVar3 = (int)(local_28 - (int)local_2c) >> 2, iVar3 != 0))
      {
        iVar9 = 0;
        iVar10 = 0;
        iVar5 = FUN_00584710();
        iVar11 = 0;
        if (0 < iVar5) {
          do {
            iVar6 = FUN_00584720(iVar11);
            iVar8 = 0;
            if (0 < iVar3) {
              do {
                if ((iVar6 == *(int *)(local_2c + iVar8 * 4)) && (iVar10 < iVar6)) {
                  iVar9 = iVar11;
                  iVar10 = iVar6;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar3);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar5);
        }
        local_20[0] = param_2._0_1_;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_20,false
                  );
        uVar7 = 0xffffffff;
        pcVar12 = param_2;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        local_4._0_1_ = 1;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_20,
                   param_2,~uVar7 - 1);
        local_4._0_1_ = 2;
        local_10 = iVar9;
        FUN_004df080(*(undefined4 *)(param_1 + 0x5e4),1,local_20);
        local_4 = (uint)local_4._1_3_ << 8;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_20,true)
        ;
        FUN_005b7e1d(local_2c);
        ExceptionList = local_c;
        return iVar9;
      }
    }
    FUN_005b7e1d(local_2c);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(this + 0x10);
  }
  ExceptionList = local_c;
  return iVar3;
}

