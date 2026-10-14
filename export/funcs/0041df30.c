
void FUN_0041df30(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  code *pcVar14;
  float10 extraout_ST0;
  float fVar15;
  int in_stack_00000208;
  HANDLE in_stack_00000214;
  HANDLE in_stack_00000218;
  void *in_stack_0000021c;
  HANDLE in_stack_0000163c;
  HANDLE in_stack_00001640;
  void *in_stack_00001644;
  void *in_stack_0000176c;
  char *in_stack_0000177c;
  int *in_stack_00001780;
  undefined8 uStack_c;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_c = (double)CONCAT44(&LAB_005b8abd,ExceptionList);
  ExceptionList = &uStack_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x00000204);
  if (in_stack_00001780 == (int *)0x0) {
    iVar5 = -(int)in_stack_0000177c;
    do {
      cVar2 = *in_stack_0000177c;
      in_stack_0000177c[(int)(&stack0x00000100 + iVar5)] = cVar2;
      in_stack_0000177c = in_stack_0000177c + 1;
    } while (cVar2 != '\0');
  }
  else {
    (**(code **)(*in_stack_00001780 + 0x84))();
    _makepath(&stack0x00000100,(char *)0x0,(char *)&local_4,in_stack_0000177c,(char *)0x0);
  }
  bVar1 = INI_Reader::open((INI_Reader *)&stack0x00000204,&stack0x00000100,false);
  if ((bVar1) && (bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x00000204), bVar1)) {
    do {
      bVar1 = INI_Reader::is_header((INI_Reader *)&stack0x00000204,"Cursor");
      if ((bVar1) && (bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000204), bVar1)) {
        do {
          pcVar14 = is_value_exref;
          bVar1 = INI_Reader::is_value((INI_Reader *)&stack0x00000204,"nickname");
          if (bVar1) {
            INI_Reader::get_value_string((INI_Reader *)&stack0x00000204,0);
            pvVar4 = operator_new(0x90);
            uStack_c = (double)CONCAT44(uStack_c._4_4_,pvVar4);
            if (pvVar4 == (void *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_0041e550();
            }
            FUN_00420750();
            if (DAT_00616740 < 0x14) {
              (&DAT_00616744)[DAT_00616740] = iVar5;
              DAT_00616740 = DAT_00616740 + 1;
            }
            if ((iVar5 != 0) &&
               (bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000204), bVar1)) {
              do {
                cVar2 = (*pcVar14)();
                if (cVar2 == '\0') {
                  cVar2 = (*pcVar14)();
                  if (cVar2 == '\0') {
                    cVar2 = (*pcVar14)();
                    if (cVar2 == '\0') {
                      cVar2 = (*pcVar14)();
                      if (cVar2 == '\0') {
                        cVar2 = (*pcVar14)();
                        if (cVar2 == '\0') {
                          cVar2 = (*pcVar14)();
                          if (cVar2 == '\0') {
                            cVar2 = (*pcVar14)();
                            if (cVar2 == '\0') {
                              cVar2 = (*pcVar14)();
                              if (cVar2 != '\0') {
                                fVar15 = INI_Reader::get_value_float
                                                   ((INI_Reader *)&stack0x00000204,0);
                                *(float *)(iVar5 + 0x54) = fVar15;
                              }
                            }
                            else {
                              fVar15 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,0)
                              ;
                              *(float *)(iVar5 + 0x5c) = fVar15;
                            }
                          }
                          else {
                            fVar15 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,0);
                            *(float *)(iVar5 + 0x58) = fVar15;
                          }
                        }
                        else {
                          pcVar6 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000204,0);
                          local_4 = 0;
                          if (pcVar6 == (char *)0x0) {
                            local_4 = 0;
                          }
                          else {
                            local_4 = FUN_00417c50();
                          }
                          fVar15 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,1);
                          uStack_c = (double)fVar15;
                          INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,2);
                          uVar10 = 0xffffffff;
                          pcVar6 = (char *)register0x00000010;
                          do {
                            if (uVar10 == 0) break;
                            uVar10 = uVar10 - 1;
                            cVar2 = *pcVar6;
                            pcVar6 = pcVar6 + 1;
                          } while (cVar2 != '\0');
                          uVar10 = ~uVar10 - 1;
                          if (0x1f < uVar10) {
                            uVar10 = 0x1f;
                          }
                          puVar12 = (undefined4 *)register0x00000010;
                          puVar13 = (undefined4 *)(iVar5 + 0x70);
                          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                            *puVar13 = *puVar12;
                            puVar12 = puVar12 + 1;
                            puVar13 = puVar13 + 1;
                          }
                          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                            *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
                            puVar12 = (undefined4 *)((int)puVar12 + 1);
                            puVar13 = (undefined4 *)((int)puVar13 + 1);
                          }
                          *(undefined1 *)(uVar10 + iVar5 + 0x70) = 0;
                          *(uint *)(iVar5 + 0x6c) = uVar10;
                          uVar7 = ftol();
                          pcVar14 = is_value_exref;
                          *(float *)(iVar5 + 0x68) = (float)extraout_ST0;
                          *(undefined4 *)(iVar5 + 0x60) = uVar7;
                        }
                      }
                      else {
                        INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,0);
                        iVar8 = ftol();
                        INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,1);
                        iVar9 = ftol();
                        INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,2);
                        uVar7 = ftol();
                        uStack_c = (double)CONCAT44(uStack_c._4_4_,uVar7);
                        INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,3);
                        ftol();
                        if (iVar8 < 0) {
                          iVar8 = 0;
                        }
                        else if (0xff < iVar8) {
                          iVar8 = 0xff;
                        }
                        *(char *)(iVar5 + 0x4c) = (char)iVar8;
                        uVar3 = (undefined1)iVar9;
                        if (iVar9 < 0) {
                          uVar3 = 0;
                        }
                        else if (0xff < iVar9) {
                          uVar3 = 0xff;
                        }
                        *(undefined1 *)(iVar5 + 0x4d) = uVar3;
                        uVar3 = FUN_0041e5a0();
                        *(undefined1 *)(iVar5 + 0x4e) = uVar3;
                        uVar3 = FUN_0041e5a0();
                        pcVar14 = is_value_exref;
                        *(undefined1 *)(iVar5 + 0x4f) = uVar3;
                      }
                    }
                    else {
                      INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,0);
                      uVar7 = ftol();
                      *(undefined4 *)(iVar5 + 0x50) = uVar7;
                    }
                  }
                  else {
                    fVar15 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,0);
                    uStack_c = (double)CONCAT44(uStack_c._4_4_,fVar15);
                    fVar15 = INI_Reader::get_value_float((INI_Reader *)&stack0x00000204,1);
                    *(float *)(iVar5 + 0x48) = fVar15;
                    *(undefined4 *)(iVar5 + 0x44) = (undefined4)uStack_c;
                  }
                }
                else {
                  pcVar6 = INI_Reader::get_value_string((INI_Reader *)&stack0x00000204,0);
                  if (pcVar6 == (char *)0x0) {
                    *(undefined4 *)(iVar5 + 0x28) = 0;
                    *(undefined1 *)(iVar5 + 0x2c) = 0;
                  }
                  else {
                    uVar7 = FUN_00417c50();
                    *(undefined4 *)(iVar5 + 0x28) = uVar7;
                  }
                }
                bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000204);
              } while (bVar1);
            }
            break;
          }
          bVar1 = INI_Reader::read_value((INI_Reader *)&stack0x00000204);
        } while (bVar1);
      }
      bVar1 = INI_Reader::read_header((INI_Reader *)&stack0x00000204);
    } while (bVar1);
  }
  uStack_c = (double)CONCAT44(uStack_c._4_4_,&stack0x0000162c);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000162c,0,
             *(uint *)npos_exref);
  if (in_stack_0000163c != (HANDLE)0xffffffff) {
    if (in_stack_00001640 != (HANDLE)0x0) {
      if (in_stack_00001644 != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_00001644);
        in_stack_00001644 = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00001640);
    }
    CloseHandle(in_stack_0000163c);
  }
  if (in_stack_00001644 != (void *)0x0) {
    free(in_stack_00001644);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x0000162c,
             true);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0x00000204,0,
             *(uint *)npos_exref);
  if (in_stack_00000214 != (HANDLE)0xffffffff) {
    if (in_stack_00000218 != (HANDLE)0x0) {
      if (in_stack_0000021c != (LPCVOID)0x0) {
        UnmapViewOfFile(in_stack_0000021c);
        in_stack_0000021c = (LPCVOID)0x0;
      }
      CloseHandle(in_stack_00000218);
    }
    CloseHandle(in_stack_00000214);
  }
  if (in_stack_0000021c != (void *)0x0) {
    free(in_stack_0000021c);
  }
  if (in_stack_00000208 != 0) {
    cVar2 = *(char *)(in_stack_00000208 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(in_stack_00000208 + -1) = cVar2 + -1;
      ExceptionList = in_stack_0000176c;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_0000176c;
  return;
}

