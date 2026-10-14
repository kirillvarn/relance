
undefined4 FUN_005b0c30(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  HMODULE pHVar4;
  uint uVar5;
  uint uVar6;
  char *in_stack_00000100;
  uint in_stack_00000104;
  HANDLE in_stack_0000010c;
  HANDLE in_stack_00000110;
  LPCVOID in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  char *in_stack_00001528;
  uint in_stack_0000152c;
  HANDLE in_stack_00001534;
  HANDLE in_stack_00001538;
  void *in_stack_0000153c;
  void *in_stack_00001768;
  char *in_stack_00001778;
  IFileSystem *pIVar7;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_005c593f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x000000fc);
  FUN_004b6c50();
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x000000fc,in_stack_00001778,false);
  if (bVar2) {
    bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000000fc);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000000fc,"Data");
        if (bVar2) {
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000fc);
          if (bVar2) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"fonts");
              if (bVar2) {
                INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                FUN_00417800();
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"rich_fonts");
                if (bVar2) {
                  INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                  FUN_0057e310();
                }
                else {
                  bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"sounds");
                  if (bVar2) {
                    pIVar7 = (IFileSystem *)0x0;
                    pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                    GetFileSysPath((char *)&local_8,pcVar3,pIVar7);
                    FUN_0042b030();
                  }
                  else {
                    bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"voices");
                    if (bVar2) {
                      pIVar7 = (IFileSystem *)0x0;
                      pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                      GetFileSysPath((char *)&local_8,pcVar3,pIVar7);
                      FUN_00430b00();
                    }
                    else {
                      bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"effects");
                      if (bVar2) {
                        pIVar7 = (IFileSystem *)0x0;
                        pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                        GetFileSysPath((char *)&local_8,pcVar3,pIVar7);
                        FUN_0040eac0();
                      }
                      else {
                        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"effect_shapes")
                        ;
                        if (bVar2) {
                          pIVar7 = (IFileSystem *)0x0;
                          pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                          GetFileSysPath((char *)&local_8,pcVar3,pIVar7);
                          FUN_004f7230();
                        }
                        else {
                          bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"debris");
                          if (bVar2) {
                            pIVar7 = (IFileSystem *)0x0;
                            pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                            GetFileSysPath((char *)&local_8,pcVar3,pIVar7);
                            FUN_00530d20();
                          }
                          else {
                            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"intro");
                            if (bVar2) {
                              pIVar7 = *(IFileSystem **)Data_exref;
                              pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                              GetFileSysPath(&stack0x00001664,pcVar3,pIVar7);
                              thunk_FUN_00564b30();
                            }
                            else {
                              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"HUD");
                              if (bVar2) {
                                pIVar7 = (IFileSystem *)0x0;
                                pcVar3 = INI_Reader::get_value_string
                                                   ((INI_Reader *)&stack0x000000fc);
                                GetFileSysPath((char *)&local_8,pcVar3,pIVar7);
                                FUN_004c7370();
                              }
                              else {
                                bVar2 = INI_Reader::is_value
                                                  ((INI_Reader *)&stack0x000000fc,"igraph");
                                if (bVar2) {
                                  pIVar7 = (IFileSystem *)0x0;
                                  pcVar3 = INI_Reader::get_value_string
                                                     ((INI_Reader *)&stack0x000000fc);
                                  GetFileSysPath((char *)&local_8,pcVar3,pIVar7);
                                  FUN_004197e0();
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000fc);
            } while (bVar2);
          }
        }
        else {
          bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000000fc,"Resources");
          if ((bVar2) && (bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000fc), bVar2)) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"DLL");
              if (bVar2) {
                pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                pHVar4 = LoadLibraryA(pcVar3);
                if (pHVar4 == (HMODULE)0x0) {
                  INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                  GetLastError();
                  (**(code **)FDUMP_exref)();
                }
                FUN_0057d800();
              }
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000fc);
            } while (bVar2);
          }
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000000fc);
      } while (bVar2);
    }
    GetFileSysPath((char *)&local_8,"audio\\SoundCFG.ini",(IFileSystem *)0x0);
    FUN_00427a70();
  }
  local_c = &stack0x00001524;
  uVar6 = *(uint *)npos_exref;
  if (((in_stack_00001528 != (char *)0x0) && (in_stack_00001528[-1] != '\0')) &&
     (in_stack_00001528[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001524,
               true);
    uVar5 = 0xffffffff;
    pcVar3 = in_stack_00001528;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001524,
               in_stack_00001528,~uVar5 - 1);
  }
  if (in_stack_0000152c < uVar6) {
    uVar6 = in_stack_0000152c;
  }
  if (uVar6 != 0) {
    memmove(in_stack_00001528,in_stack_00001528 + uVar6,in_stack_0000152c - uVar6);
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x00001524,in_stack_0000152c - uVar6,false);
    if (bVar2) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001524
                 ,in_stack_0000152c - uVar6);
    }
  }
  if (in_stack_00001534 != (HANDLE)0xffffffff) {
    if (in_stack_00001538 != (HANDLE)0x0) {
      if (in_stack_0000153c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000153c);
        in_stack_0000153c = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001538);
    }
    CloseHandle(in_stack_00001534);
  }
  if (in_stack_0000153c != (void *)0x0) {
    free(in_stack_0000153c);
  }
  if (in_stack_00001528 != (char *)0x0) {
    cVar1 = in_stack_00001528[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      in_stack_00001528[-1] = cVar1 + -1;
    }
  }
  pcVar3 = in_stack_00000100;
  uVar6 = *(uint *)npos_exref;
  if (((in_stack_00000100 != (char *)0x0) && (in_stack_00000100[-1] != '\0')) &&
     (in_stack_00000100[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000000fc,
               true);
    uVar5 = std::char_traits<char>::length(pcVar3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000000fc,
               pcVar3,uVar5);
  }
  if (in_stack_00000104 < uVar6) {
    uVar6 = in_stack_00000104;
  }
  if (uVar6 != 0) {
    memmove(in_stack_00000100,in_stack_00000100 + uVar6,in_stack_00000104 - uVar6);
    uVar6 = in_stack_00000104 - uVar6;
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x000000fc,uVar6,false);
    if (bVar2) {
      in_stack_00000100[uVar6] = '\0';
      in_stack_00000104 = uVar6;
    }
  }
  if (in_stack_0000010c != (HANDLE)0xffffffff) {
    if (in_stack_00000110 != (HANDLE)0x0) {
      if (in_stack_00000114 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000114);
        in_stack_00000114 = (LPCVOID)0x0;
        in_stack_00000118 = 0;
      }
      CloseHandle(in_stack_00000110);
      in_stack_00000110 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_0000010c);
    in_stack_0000010c = (HANDLE)0xffffffff;
  }
  if (in_stack_00000114 != (void *)0x0) {
    free(in_stack_00000114);
    in_stack_00000114 = (void *)0x0;
    in_stack_00000118 = 0;
  }
  in_stack_0000011c = 0;
  if (in_stack_00000100 != (char *)0x0) {
    cVar1 = in_stack_00000100[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      in_stack_00000100[-1] = cVar1 + -1;
      ExceptionList = in_stack_00001768;
      return 1;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_00001768;
  return 1;
}

