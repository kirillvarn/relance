
void FUN_00476c40(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  int in_stack_00000030;
  HANDLE in_stack_0000003c;
  HANDLE in_stack_00000040;
  LPCVOID in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  HANDLE in_stack_00001464;
  HANDLE in_stack_00001468;
  void *in_stack_0000146c;
  void *in_stack_00001698;
  undefined4 uStack_c;
  undefined1 *local_8;
  float local_4;
  
  local_4 = -NAN;
  local_8 = &LAB_005bbd9f;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  if (DAT_0066dc59 == '\0') {
    DAT_0066dc59 = '\x01';
    GetFileSysPath(&stack0x00001594,"Universe\\MissionCreatedSolars.ini",(IFileSystem *)0x0);
    INI_Reader::INI_Reader((INI_Reader *)&stack0x0000002c);
    bVar2 = INI_Reader::open((INI_Reader *)&stack0x0000002c,&stack0x00001594,false);
    if ((bVar2) && (bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000002c), bVar2)) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000002c,"MissionCreatedSolar");
        if (bVar2) {
          bVar2 = false;
          uStack_c = (void *)((uint)uStack_c & 0xffff);
          bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
          if (bVar3) {
            do {
              bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"base");
              if (bVar3) {
                pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000002c);
                CreateID(pcVar4);
                uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
LAB_00476dc9:
                if ((uStack_c._2_1_ != '\0') && (bVar2)) {
                  FUN_00477510();
                  bVar2 = false;
                  uStack_c = (void *)((uint)uStack_c & 0xffff);
                }
              }
              else {
                bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"ids_info");
                if (bVar3) {
                  INI_Reader::get_value_float((INI_Reader *)&stack0x0000002c,0);
                  local_8 = (undefined1 *)ftol();
                  uStack_c._0_3_ = CONCAT12(1,(undefined2)uStack_c);
                }
                else {
                  bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"pos");
                  if (bVar3) {
                    local_4 = INI_Reader::get_value_float((INI_Reader *)&stack0x0000002c,0);
                    INI_Reader::get_value_float((INI_Reader *)&stack0x0000002c,1);
                    INI_Reader::get_value_float((INI_Reader *)&stack0x0000002c,2);
                    bVar2 = true;
                  }
                }
                if (uStack_c._3_1_ != '\0') goto LAB_00476dc9;
              }
              bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
            } while (bVar3);
          }
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000002c);
      } while (bVar2);
    }
    local_8 = &stack0x00001454;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001454,0
               ,*(uint *)npos_exref);
    if (in_stack_00001464 != (HANDLE)0xffffffff) {
      if (in_stack_00001468 != (HANDLE)0x0) {
        if (in_stack_0000146c != (LPCVOID)0x0) {
          UnmapViewOfFile(in_stack_0000146c);
          in_stack_0000146c = (LPCVOID)0x0;
        }
        CloseHandle(in_stack_00001468);
      }
      CloseHandle(in_stack_00001464);
    }
    if (in_stack_0000146c != (void *)0x0) {
      free(in_stack_0000146c);
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001454,
               true);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000002c,0
               ,*(uint *)npos_exref);
    if (in_stack_0000003c != (HANDLE)0xffffffff) {
      if (in_stack_00000040 != (HANDLE)0x0) {
        if (in_stack_00000044 != (LPCVOID)0x0) {
          UnmapViewOfFile(in_stack_00000044);
          in_stack_00000044 = (LPCVOID)0x0;
          in_stack_00000048 = 0;
        }
        CloseHandle(in_stack_00000040);
        in_stack_00000040 = (HANDLE)0x0;
      }
      CloseHandle(in_stack_0000003c);
      in_stack_0000003c = (HANDLE)0xffffffff;
    }
    if (in_stack_00000044 != (void *)0x0) {
      free(in_stack_00000044);
      in_stack_00000044 = (void *)0x0;
      in_stack_00000048 = 0;
    }
    in_stack_0000004c = 0;
    if (in_stack_00000030 != 0) {
      cVar1 = *(char *)(in_stack_00000030 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(in_stack_00000030 + -1) = cVar1 + -1;
        ExceptionList = in_stack_00001698;
        return;
      }
      FUN_005b7e1d();
    }
  }
  ExceptionList = in_stack_00001698;
  return;
}

