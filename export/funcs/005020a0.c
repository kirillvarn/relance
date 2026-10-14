
void FUN_005020a0(undefined4 param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float fVar14;
  void *pvVar15;
  undefined1 *in_stack_00000048;
  float in_stack_0000004c;
  float in_stack_00000050;
  float in_stack_00000054;
  float in_stack_00000058;
  float in_stack_0000005c;
  uint in_stack_00000060;
  uint in_stack_00000064;
  char *in_stack_00000074;
  uint in_stack_00000078;
  uint in_stack_0000007c;
  HANDLE in_stack_00000080;
  HANDLE in_stack_00000084;
  LPCVOID in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  char *in_stack_0000149c;
  uint in_stack_000014a0;
  HANDLE in_stack_000014a8;
  HANDLE in_stack_000014ac;
  void *in_stack_000014b0;
  void *in_stack_000016dc;
  void *local_c;
  undefined1 *local_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  local_8 = &LAB_005bf7e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000070);
  GetFileSysPath(&stack0x000015d8,&DAT_0067a334,(IFileSystem *)0x0);
  bVar1 = INI_Reader::open((INI_Reader *)&stack0x00000070,&stack0x000015d8,false);
  if (DAT_00674fd0 != (void *)0x0) {
    FUN_005b7e1d();
  }
  DAT_00674fd0 = (void *)0x0;
  local_8 = (void *)0x0;
  local_c = (void *)0x0;
  pvVar15 = (void *)0x0;
  if ((bVar1) &&
     (bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x00000070),
     pcVar7 = get_value_string_exref, pcVar8 = clear_exref, bVar1)) {
    do {
      bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x00000070,"JumpGateEffect");
      if (bVar1) {
        ID_String::clear((ID_String *)&param_2);
        iVar10 = 5;
        do {
          FUN_00502a80();
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        ID_String::clear((ID_String *)&stack0x00000060);
        ID_String::clear((ID_String *)&stack0x00000064);
        bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000070);
        pcVar8 = is_value_exref;
        if (bVar1) {
          do {
            cVar2 = (*pcVar8)();
            if (cVar2 == '\0') {
              cVar2 = (*pcVar8)();
              if (cVar2 == '\0') {
                cVar2 = (*pcVar8)();
                if (cVar2 == '\0') {
                  cVar2 = (*pcVar8)();
                  if (cVar2 == '\0') {
                    cVar2 = (*pcVar8)();
                    if (cVar2 == '\0') {
                      cVar2 = (*pcVar8)();
                      if (cVar2 == '\0') {
                        cVar2 = (*pcVar8)();
                        if (cVar2 == '\0') {
                          cVar2 = (*pcVar8)();
                          if (cVar2 == '\0') {
                            cVar2 = (*pcVar8)();
                            if (cVar2 == '\0') {
                              cVar2 = (*pcVar8)();
                              if (cVar2 == '\0') {
                                cVar2 = (*pcVar8)();
                                if (cVar2 == '\0') {
                                  cVar2 = (*pcVar8)();
                                  if (cVar2 == '\0') {
                                    cVar2 = (*pcVar8)();
                                    if (cVar2 == '\0') {
                                      (**(code **)FDUMP_exref)();
                                    }
                                    else {
                                      uVar9 = 0;
                                      do {
                                        INI_Reader::get_value_float
                                                  ((INI_Reader *)&stack0x00000070,uVar9);
                                        uVar3 = ftol();
                                        (&stack0x0000006b)[uVar9] = uVar3;
                                        uVar9 = uVar9 + 1;
                                        pcVar8 = is_value_exref;
                                      } while ((int)uVar9 < 3);
                                    }
                                  }
                                  else {
                                    uVar9 = 0;
                                    do {
                                      INI_Reader::get_value_float
                                                ((INI_Reader *)&stack0x00000070,uVar9);
                                      uVar3 = ftol();
                                      (&stack0x00000068)[uVar9] = uVar3;
                                      uVar9 = uVar9 + 1;
                                      pcVar8 = is_value_exref;
                                    } while ((int)uVar9 < 3);
                                  }
                                }
                                else {
                                  pcVar4 = (char *)(*pcVar7)();
                                  in_stack_00000064 = CreateID(pcVar4);
                                }
                              }
                              else {
                                pcVar4 = (char *)(*pcVar7)();
                                in_stack_00000060 = CreateID(pcVar4);
                              }
                            }
                            else {
                              in_stack_0000005c =
                                   INI_Reader::get_value_float((INI_Reader *)&stack0x00000070,0);
                            }
                          }
                          else {
                            in_stack_00000058 =
                                 INI_Reader::get_value_float((INI_Reader *)&stack0x00000070,0);
                          }
                        }
                        else {
                          in_stack_00000054 =
                               INI_Reader::get_value_float((INI_Reader *)&stack0x00000070,0);
                        }
                      }
                      else {
                        in_stack_00000050 =
                             INI_Reader::get_value_float((INI_Reader *)&stack0x00000070,0);
                      }
                    }
                    else {
                      in_stack_0000004c =
                           INI_Reader::get_value_float((INI_Reader *)&stack0x00000070,0);
                    }
                  }
                  else {
                    uVar9 = 0;
                    pfVar13 = (float *)&stack0x00000014;
                    do {
                      bVar1 = INI_Reader::is_value_empty((INI_Reader *)&stack0x00000070,uVar9);
                      if (!bVar1) {
                        pvVar15 = (void *)(uVar9 + 1);
                        fVar14 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000070,uVar9);
                        *pfVar13 = fVar14;
                      }
                      uVar9 = uVar9 + 1;
                      pfVar13 = pfVar13 + 3;
                      pcVar7 = get_value_string_exref;
                      pcVar8 = is_value_exref;
                    } while ((int)uVar9 < 5);
                  }
                }
                else {
                  uVar9 = 0;
                  puVar12 = (undefined4 *)&stack0x00000010;
                  do {
                    bVar1 = INI_Reader::is_value_empty((INI_Reader *)&stack0x00000070,uVar9);
                    if (!bVar1) {
                      local_c = (void *)(uVar9 + 1);
                      pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000070,uVar9);
                      pcVar4 = StringAlloc(pcVar4,false);
                      *puVar12 = pcVar4;
                    }
                    uVar9 = uVar9 + 1;
                    puVar12 = puVar12 + 3;
                    pcVar7 = get_value_string_exref;
                    pcVar8 = is_value_exref;
                  } while ((int)uVar9 < 5);
                }
              }
              else {
                uVar9 = 0;
                puVar11 = (uint *)register0x00000010;
                do {
                  puVar11 = puVar11 + 3;
                  bVar1 = INI_Reader::is_value_empty((INI_Reader *)&stack0x00000070,uVar9);
                  if (!bVar1) {
                    local_8 = (undefined1 *)(uVar9 + 1);
                    pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000070,uVar9);
                    uVar6 = CreateID(pcVar4);
                    *puVar11 = uVar6;
                  }
                  uVar9 = uVar9 + 1;
                  pcVar7 = get_value_string_exref;
                  pcVar8 = is_value_exref;
                } while ((int)uVar9 < 5);
              }
            }
            else {
              pcVar4 = (char *)(*pcVar7)();
              param_2 = CreateID(pcVar4);
            }
            bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000070);
          } while (bVar1);
        }
        iVar10 = DAT_00674fd8;
        in_stack_00000048 = pvVar15;
        if ((int)local_c <= (int)pvVar15) {
          in_stack_00000048 = local_c;
        }
        if ((int)local_8 < (int)in_stack_00000048) {
          in_stack_00000048 = local_8;
        }
        piVar5 = *(int **)(DAT_00674fd8 + 4);
        local_4 = operator_new(0x70);
        *local_4 = iVar10;
        if (piVar5 == (int *)0x0) {
          piVar5 = local_4;
        }
        local_4[1] = (int)piVar5;
        *(int **)(iVar10 + 4) = local_4;
        *(int **)local_4[1] = local_4;
        local_4 = local_4 + 2;
        if (local_4 != (int *)0x0) {
          FUN_005048a0();
        }
        DAT_00674fdc = DAT_00674fdc + 1;
        pcVar8 = clear_exref;
      }
      else {
        bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x00000070,"JumpShipEffect");
        if (bVar1) {
          if (DAT_00674fd0 != (void *)0x0) {
            FUN_005b7e1d();
            DAT_00674fd0 = (void *)0x0;
          }
          piVar5 = operator_new(0x14);
          local_4 = piVar5;
          if (piVar5 == (int *)0x0) {
            DAT_00674fd0 = (int *)0x0;
          }
          else {
            (*pcVar8)();
            (*pcVar8)();
            (*pcVar8)();
            (*pcVar8)();
            (*pcVar8)();
            DAT_00674fd0 = piVar5;
          }
          bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000070);
          if (bVar1) {
            do {
              bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x00000070,"jump_out_effect");
              if (bVar1) {
                pcVar4 = (char *)(*pcVar7)();
                puVar11 = (uint *)((int)DAT_00674fd0 + 4);
                uVar9 = CreateID(pcVar4);
                *puVar11 = uVar9;
              }
              else {
                bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x00000070,"jump_in_effect");
                if (bVar1) {
                  pcVar4 = (char *)(*pcVar7)();
                  puVar11 = (uint *)((int)DAT_00674fd0 + 8);
                  uVar9 = CreateID(pcVar4);
                  *puVar11 = uVar9;
                }
                else {
                  bVar1 = INI_Reader::is_value
                                    ((INI_Reader *)&stack0x00000070,"jump_done_effect_player");
                  if (bVar1) {
                    pcVar4 = (char *)(*pcVar7)();
                    puVar11 = (uint *)((int)DAT_00674fd0 + 0xc);
                    uVar9 = CreateID(pcVar4);
                    *puVar11 = uVar9;
                  }
                  else {
                    bVar1 = INI_Reader::is_value
                                      ((INI_Reader *)&stack0x00000070,"jump_done_effect_nonplayer");
                    if (bVar1) {
                      pcVar4 = (char *)(*pcVar7)();
                      puVar11 = (uint *)((int)DAT_00674fd0 + 0x10);
                      uVar9 = CreateID(pcVar4);
                      *puVar11 = uVar9;
                    }
                    else {
                      (**(code **)FDUMP_exref)();
                    }
                  }
                }
              }
              bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000070);
            } while (bVar1);
          }
        }
      }
      bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x00000070);
    } while (bVar1);
  }
  local_4 = (int *)&stack0x00001498;
  uVar9 = *(uint *)npos_exref;
  if (((in_stack_0000149c != (char *)0x0) && (in_stack_0000149c[-1] != '\0')) &&
     (in_stack_0000149c[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001498,
               true);
    uVar6 = 0xffffffff;
    pcVar4 = in_stack_0000149c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001498,
               in_stack_0000149c,~uVar6 - 1);
  }
  if (in_stack_000014a0 < uVar9) {
    uVar9 = in_stack_000014a0;
  }
  if (uVar9 != 0) {
    memmove(in_stack_0000149c,in_stack_0000149c + uVar9,in_stack_000014a0 - uVar9);
    bVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x00001498,in_stack_000014a0 - uVar9,false);
    if (bVar1) {
      in_stack_0000149c[in_stack_000014a0 - uVar9] = '\0';
    }
  }
  if (in_stack_000014a8 != (HANDLE)0xffffffff) {
    if (in_stack_000014ac != (HANDLE)0x0) {
      if (in_stack_000014b0 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000014b0);
        in_stack_000014b0 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_000014ac);
    }
    CloseHandle(in_stack_000014a8);
  }
  if (in_stack_000014b0 != (void *)0x0) {
    free(in_stack_000014b0);
  }
  if (in_stack_0000149c != (char *)0x0) {
    cVar2 = in_stack_0000149c[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d();
    }
    else {
      in_stack_0000149c[-1] = cVar2 + -1;
    }
  }
  pcVar4 = in_stack_00000074;
  uVar9 = *(uint *)npos_exref;
  if (((in_stack_00000074 != (char *)0x0) && (in_stack_00000074[-1] != '\0')) &&
     (in_stack_00000074[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000070,
               true);
    uVar6 = std::char_traits<char>::length(pcVar4);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000070,
               pcVar4,uVar6);
  }
  if (in_stack_00000078 < uVar9) {
    uVar9 = in_stack_00000078;
  }
  if (uVar9 == 0) goto LAB_0050299f;
  memmove(in_stack_00000074,in_stack_00000074 + uVar9,in_stack_00000078 - uVar9);
  uVar9 = in_stack_00000078 - uVar9;
  uVar6 = FUN_00450870();
  if (uVar6 < 3) {
    uVar6 = 1;
  }
  else {
    uVar6 = uVar6 - 2;
  }
  if (uVar6 < uVar9) {
    std::_Xlen();
  }
  if (((in_stack_00000074 == (char *)0x0) || (cVar2 = in_stack_00000074[-1], cVar2 == '\0')) ||
     (cVar2 == -1)) {
    if (uVar9 == 0) {
      if (in_stack_00000074 != (char *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &stack0x00000070,0);
      }
      goto LAB_0050299f;
    }
    if (in_stack_0000007c < uVar9) goto LAB_00502978;
  }
  else {
    if (uVar9 == 0) {
      in_stack_00000074[-1] = cVar2 + -1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000070
                 ,false);
      goto LAB_0050299f;
    }
LAB_00502978:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000070,
               uVar9);
  }
  in_stack_00000074[uVar9] = '\0';
  in_stack_00000078 = uVar9;
LAB_0050299f:
  if (in_stack_00000080 != (HANDLE)0xffffffff) {
    if (in_stack_00000084 != (HANDLE)0x0) {
      if (in_stack_00000088 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000088);
        in_stack_00000088 = (LPCVOID)0x0;
        in_stack_0000008c = 0;
      }
      CloseHandle(in_stack_00000084);
      in_stack_00000084 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_00000080);
    in_stack_00000080 = (HANDLE)0xffffffff;
  }
  if (in_stack_00000088 != (void *)0x0) {
    free(in_stack_00000088);
    in_stack_00000088 = (void *)0x0;
    in_stack_0000008c = 0;
  }
  in_stack_00000090 = 0;
  if (in_stack_00000074 != (char *)0x0) {
    cVar2 = in_stack_00000074[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      in_stack_00000074[-1] = cVar2 + -1;
      ExceptionList = in_stack_000016dc;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_000016dc;
  return;
}

