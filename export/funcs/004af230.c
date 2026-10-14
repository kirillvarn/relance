
/* WARNING: Removing unreachable block (ram,0x004af294) */
/* WARNING: Removing unreachable block (ram,0x004af2a5) */
/* WARNING: Removing unreachable block (ram,0x004af2a7) */
/* WARNING: Removing unreachable block (ram,0x004af267) */
/* WARNING: Removing unreachable block (ram,0x004af278) */
/* WARNING: Removing unreachable block (ram,0x004af27a) */
/* WARNING: Removing unreachable block (ram,0x004af2c1) */
/* WARNING: Removing unreachable block (ram,0x004af2d2) */
/* WARNING: Removing unreachable block (ram,0x004af2d4) */

void FUN_004af230(void)

{
  bool bVar1;
  int iVar2;
  char *_Str;
  int extraout_ECX;
  int iVar3;
  HANDLE in_stack_00000034;
  HANDLE in_stack_00000038;
  LPCVOID in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  void *in_stack_0000158c;
  char *in_stack_0000159c;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_005bceef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  *(undefined4 *)(extraout_ECX + 0x804) = *(undefined4 *)(extraout_ECX + 0x800);
  *(undefined4 *)(extraout_ECX + 0x814) = *(undefined4 *)(extraout_ECX + 0x810);
  *(undefined4 *)(extraout_ECX + 0x824) = *(undefined4 *)(extraout_ECX + 0x820);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000024);
  bVar1 = INI_Reader::open((INI_Reader *)&stack0x00000024,in_stack_0000159c,false);
  if (bVar1) {
    bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x00000024);
    if (bVar1) {
      do {
        bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x00000024,"Group");
        if (bVar1) {
          iVar3 = -1;
          bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000024);
          if (bVar1) {
            do {
              bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x00000024,"group_num");
              if (bVar1) {
                iVar3 = INI_Reader::get_value_int((INI_Reader *)&stack0x00000024,0);
              }
              else {
                bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x00000024,"name");
                if (bVar1) {
                  iVar2 = INI_Reader::get_value_int((INI_Reader *)&stack0x00000024,0);
                  *(int *)(extraout_ECX + 0x82c + iVar3 * 4) = iVar2;
                }
              }
              bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000024);
            } while (bVar1);
            if (iVar3 == 1) {
              local_4 = 0xffffffff;
              local_8 = (undefined1 *)0x0;
              FUN_005126f0();
            }
          }
        }
        bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x00000024,"Key");
        if (bVar1) {
          bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000024);
          if (bVar1) {
            do {
              bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x00000024,"id");
              if (bVar1) {
                _Str = INI_Reader::get_value_string((INI_Reader *)&stack0x00000024);
                iVar3 = atoi(_Str);
                if (iVar3 != -1) {
                  FUN_00577ef0();
                }
              }
              else {
                bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x00000024,"name");
                if (bVar1) {
                  INI_Reader::get_value_int((INI_Reader *)&stack0x00000024,0);
                }
              }
              bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000024);
            } while (bVar1);
          }
          FUN_004af5c0();
        }
        bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x00000024);
      } while (bVar1);
    }
    INI_Reader::close((INI_Reader *)&stack0x00000024);
  }
  else {
    (**(code **)FDUMP_exref)();
  }
  local_c = &stack0x0000144c;
  FileMap::close((FileMap *)&stack0x0000144c);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000144c,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000024,0,
             *(uint *)npos_exref);
  if (in_stack_00000034 != (HANDLE)0xffffffff) {
    if (in_stack_00000038 != (HANDLE)0x0) {
      if (in_stack_0000003c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000003c);
        in_stack_0000003c = (LPCVOID)0x0;
        in_stack_00000040 = 0;
      }
      CloseHandle(in_stack_00000038);
      in_stack_00000038 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_00000034);
    in_stack_00000034 = (HANDLE)0xffffffff;
  }
  if (in_stack_0000003c != (void *)0x0) {
    free(in_stack_0000003c);
    in_stack_0000003c = (void *)0x0;
    in_stack_00000040 = 0;
  }
  in_stack_00000044 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000024,
             true);
  ExceptionList = in_stack_0000158c;
  return;
}

