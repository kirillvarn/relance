
void FUN_0051ad80(char *param_1,undefined4 param_2,HANDLE param_3,HANDLE param_4,LPCVOID param_5)

{
  char cVar1;
  bool bVar2;
  int extraout_ECX;
  float fVar3;
  int unaff_retaddr;
  int in_stack_00001428;
  HANDLE in_stack_00001434;
  HANDLE in_stack_00001438;
  void *in_stack_0000143c;
  void *in_stack_00001568;
  undefined8 uStack_14;
  double dStack_c;
  
  dStack_c = (double)CONCAT44(dStack_c._4_4_,0xffffffff);
  uStack_14 = (double)CONCAT44(&LAB_005bfedf,ExceptionList);
  ExceptionList = &uStack_14;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0xfffffffc);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0xfffffffc,param_1,false);
  if (!bVar2) {
    (**(code **)FDUMP_exref)();
  }
  bVar2 = INI_Reader::read_header((INI_Reader *)&stack0xfffffffc);
  if (bVar2) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0xfffffffc,"RearView");
      if (bVar2) {
        (**(code **)FDUMP_exref)();
      }
      else {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0xfffffffc,"RearViewCamera");
        if (bVar2) {
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0xfffffffc);
          if (bVar2) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0xfffffffc,"view_position");
              if (bVar2) {
                fVar3 = INI_Reader::get_value_float((INI_Reader *)&stack0xfffffffc,1);
                dStack_c = (double)fVar3;
                fVar3 = INI_Reader::get_value_float((INI_Reader *)&stack0xfffffffc,0);
                uStack_14 = (double)fVar3;
                fVar3 = INI_Reader::get_value_float((INI_Reader *)&stack0xfffffffc,2);
                *(float *)(extraout_ECX + 0x100) = (float)uStack_14;
                *(float *)(extraout_ECX + 0x104) = (float)dStack_c;
                *(float *)(extraout_ECX + 0x108) = fVar3;
              }
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0xfffffffc);
            } while (bVar2);
          }
        }
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&stack0xfffffffc);
    } while (bVar2);
  }
  uStack_14 = (double)CONCAT44(uStack_14._4_4_,&stack0x00001424);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001424,0,
             *(uint *)npos_exref);
  if (in_stack_00001434 != (HANDLE)0xffffffff) {
    if (in_stack_00001438 != (HANDLE)0x0) {
      if (in_stack_0000143c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000143c);
        in_stack_0000143c = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001438);
    }
    CloseHandle(in_stack_00001434);
  }
  if (in_stack_0000143c != (void *)0x0) {
    free(in_stack_0000143c);
  }
  if (in_stack_00001428 != 0) {
    cVar1 = *(char *)(in_stack_00001428 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001428 + -1) = cVar1 + -1;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xfffffffc,0,
             *(uint *)npos_exref);
  if (param_3 != (HANDLE)0xffffffff) {
    if (param_4 != (HANDLE)0x0) {
      if (param_5 != (LPCVOID)0x0) {
        UnmapViewOfFile(param_5);
        param_5 = (LPCVOID)0x0;
      }
      CloseHandle(param_4);
    }
    CloseHandle(param_3);
  }
  if (param_5 != (void *)0x0) {
    free(param_5);
  }
  if (unaff_retaddr != 0) {
    cVar1 = *(char *)(unaff_retaddr + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(unaff_retaddr + -1) = cVar1 + -1;
      ExceptionList = in_stack_00001568;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_00001568;
  return;
}

