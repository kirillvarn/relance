
void FUN_00549830(undefined4 param_1,HANDLE param_2,HANDLE param_3,LPCVOID param_4)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *extraout_ECX;
  int *piVar4;
  undefined1 *puVar5;
  int in_stack_00001424;
  HANDLE in_stack_00001430;
  HANDLE in_stack_00001434;
  void *in_stack_00001438;
  void *in_stack_00001560;
  undefined1 *local_c;
  undefined1 *local_8;
  int iStack_4;
  
  iStack_4 = -1;
  local_8 = &LAB_005c129f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_c = extraout_ECX;
  pcVar3 = GetFullFilename("cameras.ini");
  INI_Reader::INI_Reader((INI_Reader *)&local_8);
  bVar1 = INI_Reader::open((INI_Reader *)&local_8,pcVar3,false);
  if ((bVar1) &&
     (bVar1 = INI_Reader::read_header((INI_Reader *)&local_8), puVar5 = extraout_ECX, bVar1)) {
    do {
      bVar1 = INI_Reader::is_header((INI_Reader *)&local_8,"WinCamera");
      if (bVar1) {
        piVar4 = &DAT_0067dbf8;
LAB_00549938:
        bVar1 = INI_Reader::read_value((INI_Reader *)&local_8);
        if (bVar1) {
          do {
            INI_Reader::get_name_ptr((INI_Reader *)&local_8);
            INI_Reader::get_value_string((INI_Reader *)&local_8);
            cVar2 = (**(code **)(*piVar4 + 0x4c))();
            if (cVar2 == '\0') {
              INI_Reader::get_header_ptr((INI_Reader *)&local_8);
              (**(code **)FDUMP_exref)();
            }
            bVar1 = INI_Reader::read_value((INI_Reader *)&local_8);
            puVar5 = local_c;
          } while (bVar1);
        }
      }
      else {
        bVar1 = INI_Reader::is_header((INI_Reader *)&local_8,"CockpitCamera");
        if (bVar1) {
          piVar4 = (int *)(puVar5 + 0xc);
LAB_00549930:
          if (piVar4 != (int *)0x0) goto LAB_00549938;
        }
        else {
          bVar1 = INI_Reader::is_header((INI_Reader *)&local_8,"ThirdPersonCamera");
          if (bVar1) {
            piVar4 = (int *)(puVar5 + 0x1b0);
            goto LAB_00549930;
          }
          bVar1 = INI_Reader::is_header((INI_Reader *)&local_8,"TurretCamera");
          if (bVar1) {
            piVar4 = (int *)(puVar5 + 0x3c8);
            goto LAB_00549930;
          }
          bVar1 = INI_Reader::is_header((INI_Reader *)&local_8,"RearViewCamera");
          if (bVar1) {
            piVar4 = (int *)(puVar5 + 0x500);
            goto LAB_00549930;
          }
          bVar1 = INI_Reader::is_header((INI_Reader *)&local_8,"DeathCamera");
          if (bVar1) {
            piVar4 = (int *)(puVar5 + 0x60c);
            goto LAB_00549930;
          }
          INI_Reader::get_header_ptr((INI_Reader *)&local_8);
          (**(code **)FDUMP_exref)();
        }
      }
      bVar1 = INI_Reader::read_header((INI_Reader *)&local_8);
    } while (bVar1);
  }
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
    cVar2 = *(char *)(in_stack_00001424 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001424 + -1) = cVar2 + -1;
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
  if (iStack_4 != 0) {
    cVar2 = *(char *)(iStack_4 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(iStack_4 + -1) = cVar2 + -1;
      ExceptionList = in_stack_00001560;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_00001560;
  return;
}

