
void * FUN_00417800(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  HANDLE in_stack_00000294;
  HANDLE in_stack_00000298;
  void *in_stack_0000029c;
  HANDLE in_stack_000016bc;
  HANDLE in_stack_000016c0;
  void *in_stack_000016c4;
  void *in_stack_000018f0;
  char *in_stack_00001900;
  IFileSystem *in_stack_00001904;
  void *local_c;
  undefined1 *local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0xffffffff;
  local_8 = &LAB_005b8915;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_c = (void *)0x0;
  GetFileSysPath(&stack0x000017ec,in_stack_00001900,in_stack_00001904);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000284);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x00000284,&stack0x000017ec,false);
  if ((bVar2) && (bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000284), bVar2)) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000284,"TrueType");
      if (bVar2) {
        local_8 = (undefined1 *)0x0;
        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000284);
        if (bVar2) {
          do {
            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000284,"nickname");
            if (bVar2) {
              pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000284);
              if (pcVar4 != (char *)0x0) {
                FUN_00417c50();
              }
            }
            else {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000284,"font");
              if (bVar2) {
                pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000284,0);
                if (pcVar4 != (char *)0x0) {
                  FUN_00417c50();
                }
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000284,"fixed_height");
                if (bVar2) {
                  local_8 = (undefined1 *)
                            INI_Reader::get_value_float((INI_Reader *)&stack0x00000284,0);
                }
              }
            }
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000284);
          } while (bVar2);
        }
        FUN_00417d50();
        FUN_00418bc0();
        FUN_00417e20();
        FUN_00418550();
        iVar1 = *(int *)(DAT_0061651c + 4);
        FUN_00417ca0();
        if (iVar1 != -8) {
          cVar3 = FUN_00415a80();
          if (cVar3 == '\0') {
            (**(code **)FDUMP_exref)();
          }
          else {
            local_c = (void *)((int)local_c + 1);
          }
        }
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000284);
    } while (bVar2);
  }
  local_4 = &stack0x000016ac;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000016ac,0,
             *(uint *)npos_exref);
  if (in_stack_000016bc != (HANDLE)0xffffffff) {
    if (in_stack_000016c0 != (HANDLE)0x0) {
      if (in_stack_000016c4 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000016c4);
        in_stack_000016c4 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_000016c0);
    }
    CloseHandle(in_stack_000016bc);
  }
  if (in_stack_000016c4 != (void *)0x0) {
    free(in_stack_000016c4);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000016ac,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000284,0,
             *(uint *)npos_exref);
  if (in_stack_00000294 != (HANDLE)0xffffffff) {
    if (in_stack_00000298 != (HANDLE)0x0) {
      if (in_stack_0000029c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000029c);
        in_stack_0000029c = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00000298);
    }
    CloseHandle(in_stack_00000294);
  }
  if (in_stack_0000029c != (void *)0x0) {
    free(in_stack_0000029c);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000284,
             true);
  ExceptionList = in_stack_000018f0;
  return local_c;
}

