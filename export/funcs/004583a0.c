
void FUN_004583a0(void)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  code *pcVar6;
  HANDLE in_stack_00000150;
  HANDLE in_stack_00000154;
  LPCVOID in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  int in_stack_0000156c;
  void *in_stack_000016a8;
  undefined4 uStack_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = (undefined4 *)&LAB_005ba15f;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  GetFileSysPath(&stack0x0000003c,"interface\\InfocardMap.ini",(IFileSystem *)0x0);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000140);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x00000140,&stack0x0000003c,false);
  if ((bVar2) &&
     (bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000140), pcVar6 = read_value_exref,
     bVar2)) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x00000140,"InfocardMapTable");
      if ((bVar2) && (cVar3 = (*pcVar6)(), cVar3 != '\0')) {
        do {
          bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x00000140,"map");
          if (bVar2) {
            INI_Reader::get_value_float((INI_Reader *)&stack0x00000140,0);
            uVar4 = ftol();
            INI_Reader::get_value_float((INI_Reader *)&stack0x00000140,1);
            ftol();
            bVar2 = INI_Reader::is_value_empty((INI_Reader *)&stack0x00000140,2);
            if (!bVar2) {
              INI_Reader::get_value_float((INI_Reader *)&stack0x00000140,2);
              ftol();
            }
            bVar2 = INI_Reader::is_value_empty((INI_Reader *)&stack0x00000140,3);
            if (!bVar2) {
              INI_Reader::get_value_float((INI_Reader *)&stack0x00000140,3);
              ftol();
            }
            bVar2 = INI_Reader::is_value_empty((INI_Reader *)&stack0x00000140,4);
            if (!bVar2) {
              INI_Reader::get_value_float((INI_Reader *)&stack0x00000140,4);
              ftol();
            }
            bVar2 = true;
            puVar5 = *(undefined4 **)(extraout_ECX + 4);
            puVar1 = (undefined4 *)(*(undefined4 **)(extraout_ECX + 4))[1];
            while (puVar1 != *(undefined4 **)(extraout_ECX + 8)) {
              bVar2 = uVar4 < (uint)puVar1[3];
              puVar5 = puVar1;
              if (bVar2) {
                puVar1 = (undefined4 *)*puVar1;
              }
              else {
                puVar1 = (undefined4 *)puVar1[2];
              }
            }
            if (*(char *)(extraout_ECX + 0xc) == '\0') {
              local_8 = puVar5;
              if (bVar2) {
                puVar5 = (undefined4 *)FUN_0053e430();
                if (local_8 != (undefined4 *)*puVar5) {
                  FUN_005a7c20();
                  goto LAB_004585d6;
                }
                uStack_c._0_3_ = CONCAT12(1,(undefined2)uStack_c);
                FUN_00458d00();
              }
              else {
LAB_004585d6:
                if ((uint)local_8[3] < uVar4) {
                  uStack_c._0_3_ = CONCAT12(1,(undefined2)uStack_c);
                  FUN_00458d00();
                }
                else {
                  uStack_c = (void *)((uint)uStack_c & 0xffffff);
                }
              }
              FUN_0046d660();
            }
            else {
              puVar5 = (undefined4 *)FUN_00458d00();
              local_4 = *puVar5;
            }
          }
          pcVar6 = read_value_exref;
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x00000140);
        } while (bVar2);
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x00000140);
    } while (bVar2);
  }
  FileMap::close((FileMap *)&stack0x00001568);
  if (in_stack_0000156c != 0) {
    cVar3 = *(char *)(in_stack_0000156c + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_0000156c + -1) = cVar3 + -1;
    }
  }
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

