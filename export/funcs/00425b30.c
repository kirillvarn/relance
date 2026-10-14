
/* WARNING: Removing unreachable block (ram,0x0042683c) */
/* WARNING: Removing unreachable block (ram,0x0042687a) */
/* WARNING: Removing unreachable block (ram,0x004269a3) */
/* WARNING: Removing unreachable block (ram,0x00426925) */
/* WARNING: Removing unreachable block (ram,0x0042693e) */
/* WARNING: Removing unreachable block (ram,0x0042695d) */
/* WARNING: Removing unreachable block (ram,0x00426842) */
/* WARNING: Removing unreachable block (ram,0x00425d1f) */
/* WARNING: Removing unreachable block (ram,0x00425d40) */
/* WARNING: Removing unreachable block (ram,0x00425d81) */
/* WARNING: Removing unreachable block (ram,0x00425d83) */
/* WARNING: Removing unreachable block (ram,0x00425e30) */
/* WARNING: Removing unreachable block (ram,0x00425dfa) */
/* WARNING: Removing unreachable block (ram,0x00425e6a) */
/* WARNING: Removing unreachable block (ram,0x00425e7e) */
/* WARNING: Removing unreachable block (ram,0x004260fa) */
/* WARNING: Removing unreachable block (ram,0x00426158) */
/* WARNING: Removing unreachable block (ram,0x0042611f) */
/* WARNING: Removing unreachable block (ram,0x00426130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00425b30(void)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int *unaff_ESI;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  float fVar8;
  float in_stack_0000002c;
  float in_stack_00000034;
  char *in_stack_00000038;
  ulong in_stack_0000003c;
  undefined1 *in_stack_00000040;
  ulong in_stack_00000044;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined1 in_stack_00000088;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_0000010c;
  char in_stack_00000110;
  char *in_stack_00000574;
  uint in_stack_00000578;
  uint in_stack_0000057c;
  HANDLE in_stack_00000580;
  HANDLE in_stack_00000584;
  void *in_stack_00000588;
  char *in_stack_0000199c;
  uint in_stack_000019a0;
  HANDLE in_stack_000019a8;
  HANDLE in_stack_000019ac;
  void *in_stack_000019b0;
  void *in_stack_00001ce4;
  char *in_stack_00001d00;
  int *in_stack_00001d04;
  undefined4 uStack_28;
  undefined4 *puStack_20;
  undefined4 *puVar9;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  float fStack_4;
  
  fStack_4 = -NAN;
  puStack_8 = &LAB_005b8bc0;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000594);
  if ((DAT_00667a1c & 1) == 0) {
    DAT_00667a1c = DAT_00667a1c | 1;
    DAT_00667a0c = uStack_c._3_1_;
    DAT_00667a10 = 0;
    DAT_00667a14 = 0;
    _DAT_00667a18 = 0;
    FUN_005b7e6c();
  }
  in_stack_0000002c = 0.0;
  uStack_28 = *(int **)TextureLib_exref;
  puStack_20 = &stack0x0000002c;
  (**(code **)(*uStack_28 + 0x10))();
  (**(code **)(**(int **)TextureLib_exref + 0xc))();
  if (in_stack_00001d04 == (int *)0x0) {
    iVar5 = -(int)in_stack_00001d00;
    do {
      cVar2 = *in_stack_00001d00;
      in_stack_00001d00[(int)(&stack0x00001ae4 + iVar5)] = cVar2;
      in_stack_00001d00 = in_stack_00001d00 + 1;
    } while (cVar2 != '\0');
  }
  else {
    (**(code **)(*in_stack_00001d04 + 0x84))();
    _makepath(&stack0x00001ae4,(char *)0x0,&stack0x00000110,in_stack_00001d00,(char *)0x0);
  }
  bVar1 = INI_Reader::open((INI_Reader *)&stack0x0000057c,&stack0x00001ae4,false);
  if (bVar1) {
    puVar9 = (undefined4 *)0x0;
    bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x0000057c);
    pcVar7 = is_value_exref;
    if (bVar1) {
      do {
        unaff_ESI = (int *)0x0;
        bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x0000057c,"Texture");
        if (bVar1) {
          bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000057c);
          if (bVar1) {
            do {
              cVar2 = (*pcVar7)();
              if (cVar2 == '\0') {
                cVar2 = (*pcVar7)();
                if ((cVar2 == '\0') && (cVar2 = (*pcVar7)(), cVar2 == '\0')) {
                  cVar2 = (*pcVar7)();
                  if (cVar2 == '\0') {
                    cVar2 = (*pcVar7)();
                    if (cVar2 == '\0') {
                      cVar2 = (*pcVar7)();
                      if (cVar2 == '\0') {
                        INI_Reader::get_name_ptr((INI_Reader *)&stack0x0000057c);
                        sprintf(&stack0x00001ae4,"unknown [Shape] parameter %s");
                        INI_Reader::log_link((INI_Reader *)&stack0x0000057c,&stack0x00001ae4);
                        (**(code **)FDUMP_exref)();
                      }
                      else if (puVar9 == (undefined4 *)0x0) {
                        INI_Reader::log_link((INI_Reader *)&stack0x0000057c,"");
                        (**(code **)FDUMP_exref)();
                      }
                      else if (unaff_ESI == (int *)0x0) {
                        INI_Reader::log_link((INI_Reader *)&stack0x0000057c,"");
                        (**(code **)FDUMP_exref)();
                      }
                      else {
                        INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,0);
                        INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,1);
                        INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,2);
                        INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,3);
                        bVar1 = INI_Reader::is_value_empty((INI_Reader *)&stack0x0000057c,4);
                        if (bVar1) {
                          in_stack_00000034 = (float)_DAT_005c8ba8;
                        }
                        else {
                          in_stack_00000034 =
                               INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,4);
                        }
                        bVar1 = INI_Reader::is_value_empty((INI_Reader *)&stack0x0000057c,5);
                        if (!bVar1) {
                          INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,5);
                        }
                        bVar1 = INI_Reader::is_value_empty((INI_Reader *)&stack0x0000057c,6);
                        if (bVar1) {
                          in_stack_0000002c = (float)_DAT_005c8ba8;
                        }
                        else {
                          in_stack_0000002c =
                               INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,6);
                        }
                        bVar1 = INI_Reader::is_value_empty((INI_Reader *)&stack0x0000057c,7);
                        if (bVar1) {
                          puStack_20 = (undefined4 *)(float)_DAT_005c8ba8;
                        }
                        else {
                          puStack_20 = (undefined4 *)
                                       INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,7)
                          ;
                        }
                        FUN_004256c0();
                        unaff_ESI = (int *)0x0;
                      }
                    }
                    else {
                      puVar9 = (undefined4 *)0x0;
                      puStack_20 = (undefined4 *)0x0;
                      if (uStack_28._3_1_ == '\0') {
                        INI_Reader::log_link((INI_Reader *)&stack0x00000578,"");
                        (**(code **)FDUMP_exref)();
                      }
                      in_stack_00000038 =
                           INI_Reader::get_value_string((INI_Reader *)&stack0x00000578,0);
                      in_stack_0000003c = DACOM_CRC::GetCRC32(in_stack_00000038);
                      iVar5 = (**(code **)(**(int **)TextureLib_exref + 0x30))();
                      if (iVar5 == 0) {
                        (**(code **)(**(int **)TextureLib_exref + 0x38))();
                      }
                      else {
                        INI_Reader::log_link((INI_Reader *)&stack0x0000056c,"");
                        FUN_00411c50();
                        (**(code **)FDUMP_exref)();
                      }
                    }
                  }
                  else {
                    if (puVar9 == (undefined4 *)0x0) {
                      INI_Reader::log_link((INI_Reader *)&stack0x0000057c,"");
                      (**(code **)FDUMP_exref)();
                    }
                    pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000057c,0);
                    if (pcVar3 != (char *)0x0) {
                      FUN_00417c50();
                    }
                    FUN_004205c0();
                    unaff_ESI = (int *)FUN_00426e20();
                    if (*unaff_ESI == 0) {
                      FUN_00425680();
                      if (*unaff_ESI != 0) {
                        FUN_004256c0();
                      }
                    }
                    else {
                      unaff_ESI = (int *)0x0;
                      INI_Reader::log_link((INI_Reader *)&stack0x0000057c,"");
                      (**(code **)FDUMP_exref)();
                    }
                  }
                }
                else {
                  if (uStack_28._3_1_ == '\0') {
                    INI_Reader::log_link((INI_Reader *)&stack0x00000578,"");
                    (**(code **)FDUMP_exref)();
                  }
                  uStack_28 = (int *)0x0;
                  pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000578,0);
                  in_stack_0000010c = 0;
                  in_stack_00000110 = '\0';
                  if (pcVar3 == (char *)0x0) {
                    in_stack_0000010c = 0;
                    in_stack_00000110 = '\0';
                  }
                  else {
                    in_stack_0000010c = FUN_00417c50();
                  }
                  in_stack_00000040 = &stack0x00000110;
                  in_stack_00000044 = DACOM_CRC::GetCRC32(&stack0x00000110);
                  iVar5 = (**(code **)(**(int **)TextureLib_exref + 0x30))();
                  puVar9 = puStack_20;
                  if (iVar5 == 0) {
                    (**(code **)(**(int **)TextureLib_exref + 0x38))();
                  }
                  else {
                    INI_Reader::log_link((INI_Reader *)&stack0x0000056c,"");
                    FUN_00411c50();
                    (**(code **)FDUMP_exref)();
                  }
                }
              }
              else {
                unaff_ESI = (int *)0x0;
                INI_Reader::get_value_string((INI_Reader *)&stack0x0000057c,0);
                FUN_004271f0();
                puVar9 = (undefined4 *)0x0;
              }
              bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000057c);
              pcVar7 = is_value_exref;
            } while (bVar1);
          }
        }
        else {
          bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x0000057c,"Shape");
          if (bVar1) {
            fStack_4 = 0.0;
            puStack_8 = (undefined1 *)0xbf800000;
            bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000057c);
            if (bVar1) {
              do {
                cVar2 = (*pcVar7)();
                if ((cVar2 == '\0') && (cVar2 = (*pcVar7)(), cVar2 == '\0')) {
                  cVar2 = (*pcVar7)();
                  if (cVar2 == '\0') {
                    cVar2 = (*pcVar7)();
                    if (cVar2 == '\0') {
                      cVar2 = (*pcVar7)();
                      if (cVar2 == '\0') {
                        cVar2 = (*pcVar7)();
                        if (cVar2 == '\0') {
                          cVar2 = (*pcVar7)();
                          if (cVar2 == '\0') {
                            cVar2 = (*pcVar7)();
                            if (cVar2 == '\0') {
                              cVar2 = (*pcVar7)();
                              if (cVar2 == '\0') {
                                INI_Reader::log_link((INI_Reader *)&stack0x0000057c,"");
                                (**(code **)FDUMP_exref)();
                              }
                              else {
                                INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,0);
                                INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,1);
                                fStack_4 = INI_Reader::get_value_float
                                                     ((INI_Reader *)&stack0x0000057c,2);
                                INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,3);
                                INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,4);
                                INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,5);
                                puStack_8 = (undefined1 *)
                                            INI_Reader::get_value_float
                                                      ((INI_Reader *)&stack0x0000057c,6);
                                INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,7);
                              }
                            }
                            else {
                              fVar8 = INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,0);
                              puStack_8 = (undefined1 *)(fVar8 + (float)_DAT_005c89b8);
                              INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,1);
                            }
                          }
                          else {
                            INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,0);
                            INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,1);
                          }
                        }
                        else {
                          INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,0);
                        }
                      }
                      else {
                        fStack_4 = INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,0);
                      }
                    }
                    else {
                      INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,0);
                    }
                  }
                  else {
                    INI_Reader::get_value_float((INI_Reader *)&stack0x0000057c,0);
                  }
                }
                else {
                  pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000057c,0);
                  if (pcVar3 != (char *)0x0) {
                    FUN_00417c50();
                  }
                }
                bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000057c);
              } while (bVar1);
            }
            INI_Reader::log_link((INI_Reader *)&stack0x0000057c,"");
            (**(code **)FDUMP_exref)();
          }
        }
        bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x0000057c);
      } while (bVar1);
    }
  }
  else {
    (**(code **)FDUMP_exref)();
  }
  iVar5 = DAT_00667a10;
  if (DAT_00667a10 != DAT_00667a14) {
    do {
      (**(code **)(**(int **)TextureLib_exref + 0x1c))();
      iVar5 = iVar5 + 4;
    } while (iVar5 != DAT_00667a14);
  }
  DAT_00667a14 = DAT_00667a10;
  (**(code **)(**(int **)TextureLib_exref + 0xc))();
  iVar5 = unaff_ESI[4];
  uVar6 = *(uint *)npos_exref;
  if (((in_stack_0000199c != (char *)0x0) && (in_stack_0000199c[-1] != '\0')) &&
     (in_stack_0000199c[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001998,
               true);
    uVar4 = 0xffffffff;
    pcVar3 = in_stack_0000199c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001998,
               in_stack_0000199c,~uVar4 - 1);
  }
  if (in_stack_000019a0 < uVar6) {
    uVar6 = in_stack_000019a0;
  }
  if (uVar6 != 0) {
    memmove(in_stack_0000199c,in_stack_0000199c + uVar6,in_stack_000019a0 - uVar6);
    bVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x00001998,in_stack_000019a0 - uVar6,false);
    if (bVar1) {
      in_stack_0000199c[in_stack_000019a0 - uVar6] = '\0';
    }
  }
  if (in_stack_000019a8 != (HANDLE)0xffffffff) {
    if (in_stack_000019ac != (HANDLE)0x0) {
      if (in_stack_000019b0 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000019b0);
        in_stack_000019b0 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_000019ac);
    }
    CloseHandle(in_stack_000019a8);
  }
  if (in_stack_000019b0 != (void *)0x0) {
    free(in_stack_000019b0);
  }
  if (in_stack_0000199c != (char *)0x0) {
    cVar2 = in_stack_0000199c[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d();
    }
    else {
      in_stack_0000199c[-1] = cVar2 + -1;
    }
  }
  uVar6 = *(uint *)npos_exref;
  if (((in_stack_00000574 != (char *)0x0) && (in_stack_00000574[-1] != '\0')) &&
     (in_stack_00000574[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000570,
               true);
    uVar4 = std::char_traits<char>::length(in_stack_00000574);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000570,
               in_stack_00000574,uVar4);
  }
  if (in_stack_00000578 < uVar6) {
    uVar6 = in_stack_00000578;
  }
  if (uVar6 == 0) goto LAB_00426d04;
  memmove(in_stack_00000574,in_stack_00000574 + uVar6,in_stack_00000578 - uVar6);
  uVar6 = in_stack_00000578 - uVar6;
  uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     &stack0x00000570);
  if (uVar4 < uVar6) {
    std::_Xlen();
  }
  if (((in_stack_00000574 == (char *)0x0) || (cVar2 = in_stack_00000574[-1], cVar2 == '\0')) ||
     (cVar2 == -1)) {
    if (uVar6 == 0) {
      if (in_stack_00000574 != (char *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   &stack0x00000570,0);
      }
      goto LAB_00426d04;
    }
    if (in_stack_0000057c < uVar6) goto LAB_00426cdd;
  }
  else {
    if (uVar6 == 0) {
      in_stack_00000574[-1] = cVar2 + -1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000570
                 ,false);
      goto LAB_00426d04;
    }
LAB_00426cdd:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000570,
               uVar6);
  }
  in_stack_00000574[uVar6] = '\0';
LAB_00426d04:
  if (in_stack_00000580 != (HANDLE)0xffffffff) {
    if (in_stack_00000584 != (HANDLE)0x0) {
      if (in_stack_00000588 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000588);
        in_stack_00000588 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00000584);
    }
    CloseHandle(in_stack_00000580);
  }
  if (in_stack_00000588 != (void *)0x0) {
    free(in_stack_00000588);
  }
  if (in_stack_00000574 != (char *)0x0) {
    cVar2 = in_stack_00000574[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d();
    }
    else {
      in_stack_00000574[-1] = cVar2 + -1;
    }
  }
  ExceptionList = in_stack_00001ce4;
  return iVar5;
}

