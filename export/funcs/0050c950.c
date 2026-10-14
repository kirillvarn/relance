
void * FUN_0050c950(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *extraout_ECX;
  float fVar6;
  float fVar7;
  int in_stack_00000024;
  HANDLE in_stack_00000030;
  HANDLE in_stack_00000034;
  LPCVOID in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  int in_stack_0000144c;
  HANDLE in_stack_00001458;
  HANDLE in_stack_0000145c;
  void *in_stack_00001460;
  void *in_stack_00001588;
  char *in_stack_00001598;
  char *in_stack_0000159c;
  void *local_c;
  double local_8;
  
  local_8 = -NAN;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_c = (void *)0x2;
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000020);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x00000020,in_stack_00001598,false);
  if (bVar2) {
LAB_0050c9b8:
    do {
      do {
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000020);
        if (!bVar2) goto LAB_0050cb8e;
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000020,"star_glow");
      } while (!bVar2);
      do {
        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000020);
        if (!bVar2) goto LAB_0050c9b8;
        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000020,"nickname");
      } while (!bVar2);
      pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000020);
      iVar4 = stricmp(in_stack_0000159c,pcVar3);
    } while (iVar4 != 0);
    local_c = (void *)0x0;
    bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000020);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000020,"shape");
        if (bVar2) {
          pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000020);
          if (pcVar3 == (char *)0x0) {
            *extraout_ECX = 0;
            *(undefined1 *)(extraout_ECX + 1) = 0;
          }
          else {
            uVar5 = FUN_00417c50();
            *extraout_ECX = uVar5;
          }
        }
        else {
          bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000020,"scale");
          if (bVar2) {
            fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000020,0);
            extraout_ECX[9] = fVar6;
          }
          else {
            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000020,"inner_color");
            if (bVar2) {
              fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000020,1);
              fVar7 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000020,0);
              local_8 = (double)fVar7;
              fVar7 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000020,2);
              extraout_ECX[10] = (float)local_8;
              extraout_ECX[0xb] = fVar6;
              extraout_ECX[0xc] = fVar7;
            }
            else {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000020,"outer_color");
              if (bVar2) {
                fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000020,1);
                local_8 = (double)fVar6;
                fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000020,0);
                fVar7 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000020,2);
                extraout_ECX[0xd] = fVar6;
                extraout_ECX[0xe] = (float)local_8;
                extraout_ECX[0xf] = fVar7;
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000020,"alpha");
                if (bVar2) {
                  fVar6 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000020,0);
                  extraout_ECX[0x10] = fVar6;
                }
              }
            }
          }
        }
        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000020);
      } while (bVar2);
    }
  }
  else {
    local_c = (void *)0x1;
  }
LAB_0050cb8e:
  local_8 = (double)CONCAT44(local_8._4_4_,&stack0x00001448);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001448,0,
             *(uint *)npos_exref);
  if (in_stack_00001458 != (HANDLE)0xffffffff) {
    if (in_stack_0000145c != (HANDLE)0x0) {
      if (in_stack_00001460 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001460);
        in_stack_00001460 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_0000145c);
    }
    CloseHandle(in_stack_00001458);
  }
  if (in_stack_00001460 != (void *)0x0) {
    free(in_stack_00001460);
  }
  if (in_stack_0000144c != 0) {
    cVar1 = *(char *)(in_stack_0000144c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_0000144c + -1) = cVar1 + -1;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000020,0,
             *(uint *)npos_exref);
  if (in_stack_00000030 != (HANDLE)0xffffffff) {
    if (in_stack_00000034 != (HANDLE)0x0) {
      if (in_stack_00000038 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000038);
        in_stack_00000038 = (LPCVOID)0x0;
        in_stack_0000003c = 0;
      }
      CloseHandle(in_stack_00000034);
      in_stack_00000034 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_00000030);
    in_stack_00000030 = (HANDLE)0xffffffff;
  }
  if (in_stack_00000038 != (void *)0x0) {
    free(in_stack_00000038);
    in_stack_00000038 = (void *)0x0;
    in_stack_0000003c = 0;
  }
  in_stack_00000040 = 0;
  if (in_stack_00000024 != 0) {
    cVar1 = *(char *)(in_stack_00000024 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00000024 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00001588;
  return local_c;
}

