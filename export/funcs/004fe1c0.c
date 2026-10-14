
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004fe1c0(void)

{
  uint *puVar1;
  char cVar2;
  void *pvVar3;
  bool bVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  char in_stack_00000040;
  char *in_stack_0000005c;
  uint in_stack_00000060;
  uint in_stack_00000064;
  HANDLE in_stack_00000068;
  HANDLE in_stack_0000006c;
  LPCVOID in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  char *in_stack_00001484;
  uint in_stack_00001488;
  HANDLE in_stack_00001490;
  HANDLE in_stack_00001494;
  void *in_stack_00001498;
  void *in_stack_000015c0;
  char *in_stack_000015d0;
  void *local_c;
  undefined1 *local_8;
  float local_4;
  
  local_4 = -NAN;
  local_8 = &LAB_005bf57d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000058);
  bVar4 = INI_Reader::open((INI_Reader *)&stack0x00000058,in_stack_000015d0,false);
  if (bVar4) {
    local_c = (void *)0x0;
    bVar4 = INI_Reader::read_header((INI_Reader *)&stack0x00000058);
    if (bVar4) {
      do {
        bVar4 = INI_Reader::is_header((INI_Reader *)&stack0x00000058,"gate_tunnel");
        if (bVar4) {
          local_8 = operator_new(0x2b8);
          if (local_8 == (undefined1 *)0x0) {
            local_c = (void *)0x0;
          }
          else {
            local_c = (void *)FUN_004fee30();
          }
          bVar4 = INI_Reader::read_value((INI_Reader *)&stack0x00000058);
          if (bVar4) {
            do {
              bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"nickname");
              if (bVar4) {
                pcVar5 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000058);
                puVar1 = (uint *)((int)local_c + 4);
                uVar6 = CreateID(pcVar5);
                *puVar1 = uVar6;
              }
              else {
                bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"write_depth_buffer");
                if (bVar4) {
                  fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                  if (fVar12 == (float)_DAT_005c8ba8) {
                    *(undefined1 *)((int)local_c + 0x74) = 0;
                  }
                  else {
                    *(undefined1 *)((int)local_c + 0x74) = 1;
                  }
                }
                else {
                  bVar4 = INI_Reader::is_value
                                    ((INI_Reader *)&stack0x00000058,"num_spline_control_points");
                  if (bVar4) {
                    INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                    uVar7 = ftol();
                    *(undefined4 *)((int)local_c + 0x78) = uVar7;
                  }
                  else {
                    bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"x_range");
                    if (bVar4) {
                      fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                      *(float *)((int)local_c + 0x7c) = fVar12;
                    }
                    else {
                      bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"y_range");
                      if (bVar4) {
                        fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                        *(float *)((int)local_c + 0x80) = fVar12;
                      }
                      else {
                        bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"z_range");
                        if (bVar4) {
                          fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                          *(float *)((int)local_c + 0x84) = fVar12;
                        }
                        else {
                          bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"min_radius");
                          if (bVar4) {
                            fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                            *(float *)((int)local_c + 0x88) = fVar12;
                          }
                          else {
                            bVar4 = INI_Reader::is_value
                                              ((INI_Reader *)&stack0x00000058,"max_radius");
                            if (bVar4) {
                              fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0)
                              ;
                              *(float *)((int)local_c + 0x8c) = fVar12;
                            }
                            else {
                              bVar4 = INI_Reader::is_value
                                                ((INI_Reader *)&stack0x00000058,"far_radius_factor")
                              ;
                              if (bVar4) {
                                fVar12 = INI_Reader::get_value_float
                                                   ((INI_Reader *)&stack0x00000058,0);
                                *(float *)((int)local_c + 0x90) = fVar12;
                              }
                              else {
                                bVar4 = INI_Reader::is_value
                                                  ((INI_Reader *)&stack0x00000058,"min_speed");
                                if (bVar4) {
                                  fVar12 = INI_Reader::get_value_float
                                                     ((INI_Reader *)&stack0x00000058,0);
                                  *(float *)((int)local_c + 0x94) = fVar12;
                                }
                                else {
                                  bVar4 = INI_Reader::is_value
                                                    ((INI_Reader *)&stack0x00000058,"max_speed");
                                  if (bVar4) {
                                    fVar12 = INI_Reader::get_value_float
                                                       ((INI_Reader *)&stack0x00000058,0);
                                    *(float *)((int)local_c + 0x98) = fVar12;
                                  }
                                  else {
                                    bVar4 = INI_Reader::is_value
                                                      ((INI_Reader *)&stack0x00000058,
                                                       "time_to_max_speed");
                                    if (bVar4) {
                                      fVar12 = INI_Reader::get_value_float
                                                         ((INI_Reader *)&stack0x00000058,0);
                                      *(float *)((int)local_c + 0x9c) = fVar12;
                                    }
                                    else {
                                      bVar4 = INI_Reader::is_value
                                                        ((INI_Reader *)&stack0x00000058,
                                                         "num_t_steps");
                                      if (bVar4) {
                                        fVar12 = INI_Reader::get_value_float
                                                           ((INI_Reader *)&stack0x00000058,0);
                                        *(float *)((int)local_c + 0xa0) = fVar12;
                                      }
                                      else {
                                        bVar4 = INI_Reader::is_value
                                                          ((INI_Reader *)&stack0x00000058,
                                                           "num_s_steps");
                                        if (bVar4) {
                                          fVar12 = INI_Reader::get_value_float
                                                             ((INI_Reader *)&stack0x00000058,0);
                                          *(float *)((int)local_c + 0xa4) = fVar12;
                                        }
                                        else {
                                          bVar4 = INI_Reader::is_value
                                                            ((INI_Reader *)&stack0x00000058,
                                                             "min_rotation");
                                          if (bVar4) {
                                            fVar12 = INI_Reader::get_value_float
                                                               ((INI_Reader *)&stack0x00000058,0);
                                            *(float *)((int)local_c + 0xa8) = fVar12;
                                          }
                                          else {
                                            bVar4 = INI_Reader::is_value
                                                              ((INI_Reader *)&stack0x00000058,
                                                               "max_rotation");
                                            if (bVar4) {
                                              fVar12 = INI_Reader::get_value_float
                                                                 ((INI_Reader *)&stack0x00000058,0);
                                              *(float *)((int)local_c + 0xac) = fVar12;
                                            }
                                            else {
                                              bVar4 = INI_Reader::is_value
                                                                ((INI_Reader *)&stack0x00000058,
                                                                 "min_rgb");
                                              if (bVar4) {
                                                local_4 = (float)INI_Reader::get_value_int
                                                                           ((INI_Reader *)
                                                                            &stack0x00000058,2);
                                                local_8 = (undefined1 *)
                                                          ((float)(int)local_4 * _DAT_005c7f68);
                                                local_4 = (float)INI_Reader::get_value_int
                                                                           ((INI_Reader *)
                                                                            &stack0x00000058,1);
                                                fVar12 = (float)(int)local_4 * _DAT_005c7f68;
                                                local_4 = (float)INI_Reader::get_value_int
                                                                           ((INI_Reader *)
                                                                            &stack0x00000058,0);
                                                *(float *)((int)local_c + 0xb0) =
                                                     (float)(int)local_4 * _DAT_005c7f68;
                                                *(float *)((int)local_c + 0xb4) = fVar12;
                                                *(undefined1 **)((int)local_c + 0xb8) = local_8;
                                              }
                                              else {
                                                bVar4 = INI_Reader::is_value
                                                                  ((INI_Reader *)&stack0x00000058,
                                                                   "max_rgb");
                                                if (bVar4) {
                                                  local_8 = (undefined1 *)
                                                            INI_Reader::get_value_int
                                                                      ((INI_Reader *)
                                                                       &stack0x00000058,2);
                                                  local_4 = (float)(int)local_8 * _DAT_005c7f68;
                                                  local_8 = (undefined1 *)
                                                            INI_Reader::get_value_int
                                                                      ((INI_Reader *)
                                                                       &stack0x00000058,1);
                                                  fVar12 = (float)(int)local_8 * _DAT_005c7f68;
                                                  local_8 = (undefined1 *)
                                                            INI_Reader::get_value_int
                                                                      ((INI_Reader *)
                                                                       &stack0x00000058,0);
                                                  *(float *)((int)local_c + 0xbc) =
                                                       (float)(int)local_8 * _DAT_005c7f68;
                                                  *(float *)((int)local_c + 0xc0) = fVar12;
                                                  *(float *)((int)local_c + 0xc4) = local_4;
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
                }
              }
              bVar4 = INI_Reader::read_value((INI_Reader *)&stack0x00000058);
            } while (bVar4);
          }
          if (0 < *(int *)((int)local_c + 0x78)) {
            FUN_00500a80();
            FUN_005012e0();
            FUN_005012e0();
            FUN_00500de0();
            FUN_005012e0();
          }
          FUN_00537260();
        }
        else {
          bVar4 = INI_Reader::is_header((INI_Reader *)&stack0x00000058,"layer");
          pvVar3 = local_c;
          if (bVar4) {
            iVar8 = *(int *)((int)local_c + 8);
            if (iVar8 < 2) {
              iVar11 = iVar8 * 0x34;
              *(int *)((int)local_c + 8) = iVar8 + 1;
              *(undefined4 *)((int)local_c + iVar11 + 0x14) = 0x3f000000;
              *(undefined4 *)((int)local_c + iVar11 + 0x18) = 0x3f000000;
              *(undefined4 *)((int)local_c + iVar11 + 0x1c) = 0x3f000000;
              *(undefined4 *)((int)local_c + iVar11 + 0x20) = 0x3f800000;
              *(undefined4 *)((int)local_c + iVar11 + 0x28) = 0x3f800000;
              *(undefined4 *)((int)local_c + iVar11 + 0x24) = 0;
              *(undefined4 *)((int)local_c + iVar11 + 0x2c) = 0;
              *(undefined4 *)((int)local_c + iVar11 + 0x30) = 0;
              *(undefined4 *)((int)local_c + iVar11 + 0x34) = 0x3db851ec;
              *(undefined4 *)((int)local_c + iVar11 + 0x38) = 0x3d8f5c29;
              *(undefined4 *)((int)local_c + iVar11 + 0x3c) = 0x41200000;
              bVar4 = INI_Reader::read_value((INI_Reader *)&stack0x00000058);
              if (bVar4) {
                do {
                  bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"color");
                  if (bVar4) {
                    local_8 = (undefined1 *)
                              INI_Reader::get_value_int((INI_Reader *)&stack0x00000058,2);
                    local_4 = (float)(int)local_8 * _DAT_005c7f68;
                    local_8 = (undefined1 *)
                              INI_Reader::get_value_int((INI_Reader *)&stack0x00000058,1);
                    fVar12 = (float)(int)local_8 * _DAT_005c7f68;
                    local_8 = (undefined1 *)
                              INI_Reader::get_value_int((INI_Reader *)&stack0x00000058,0);
                    *(float *)((int)pvVar3 + iVar11 + 0x14) = (float)(int)local_8 * _DAT_005c7f68;
                    *(float *)((int)pvVar3 + iVar11 + 0x18) = fVar12;
                    *(float *)((int)pvVar3 + iVar11 + 0x1c) = local_4;
                  }
                  bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"near_alpha");
                  if (bVar4) {
                    fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                    *(float *)((int)pvVar3 + iVar11 + 0x20) = fVar12;
                  }
                  else {
                    bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"far_alpha");
                    if (bVar4) {
                      fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                      *(float *)((int)pvVar3 + iVar11 + 0x24) = fVar12;
                    }
                    else {
                      bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"radius_factor");
                      if (bVar4) {
                        fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                        *(float *)((int)pvVar3 + iVar11 + 0x28) = fVar12;
                      }
                      else {
                        bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"u_offset");
                        if (bVar4) {
                          fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                          *(float *)((int)pvVar3 + iVar11 + 0x2c) = fVar12;
                        }
                        else {
                          bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"v_offset");
                          if (bVar4) {
                            fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0);
                            *(float *)((int)pvVar3 + iVar11 + 0x30) = fVar12;
                          }
                          else {
                            bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"du");
                            if (bVar4) {
                              fVar12 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000058,0)
                              ;
                              *(float *)((int)pvVar3 + iVar11 + 0x34) = fVar12;
                            }
                            else {
                              bVar4 = INI_Reader::is_value((INI_Reader *)&stack0x00000058,"dv");
                              if (bVar4) {
                                fVar12 = INI_Reader::get_value_float
                                                   ((INI_Reader *)&stack0x00000058,0);
                                *(float *)((int)pvVar3 + iVar11 + 0x38) = fVar12;
                              }
                              else {
                                bVar4 = INI_Reader::is_value
                                                  ((INI_Reader *)&stack0x00000058,"v_scale");
                                if (bVar4) {
                                  fVar12 = INI_Reader::get_value_float
                                                     ((INI_Reader *)&stack0x00000058,0);
                                  *(float *)((int)pvVar3 + iVar11 + 0x3c) = fVar12;
                                }
                                else {
                                  bVar4 = INI_Reader::is_value
                                                    ((INI_Reader *)&stack0x00000058,"texture");
                                  if (bVar4) {
                                    INI_Reader::get_value_string((INI_Reader *)&stack0x00000058);
                                    in_stack_00000040 = '\0';
                                    FUN_00427020();
                                    if ((DAT_00674f28 == DAT_00674f38) ||
                                       (iVar8 = _stricmp((char *)(DAT_00674f38 + 0x10),
                                                         &stack0x00000040), iVar8 != 0)) {
                                      piVar9 = (int *)FUN_004206c0();
                                      DAT_00674f38 = *piVar9;
                                    }
                                    if ((DAT_00674f38 == DAT_00674f28) || (DAT_00674f38 == -0x28)) {
                                      (**(code **)FDUMP_exref)();
                                      INI_Reader::get_value_string((INI_Reader *)&stack0x00000058);
                                      (**(code **)FDUMP_exref)();
                                    }
                                    else {
                                      FUN_00425680();
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
                  bVar4 = INI_Reader::read_value((INI_Reader *)&stack0x00000058);
                } while (bVar4);
              }
            }
            else {
              ID_String::get_string((ID_String *)((int)local_c + 4));
              (**(code **)FDUMP_exref)();
            }
          }
        }
        bVar4 = INI_Reader::read_header((INI_Reader *)&stack0x00000058);
      } while (bVar4);
    }
  }
  uVar6 = *(uint *)npos_exref;
  if (((in_stack_00001484 != (char *)0x0) && (in_stack_00001484[-1] != '\0')) &&
     (in_stack_00001484[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001480,
               true);
    uVar10 = 0xffffffff;
    pcVar5 = in_stack_00001484;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001480,
               in_stack_00001484,~uVar10 - 1);
  }
  if (in_stack_00001488 < uVar6) {
    uVar6 = in_stack_00001488;
  }
  if (uVar6 != 0) {
    memmove(in_stack_00001484,in_stack_00001484 + uVar6,in_stack_00001488 - uVar6);
    bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x00001480,in_stack_00001488 - uVar6,false);
    if (bVar4) {
      in_stack_00001484[in_stack_00001488 - uVar6] = '\0';
    }
  }
  if (in_stack_00001490 != (HANDLE)0xffffffff) {
    if (in_stack_00001494 != (HANDLE)0x0) {
      if (in_stack_00001498 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001498);
        in_stack_00001498 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001494);
    }
    CloseHandle(in_stack_00001490);
  }
  if (in_stack_00001498 != (void *)0x0) {
    free(in_stack_00001498);
  }
  if (in_stack_00001484 != (char *)0x0) {
    cVar2 = in_stack_00001484[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005b7e1d();
    }
    else {
      in_stack_00001484[-1] = cVar2 + -1;
    }
  }
  pcVar5 = in_stack_0000005c;
  uVar6 = *(uint *)npos_exref;
  if (((in_stack_0000005c != (char *)0x0) && (in_stack_0000005c[-1] != '\0')) &&
     (in_stack_0000005c[-1] != -1)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000058,
               true);
    uVar10 = std::char_traits<char>::length(pcVar5);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000058,
               pcVar5,uVar10);
  }
  if (in_stack_00000060 < uVar6) {
    uVar6 = in_stack_00000060;
  }
  if (uVar6 == 0) goto LAB_004fece3;
  memmove(in_stack_0000005c,in_stack_0000005c + uVar6,in_stack_00000060 - uVar6);
  uVar6 = in_stack_00000060 - uVar6;
  uVar10 = FUN_00450870();
  if (uVar10 < 3) {
    uVar10 = 1;
  }
  else {
    uVar10 = uVar10 - 2;
  }
  if (uVar10 < uVar6) {
    std::_Xlen();
  }
  if (((in_stack_0000005c == (char *)0x0) || (cVar2 = in_stack_0000005c[-1], cVar2 == '\0')) ||
     (cVar2 == -1)) {
    if (uVar6 == 0) {
      if (in_stack_0000005c != (char *)0x0) {
        in_stack_00000060 = 0;
        std::char_traits<char>::assign(in_stack_0000005c,&stack0x00000003);
      }
      goto LAB_004fece3;
    }
    if (in_stack_00000064 < uVar6) goto LAB_004fecc8;
  }
  else {
    if (uVar6 == 0) {
      in_stack_0000005c[-1] = cVar2 + -1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000058
                 ,false);
      goto LAB_004fece3;
    }
LAB_004fecc8:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000058,
               uVar6);
  }
  in_stack_0000005c[uVar6] = '\0';
  in_stack_00000060 = uVar6;
LAB_004fece3:
  if (in_stack_00000068 != (HANDLE)0xffffffff) {
    if (in_stack_0000006c != (HANDLE)0x0) {
      if (in_stack_00000070 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00000070);
        in_stack_00000070 = (LPCVOID)0x0;
        in_stack_00000074 = 0;
      }
      CloseHandle(in_stack_0000006c);
      in_stack_0000006c = (HANDLE)0x0;
    }
    CloseHandle(in_stack_00000068);
    in_stack_00000068 = (HANDLE)0xffffffff;
  }
  if (in_stack_00000070 != (void *)0x0) {
    free(in_stack_00000070);
    in_stack_00000070 = (void *)0x0;
    in_stack_00000074 = 0;
  }
  in_stack_00000078 = 0;
  if (in_stack_0000005c != (char *)0x0) {
    cVar2 = in_stack_0000005c[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      in_stack_0000005c[-1] = cVar2 + -1;
      ExceptionList = in_stack_000015c0;
      return 0;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_000015c0;
  return 0;
}

