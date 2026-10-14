
void FUN_005547c0(void)

{
  char cVar1;
  bool bVar2;
  ISystem *pIVar3;
  char *pcVar4;
  int in_stack_00000100;
  HANDLE in_stack_0000010c;
  HANDLE in_stack_00000110;
  LPCVOID in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;
  int in_stack_00001528;
  HANDLE in_stack_00001534;
  HANDLE in_stack_00001538;
  void *in_stack_0000153c;
  void *in_stack_00001664;
  uint *in_stack_00001674;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c147f;
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  FUN_005b7e90();
  pIVar3 = Universe::get_system(*in_stack_00001674);
  pcVar4 = (char *)(**(code **)(*(int *)pIVar3 + 0x14))();
  Universe::get_filename((char *)&puStack_8,pcVar4);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x000000fc);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x000000fc,(char *)&puStack_8,false);
  if ((bVar2) && (bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000000fc), bVar2)) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000000fc,"Object");
      if ((bVar2) && (bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000fc), bVar2)) {
        do {
          bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"archetype");
          if (bVar2) {
            INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
            FUN_00553100();
          }
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000fc);
        } while (bVar2);
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000000fc);
    } while (bVar2);
  }
  puStack_c = &stack0x00001524;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001524,0,
             *(uint *)npos_exref);
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
  if (in_stack_00001528 != 0) {
    cVar1 = *(char *)(in_stack_00001528 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001528 + -1) = cVar1 + -1;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000000fc,0,
             *(uint *)npos_exref);
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
  if (in_stack_00000100 != 0) {
    cVar1 = *(char *)(in_stack_00000100 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00000100 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00001664;
  return;
}

