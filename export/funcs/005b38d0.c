
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_005b38d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 HANDLE param_5,HANDLE param_6,LPCVOID param_7,undefined4 param_8,undefined4 param_9
                 )

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  char cVar10;
  byte *pbVar11;
  int *piVar12;
  undefined4 *puVar13;
  code *pcVar14;
  float fVar15;
  HANDLE in_stack_0000143c;
  HANDLE in_stack_00001440;
  void *in_stack_00001444;
  void *in_stack_00001774;
  char *in_stack_00001784;
  int in_stack_00001788;
  undefined4 uStack_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_005c59bf;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  GetUserDataPath(&stack0x0000156c);
  _makepath(&stack0x00001670,(char *)0x0,&stack0x0000156c,in_stack_00001784,(char *)0x0);
  puVar13 = &DAT_0067ed10;
  for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  cVar10 = '\0';
  uStack_c._0_3_ = (uint3)(ushort)uStack_c;
  local_8 = (undefined1 *)0x0;
  local_4 = 0;
  INI_Reader::INI_Reader((INI_Reader *)&param_1);
  bVar4 = INI_Reader::open((INI_Reader *)&param_1,&stack0x00001670,false);
  if (bVar4) {
    bVar4 = INI_Reader::read_header((INI_Reader *)&param_1);
    pcVar14 = get_value_int_exref;
    if (bVar4) {
      do {
        bVar4 = INI_Reader::is_header((INI_Reader *)&param_1,"PerfVersion");
        if (bVar4) {
          bVar4 = INI_Reader::read_value((INI_Reader *)&param_1);
          if (bVar4) {
            do {
              bVar4 = INI_Reader::is_value((INI_Reader *)&param_1,"version");
              if (bVar4) {
                fVar15 = INI_Reader::get_value_float((INI_Reader *)&param_1,0);
                if (fVar15 < _DAT_005e6dfc) {
                  cVar10 = '\0';
                }
                else {
                  cVar10 = '\x01';
                }
              }
              else {
                bVar4 = INI_Reader::is_value((INI_Reader *)&param_1,"SkipMachineWarnings");
                if (bVar4) {
                  DAT_0067a439 = INI_Reader::get_value_bool((INI_Reader *)&param_1,0);
                }
              }
              bVar4 = INI_Reader::read_value((INI_Reader *)&param_1);
            } while (bVar4);
            uStack_c._0_3_ = CONCAT12(cVar10,(ushort)uStack_c);
          }
        }
        else {
          bVar4 = INI_Reader::is_header((INI_Reader *)&param_1,"PerfCount");
          if (bVar4) {
            bVar4 = INI_Reader::read_value((INI_Reader *)&param_1);
            if (bVar4) {
              do {
                bVar4 = INI_Reader::is_value((INI_Reader *)&param_1,"count");
                if (bVar4) {
                  INI_Reader::get_value_float((INI_Reader *)&param_1,0);
                  local_8 = (undefined1 *)ftol();
                }
                bVar4 = INI_Reader::read_value((INI_Reader *)&param_1);
              } while (bVar4);
            }
          }
          else {
            bVar4 = INI_Reader::is_header((INI_Reader *)&param_1,"PerfOptions");
            if (bVar4) {
              if (cVar10 == '\0') {
                (**(code **)FDUMP_exref)();
                break;
              }
              bVar4 = INI_Reader::read_value((INI_Reader *)&param_1);
              if (bVar4) {
                do {
                  pcVar14 = get_value_int_exref;
                  if (cVar10 == '\0') break;
                  pbVar5 = (byte *)INI_Reader::get_name_ptr((INI_Reader *)&param_1);
                  if ((DAT_0067ed0c & 1) == 0) {
                    DAT_0067ed0c = DAT_0067ed0c | 1;
                    FUN_0046ba60();
                    FUN_005b7e6c();
                  }
                  piVar12 = (int *)*DAT_0067ed04;
                  if (piVar12 != DAT_0067ed04) {
                    do {
                      pbVar11 = *(byte **)(piVar12[2] + 4);
                      pbVar6 = pbVar5;
                      do {
                        bVar1 = *pbVar6;
                        bVar4 = bVar1 < *pbVar11;
                        if (bVar1 != *pbVar11) {
LAB_005b3b2c:
                          iVar8 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
                          goto LAB_005b3b31;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar6[1];
                        bVar4 = bVar1 < pbVar11[1];
                        if (bVar1 != pbVar11[1]) goto LAB_005b3b2c;
                        pbVar6 = pbVar6 + 2;
                        pbVar11 = pbVar11 + 2;
                      } while (bVar1 != 0);
                      iVar8 = 0;
LAB_005b3b31:
                      if (iVar8 == 0) {
                        puVar13 = (undefined4 *)piVar12[2];
                        if (puVar13 != (undefined4 *)0x0) {
                          fVar15 = INI_Reader::get_value_float((INI_Reader *)&param_1,0);
                          local_4 = local_4 + 1;
                          if (fVar15 < (float)_DAT_005c8ba8) {
                            cVar10 = '\0';
                            uStack_c._0_3_ = (uint3)(ushort)uStack_c;
                            goto LAB_005b3b46;
                          }
                          puVar13[4] = fVar15;
                          (**(code **)*puVar13)();
                        }
                        break;
                      }
                      piVar12 = (int *)*piVar12;
                    } while (piVar12 != DAT_0067ed04);
                    cVar10 = uStack_c._2_1_;
                  }
LAB_005b3b46:
                  bVar4 = INI_Reader::read_value((INI_Reader *)&param_1);
                  pcVar14 = get_value_int_exref;
                } while (bVar4);
              }
            }
            else {
              bVar4 = INI_Reader::is_header((INI_Reader *)&param_1,"Display");
              if (((bVar4) && (in_stack_00001788 != 0)) &&
                 (bVar4 = INI_Reader::read_value((INI_Reader *)&param_1), bVar4)) {
                do {
                  bVar4 = INI_Reader::is_value((INI_Reader *)&param_1,"size");
                  if (bVar4) {
                    uVar7 = (*pcVar14)();
                    *(undefined4 *)(in_stack_00001788 + 8) = uVar7;
                    uVar7 = (*pcVar14)();
                    *(undefined4 *)(in_stack_00001788 + 0xc) = uVar7;
                  }
                  else {
                    bVar4 = INI_Reader::is_value((INI_Reader *)&param_1,"color_bpp");
                    if (bVar4) {
                      uVar7 = (*pcVar14)();
                      *(undefined4 *)(in_stack_00001788 + 0x10) = uVar7;
                    }
                    else {
                      bVar4 = INI_Reader::is_value((INI_Reader *)&param_1,"depth_bpp");
                      if (bVar4) {
                        uVar7 = (*pcVar14)();
                        *(undefined4 *)(in_stack_00001788 + 0x14) = uVar7;
                      }
                    }
                  }
                  bVar4 = INI_Reader::read_value((INI_Reader *)&param_1);
                } while (bVar4);
              }
            }
          }
        }
        bVar4 = INI_Reader::read_header((INI_Reader *)&param_1);
      } while (bVar4);
      if ((undefined1 *)local_4 != local_8) {
        cVar10 = '\0';
      }
    }
    INI_Reader::close((INI_Reader *)&param_1);
    if (cVar10 != '\0') {
      if ((DAT_0067ed0c & 1) == 0) {
        DAT_0067ed0c = DAT_0067ed0c | 1;
        DAT_0067ed00 = uStack_c._3_1_;
        DAT_0067ed04 = (int *)FUN_0042a7e0();
        DAT_0067ed08 = 0;
        FUN_005b7e6c();
      }
      piVar12 = (int *)*DAT_0067ed04;
      piVar9 = DAT_0067ed04;
      if (piVar12 != DAT_0067ed04) {
        do {
          piVar3 = (int *)piVar12[2];
          if ((float)piVar3[5] != (float)piVar3[4]) {
            local_8 = (undefined1 *)piVar3[4];
            piVar3[5] = (int)local_8;
            (**(code **)(*piVar3 + 4))();
            piVar9 = DAT_0067ed04;
          }
          piVar12 = (int *)*piVar12;
        } while (piVar12 != piVar9);
      }
    }
  }
  local_8 = &stack0x0000142c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000142c,0,
             *(uint *)npos_exref);
  if (in_stack_0000143c != (HANDLE)0xffffffff) {
    if (in_stack_00001440 != (HANDLE)0x0) {
      if (in_stack_00001444 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001444);
        in_stack_00001444 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001440);
    }
    CloseHandle(in_stack_0000143c);
  }
  if (in_stack_00001444 != (void *)0x0) {
    free(in_stack_00001444);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000142c,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&param_1,0,
             *(uint *)npos_exref);
  if (param_5 != (HANDLE)0xffffffff) {
    if (param_6 != (HANDLE)0x0) {
      if (param_7 != (LPCVOID)0x0) {
        UnmapViewOfFile(param_7);
        param_7 = (LPCVOID)0x0;
        param_8 = 0;
      }
      CloseHandle(param_6);
      param_6 = (HANDLE)0x0;
    }
    CloseHandle(param_5);
    param_5 = (HANDLE)0xffffffff;
  }
  if (param_7 != (void *)0x0) {
    free(param_7);
    param_7 = (void *)0x0;
    param_8 = 0;
  }
  param_9 = 0;
  if (param_2 != 0) {
    cVar2 = *(char *)(param_2 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(param_2 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = in_stack_00001774;
  return cVar10;
}

