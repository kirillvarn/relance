
void FUN_005a82d0(undefined4 param_1,
                 basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                 param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined1 *param_10)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  HANDLE in_stack_0000003c;
  HANDLE in_stack_00000040;
  LPCVOID in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  void *in_stack_00001594;
  char *in_stack_000015a8;
  _GUID *p_Var9;
  undefined4 uStack_c;
  undefined1 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_005c5357;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  param_6 = 0;
  param_7 = 0;
  param_8 = 0;
  param_9 = 0;
  uStack_c = (void *)((uint)uStack_c & 0xffffff);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x0000002c);
  INI_Reader::open((INI_Reader *)&stack0x0000002c,in_stack_000015a8,false);
  bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000002c);
  if (bVar2) {
    do {
      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000002c,"Freelancer");
      if (bVar2) {
        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
        if (bVar2) {
          do {
            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"local_server");
            if (bVar2) {
              pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000002c);
              if (pcVar3 != (char *)0x0) {
                uVar6 = 0xffffffff;
                pcVar8 = pcVar3;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6 - 1;
                if (0x1f < uVar6) {
                  uVar6 = 0x1f;
                }
                pcVar8 = s_Server_dll_00615aec;
                for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
                  pcVar3 = pcVar3 + 4;
                  pcVar8 = pcVar8 + 4;
                }
                for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar8 = *pcVar3;
                  pcVar3 = pcVar3 + 1;
                  pcVar8 = pcVar8 + 1;
                }
                s_Server_dll_00615aec[uVar6] = '\0';
              }
            }
            else {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"AppGUID");
              if (bVar2) {
                p_Var9 = (_GUID *)&param_6;
                pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x0000002c);
                ParseGUID(pcVar3,p_Var9);
                uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
              }
            }
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
          } while (bVar2);
        }
      }
      else {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000002c,"ListServer");
        if (bVar2) {
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
          if (bVar2) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"hostname");
              if (bVar2) {
                INI_Reader::get_value_string((INI_Reader *)&stack0x0000002c);
                FUN_005ab400();
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"port");
                if (bVar2) {
                  INI_Reader::get_value_float((INI_Reader *)&stack0x0000002c,0);
                  ftol();
                  FUN_005ab4b0();
                }
              }
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
            } while (bVar2);
          }
        }
        else {
          bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x0000002c,"Login");
          if ((bVar2) && (bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c), bVar2)) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"name");
              if (bVar2) {
                pwVar4 = (wchar_t *)INI_Reader::get_value_wstring((INI_Reader *)&stack0x0000002c);
                local_8 = (undefined1 *)CONCAT31(local_8._1_3_,uStack_c._3_1_);
                local_4 = 0;
                sVar5 = wcslen(pwVar4);
                std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                          *)&local_8,(ushort *)pwVar4,sVar5);
                std::
                basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                          *)&DAT_0067e940,
                         (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                          *)&local_8,0,*(uint *)npos_exref);
                if (local_4 != 0) {
                  cVar1 = *(char *)(local_4 + -1);
                  if ((cVar1 != '\0') && (cVar1 != -1)) {
                    *(char *)(local_4 + -1) = cVar1 + -1;
                    local_4 = 0;
                    goto LAB_005a8637;
                  }
                  FUN_005b7e1d();
                }
                local_4 = 0;
              }
              else {
                bVar2 = INI_Reader::is_value
                                  ((INI_Reader *)&stack0x0000002c,(char *)&PTR_DAT_005e6470);
                if (bVar2) {
                  pwVar4 = (wchar_t *)INI_Reader::get_value_wstring((INI_Reader *)&stack0x0000002c);
                  param_2 = uStack_c._3_1_;
                  param_3 = 0;
                  param_4 = 0;
                  param_5 = 0;
                  sVar5 = wcslen(pwVar4);
                  std::
                  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  ::assign(&param_2,(ushort *)pwVar4,sVar5);
                  std::
                  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  ::assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                            *)&DAT_0067e950,
                           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
                            *)&param_2,0,*(uint *)npos_exref);
                  if (param_3 != 0) {
                    cVar1 = *(char *)(param_3 + -1);
                    if ((cVar1 != '\0') && (cVar1 != -1)) {
                      *(char *)(param_3 + -1) = cVar1 + -1;
                      param_3 = 0;
                      param_4 = 0;
                      param_5 = 0;
                      goto LAB_005a8637;
                    }
                    FUN_005b7e1d();
                  }
                  param_3 = 0;
                  param_4 = 0;
                  param_5 = 0;
                }
                else {
                  bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x0000002c,"char");
                  if (bVar2) {
                    INI_Reader::get_value_wstring((INI_Reader *)&stack0x0000002c);
                    FUN_005ab3e0();
                  }
                }
              }
LAB_005a8637:
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x0000002c);
            } while (bVar2);
          }
        }
      }
      bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x0000002c);
    } while (bVar2);
    if (uStack_c._3_1_ !=
        (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
         )0x0) {
      FUN_005ac2a0();
    }
  }
  param_10 = &stack0x00001454;
  FileMap::close((FileMap *)&stack0x00001454);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001454,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000002c,0,
             *(uint *)npos_exref);
  if (in_stack_0000003c != (HANDLE)0xffffffff) {
    if (in_stack_00000040 != (HANDLE)0x0) {
      if (in_stack_00000044 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000044);
        in_stack_00000044 = (LPCVOID)0x0;
        in_stack_00000048 = 0;
      }
      CloseHandle(in_stack_00000040);
      in_stack_00000040 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_0000003c);
    in_stack_0000003c = (HANDLE)0xffffffff;
  }
  if (in_stack_00000044 != (void *)0x0) {
    free(in_stack_00000044);
    in_stack_00000044 = (void *)0x0;
    in_stack_00000048 = 0;
  }
  in_stack_0000004c = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000002c,
             true);
  ExceptionList = in_stack_00001594;
  return;
}

