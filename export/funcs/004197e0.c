
void * FUN_004197e0(char *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  LPCSTR lpText;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *_Str1;
  code *pcVar8;
  int iVar9;
  float fVar10;
  int in_stack_000000c8;
  HANDLE in_stack_000000d4;
  HANDLE in_stack_000000d8;
  LPCVOID in_stack_000000dc;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e4;
  HANDLE in_stack_000014fc;
  HANDLE in_stack_00001500;
  void *in_stack_00001504;
  void *in_stack_00003630;
  void *local_14;
  undefined1 *local_10;
  int local_c;
  undefined1 *local_8;
  
  local_c = -1;
  local_10 = &LAB_005b899a;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_005b7e90();
  local_14 = (void *)0x0;
  INI_Reader::INI_Reader((INI_Reader *)&stack0x000000c4);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x000000c4,param_1,false);
  if (bVar2) {
    bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000000c4);
    pcVar8 = stricmp_exref;
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000000c4,"IGraph");
        if (bVar2) {
          param_4 = '\0';
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000c4);
          if (bVar2) {
            do {
              iVar9 = 0;
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000c4,"nickname");
              if (bVar2) {
                pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000c4);
                if (pcVar4 == (char *)0x0) {
                  param_4 = '\0';
                }
                else {
                  FUN_00417c50();
                }
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000c4,"type");
                if (bVar2) {
                  INI_Reader::get_value_string((INI_Reader *)&stack0x000000c4);
                  iVar5 = (*pcVar8)();
                  if (iVar5 == 0) {
                    iVar5 = 2;
LAB_00419917:
                    local_c = iVar5;
                    bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000c4);
                    if (bVar2) {
                      do {
                        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000c4,"point");
                        if (bVar2) {
                          fVar10 = INI_Reader::get_value_float((INI_Reader *)&stack0x000000c4,0);
                          *(float *)(&stack0x0000162c + iVar9 * 8) = fVar10;
                          if (iVar5 == 2) {
                            fVar10 = INI_Reader::get_value_float((INI_Reader *)&stack0x000000c4,1);
                            *(float *)(&stack0x00001630 + iVar9 * 8) = fVar10;
                            iVar9 = iVar9 + 1;
                          }
                          else {
                            if ((iVar5 == 1) || (iVar5 == 3)) {
                              INI_Reader::get_value_float((INI_Reader *)&stack0x000000c4,1);
                              uVar6 = ftol();
                              *(undefined4 *)(&stack0x00001630 + iVar9 * 8) = uVar6;
                            }
                            iVar9 = iVar9 + 1;
                          }
                        }
                        else {
                          pcVar4 = INI_Reader::get_line_ptr((INI_Reader *)&stack0x000000c4);
                          MessageBoxA((HWND)0x0,pcVar4,"Error: unknown IGraph parameter",0);
                        }
                        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000c4);
                      } while (bVar2);
                    }
                    puVar7 = (undefined4 *)FUN_0053e430();
                    pcVar8 = stricmp_exref;
                    local_10 = (undefined1 *)*puVar7;
                    if (local_10 != (undefined1 *)DAT_006166a0) {
                      do {
                        pcVar4 = &param_4;
                        _Str1 = (char *)(*(code *)**(undefined4 **)(local_10 + 8))();
                        iVar9 = stricmp(_Str1,pcVar4);
                        if (iVar9 == 0) {
                          if (local_10 != (undefined1 *)0xfffffff8) goto LAB_00419add;
                          break;
                        }
                        FUN_0053ab20();
                      } while (local_10 != (undefined1 *)DAT_006166a0);
                    }
                    FUN_00419d20();
                    FUN_00419ec0();
                    FUN_00419100();
                    piVar1 = (int *)(*(int *)(DAT_006166a0 + 4) + 8);
                    cVar3 = FUN_00419d50();
                    if (cVar3 == '\0') {
                      FUN_00419f10();
                      pcVar8 = stricmp_exref;
                    }
                    else {
                      pcVar8 = stricmp_exref;
                      if (piVar1 != (int *)0x0) {
                        (**(code **)(*piVar1 + 0x14))();
                        local_14 = (void *)((int)local_14 + 1);
                        pcVar8 = stricmp_exref;
                        goto LAB_00419af3;
                      }
                    }
LAB_00419add:
                    pcVar4 = "Error: unable to create IGraph object (duplicate?)";
                    lpText = &param_4;
                  }
                  else {
                    iVar5 = (*pcVar8)();
                    if (iVar5 == 0) {
                      iVar5 = 3;
                      goto LAB_00419917;
                    }
                    iVar5 = (*pcVar8)();
                    if (iVar5 == 0) {
                      iVar5 = 1;
                      goto LAB_00419917;
                    }
                    lpText = INI_Reader::get_value_string((INI_Reader *)&stack0x000000c4);
                    pcVar4 = "Error: invalid IGraph::ElemType";
                  }
                  MessageBoxA((HWND)0x0,lpText,pcVar4,0);
                }
              }
LAB_00419af3:
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000c4);
            } while (bVar2);
          }
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000000c4);
      } while (bVar2);
    }
  }
  else {
    MessageBoxA((HWND)0x0,param_1,"Error: unable to open IGraph file",0);
  }
  local_8 = &stack0x000014ec;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000014ec,0,
             *(uint *)npos_exref);
  if (in_stack_000014fc != (HANDLE)0xffffffff) {
    if (in_stack_00001500 != (HANDLE)0x0) {
      if (in_stack_00001504 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001504);
        in_stack_00001504 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001500);
    }
    CloseHandle(in_stack_000014fc);
  }
  if (in_stack_00001504 != (void *)0x0) {
    free(in_stack_00001504);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000014ec,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000000c4,0,
             *(uint *)npos_exref);
  if (in_stack_000000d4 != (HANDLE)0xffffffff) {
    if (in_stack_000000d8 != (HANDLE)0x0) {
      if (in_stack_000000dc != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000000dc);
        in_stack_000000dc = (LPCVOID)0x0;
        in_stack_000000e0 = 0;
      }
      CloseHandle(in_stack_000000d8);
      in_stack_000000d8 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_000000d4);
    in_stack_000000d4 = (HANDLE)0xffffffff;
  }
  if (in_stack_000000dc != (void *)0x0) {
    free(in_stack_000000dc);
    in_stack_000000dc = (void *)0x0;
    in_stack_000000e0 = 0;
  }
  in_stack_000000e4 = 0;
  if (in_stack_000000c8 != 0) {
    cVar3 = *(char *)(in_stack_000000c8 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_000000c8 + -1) = cVar3 + -1;
    }
  }
  ExceptionList = in_stack_00003630;
  return local_14;
}

