
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553740(void)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  code *pcVar11;
  char *pcVar12;
  int *piVar13;
  char in_stack_00000018;
  uint in_stack_00000058;
  char in_stack_0000005c;
  uint in_stack_0000009c;
  char in_stack_000000a0;
  uint in_stack_000001a0;
  char in_stack_000001a4;
  void *in_stack_000002a8;
  uint in_stack_000002ac;
  HANDLE in_stack_000002b4;
  HANDLE in_stack_000002b8;
  void *in_stack_000002bc;
  int in_stack_000016d0;
  HANDLE in_stack_000016dc;
  HANDLE in_stack_000016e0;
  void *in_stack_000016e4;
  void *in_stack_0000180c;
  char *in_stack_0000181c;
  undefined4 uStack_c;
  Ship *local_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  local_8 = (Ship *)&LAB_005c143f;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  FUN_00540e90();
  FUN_00410130();
  uStack_c = (void *)((uint)uStack_c & 0xffffff);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x000002a4);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x000002a4,in_stack_0000181c,false);
  if (bVar2) {
    bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000002a4);
    pcVar11 = get_value_string_exref;
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"System");
        if ((bVar2) ||
           (bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"SystemInfo"), bVar2)) {
          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
          if (bVar2) {
            do {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"space_color");
              if (bVar2) {
                INI_Reader::get_value_float((INI_Reader *)&stack0x000002a4,0);
                DAT_006140b4 = ftol();
                INI_Reader::get_value_float((INI_Reader *)&stack0x000002a4,1);
                DAT_006140b5 = ftol();
                INI_Reader::get_value_float((INI_Reader *)&stack0x000002a4,2);
                DAT_006140b6 = ftol();
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"space_farclip");
                if (bVar2) {
                  INI_Reader::get_value_float((INI_Reader *)&stack0x000002a4,0);
                  FUN_00410150();
                }
              }
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
            } while (bVar2);
          }
        }
        else {
          bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"Music");
          if (bVar2) {
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
            if (bVar2) {
              do {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"space");
                if (bVar2) {
                  pcVar4 = (char *)(*pcVar11)();
                  DAT_006798f4 = CreateID(pcVar4);
                }
                else {
                  bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"danger");
                  if (bVar2) {
                    pcVar4 = (char *)(*pcVar11)();
                    DAT_006798f0 = CreateID(pcVar4);
                  }
                  else {
                    bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"battle");
                    if (bVar2) {
                      pcVar4 = (char *)(*pcVar11)();
                      DAT_006798ec = CreateID(pcVar4);
                    }
                    else {
                      bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"explore");
                      if (bVar2) {
                        (**(code **)FDUMP_exref)();
                      }
                    }
                  }
                }
                bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
              } while (bVar2);
            }
          }
          else {
            bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"Archetype");
            if (bVar2) {
              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
              pcVar9 = is_value_exref;
              if (bVar2) {
                do {
                  pcVar4 = (char *)(*pcVar11)();
                  cVar3 = (*pcVar9)();
                  if (cVar3 == '\0') {
                    bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"voice");
                    if (bVar2) {
                      pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x000002a4,0);
                      CreateID(pcVar4);
                      pcVar4 = INI_Reader::get_value_string((INI_Reader *)&stack0x000002a4,1);
                      CreateID(pcVar4);
                      FUN_00553590();
                      pcVar9 = is_value_exref;
                    }
                    else {
                      local_4 = CreateID(pcVar4);
                      pcVar9 = is_value_exref;
                      local_8 = (Ship *)0x0;
                      bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"ship");
                      if (bVar2) {
                        local_8 = Archetype::GetShipByName((ID_String *)&local_4);
                      }
                      else {
                        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"equipment");
                        if (bVar2) {
                          local_8 = (Ship *)Archetype::GetEquipmentByName((ID_String *)&local_4);
                        }
                        else {
                          bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"simple");
                          if (bVar2) {
                            local_8 = (Ship *)Archetype::GetSimpleByName((ID_String *)&local_4);
                          }
                          else {
                            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"solar");
                            if (bVar2) {
                              local_8 = (Ship *)Archetype::GetSolarByName((ID_String *)&local_4);
                            }
                            else {
                              bVar2 = INI_Reader::is_value
                                                ((INI_Reader *)&stack0x000002a4,"asteroid");
                              if (bVar2) {
                                local_8 = (Ship *)Archetype::GetAsteroidByName
                                                            ((ID_String *)&local_4);
                              }
                              else {
                                INI_Reader::get_line_ptr((INI_Reader *)&stack0x000002a4);
                                (**(code **)FDUMP_exref)();
                              }
                            }
                          }
                        }
                      }
                      if (local_8 == (Ship *)0x0) {
                        FUN_00411c50();
                        INI_Reader::get_line_ptr((INI_Reader *)&stack0x000002a4);
                        (**(code **)FDUMP_exref)();
                      }
                      else {
                        (**(code **)(*(int *)local_8 + 0xc))();
                        if (*(int **)(local_8 + 4) != (int *)0x0) {
                          (**(code **)(**(int **)(local_8 + 4) + 0x20))();
                        }
                        FUN_005556b0();
                      }
                    }
                  }
                  else {
                    CreateID(pcVar4);
                    FUN_00427a10();
                    CreateID(pcVar4);
                    FUN_005947a0();
                    pcVar9 = is_value_exref;
                  }
                  bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                } while (bVar2);
              }
            }
            else {
              bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"Ambient");
              if (bVar2) {
                bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                if (bVar2) {
                  do {
                    bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"color");
                    if (bVar2) {
                      INI_Reader::get_value_float((INI_Reader *)&stack0x000002a4,0);
                      DAT_006798f8 = ftol();
                      INI_Reader::get_value_float((INI_Reader *)&stack0x000002a4,1);
                      DAT_006798f9 = ftol();
                      INI_Reader::get_value_float((INI_Reader *)&stack0x000002a4,2);
                      DAT_006798fa = ftol();
                    }
                    bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                  } while (bVar2);
                }
              }
              else {
                bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"Background");
                if (bVar2) {
                  _DAT_00679924 = StringAlloc("",false);
                  _DAT_00679938 = StringAlloc("",false);
                  _DAT_00679910 = StringAlloc("",false);
                  bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                  if (bVar2) {
                    do {
                      bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"basic_stars");
                      if (bVar2) {
                        pcVar4 = (char *)(*pcVar11)();
                        _DAT_00679924 = StringAlloc(pcVar4,false);
                      }
                      else {
                        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"complex_stars")
                        ;
                        if (bVar2) {
LAB_00553ccc:
                          pcVar4 = (char *)(*pcVar11)();
                          _DAT_00679938 = StringAlloc(pcVar4,false);
                        }
                        else {
                          bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"nebulae");
                          if (bVar2) {
                            pcVar4 = (char *)(*pcVar11)();
                            _DAT_00679910 = StringAlloc(pcVar4,false);
                          }
                          else {
                            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"file");
                            if (bVar2) goto LAB_00553ccc;
                          }
                        }
                      }
                      bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                    } while (bVar2);
                  }
                }
                else {
                  bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"Dust");
                  if (bVar2) {
                    CacheString::clear((CacheString *)&stack0x00000000);
                    bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                    if (bVar2) {
                      do {
                        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"spacedust");
                        if (bVar2) {
                          pcVar4 = (char *)(*pcVar11)();
                          StringAlloc(pcVar4,false);
                        }
                        bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                      } while (bVar2);
                    }
                    FUN_0054bde0();
                  }
                  else {
                    bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"LightSource");
                    if (bVar2) {
                      iVar5 = FUN_00537a90();
                      if (iVar5 != 0) {
                        FUN_005374e0();
                      }
                      FUN_00537a40();
                      FUN_00537ad0();
                    }
                    else {
                      bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"Object");
                      if (bVar2) {
                        FUN_00548a20();
                      }
                      else {
                        bVar2 = INI_Reader::is_header
                                          ((INI_Reader *)&stack0x000002a4,"TexturePanels");
                        if (bVar2) {
                          bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                          if (bVar2) {
                            do {
                              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"file");
                              if (bVar2) {
                                pcVar4 = (char *)(*pcVar11)();
                                GetFullFilename(pcVar4);
                                FUN_00425b30();
                              }
                              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                            } while (bVar2);
                          }
                        }
                        else {
                          bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"Asteroids");
                          if (bVar2) {
                            if (uStack_c._3_1_ == '\0') {
                              if (DAT_00679954 == (undefined4 *)0x0) {
                                uVar6 = 0;
                              }
                              else {
                                uVar6 = (**(code **)*DAT_00679954)();
                              }
                              CmnAsteroid::Load(uVar6);
                              uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
                            }
                            in_stack_0000009c = 0;
                            in_stack_000000a0 = '\0';
                            in_stack_00000018 = '\0';
                            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                            if (bVar2) {
                              do {
                                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000002a4,"file");
                                if (bVar2) {
                                  pcVar4 = (char *)(*pcVar11)();
                                  if (pcVar4 == (char *)0x0) {
                                    in_stack_0000009c = 0;
                                    in_stack_000000a0 = '\0';
                                  }
                                  else {
                                    uVar6 = 0xffffffff;
                                    pcVar12 = pcVar4;
                                    do {
                                      if (uVar6 == 0) break;
                                      uVar6 = uVar6 - 1;
                                      cVar3 = *pcVar12;
                                      pcVar12 = pcVar12 + 1;
                                    } while (cVar3 != '\0');
                                    in_stack_0000009c = ~uVar6 - 1;
                                    if (0xff < in_stack_0000009c) {
                                      in_stack_0000009c = 0xff;
                                    }
                                    pcVar12 = &stack0x000000a0;
                                    for (uVar6 = in_stack_0000009c >> 2; uVar6 != 0;
                                        uVar6 = uVar6 - 1) {
                                      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
                                      pcVar4 = pcVar4 + 4;
                                      pcVar12 = pcVar12 + 4;
                                    }
                                    for (uVar6 = in_stack_0000009c & 3; uVar6 != 0;
                                        uVar6 = uVar6 - 1) {
                                      *pcVar12 = *pcVar4;
                                      pcVar4 = pcVar4 + 1;
                                      pcVar12 = pcVar12 + 1;
                                    }
                                    (&stack0x000000a0)[in_stack_0000009c] = 0;
                                  }
                                }
                                else {
                                  bVar2 = INI_Reader::is_value
                                                    ((INI_Reader *)&stack0x000002a4,"zone");
                                  if (bVar2) {
                                    pcVar4 = (char *)(*pcVar11)();
                                    if (pcVar4 == (char *)0x0) {
                                      in_stack_00000018 = '\0';
                                    }
                                    else {
                                      uVar6 = 0xffffffff;
                                      pcVar12 = pcVar4;
                                      do {
                                        if (uVar6 == 0) break;
                                        uVar6 = uVar6 - 1;
                                        cVar3 = *pcVar12;
                                        pcVar12 = pcVar12 + 1;
                                      } while (cVar3 != '\0');
                                      uVar6 = ~uVar6 - 1;
                                      if (0x3f < uVar6) {
                                        uVar6 = 0x3f;
                                      }
                                      pcVar12 = &stack0x00000018;
                                      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                                        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
                                        pcVar4 = pcVar4 + 4;
                                        pcVar12 = pcVar12 + 4;
                                      }
                                      for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                                        *pcVar12 = *pcVar4;
                                        pcVar4 = pcVar4 + 1;
                                        pcVar12 = pcVar12 + 1;
                                      }
                                      (&stack0x00000018)[uVar6] = 0;
                                    }
                                  }
                                }
                                bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                              } while (bVar2);
                            }
                            FUN_0051ff50();
                          }
                          else {
                            bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000002a4,"Nebula");
                            if (bVar2) {
                              in_stack_000001a0 = 0;
                              in_stack_000001a4 = '\0';
                              in_stack_00000058 = 0;
                              in_stack_0000005c = '\0';
                              bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                              if (bVar2) {
                                puVar10 = (undefined4 *)0x0;
                                do {
                                  bVar2 = INI_Reader::is_value
                                                    ((INI_Reader *)&stack0x000002a4,"file");
                                  if (bVar2) {
                                    pcVar4 = (char *)(*pcVar11)();
                                    if (pcVar4 == (char *)0x0) {
                                      in_stack_000001a0 = 0;
                                      in_stack_000001a4 = '\0';
                                      puVar10 = (undefined4 *)FUN_00509b00();
                                    }
                                    else {
                                      uVar6 = 0xffffffff;
                                      pcVar12 = pcVar4;
                                      do {
                                        if (uVar6 == 0) break;
                                        uVar6 = uVar6 - 1;
                                        cVar3 = *pcVar12;
                                        pcVar12 = pcVar12 + 1;
                                      } while (cVar3 != '\0');
                                      in_stack_000001a0 = ~uVar6 - 1;
                                      if (0xff < in_stack_000001a0) {
                                        in_stack_000001a0 = 0xff;
                                      }
                                      pcVar12 = &stack0x000001a4;
                                      for (uVar6 = in_stack_000001a0 >> 2; uVar6 != 0;
                                          uVar6 = uVar6 - 1) {
                                        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
                                        pcVar4 = pcVar4 + 4;
                                        pcVar12 = pcVar12 + 4;
                                      }
                                      for (uVar6 = in_stack_000001a0 & 3; uVar6 != 0;
                                          uVar6 = uVar6 - 1) {
                                        *pcVar12 = *pcVar4;
                                        pcVar4 = pcVar4 + 1;
                                        pcVar12 = pcVar12 + 1;
                                      }
                                      (&stack0x000001a4)[in_stack_000001a0] = 0;
                                      puVar10 = (undefined4 *)FUN_00509b00();
                                    }
                                  }
                                  else {
                                    bVar2 = INI_Reader::is_value
                                                      ((INI_Reader *)&stack0x000002a4,"zone");
                                    if (bVar2) {
                                      pcVar4 = (char *)(*pcVar11)();
                                      if (pcVar4 == (char *)0x0) {
                                        in_stack_00000058 = 0;
                                        in_stack_0000005c = '\0';
                                      }
                                      else {
                                        uVar6 = 0xffffffff;
                                        pcVar12 = pcVar4;
                                        do {
                                          if (uVar6 == 0) break;
                                          uVar6 = uVar6 - 1;
                                          cVar3 = *pcVar12;
                                          pcVar12 = pcVar12 + 1;
                                        } while (cVar3 != '\0');
                                        in_stack_00000058 = ~uVar6 - 1;
                                        if (0x3f < in_stack_00000058) {
                                          in_stack_00000058 = 0x3f;
                                        }
                                        pcVar12 = &stack0x0000005c;
                                        for (uVar6 = in_stack_00000058 >> 2; uVar6 != 0;
                                            uVar6 = uVar6 - 1) {
                                          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
                                          pcVar4 = pcVar4 + 4;
                                          pcVar12 = pcVar12 + 4;
                                        }
                                        for (uVar6 = in_stack_00000058 & 3; uVar6 != 0;
                                            uVar6 = uVar6 - 1) {
                                          *pcVar12 = *pcVar4;
                                          pcVar4 = pcVar4 + 1;
                                          pcVar12 = pcVar12 + 1;
                                        }
                                        (&stack0x0000005c)[in_stack_00000058] = 0;
                                      }
                                    }
                                  }
                                  bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000002a4);
                                } while (bVar2);
                                if (puVar10 != (undefined4 *)0x0) {
                                  (**(code **)*puVar10)();
                                  iVar5 = DAT_006798c8;
                                  piVar13 = *(int **)(DAT_006798c8 + 4);
                                  puVar1 = (undefined4 *)(DAT_006798c8 + 4);
                                  piVar7 = operator_new(0xc);
                                  *piVar7 = iVar5;
                                  if (piVar13 == (int *)0x0) {
                                    piVar13 = piVar7;
                                  }
                                  piVar7[1] = (int)piVar13;
                                  *puVar1 = piVar7;
                                  *(int **)piVar7[1] = piVar7;
                                  if (piVar7 + 2 != (int *)0x0) {
                                    piVar7[2] = (int)puVar10;
                                  }
                                  DAT_006798cc = DAT_006798cc + 1;
                                  pcVar11 = get_value_string_exref;
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
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000002a4);
      } while (bVar2);
    }
    INI_Reader::close((INI_Reader *)&stack0x000002a4);
  }
  else {
    (**(code **)FDUMP_exref)();
  }
  FUN_00540eb0();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000016cc,0,
             *(uint *)npos_exref);
  if (in_stack_000016dc != (HANDLE)0xffffffff) {
    if (in_stack_000016e0 != (HANDLE)0x0) {
      if (in_stack_000016e4 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000016e4);
        in_stack_000016e4 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_000016e0);
    }
    CloseHandle(in_stack_000016dc);
  }
  if (in_stack_000016e4 != (void *)0x0) {
    free(in_stack_000016e4);
  }
  if (in_stack_000016d0 != 0) {
    cVar3 = *(char *)(in_stack_000016d0 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_000016d0 + -1) = cVar3 + -1;
    }
  }
  uVar6 = *(uint *)npos_exref;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000002a4);
  if (in_stack_000002ac < uVar6) {
    uVar6 = in_stack_000002ac;
  }
  if (uVar6 != 0) {
    memmove(in_stack_000002a8,(void *)((int)in_stack_000002a8 + uVar6),in_stack_000002ac - uVar6);
    bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &stack0x000002a4,in_stack_000002ac - uVar6,false);
    if (bVar2) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000002a4
                 ,in_stack_000002ac - uVar6);
    }
  }
  if (in_stack_000002b4 != (HANDLE)0xffffffff) {
    if (in_stack_000002b8 != (HANDLE)0x0) {
      if (in_stack_000002bc != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000002bc);
        in_stack_000002bc = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_000002b8);
    }
    CloseHandle(in_stack_000002b4);
  }
  if (in_stack_000002bc != (void *)0x0) {
    free(in_stack_000002bc);
  }
  if (in_stack_000002a8 != (void *)0x0) {
    cVar3 = *(char *)((int)in_stack_000002a8 + -1);
    if ((cVar3 != '\0') && (cVar3 != -1)) {
      *(char *)((int)in_stack_000002a8 + -1) = cVar3 + -1;
      ExceptionList = in_stack_0000180c;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_0000180c;
  return;
}

