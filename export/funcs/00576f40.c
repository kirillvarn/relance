
/* WARNING: Removing unreachable block (ram,0x00577041) */

void * FUN_00576f40(void)

{
  uchar *puVar1;
  bool bVar2;
  char cVar3;
  char *_Str1;
  int iVar4;
  int *piVar5;
  uint uVar6;
  HANDLE in_stack_0000011c;
  HANDLE in_stack_00000120;
  LPCVOID in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  void *in_stack_00001674;
  char *in_stack_00001684;
  void *local_c;
  int *local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0xffffffff;
  local_8 = (int *)&LAB_005c3b86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_c = (void *)0x0;
  GetFileSysPath(&stack0x00000008,in_stack_00001684,(IFileSystem *)0x0);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x0000010c);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x0000010c,&stack0x00000008,false);
  if (bVar2) {
    bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000010c);
    if ((!bVar2) ||
       (bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000010c,"KeyMap=1.1"), !bVar2)) {
      FileMap::~FileMap((FileMap *)&stack0x00001534);
      FileMap::close((FileMap *)&stack0x0000010c);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000010c
                 ,true);
      ExceptionList = in_stack_00001674;
      return (void *)0;
    }
    piVar5 = (int *)*DAT_0067c258;
    if (piVar5 != DAT_0067c258) {
      do {
        puVar1 = (uchar *)piVar5[7];
        IDPMsgHandler::OnReceive((IDPMsgHandler *)(piVar5 + 6),puVar1,piVar5[8]);
        piVar5[8] = (int)puVar1;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != DAT_0067c258);
    }
    bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000010c);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000010c,"KeyCmd");
        if (bVar2) {
          piVar5 = (int *)0x0;
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000010c);
          if (bVar2) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000010c,"nickname");
              if (bVar2) {
                _Str1 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000010c);
                uVar6 = 0;
                do {
                  iVar4 = stricmp(_Str1,(&PTR_s_USER_NONE_00614dd8)[uVar6]);
                  if (iVar4 == 0) goto LAB_00577101;
                  uVar6 = uVar6 + 1;
                } while (uVar6 < 0xcc);
                uVar6 = 0;
LAB_00577101:
                local_8 = (int *)*DAT_0067c258;
                if (local_8 != DAT_0067c258) {
                  do {
                    if (uVar6 == local_8[2]) {
                      piVar5 = local_8 + 2;
                      goto LAB_0057717e;
                    }
                    FUN_0053ab20();
                  } while (local_8 != DAT_0067c258);
                }
                piVar5 = (int *)0x0;
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000010c,"key");
                if (((bVar2) && (piVar5 != (int *)0x0)) && (cVar3 = FUN_005765b0(), cVar3 != '\0'))
                {
                  FUN_00578690();
                }
              }
LAB_0057717e:
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000010c);
            } while (bVar2);
          }
          local_c = (void *)((int)local_c + 1);
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000010c);
      } while (bVar2);
    }
  }
  local_4 = &stack0x00001534;
  FileMap::close((FileMap *)&stack0x00001534);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001534,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000010c,0,
             *(uint *)npos_exref);
  if (in_stack_0000011c != (HANDLE)0xffffffff) {
    if (in_stack_00000120 != (HANDLE)0x0) {
      if (in_stack_00000124 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000124);
        in_stack_00000124 = (LPCVOID)0x0;
        in_stack_00000128 = 0;
      }
      CloseHandle(in_stack_00000120);
      in_stack_00000120 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_0000011c);
    in_stack_0000011c = (HANDLE)0xffffffff;
  }
  if (in_stack_00000124 != (void *)0x0) {
    free(in_stack_00000124);
    in_stack_00000124 = (void *)0x0;
    in_stack_00000128 = 0;
  }
  in_stack_0000012c = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000010c,
             true);
  ExceptionList = in_stack_00001674;
  return local_c;
}

