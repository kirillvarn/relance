
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c73d0(undefined4 param_1,HANDLE param_2,HANDLE param_3,LPCVOID param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *piVar7;
  HANDLE in_stack_00001430;
  HANDLE in_stack_00001434;
  void *in_stack_00001438;
  void *in_stack_00001560;
  undefined1 *local_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = -1;
  local_8 = &LAB_005bd79f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&local_8);
  bVar2 = INI_Reader::open((INI_Reader *)&local_8,(char *)&DAT_0067340c,false);
  if (bVar2) {
    bVar2 = INI_Reader::read_header((INI_Reader *)&local_8);
    pcVar6 = get_value_string_exref;
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&local_8,"HUD");
        if (bVar2) {
          bVar2 = INI_Reader::read_value((INI_Reader *)&local_8);
          piVar1 = DAT_00673518;
          piVar7 = DAT_0067351c;
          if (bVar2) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&local_8,"shapes");
              if (bVar2) {
                (*pcVar6)();
                FUN_00425b30();
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&local_8,"static_txm");
                if (bVar2) {
                  (*pcVar6)();
                  FUN_004255c0();
                }
                else {
                  bVar2 = INI_Reader::is_value((INI_Reader *)&local_8,"static_blend");
                  if (bVar2) {
                    INI_Reader::get_value_float((INI_Reader *)&local_8,0);
                    DAT_00612374 = ftol();
                  }
                }
              }
              bVar2 = INI_Reader::read_value((INI_Reader *)&local_8);
              piVar1 = DAT_00673518;
              piVar7 = DAT_0067351c;
            } while (bVar2);
          }
        }
        else {
          piVar7 = (int *)0x0;
          puVar4 = (undefined4 *)0x0;
          do {
            puVar5 = DAT_00673510;
            if (puVar4 != (undefined4 *)0x0) {
              puVar5 = (undefined4 *)puVar4[1];
            }
            if (puVar5 == (undefined4 *)0x0) {
              if (piVar7 == (int *)0x0) {
                INI_Reader::get_header_ptr((INI_Reader *)&local_8);
                (**(code **)FDUMP_exref)();
                pcVar6 = get_value_string_exref;
                piVar1 = DAT_00673518;
                piVar7 = DAT_0067351c;
                goto LAB_004c7588;
              }
              break;
            }
            bVar2 = INI_Reader::is_header((INI_Reader *)&local_8,(char *)(puVar5 + 3));
            puVar4 = puVar5;
          } while ((!bVar2) || (piVar7 = (int *)(**(code **)*puVar5)(), piVar7 == (int *)0x0));
          cVar3 = (**(code **)(*piVar7 + 0xc))();
          if (cVar3 == '\0') {
            (**(code **)*piVar7)();
            pcVar6 = get_value_string_exref;
            piVar1 = DAT_00673518;
            piVar7 = DAT_0067351c;
          }
          else {
            pcVar6 = get_value_string_exref;
            piVar1 = piVar7;
            if (DAT_0067351c != (int *)0x0) {
              DAT_0067351c[0xd] = (int)piVar7;
              pcVar6 = get_value_string_exref;
              piVar1 = DAT_00673518;
            }
          }
        }
LAB_004c7588:
        DAT_0067351c = piVar7;
        DAT_00673518 = piVar1;
        bVar2 = INI_Reader::read_header((INI_Reader *)&local_8);
      } while (bVar2);
    }
  }
  else {
    (**(code **)FDUMP_exref)();
  }
  DAT_0067354c = 0;
  _DAT_00673550 = 0;
  DAT_00673554 = 0;
  DAT_00673555 = 0;
  _DAT_00673558 = 0;
  _DAT_0067355c = 0;
  local_c = &stack0x00001420;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001420,0,
             *(uint *)npos_exref);
  if (in_stack_00001430 != (HANDLE)0xffffffff) {
    if (in_stack_00001434 != (HANDLE)0x0) {
      if (in_stack_00001438 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001438);
        in_stack_00001438 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001434);
    }
    CloseHandle(in_stack_00001430);
  }
  if (in_stack_00001438 != (void *)0x0) {
    free(in_stack_00001438);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001420,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_8,0,
             *(uint *)npos_exref);
  if (param_2 != (HANDLE)0xffffffff) {
    if (param_3 != (HANDLE)0x0) {
      if (param_4 != (LPCVOID)0x0) {
        UnmapViewOfFile(param_4);
        param_4 = (LPCVOID)0x0;
      }
      CloseHandle(param_3);
    }
    CloseHandle(param_2);
  }
  if (param_4 != (void *)0x0) {
    free(param_4);
  }
  if (local_4 != 0) {
    cVar3 = *(char *)(local_4 + -1);
    if ((cVar3 != '\0') && (cVar3 != -1)) {
      *(char *)(local_4 + -1) = cVar3 + -1;
      ExceptionList = in_stack_00001560;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_00001560;
  return;
}

