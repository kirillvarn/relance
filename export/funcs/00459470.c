
void FUN_00459470(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  byte bVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  int extraout_ECX;
  undefined1 **ppuVar8;
  undefined1 *unaff_retaddr;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_0000002c;
  HANDLE in_stack_00000150;
  HANDLE in_stack_00000154;
  LPCVOID in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  HANDLE in_stack_00001578;
  HANDLE in_stack_0000157c;
  void *in_stack_00001580;
  void *in_stack_000016a8;
  undefined1 *local_c;
  undefined1 *local_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_005ba1df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_8 = (undefined1 *)extraout_ECX;
  GetFileSysPath(&stack0x0000003c,"interface\\KnowledgeMap.ini",(IFileSystem *)0x0);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000140);
  bVar3 = INI_Reader::open((INI_Reader *)&stack0x00000140,&stack0x0000003c,false);
  if ((bVar3) && (bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x00000140), bVar3)) {
    do {
      bVar3 = INI_Reader::is_header((INI_Reader *)&stack0x00000140,"KnowledgeMapTable");
      if ((bVar3) && (bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000140), bVar3)) {
        do {
          bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x00000140,"map");
          if (bVar3) {
            INI_Reader::get_value_float((INI_Reader *)&stack0x00000140,0);
            local_4 = ftol();
            pcVar5 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000140,1);
            uVar6 = CreateID(pcVar5);
            INI_Reader::get_value_float((INI_Reader *)&stack0x00000140,2);
            bVar4 = ftol();
            in_stack_0000002c = CONCAT31(in_stack_0000002c._1_3_,bVar4);
            if ((bVar4 & 0x40) != 0) {
              pcVar5 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000140,1);
              param_1 = 0;
              param_2 = 0;
              if (pcVar5 == (char *)0x0) {
                param_1 = 0;
                param_2 = 0;
              }
              else {
                param_1 = FUN_00417c50();
              }
              uVar6 = Reputation::get_id((TString<16> *)&param_1);
            }
            puVar1 = local_8;
            FUN_0041bd10();
            puVar1 = *(undefined1 **)((int)puVar1 + 4);
            if ((unaff_retaddr == puVar1) ||
               (ppuVar8 = (undefined1 **)register0x00000010,
               local_4 < *(uint *)(unaff_retaddr + 0xc))) {
              local_c = puVar1;
              ppuVar8 = &local_c;
            }
            puVar2 = *ppuVar8;
            if (puVar2 == puVar1) {
              in_stack_00000018 = local_4;
              in_stack_00000020 = in_stack_0000002c;
              in_stack_00000024 = 0;
              in_stack_0000001c = uVar6;
              FUN_00459b60();
            }
            else {
              puVar7 = operator_new(0xc);
              *puVar7 = uVar6;
              *(byte *)(puVar7 + 1) = bVar4;
              puVar7[2] = *(uint *)(puVar2 + 0x18);
              *(uint **)(puVar2 + 0x18) = puVar7;
            }
          }
          bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x00000140);
        } while (bVar3);
      }
      bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x00000140);
    } while (bVar3);
  }
  local_c = &stack0x00001568;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001568,0,
             *(uint *)npos_exref);
  if (in_stack_00001578 != (HANDLE)0xffffffff) {
    if (in_stack_0000157c != (HANDLE)0x0) {
      if (in_stack_00001580 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001580);
        in_stack_00001580 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_0000157c);
    }
    CloseHandle(in_stack_00001578);
  }
  if (in_stack_00001580 != (void *)0x0) {
    free(in_stack_00001580);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001568,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000140,0,
             *(uint *)npos_exref);
  if (in_stack_00000150 != (HANDLE)0xffffffff) {
    if (in_stack_00000154 != (HANDLE)0x0) {
      if (in_stack_00000158 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000158);
        in_stack_00000158 = (LPCVOID)0x0;
        in_stack_0000015c = 0;
      }
      CloseHandle(in_stack_00000154);
      in_stack_00000154 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_00000150);
    in_stack_00000150 = (HANDLE)0xffffffff;
  }
  if (in_stack_00000158 != (void *)0x0) {
    free(in_stack_00000158);
    in_stack_00000158 = (void *)0x0;
    in_stack_0000015c = 0;
  }
  in_stack_00000160 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000140,
             true);
  ExceptionList = in_stack_000016a8;
  return;
}

