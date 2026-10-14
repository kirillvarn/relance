
undefined1 FUN_004afe30(void)

{
  bool bVar1;
  int extraout_ECX;
  HANDLE in_stack_0000009c;
  HANDLE in_stack_000000a0;
  LPCVOID in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000ac;
  void *in_stack_000015f4;
  char *in_stack_00001604;
  undefined1 *local_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_005bcf6f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x0000008c);
  bVar1 = INI_Reader::open((INI_Reader *)&stack0x0000008c,in_stack_00001604,false);
  uStack_8 = (undefined1 *)CONCAT13(bVar1,(undefined3)uStack_8);
  if (bVar1) {
    bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x0000008c);
    if (bVar1) {
      do {
        bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x0000008c,"Interface");
        if (bVar1) {
          local_c = (undefined1 *)0x0;
          bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000008c);
          if (bVar1) {
            do {
              bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x0000008c,"option");
              if (bVar1) {
                FUN_004afd80();
                local_c = local_c + 1;
                FUN_004a3680();
              }
              bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000008c);
            } while (bVar1);
            if (0xe < (int)local_c) goto LAB_004affe1;
          }
          local_c = (undefined1 *)(0xf - (int)local_c);
          do {
            FUN_004a3680();
            local_c = local_c + -1;
          } while (local_c != (undefined1 *)0x0);
        }
LAB_004affe1:
        bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x0000008c,"Audio");
        if (bVar1) {
          local_c = (undefined1 *)0x0;
          bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000008c);
          if (bVar1) {
            do {
              bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x0000008c,"option");
              if (bVar1) {
                FUN_004afd80();
                local_c = local_c + 1;
                FUN_004a3680();
              }
              bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000008c);
            } while (bVar1);
            if (0xe < (int)local_c) goto LAB_004b0103;
          }
          local_c = (undefined1 *)(0xf - (int)local_c);
          do {
            FUN_004a3680();
            local_c = local_c + -1;
          } while (local_c != (undefined1 *)0x0);
        }
LAB_004b0103:
        bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x0000008c,"Video");
        if (bVar1) {
          local_c = (undefined1 *)0x0;
          bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000008c);
          if (bVar1) {
            do {
              bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x0000008c,"option");
              if (bVar1) {
                local_4 = 0xffffffff;
                FUN_004afd80();
                local_c = local_c + 1;
                FUN_004a3680();
              }
              bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x0000008c);
            } while (bVar1);
            if (0xe < (int)local_c) goto LAB_004b0222;
          }
          local_c = (undefined1 *)(0xf - (int)local_c);
          do {
            FUN_004a3680();
            local_c = local_c + -1;
          } while (local_c != (undefined1 *)0x0);
        }
LAB_004b0222:
        bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x0000008c);
      } while (bVar1);
    }
    INI_Reader::close((INI_Reader *)&stack0x0000008c);
    if (*(char *)(extraout_ECX + 0x32e) != '\0') {
      FUN_005b40f0();
    }
  }
  else {
    (**(code **)FDUMP_exref)();
  }
  local_c = &stack0x000014b4;
  FileMap::close((FileMap *)&stack0x000014b4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000014b4,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000008c,0,
             *(uint *)npos_exref);
  if (in_stack_0000009c != (HANDLE)0xffffffff) {
    if (in_stack_000000a0 != (HANDLE)0x0) {
      if (in_stack_000000a4 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000000a4);
        in_stack_000000a4 = (LPCVOID)0x0;
        in_stack_000000a8 = 0;
      }
      CloseHandle(in_stack_000000a0);
      in_stack_000000a0 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_0000009c);
    in_stack_0000009c = (HANDLE)0xffffffff;
  }
  if (in_stack_000000a4 != (void *)0x0) {
    free(in_stack_000000a4);
    in_stack_000000a4 = (void *)0x0;
    in_stack_000000a8 = 0;
  }
  in_stack_000000ac = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000008c,
             true);
  ExceptionList = in_stack_000015f4;
  return uStack_8._3_1_;
}

