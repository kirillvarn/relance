
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_00427a70(uint param_1,undefined4 param_2,HANDLE param_3,HANDLE param_4,LPCVOID param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char *unaff_retaddr;
  void *in_stack_00001428;
  uint in_stack_0000142c;
  HANDLE in_stack_00001434;
  HANDLE in_stack_00001438;
  void *in_stack_0000143c;
  void *in_stack_00001564;
  char *in_stack_00001574;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_005b8c3f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  local_c = (void *)0xffffffff;
  INI_Reader::INI_Reader((INI_Reader *)&local_4);
  bVar3 = INI_Reader::open((INI_Reader *)&local_4,in_stack_00001574,false);
  if ((bVar3) && (bVar3 = INI_Reader::read_header((INI_Reader *)&local_4), bVar3)) {
    do {
      bVar3 = INI_Reader::is_header((INI_Reader *)&local_4,(char *)&PTR_LAB_005c9e78);
      if (bVar3) {
        local_c = (void *)0x0;
        bVar3 = INI_Reader::read_value((INI_Reader *)&local_4);
        if (bVar3) {
          do {
            bVar3 = INI_Reader::is_value((INI_Reader *)&local_4,"COCKPIT_ATTENUATION");
            if (bVar3) {
              _DAT_00667c9c = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
            }
            else {
              bVar3 = INI_Reader::is_value((INI_Reader *)&local_4,"ducking_rtc_down_by");
              if (bVar3) {
                DAT_006108d8 = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
              }
              else {
                bVar3 = INI_Reader::is_value((INI_Reader *)&local_4,"ducking_rtc_down_time");
                if (bVar3) {
                  DAT_006108dc = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                }
                else {
                  bVar3 = INI_Reader::is_value((INI_Reader *)&local_4,"ducking_rtc_up_time");
                  if (bVar3) {
                    _DAT_006108e0 = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                  }
                  else {
                    bVar3 = INI_Reader::is_value
                                      ((INI_Reader *)&local_4,"ducking_spaceflight_down_by");
                    if (bVar3) {
                      DAT_006108e4 = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                    }
                    else {
                      bVar3 = INI_Reader::is_value
                                        ((INI_Reader *)&local_4,"ducking_spaceflight_down_time");
                      if (bVar3) {
                        DAT_006108e8 = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                      }
                      else {
                        bVar3 = INI_Reader::is_value
                                          ((INI_Reader *)&local_4,"ducking_spaceflight_up_time");
                        if (bVar3) {
                          DAT_006108ec = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                        }
                        else {
                          bVar3 = INI_Reader::is_value
                                            ((INI_Reader *)&local_4,"ducking_comm_down_by");
                          if (bVar3) {
                            DAT_006108f0 = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                          }
                          else {
                            bVar3 = INI_Reader::is_value
                                              ((INI_Reader *)&local_4,"ducking_comm_down_time");
                            if (bVar3) {
                              DAT_006108f4 = INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                            }
                            else {
                              bVar3 = INI_Reader::is_value
                                                ((INI_Reader *)&local_4,"ducking_comm_up_time");
                              if (bVar3) {
                                DAT_006108f8 = INI_Reader::get_value_float((INI_Reader *)&local_4,0)
                                ;
                              }
                              else {
                                bVar3 = INI_Reader::is_value
                                                  ((INI_Reader *)&local_4,"music_fade_time");
                                if (bVar3) {
                                  DAT_006108d0 = INI_Reader::get_value_float
                                                           ((INI_Reader *)&local_4,0);
                                }
                                else {
                                  bVar3 = INI_Reader::is_value
                                                    ((INI_Reader *)&local_4,"cross_fade_silence");
                                  if (bVar3) {
                                    DAT_006108d4 = INI_Reader::get_value_float
                                                             ((INI_Reader *)&local_4,0);
                                  }
                                  else {
                                    bVar3 = INI_Reader::is_value
                                                      ((INI_Reader *)&local_4,
                                                       "spaceflight_dialogue_pan_range");
                                    if (bVar3) {
                                      _DAT_006108fc =
                                           INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                                    }
                                    else {
                                      bVar3 = INI_Reader::is_value
                                                        ((INI_Reader *)&local_4,
                                                         "spaceflight_dialogue_pan_factor");
                                      if (bVar3) {
                                        DAT_00610900 = INI_Reader::get_value_float
                                                                 ((INI_Reader *)&local_4,0);
                                      }
                                      else {
                                        bVar3 = INI_Reader::is_value
                                                          ((INI_Reader *)&local_4,
                                                           "ear_doppler_factor");
                                        if (bVar3) {
                                          if (*(int **)Sound_exref != (int *)0x0) {
                                            iVar2 = **(int **)Sound_exref;
                                            INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                                            (**(code **)(iVar2 + 0x48))();
                                          }
                                        }
                                        else {
                                          bVar3 = INI_Reader::is_value
                                                            ((INI_Reader *)&local_4,
                                                             "ear_rolloff_factor");
                                          if ((bVar3) && (*(int **)Sound_exref != (int *)0x0)) {
                                            iVar2 = **(int **)Sound_exref;
                                            INI_Reader::get_value_float((INI_Reader *)&local_4,0);
                                            (**(code **)(iVar2 + 0x4c))();
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            bVar3 = INI_Reader::read_value((INI_Reader *)&local_4);
          } while (bVar3);
        }
      }
      bVar3 = INI_Reader::read_header((INI_Reader *)&local_4);
    } while (bVar3);
  }
  local_8 = &stack0x00001424;
  uVar5 = *(uint *)npos_exref;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001424);
  if (in_stack_0000142c < uVar5) {
    uVar5 = in_stack_0000142c;
  }
  if (uVar5 != 0) {
    memmove(in_stack_00001428,(void *)((int)in_stack_00001428 + uVar5),in_stack_0000142c - uVar5);
    bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x00001424,in_stack_0000142c - uVar5,false);
    if (bVar3) {
      *(undefined1 *)((int)in_stack_00001428 + (in_stack_0000142c - uVar5)) = 0;
    }
  }
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
  if (in_stack_00001428 != (void *)0x0) {
    cVar1 = *(char *)((int)in_stack_00001428 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)((int)in_stack_00001428 + -1) = cVar1 + -1;
    }
  }
  uVar5 = *(uint *)npos_exref;
  if (((unaff_retaddr != (char *)0x0) && (unaff_retaddr[-1] != '\0')) && (unaff_retaddr[-1] != -1))
  {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_4,true);
    uVar4 = std::char_traits<char>::length(unaff_retaddr);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_4,
               unaff_retaddr,uVar4);
  }
  if (param_1 < uVar5) {
    uVar5 = param_1;
  }
  if (uVar5 != 0) {
    memmove(unaff_retaddr,unaff_retaddr + uVar5,param_1 - uVar5);
    bVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_4,
                       param_1 - uVar5,false);
    if (bVar3) {
      unaff_retaddr[param_1 - uVar5] = '\0';
    }
  }
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
  if (unaff_retaddr != (char *)0x0) {
    cVar1 = unaff_retaddr[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      unaff_retaddr[-1] = cVar1 + -1;
    }
  }
  ExceptionList = in_stack_00001564;
  return local_c;
}

