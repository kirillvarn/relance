
int FUN_00530d20(undefined4 param_1,HANDLE param_2,HANDLE param_3,LPCVOID param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int in_stack_00001424;
  HANDLE in_stack_00001430;
  HANDLE in_stack_00001434;
  void *in_stack_00001438;
  void *in_stack_00001560;
  char *in_stack_00001570;
  undefined1 *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = -1;
  local_8 = &LAB_005c069f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  iVar3 = DAT_00675504;
  INI_Reader::INI_Reader((INI_Reader *)&local_8);
  bVar2 = INI_Reader::open((INI_Reader *)&local_8,in_stack_00001570,false);
  if (bVar2) {
    bVar2 = INI_Reader::read_header((INI_Reader *)&local_8);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&local_8,"Debris");
        if (bVar2) {
          FUN_00530a20();
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&local_8);
      } while (bVar2);
    }
  }
  else {
    (**(code **)FDUMP_exref)();
  }
  iVar3 = DAT_00675504 - iVar3;
  local_c = &stack0x00001420;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001420,0,
             *(uint *)npos_exref);
  if (in_stack_00001430 != (HANDLE)0xffffffff) {
    if (in_stack_00001434 != (HANDLE)0x0) {
      if (in_stack_00001438 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001438);
        in_stack_00001438 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001434);
    }
    CloseHandle(in_stack_00001430);
  }
  if (in_stack_00001438 != (void *)0x0) {
    free(in_stack_00001438);
  }
  if (in_stack_00001424 != 0) {
    cVar1 = *(char *)(in_stack_00001424 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001424 + -1) = cVar1 + -1;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_8,0,
             *(uint *)npos_exref);
  if (param_2 != (HANDLE)0xffffffff) {
    if (param_3 != (HANDLE)0x0) {
      if (param_4 != (LPCVOID)0x0) {
        UnmapViewOfFile(param_4);
        param_4 = (LPCVOID)0x0;
      }
      CloseHandle(param_3);
    }
    CloseHandle(param_2);
  }
  if (param_4 != (void *)0x0) {
    free(param_4);
  }
  if (local_4 != 0) {
    cVar1 = *(char *)(local_4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(local_4 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00001560;
  return iVar3;
}

