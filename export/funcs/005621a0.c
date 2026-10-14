
void FUN_005621a0(undefined4 param_1,undefined4 param_2,HANDLE param_3,HANDLE param_4,
                 LPCVOID param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *extraout_ECX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char cVar11;
  HANDLE in_stack_00001434;
  HANDLE in_stack_00001438;
  void *in_stack_0000143c;
  void *in_stack_00001564;
  uint *in_stack_00001574;
  undefined4 uStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  int iVar7;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_005c1d4f;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  uVar4 = 0;
  do {
    piVar1 = (int *)((int)&DAT_006143b8 + uVar4);
    puVar8 = (undefined4 *)((int)&DAT_006143c0 + uVar4);
    uVar4 = uVar4 + 0x10;
    extraout_ECX[*piVar1 + 10] = *puVar8;
  } while (uVar4 < 0x470);
  uVar5 = FUN_00417c50();
  extraout_ECX[0x50] = uVar5;
  uVar5 = FUN_00417c50();
  extraout_ECX[0x92] = uVar5;
  *(undefined1 *)(extraout_ECX + 0x21e) = 0;
  *(undefined1 *)((int)extraout_ECX + 0x879) = 0;
  extraout_ECX[4] = 0xffffffff;
  extraout_ECX[5] = 0xffffffff;
  extraout_ECX[6] = 0;
  extraout_ECX[2] = 0x400;
  extraout_ECX[3] = 0x300;
  extraout_ECX[7] = 1;
  extraout_ECX[8] = 2;
  *(undefined1 *)(extraout_ECX + 9) = 1;
  extraout_ECX[1] = 0x3c;
  *extraout_ECX = 0xffffffff;
  *(undefined1 *)((int)extraout_ECX + 0x25) = 1;
  local_8 = (undefined1 *)0x0;
  INI_Reader::INI_Reader((INI_Reader *)&local_4);
  bVar2 = INI_Reader::open((INI_Reader *)&local_4,(char *)(extraout_ECX + 0x51),false);
  if (bVar2) {
    bVar2 = INI_Reader::read_header((INI_Reader *)&local_4);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&local_4,"Freelancer");
        if (bVar2) {
          bVar2 = INI_Reader::read_value((INI_Reader *)&local_4);
          if (bVar2) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&local_4,"data path");
              if (bVar2) {
                pcVar6 = INI_Reader::get_value_string((INI_Reader *)&local_4);
                if (pcVar6 == (char *)0x0) {
                  extraout_ECX[0x92] = 0;
                  *(undefined1 *)(extraout_ECX + 0x93) = 0;
                }
                else {
                  uVar5 = FUN_00417c50();
                  extraout_ECX[0x92] = uVar5;
                }
              }
              bVar2 = INI_Reader::read_value((INI_Reader *)&local_4);
            } while (bVar2);
          }
        }
        else {
          bVar2 = INI_Reader::is_header((INI_Reader *)&local_4,"Startup");
          if (bVar2) {
            bVar2 = INI_Reader::read_value((INI_Reader *)&local_4);
            if (bVar2) {
              puVar8 = extraout_ECX + (int)local_8 * 0x42 + 0xd4;
              do {
                bVar2 = INI_Reader::is_value((INI_Reader *)&local_4,"movie_file");
                puVar9 = puVar8;
                if ((bVar2) && ((int)local_8 < 3)) {
                  pcVar6 = INI_Reader::get_value_string((INI_Reader *)&local_4);
                  local_8 = (undefined1 *)((int)local_8 + 1);
                  puVar9 = puVar8 + 0x42;
                  if (pcVar6 == (char *)0x0) {
                    *puVar8 = 0;
                    *(undefined1 *)(puVar8 + 1) = 0;
                  }
                  else {
                    uVar5 = FUN_00417c50();
                    *puVar8 = uVar5;
                  }
                }
                bVar2 = INI_Reader::read_value((INI_Reader *)&local_4);
                puVar8 = puVar9;
              } while (bVar2);
            }
          }
          else {
            bVar2 = INI_Reader::is_header((INI_Reader *)&local_4,"Data");
            if ((bVar2) && (bVar2 = INI_Reader::read_value((INI_Reader *)&local_4), bVar2)) {
              do {
                bVar2 = INI_Reader::is_value((INI_Reader *)&local_4,"gate_tunnels");
                if (bVar2) {
                  pcVar6 = INI_Reader::get_value_string((INI_Reader *)&local_4);
                  if (pcVar6 == (char *)0x0) {
                    extraout_ECX[0x19a] = 0;
                    *(undefined1 *)(extraout_ECX + 0x19b) = 0;
                  }
                  else {
                    uVar5 = FUN_00417c50();
                    extraout_ECX[0x19a] = uVar5;
                  }
                }
                else {
                  bVar2 = INI_Reader::is_value((INI_Reader *)&local_4,"jump_effect");
                  if (bVar2) {
                    pcVar6 = INI_Reader::get_value_string((INI_Reader *)&local_4);
                    if (pcVar6 == (char *)0x0) {
                      extraout_ECX[0x1dc] = 0;
                      *(undefined1 *)(extraout_ECX + 0x1dd) = 0;
                    }
                    else {
                      uVar5 = FUN_00417c50();
                      extraout_ECX[0x1dc] = uVar5;
                    }
                  }
                }
                bVar2 = INI_Reader::read_value((INI_Reader *)&local_4);
              } while (bVar2);
            }
          }
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&local_4);
      } while (bVar2);
    }
  }
  else {
    (**(code **)FDUMP_exref)();
  }
  uVar4 = 0;
  if (*in_stack_00001574 != 0) {
    puVar10 = in_stack_00001574 + 1;
    cVar11 = uStack_c._3_1_;
    cVar3 = uStack_c._3_1_;
    if (*in_stack_00001574 == 0) goto LAB_0056250c;
    do {
      cVar11 = *(char *)*puVar10;
      if ((cVar11 == '+') || (cVar11 == '-')) {
        cVar11 = cVar11 != '-';
        iVar7 = toupper((int)((char *)*puVar10)[1]);
        cVar3 = (char)iVar7;
LAB_0056250c:
        if (cVar3 == 'Q') {
          *(undefined1 *)((int)extraout_ECX + 0x879) = 1;
        }
        else if (cVar3 == 'X') {
          DAT_0067ecbc = cVar11;
        }
      }
      uVar4 = uVar4 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar4 < *in_stack_00001574);
  }
  local_8 = &stack0x00001424;
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
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001424,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_4,0,
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
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_4,true);
  ExceptionList = in_stack_00001564;
  return;
}

