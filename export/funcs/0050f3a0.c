
undefined4 FUN_0050f3a0(void)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  int extraout_ECX;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  code *pcVar11;
  uint *puVar12;
  float fVar13;
  HANDLE in_stack_00000010;
  HANDLE in_stack_00000014;
  LPCVOID in_stack_00000018;
  HANDLE in_stack_00001438;
  HANDLE in_stack_0000143c;
  void *in_stack_00001440;
  void *in_stack_00001568;
  char *in_stack_00001578;
  char *in_stack_0000157c;
  float *local_c;
  uint *local_8;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0xffffffff;
  local_8 = (uint *)&DAT_005bfd4f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_8 = (uint *)0x2;
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000000);
  bVar1 = INI_Reader::open((INI_Reader *)&stack0x00000000,in_stack_00001578,false);
  if (bVar1) {
LAB_0050f408:
    do {
      do {
        bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x00000000);
        if (!bVar1) goto LAB_0050f6c1;
        bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x00000000,"lens_flare");
      } while (!bVar1);
      do {
        bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000000);
        if (!bVar1) goto LAB_0050f408;
        bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x00000000,"nickname");
      } while (!bVar1);
      pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000000);
      iVar4 = stricmp(in_stack_0000157c,pcVar3);
    } while (iVar4 != 0);
    bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000000);
    pcVar11 = is_value_exref;
    if (bVar1) {
      do {
        cVar2 = (*pcVar11)();
        if (cVar2 == '\0') {
          cVar2 = (*pcVar11)();
          if (cVar2 == '\0') {
            cVar2 = (*pcVar11)();
            if (cVar2 == '\0') {
              cVar2 = (*pcVar11)();
              if (cVar2 != '\0') {
                pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000000);
                if (pcVar3 == (char *)0x0) {
                  *(undefined4 *)(extraout_ECX + 0x10) = 0;
                  *(undefined1 *)(extraout_ECX + 0x14) = 0;
                }
                else {
                  uVar6 = 0xffffffff;
                  pcVar10 = pcVar3;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar2 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar2 != '\0');
                  uVar6 = ~uVar6 - 1;
                  if (0x1f < uVar6) {
                    uVar6 = 0x1f;
                  }
                  pcVar10 = (char *)(extraout_ECX + 0x14);
                  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
                    pcVar3 = pcVar3 + 4;
                    pcVar10 = pcVar10 + 4;
                  }
                  for (uVar7 = uVar6 & 3; pcVar11 = is_value_exref, uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar10 = *pcVar3;
                    pcVar3 = pcVar3 + 1;
                    pcVar10 = pcVar10 + 1;
                  }
                  ((char *)(extraout_ECX + 0x14))[uVar6] = '\0';
                  *(uint *)(extraout_ECX + 0x10) = uVar6;
                }
              }
            }
            else {
              fVar13 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000000,0);
              *(float *)(extraout_ECX + 0x3c) = fVar13;
            }
          }
          else {
            fVar13 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000000,0);
            *(float *)(extraout_ECX + 0x38) = fVar13;
          }
        }
        else {
          local_c = operator_new(0x18);
          fVar13 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000000,0);
          *local_c = fVar13;
          fVar13 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000000,1);
          local_c[1] = fVar13;
          fVar13 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000000,2);
          local_c[2] = fVar13;
          fVar13 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000000,3);
          local_c[3] = fVar13;
          fVar13 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000000,4);
          local_c[4] = fVar13;
          fVar13 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000000,5);
          local_c[5] = fVar13;
          FUN_00537260();
        }
        bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000000);
      } while (bVar1);
    }
    puVar8 = *(uint **)(extraout_ECX + 8);
    puVar9 = *(uint **)(extraout_ECX + 4);
    iVar4 = (int)puVar8 - (int)puVar9 >> 2;
    local_8 = puVar8;
    if (iVar4 < 0x11) {
      FUN_00512b00();
    }
    else {
      puVar12 = puVar9;
      if (0x10 < iVar4) {
        do {
          puVar5 = (uint *)FUN_00512b70();
          if ((int)((int)puVar5 - (int)puVar12 & 0xfffffffcU) <
              (int)((int)puVar8 - (int)puVar5 & 0xfffffffcU)) {
            FUN_00512a40();
          }
          else {
            FUN_00512a40();
            puVar8 = puVar5;
            puVar5 = puVar12;
          }
          puVar12 = puVar5;
        } while (0x40 < (int)((int)puVar8 - (int)puVar5 & 0xfffffffcU));
      }
      FUN_00512b00();
      for (puVar9 = puVar9 + 0x10; puVar9 != local_8; puVar9 = puVar9 + 1) {
        uVar6 = *puVar9;
        uVar7 = puVar9[-1];
        puVar8 = puVar9;
        while (uVar6 < uVar7) {
          *puVar8 = uVar7;
          uVar7 = puVar8[-2];
          puVar8 = puVar8 + -1;
        }
        *puVar8 = uVar6;
      }
    }
    local_8 = (uint *)0x0;
  }
  else {
    local_8 = (uint *)0x1;
  }
LAB_0050f6c1:
  local_4 = &stack0x00001428;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001428,0,
             *(uint *)npos_exref);
  if (in_stack_00001438 != (HANDLE)0xffffffff) {
    if (in_stack_0000143c != (HANDLE)0x0) {
      if (in_stack_00001440 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001440);
        in_stack_00001440 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_0000143c);
    }
    CloseHandle(in_stack_00001438);
  }
  if (in_stack_00001440 != (void *)0x0) {
    free(in_stack_00001440);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001428,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000000,0,
             *(uint *)npos_exref);
  if (in_stack_00000010 != (HANDLE)0xffffffff) {
    if (in_stack_00000014 != (HANDLE)0x0) {
      if (in_stack_00000018 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000018);
        in_stack_00000018 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00000014);
    }
    CloseHandle(in_stack_00000010);
  }
  if (in_stack_00000018 != (void *)0x0) {
    free(in_stack_00000018);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000000,
             true);
  ExceptionList = in_stack_00001568;
  return local_8;
}

