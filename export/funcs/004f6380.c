
/* WARNING: Removing unreachable block (ram,0x004f655b) */
/* WARNING: Removing unreachable block (ram,0x004f6560) */

void __thiscall FUN_004f6380(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uchar *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  code *pcVar14;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  int local_8;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  }
  local_14 = 0;
  if (0 < local_10) {
    do {
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
      }
      iVar4 = 0;
      if (0 < iVar8) {
        piVar10 = *(int **)(param_1 + 0xc);
        do {
          if (*(int *)(*piVar10 + 0x10) == local_14) {
            if (iVar4 != -1) {
              iVar8 = (*(int **)(param_1 + 0xc))[iVar4];
              if (*(int *)(iVar8 + 4) == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = *(int *)(iVar8 + 8) - *(int *)(iVar8 + 4) >> 4;
              }
              local_24 = 0;
              if (0 < iVar4) {
                local_20 = 0;
                do {
                  pcVar6 = *(code **)(*(int *)(iVar8 + 4) + local_20 + 4);
                  if (pcVar6 == (code *)0x0) {
                    pcVar6 = _C_exref;
                  }
                  iVar5 = stricmp((char *)pcVar6,param_2);
                  if (iVar5 == 0) {
                    iVar4 = iVar4 + -1;
                    if (local_24 < iVar4) {
                      local_8 = iVar4 - local_24;
                      iVar5 = local_20;
                      do {
                        iVar1 = *(int *)(iVar8 + 4);
                        uVar9 = *(uint *)(iVar1 + 0x18 + iVar5);
                        pbVar13 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )(iVar1 + 0x10 + iVar5);
                        pbVar12 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )(iVar5 + iVar1);
                        uVar2 = *(uint *)npos_exref;
                        uVar11 = uVar9;
                        if (uVar2 < uVar9) {
                          uVar11 = uVar2;
                        }
                        if (pbVar12 == pbVar13) {
                          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          erase(pbVar12,uVar11,uVar2);
                          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          erase(pbVar12,0,0);
                        }
                        else {
                          if ((uVar11 != 0) && (uVar11 == uVar9)) {
                            pcVar6 = *(code **)(pbVar13 + 4);
                            if (*(code **)(pbVar13 + 4) == (code *)0x0) {
                              pcVar6 = _C_exref;
                            }
                            if ((byte)pcVar6[-1] < 0xfe) {
                              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                              _Tidy(pbVar12,true);
                              pcVar6 = *(code **)(pbVar13 + 4);
                              if (*(code **)(pbVar13 + 4) == (code *)0x0) {
                                pcVar6 = _C_exref;
                              }
                              *(code **)(pbVar12 + 4) = pcVar6;
                              *(undefined4 *)(pbVar12 + 8) = *(undefined4 *)(pbVar13 + 8);
                              *(undefined4 *)(pbVar12 + 0xc) = *(undefined4 *)(pbVar13 + 0xc);
                              pcVar6[-1] = (code)((char)pcVar6[-1] + '\x01');
                              goto LAB_004f6534;
                            }
                          }
                          bVar3 = std::
                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                                  _Grow(pbVar12,uVar11,true);
                          if (bVar3) {
                            pcVar6 = *(code **)(pbVar13 + 4);
                            if (*(code **)(pbVar13 + 4) == (code *)0x0) {
                              pcVar6 = _C_exref;
                            }
                            pcVar14 = *(code **)(pbVar12 + 4);
                            for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
                              pcVar6 = pcVar6 + 4;
                              pcVar14 = pcVar14 + 4;
                            }
                            for (uVar9 = uVar11 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                              *pcVar14 = *pcVar6;
                              pcVar6 = pcVar6 + 1;
                              pcVar14 = pcVar14 + 1;
                            }
                            *(uint *)(pbVar12 + 8) = uVar11;
                            *(undefined1 *)(uVar11 + *(int *)(pbVar12 + 4)) = 0;
                          }
                        }
LAB_004f6534:
                        iVar5 = iVar5 + 0x10;
                        local_8 = local_8 + -1;
                      } while (local_8 != 0);
                    }
                    pbVar12 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                               (iVar8 + 8);
                    for (pbVar13 = pbVar12 + -0x10; pbVar13 != pbVar12; pbVar13 = pbVar13 + 0x10) {
                      if (*(char **)(pbVar13 + 4) != (char *)0x0) {
                        puVar7 = std::
                                 basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                                 _Refcnt(pbVar13,*(char **)(pbVar13 + 4));
                        if ((*puVar7 == '\0') ||
                           (puVar7 = std::
                                     basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     ::_Refcnt(pbVar13,*(char **)(pbVar13 + 4)), *puVar7 == 0xff)) {
                          FUN_00442da0(*(int *)(pbVar13 + 4) + -1,*(int *)(pbVar13 + 0xc) + 2);
                        }
                        else {
                          puVar7 = std::
                                   basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                                   _Refcnt(pbVar13,*(char **)(pbVar13 + 4));
                          *puVar7 = *puVar7 + 0xff;
                        }
                      }
                      *(undefined4 *)(pbVar13 + 4) = 0;
                      *(undefined4 *)(pbVar13 + 8) = 0;
                      *(undefined4 *)(pbVar13 + 0xc) = 0;
                    }
                    local_24 = local_24 + -1;
                    local_20 = local_20 + -0x10;
                    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + -0x10;
                  }
                  local_24 = local_24 + 1;
                  local_20 = local_20 + 0x10;
                } while (local_24 < iVar4);
              }
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar4 < iVar8);
      }
      local_14 = local_14 + 1;
    } while (local_14 < local_10);
  }
  FUN_004f5c20();
  return;
}

