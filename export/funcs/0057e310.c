
void FUN_0057e310(void)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  JustifyNode *this;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined1 *in_stack_00000020;
  int in_stack_00000024;
  undefined1 uStack00000028;
  undefined1 uStack00000029;
  undefined1 uStack0000002a;
  undefined4 in_stack_0000005c;
  undefined1 in_stack_00000060;
  HANDLE in_stack_000000f0;
  HANDLE in_stack_000000f4;
  LPCVOID in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  HANDLE in_stack_00001518;
  HANDLE in_stack_0000151c;
  void *in_stack_00001520;
  void *in_stack_0000174c;
  char *in_stack_0000175c;
  IFileSystem *in_stack_00001760;
  void *local_c;
  undefined4 *local_8;
  int local_4;
  
  local_4 = 0xffffffff;
  local_8 = (undefined4 *)&LAB_005c4157;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005b7e90();
  GetFileSysPath(&stack0x00001648,in_stack_0000175c,in_stack_00001760);
  INI_Reader::INI_Reader((INI_Reader *)&stack0x000000e0);
  bVar3 = INI_Reader::open((INI_Reader *)&stack0x000000e0,&stack0x00001648,false);
  if ((bVar3) && (bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x000000e0), bVar3)) {
    do {
      bVar3 = INI_Reader::is_header((INI_Reader *)&stack0x000000e0,"TrueType");
      if (bVar3) {
        in_stack_0000005c = 0;
        in_stack_00000060 = 0;
        bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x000000e0);
        if (bVar3) {
          do {
            bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x000000e0,"font");
            if (bVar3) {
              uVar4 = INI_Reader::get_value_int((INI_Reader *)&stack0x000000e0,0);
              pcVar5 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000e0,1);
              if (pcVar5 == (char *)0x0) {
                in_stack_0000005c = 0;
                in_stack_00000060 = 0;
              }
              else {
                in_stack_0000005c = FUN_00417c50();
              }
              in_stack_00000020 = &stack0x00000060;
              in_stack_00000024 = INI_Reader::get_value_int((INI_Reader *)&stack0x000000e0,2);
              uStack00000028 = 0;
              uStack00000029 = 0;
              uStack0000002a = 0;
              if (uVar4 < 0x20) {
                SetStandardFont(uVar4,(FontDesc *)&stack0x00000020);
              }
            }
            bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x000000e0);
          } while (bVar3);
        }
      }
      else {
        bVar3 = INI_Reader::is_header((INI_Reader *)&stack0x000000e0,"Style");
        if (bVar3) {
          local_c = (void *)CONCAT31(local_c._1_3_,in_stack_00000018._3_1_);
          uVar4 = 0;
          local_8 = (undefined4 *)FUN_0042a7e0();
          local_4 = 0;
          bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x000000e0);
          if (bVar3) {
            do {
              bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x000000e0,"name");
              if (bVar3) {
                pbVar6 = (byte *)INI_Reader::get_value_string((INI_Reader *)&stack0x000000e0);
                uVar12 = 0xffffffff;
                pbVar13 = pbVar6;
                do {
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  bVar1 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                } while (bVar1 != 0);
                uVar12 = ~uVar12;
                in_stack_0000001c = 0xffff;
                while (uVar12 = uVar12 - 1, uVar12 != 0) {
                  in_stack_0000001c =
                       (uint)*pbVar6 ^
                       (uint)CONCAT11((char)in_stack_0000001c,(char)(in_stack_0000001c >> 8));
                  in_stack_0000001c = in_stack_0000001c ^ in_stack_0000001c >> 4 & 0xf;
                  in_stack_0000001c = in_stack_0000001c ^ in_stack_0000001c << 0xc;
                  in_stack_0000001c = in_stack_0000001c ^ (in_stack_0000001c & 0xff) << 5;
                  pbVar6 = pbVar6 + 1;
                }
              }
              else {
                bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x000000e0,"font");
                if (bVar3) {
                  INI_Reader::get_value_int((INI_Reader *)&stack0x000000e0,0);
                  uVar4 = uVar4 | 0xf8;
                }
                else {
                  bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x000000e0,"bold");
                  if (bVar3) {
                    INI_Reader::get_value_bool((INI_Reader *)&stack0x000000e0,0);
                    uVar4 = uVar4 | 1;
                  }
                  else {
                    bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x000000e0,"italic");
                    if (bVar3) {
                      INI_Reader::get_value_bool((INI_Reader *)&stack0x000000e0,0);
                      uVar4 = uVar4 | 2;
                    }
                    else {
                      bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x000000e0,"underline");
                      if (bVar3) {
                        INI_Reader::get_value_bool((INI_Reader *)&stack0x000000e0,0);
                        uVar4 = uVar4 | 4;
                      }
                      else {
                        bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x000000e0,"color");
                        if (bVar3) {
                          INI_Reader::get_value_int((INI_Reader *)&stack0x000000e0,0);
                          INI_Reader::get_value_int((INI_Reader *)&stack0x000000e0,1);
                          INI_Reader::get_value_int((INI_Reader *)&stack0x000000e0,2);
                          uVar4 = uVar4 | 0xffffff00;
                        }
                        else {
                          bVar3 = INI_Reader::is_value((INI_Reader *)&stack0x000000e0,"justify");
                          if (bVar3) {
                            pcVar5 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000e0);
                            iVar7 = stricmp(pcVar5,"left");
                            if (iVar7 == 0) {
                              piVar9 = (int *)JustifyNode::JustifyNode
                                                        ((JustifyNode *)&stack0x0000002c,0);
                              puVar8 = (undefined4 *)(**(code **)(*piVar9 + 0x1c))();
                              piVar9 = local_8 + 1;
                              iVar7 = FUN_0042a7e0();
                              *piVar9 = iVar7;
                              **(int **)(iVar7 + 4) = iVar7;
                              FUN_0046ea00();
                              local_4 = local_4 + 1;
                              if (puVar8 != (undefined4 *)0x0) {
                                (**(code **)*puVar8)();
                              }
                              this = (JustifyNode *)&stack0x0000002c;
                            }
                            else {
                              iVar7 = stricmp(pcVar5,"center");
                              if (iVar7 == 0) {
                                piVar9 = (int *)JustifyNode::JustifyNode
                                                          ((JustifyNode *)&stack0x00000040,1);
                                puVar8 = (undefined4 *)(**(code **)(*piVar9 + 0x1c))();
                                piVar9 = local_8 + 1;
                                iVar7 = FUN_0042a7e0();
                                *piVar9 = iVar7;
                                **(int **)(iVar7 + 4) = iVar7;
                                FUN_0046ea00();
                                local_4 = local_4 + 1;
                                if (puVar8 != (undefined4 *)0x0) {
                                  (**(code **)*puVar8)();
                                }
                                this = (JustifyNode *)&stack0x00000040;
                              }
                              else {
                                iVar7 = stricmp(pcVar5,"right");
                                if (iVar7 != 0) goto LAB_0057e869;
                                piVar9 = (int *)JustifyNode::JustifyNode
                                                          ((JustifyNode *)&stack0x00000038,2);
                                puVar8 = (undefined4 *)(**(code **)(*piVar9 + 0x1c))();
                                piVar9 = local_8 + 1;
                                iVar7 = FUN_0042a7e0();
                                *piVar9 = iVar7;
                                **(int **)(iVar7 + 4) = iVar7;
                                FUN_0046ea00();
                                local_4 = local_4 + 1;
                                if (puVar8 != (undefined4 *)0x0) {
                                  (**(code **)*puVar8)();
                                }
                                this = (JustifyNode *)&stack0x00000038;
                              }
                            }
                            JustifyNode::~JustifyNode(this);
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_0057e869:
              bVar3 = INI_Reader::read_value((INI_Reader *)&stack0x000000e0);
            } while (bVar3);
          }
          piVar9 = (int *)TRANode::TRANode((TRANode *)&stack0x00000048,
                                           (TextRenderAttributes *)&stack0x00000000,uVar4,0);
          puVar10 = (undefined4 *)(**(code **)(*piVar9 + 0x1c))();
          puVar2 = local_8;
          puVar14 = (undefined4 *)local_8[1];
          puVar8 = local_8 + 1;
          puVar11 = operator_new(0xc);
          *puVar11 = puVar2;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = puVar11;
          }
          puVar11[1] = puVar14;
          *puVar8 = puVar11;
          *(undefined4 **)puVar11[1] = puVar11;
          FUN_0046ea00();
          local_4 = local_4 + 1;
          if (puVar10 != (undefined4 *)0x0) {
            (**(code **)*puVar10)();
          }
          TRANode::~TRANode((TRANode *)&stack0x00000048);
          StyleCollection::set_style((ushort)in_stack_0000001c,(RenderDisplayList *)&local_c);
          puVar14 = local_8;
          puVar8 = (undefined4 *)*local_8;
          while (puVar8 != puVar14) {
            puVar8 = (undefined4 *)*puVar8;
            FUN_0046d680();
          }
          FUN_005b7e1d();
          local_8 = (undefined4 *)0x0;
          local_4 = 0;
        }
      }
      bVar3 = INI_Reader::read_header((INI_Reader *)&stack0x000000e0);
    } while (bVar3);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001508,0,
             *(uint *)npos_exref);
  if (in_stack_00001518 != (HANDLE)0xffffffff) {
    if (in_stack_0000151c != (HANDLE)0x0) {
      if (in_stack_00001520 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001520);
        in_stack_00001520 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_0000151c);
    }
    CloseHandle(in_stack_00001518);
  }
  if (in_stack_00001520 != (void *)0x0) {
    free(in_stack_00001520);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00001508,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000000e0,0,
             *(uint *)npos_exref);
  if (in_stack_000000f0 != (HANDLE)0xffffffff) {
    if (in_stack_000000f4 != (HANDLE)0x0) {
      if (in_stack_000000f8 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_000000f8);
        in_stack_000000f8 = (LPCVOID)0x0;
        in_stack_000000fc = 0;
      }
      CloseHandle(in_stack_000000f4);
      in_stack_000000f4 = (HANDLE)0x0;
    }
    CloseHandle(in_stack_000000f0);
    in_stack_000000f0 = (HANDLE)0xffffffff;
  }
  if (in_stack_000000f8 != (void *)0x0) {
    free(in_stack_000000f8);
    in_stack_000000f8 = (void *)0x0;
    in_stack_000000fc = 0;
  }
  in_stack_00000100 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x000000e0,
             true);
  ExceptionList = in_stack_0000174c;
  return;
}

