
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005173c0(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  int *extraout_ECX;
  int iVar5;
  undefined4 unaff_EBX;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  int iStack0000000c;
  int in_stack_00000218;
  HANDLE in_stack_00000224;
  HANDLE in_stack_00000228;
  void *in_stack_0000022c;
  int in_stack_00001640;
  HANDLE in_stack_0000164c;
  HANDLE in_stack_00001650;
  void *in_stack_00001654;
  void *in_stack_0000177c;
  char *in_stack_00001794;
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  uStack_c._4_4_ = (int *)&LAB_005bfe5f;
  uStack_c._0_4_ = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  uStack_c._4_4_ = extraout_ECX;
  INI_Reader::INI_Reader((INI_Reader *)&stack0x0000021c);
  iStack0000000c = 0;
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x0000021c,in_stack_00001794,false);
  if (!bVar2) {
    (**(code **)FDUMP_exref)();
  }
  bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000021c);
  piVar6 = extraout_ECX;
  if (bVar2) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000021c,"Cockpit");
      if (bVar2) {
        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000021c);
        if (bVar2) {
          do {
            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000021c,"mesh");
            if (bVar2) {
              pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000021c);
              if (pcVar3 == (char *)0x0) {
                iStack0000000c = 0;
              }
              else {
                iStack0000000c = FUN_00417c50();
              }
            }
            else {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000021c,"material_library");
              if (bVar2) {
                pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000021c);
                if (pcVar3 != (char *)0x0) {
                  FUN_00417c50();
                }
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000021c,"head_turn");
                if (bVar2) {
                  _DAT_006135a0 = INI_Reader::get_value_float((INI_Reader *)&stack0x0000021c,0);
                  _DAT_006135a4 = INI_Reader::get_value_float((INI_Reader *)&stack0x0000021c,1);
                }
              }
            }
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000021c);
          } while (bVar2);
        }
      }
      else {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000021c,"Camera");
        if (bVar2) {
          (**(code **)FDUMP_exref)();
        }
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000021c);
      piVar6 = uStack_c._4_4_;
    } while (bVar2);
  }
  if (iStack0000000c != 0) {
    FUN_00420dd0();
  }
  FUN_00420fd0();
  FUN_00421070();
  uStack_c._0_4_ = (void *)0xffffffff;
  CompoundInstanceAnalyze(piVar6[0x65],(_func_void_long_void_ptr *)&LAB_00517130,&uStack_c);
  if ((void *)uStack_c != (void *)0xffffffff) {
    piVar4 = (int *)(**(code **)(**(int **)Engine_exref + 0x98))();
    piVar7 = piVar6 + 0x4f;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
    }
    piVar4 = (int *)(**(code **)(**(int **)Engine_exref + 0x90))();
    piVar6[0x4c] = *piVar4;
    piVar6[0x4d] = piVar4[1];
    piVar6[0x4e] = piVar4[2];
  }
  fVar8 = (float10)(**(code **)(*piVar6 + 0x18))();
  fVar8 = (float10)fptan(fVar8 * (float10)_DAT_005c77f4);
  uStack_c = (double)fVar8;
  fVar8 = (float10)(**(code **)(*piVar6 + 0x1c))();
  fVar8 = (float10)fptan(fVar8 * (float10)_DAT_005c77f4);
  if ((float10)_DAT_005d5b58 <=
      ABS((float10)(double)CONCAT44((void *)uStack_c,unaff_EBX) / fVar8 - (float10)_DAT_005dba18)) {
    (**(code **)FDUMP_exref)();
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000163c,0,
             *(uint *)npos_exref);
  if (in_stack_0000164c != (HANDLE)0xffffffff) {
    if (in_stack_00001650 != (HANDLE)0x0) {
      if (in_stack_00001654 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001654);
        in_stack_00001654 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001650);
    }
    CloseHandle(in_stack_0000164c);
  }
  if (in_stack_00001654 != (void *)0x0) {
    free(in_stack_00001654);
  }
  if (in_stack_00001640 != 0) {
    cVar1 = *(char *)(in_stack_00001640 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001640 + -1) = cVar1 + -1;
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000214,0,
             *(uint *)npos_exref);
  if (in_stack_00000224 != (HANDLE)0xffffffff) {
    if (in_stack_00000228 != (HANDLE)0x0) {
      if (in_stack_0000022c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000022c);
        in_stack_0000022c = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00000228);
    }
    CloseHandle(in_stack_00000224);
  }
  if (in_stack_0000022c != (void *)0x0) {
    free(in_stack_0000022c);
  }
  if (in_stack_00000218 != 0) {
    cVar1 = *(char *)(in_stack_00000218 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00000218 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_0000177c;
  return;
}

