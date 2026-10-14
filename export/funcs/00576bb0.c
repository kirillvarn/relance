
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00576bb0(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  void *in_stack_00001698;
  char *in_stack_000016a8;
  bool in_stack_000016ac;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_005c3b36;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005b7e90();
  local_8 = (undefined1 *)0x0;
  GetFileSysPath(&stack0x0000002c,in_stack_000016a8,(IFileSystem *)0x0);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000130);
  bVar3 = INI_Reader::open((INI_Reader *)&stack0x00000130,&stack0x0000002c,in_stack_000016ac);
  if (bVar3) {
    bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x00000130);
    pcVar8 = is_header_exref;
    if ((!bVar3) ||
       (bVar3 = INI_Reader::is_header((INI_Reader *)&stack0x00000130,"KeyMap=1.1"), !bVar3)) {
      (**(code **)FDUMP_exref)();
      pcVar8 = is_header_exref;
    }
    bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x00000130);
    if (bVar3) {
      do {
        cVar4 = (*pcVar8)();
        if (cVar4 == '\0') {
          cVar4 = (*pcVar8)();
          if (cVar4 != '\0') {
            local_8 = (undefined1 *)((int)local_8 + 1);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x00000010,(allocator<char> *)((int)&uStack_4 + 2));
            FUN_0046ba60();
            FUN_00578630();
            FUN_00576ac0();
            iVar2 = *(int *)(DAT_0067c228 + 4);
            bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000130);
            if (bVar3) {
              do {
                bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000130,"nickname");
                if (bVar3) {
                  pcVar5 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000130);
                  uVar7 = 0xffffffff;
                  pcVar9 = pcVar5;
                  do {
                    if (uVar7 == 0) break;
                    uVar7 = uVar7 - 1;
                    cVar4 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar4 != '\0');
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (iVar2 + 8),pcVar5,~uVar7 - 1);
                }
                else {
                  bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000130,"key");
                  if (bVar3) {
                    INI_Reader::get_value_string((INI_Reader *)&stack0x00000130,0);
                    iVar6 = FUN_00577ef0();
                    if (iVar6 != 0) {
                      FUN_005947a0();
                    }
                  }
                }
                bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000130);
              } while (bVar3);
            }
          }
        }
        else {
          if ((DAT_0067c250 & 1) == 0) {
            DAT_0067c250 = DAT_0067c250 | 1;
            FUN_005a6900();
            _DAT_0067c230 = 0;
            _DAT_0067c234 = 0;
            _DAT_0067c238 = 0;
            _DAT_0067c23c = 1;
            FUN_005b7e6c();
          }
          FUN_005785d0();
          cVar4 = FUN_005766e0();
          if (cVar4 == '\0') {
            piVar1 = *(int **)(DAT_0067c258 + 4);
            *(int *)piVar1[1] = *piVar1;
            *(int *)(*piVar1 + 4) = piVar1[1];
            FUN_00578b20();
            FUN_005b7e1d();
            DAT_0067c25c = DAT_0067c25c + -1;
          }
        }
        bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x00000130);
        pcVar8 = is_header_exref;
      } while (bVar3);
    }
  }
  FileMap::close((FileMap *)&stack0x00001558);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001558,
             true);
  FileMap::close((FileMap *)&stack0x00000130);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000130,
             true);
  ExceptionList = in_stack_00001698;
  return (int)local_8;
}

