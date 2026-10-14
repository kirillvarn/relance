
void FUN_0052a7d0(void)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  Fuse *pFVar4;
  void **ppvVar5;
  int extraout_ECX;
  HANDLE in_stack_00000024;
  HANDLE in_stack_00000028;
  LPCVOID in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  HANDLE in_stack_0000144c;
  HANDLE in_stack_00001450;
  void *in_stack_00001454;
  void *in_stack_0000157c;
  char *in_stack_0000158c;
  void *local_c;
  Fuse *local_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  local_8 = (Fuse *)&LAB_005c03ed;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000014);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x00000014,in_stack_0000158c,false);
  if (bVar2) {
    INI_Reader::read_header((INI_Reader *)&stack0x00000014);
    bVar2 = INI_Reader::is_end((INI_Reader *)&stack0x00000014);
    while (!bVar2) {
      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000014,"fuse");
      if (bVar2) {
        pFVar4 = operator_new(0x38);
        local_8 = pFVar4;
        if (pFVar4 == (Fuse *)0x0) {
          pFVar4 = (Fuse *)0x0;
        }
        else {
          CreateID("");
          Fuse::Fuse(pFVar4,(ID_String *)&stack0x00000000,-1.0);
          *(undefined4 *)(pFVar4 + 0x34) = 0;
          *(undefined ***)pFVar4 = &PTR_FUN_005dd328;
        }
        cVar3 = FUN_00529e10();
        if (cVar3 != '\0') {
          pvVar1 = *(void **)(extraout_ECX + 4);
          FUN_0041bd10();
          if ((local_c == *(void **)(extraout_ECX + 4)) ||
             (*(uint *)(pFVar4 + 4) < *(uint *)((int)local_c + 0xc))) {
            local_4 = *(void **)(extraout_ECX + 4);
            ppvVar5 = &local_4;
          }
          else {
            ppvVar5 = &local_c;
          }
          if (*ppvVar5 == pvVar1) {
            FUN_0046d6d0();
          }
        }
      }
      else {
        INI_Reader::read_header((INI_Reader *)&stack0x00000014);
      }
      bVar2 = INI_Reader::is_end((INI_Reader *)&stack0x00000014);
    }
  }
  local_8 = (Fuse *)&stack0x0000143c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000143c,0,
             *(uint *)npos_exref);
  if (in_stack_0000144c != (HANDLE)0xffffffff) {
    if (in_stack_00001450 != (HANDLE)0x0) {
      if (in_stack_00001454 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001454);
        in_stack_00001454 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001450);
    }
    CloseHandle(in_stack_0000144c);
  }
  if (in_stack_00001454 != (void *)0x0) {
    free(in_stack_00001454);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000143c,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000014,0,
             *(uint *)npos_exref);
  if (in_stack_00000024 != (HANDLE)0xffffffff) {
    if (in_stack_00000028 != (HANDLE)0x0) {
      if (in_stack_0000002c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000002c);
        in_stack_0000002c = (LPCVOID)0x0;
        in_stack_00000030 = 0;
      }
      CloseHandle(in_stack_00000028);
      in_stack_00000028 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_00000024);
    in_stack_00000024 = (HANDLE)0xffffffff;
  }
  if (in_stack_0000002c != (void *)0x0) {
    free(in_stack_0000002c);
    in_stack_0000002c = (void *)0x0;
    in_stack_00000030 = 0;
  }
  in_stack_00000034 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000014,
             true);
  ExceptionList = in_stack_0000157c;
  return;
}

