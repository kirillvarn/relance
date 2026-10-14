
/* WARNING: Removing unreachable block (ram,0x005ac621) */

void __fastcall FUN_005ac2b0(int param_1)

{
  bool bVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  int iVar9;
  int iVar10;
  int local_10;
  
  if ((DAT_00615b18 != '\0') && (*(int *)(param_1 + 0x7c) == 0)) {
    CDPClient::EnumerateHosts((CDPClient *)(param_1 + 4));
  }
  iVar6 = *(int *)(param_1 + 0x144);
  iVar7 = *(int *)(param_1 + 0x148);
  DVar3 = timeGetTime();
  if (iVar6 != iVar7) {
    local_10 = iVar6 + 0x9c;
    do {
      uVar4 = DVar3 - *(int *)(iVar6 + 0x30);
      if ((*(char *)(iVar6 + 0x3e) == '\0') || (uVar4 < 0x1389)) {
LAB_005ac3a6:
        iVar6 = iVar6 + 0x9c;
        local_10 = local_10 + 0x9c;
      }
      else {
        *(undefined4 *)(iVar6 + 0x2c) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x238) = 1;
        if (uVar4 < 0x7531) goto LAB_005ac3a6;
        iVar7 = *(int *)(param_1 + 0x148);
        for (iVar9 = local_10; iVar9 != iVar7; iVar9 = iVar9 + 0x9c) {
          FUN_005a9ea0(iVar9);
        }
        FUN_005ad910(*(int *)(param_1 + 0x148) + -0x9c,*(int *)(param_1 + 0x148));
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -0x9c;
        iVar7 = *(int *)(param_1 + 0x148);
        *(undefined1 *)(param_1 + 0x238) = 1;
      }
    } while (iVar6 != iVar7);
  }
  if (*(int *)(param_1 + 0x23c) == 0) {
    iVar7 = *(int *)(param_1 + 0x168);
    iVar6 = *(int *)(param_1 + 0x164);
    if (iVar6 != iVar7) {
      do {
        if ((*(char *)(iVar6 + 0x3d) == '\0') || (DVar3 - *(int *)(iVar6 + 0x30) < 1000)) {
          iVar6 = iVar6 + 0x9c;
        }
        else {
          if (*(uint *)(iVar6 + 0x34) < 5) {
            *(undefined1 *)(iVar6 + 0x3d) = 0;
            FUN_005adfc0(*(undefined4 *)(param_1 + 0x178),1,iVar6);
          }
          else {
            if (*(int *)(iVar6 + 0x6c) != 0) {
              iVar7 = *(int *)(param_1 + 0x144);
              iVar9 = *(int *)(iVar6 + 0x90);
              if (iVar7 != *(int *)(param_1 + 0x148)) {
                do {
                  bVar1 = std::operator==((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                           *)(iVar7 + 100),
                                          (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                           *)(iVar6 + 100));
                  if ((bVar1) && (*(int *)(iVar7 + 0x90) == iVar9)) goto LAB_005ac473;
                  iVar7 = iVar7 + 0x9c;
                } while (iVar7 != *(int *)(param_1 + 0x148));
              }
            }
            iVar7 = 0;
LAB_005ac473:
            if (iVar7 != 0) {
              *(undefined4 *)(iVar7 + 0x2c) = 0xffffffff;
              *(undefined1 *)(param_1 + 0x238) = 1;
            }
          }
          iVar7 = *(int *)(param_1 + 0x168);
          iVar9 = iVar6;
          while (iVar9 = iVar9 + 0x9c, iVar9 != iVar7) {
            FUN_005a9ea0(iVar9);
          }
          FUN_005ad910(*(int *)(param_1 + 0x168) + -0x9c,*(int *)(param_1 + 0x168));
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -0x9c;
          iVar7 = *(int *)(param_1 + 0x168);
          *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
        }
      } while (iVar6 != iVar7);
    }
    if (*(uint *)(param_1 + 0x25c) < 5) {
      if ((((*(int *)(param_1 + 0x164) == 0) ||
           ((*(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x164)) / 0x9c == 0)) &&
          (*(int *)(param_1 + 0x174) != 0)) &&
         ((*(int *)(param_1 + 0x178) - *(int *)(param_1 + 0x174)) / 0x9c != 0)) {
        iVar6 = *(int *)(param_1 + 0x178);
        for (iVar7 = *(int *)(param_1 + 0x174); iVar7 != iVar6; iVar7 = iVar7 + 0x9c) {
          *(undefined1 *)(iVar7 + 0x3d) = 0;
          FUN_005adfc0(*(undefined4 *)(param_1 + 0x168),1,iVar7);
          if (*(int *)(iVar7 + 0x6c) != 0) {
            iVar9 = *(int *)(iVar7 + 0x90);
            iVar10 = *(int *)(param_1 + 0x144);
            if (iVar10 != *(int *)(param_1 + 0x148)) {
              do {
                bVar1 = std::operator==((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                         *)(iVar10 + 100),
                                        (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                         *)(iVar7 + 100));
                if ((bVar1) && (*(int *)(iVar10 + 0x90) == iVar9)) goto LAB_005ac5eb;
                iVar10 = iVar10 + 0x9c;
              } while (iVar10 != *(int *)(param_1 + 0x148));
            }
          }
          iVar10 = 0;
LAB_005ac5eb:
          if (iVar10 != 0) {
            *(undefined4 *)(iVar10 + 0x2c) = 0xfffffffe;
            *(undefined1 *)(param_1 + 0x238) = 1;
          }
        }
        iVar7 = *(int *)(param_1 + 0x178);
        iVar6 = *(int *)(param_1 + 0x174);
        for (iVar9 = iVar6; iVar9 != iVar7; iVar9 = iVar9 + 0x9c) {
          FUN_005af640(0);
        }
        *(int *)(param_1 + 0x178) = iVar6;
      }
      iVar6 = *(int *)(param_1 + 0x168);
      for (iVar7 = *(int *)(param_1 + 0x164); iVar7 != iVar6; iVar7 = iVar7 + 0x9c) {
        if (*(char *)(iVar7 + 0x3d) == '\0') {
          puVar8 = *(ulong **)(iVar7 + 0x1c);
          bVar1 = false;
          if (puVar8 != *(ulong **)(iVar7 + 0x20)) {
            do {
              pcVar5 = *(code **)(iVar7 + 4);
              if (*(code **)(iVar7 + 4) == (code *)0x0) {
                pcVar5 = _C_exref;
              }
              bVar2 = CDPClient::EnumerateHost
                                ((CDPClient *)(param_1 + 4),(ushort *)pcVar5,*puVar8,2,0,0);
              if (bVar2) {
                bVar1 = true;
              }
              puVar8 = puVar8 + 1;
            } while (puVar8 != *(ulong **)(iVar7 + 0x20));
            if (bVar1) {
              *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
              *(undefined1 *)(iVar7 + 0x3d) = 1;
            }
          }
          DVar3 = timeGetTime();
          *(DWORD *)(iVar7 + 0x30) = DVar3;
          *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + 1;
          if (4 < *(uint *)(param_1 + 0x25c)) {
            return;
          }
        }
      }
    }
  }
  return;
}

