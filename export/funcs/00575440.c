
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00564b30(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int in_stack_00000100;
  int in_stack_00001528;
  void *in_stack_00001664;
  char *in_stack_00001674;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c1eff;
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  FUN_005b7e90();
  INI_Reader::INI_Reader((INI_Reader *)&stack0x000000fc);
  GetFileSysPath((char *)&puStack_8,in_stack_00001674,*(IFileSystem **)Data_exref);
  bVar2 = INI_Reader::open((INI_Reader *)&stack0x000000fc,(char *)&puStack_8,false);
  if (bVar2) {
    bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000000fc);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_header((INI_Reader *)&stack0x000000fc,"Images");
        if ((bVar2) && (bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000fc), bVar2)) {
          do {
            bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"TgaPath");
            if (bVar2) {
              pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
              if (pcVar3 == (char *)0x0) {
                _DAT_0067c188 = 0;
                DAT_0067c18c = 0;
              }
              else {
                _DAT_0067c188 = FUN_00417c50();
              }
            }
            else {
              bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"ScreenType");
              if (bVar2) {
                pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                if (pcVar3 == (char *)0x0) {
                  _DAT_0067c140 = 0;
                  DAT_0067c144 = 0;
                }
                else {
                  _DAT_0067c140 = FUN_00417c50();
                }
              }
              else {
                bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"ScreenExit");
                if (bVar2) {
                  pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                  if (pcVar3 == (char *)0x0) {
                    _DAT_0067c0f8 = 0;
                    DAT_0067c0fc = 0;
                  }
                  else {
                    _DAT_0067c0f8 = FUN_00417c50();
                  }
                }
                else {
                  bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"ScreenReset");
                  if (bVar2) {
                    pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                    if (pcVar3 == (char *)0x0) {
                      _DAT_0067c0b0 = 0;
                      DAT_0067c0b4 = 0;
                    }
                    else {
                      _DAT_0067c0b0 = FUN_00417c50();
                    }
                  }
                  else {
                    bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"Screen1");
                    if (bVar2) {
                      pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                      if (pcVar3 == (char *)0x0) {
                        _DAT_0067c068 = 0;
                        DAT_0067c06c = 0;
                      }
                      else {
                        _DAT_0067c068 = FUN_00417c50();
                      }
                    }
                    else {
                      bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"Screen2");
                      if (bVar2) {
                        pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                        if (pcVar3 == (char *)0x0) {
                          _DAT_0067c020 = 0;
                          DAT_0067c024 = 0;
                        }
                        else {
                          _DAT_0067c020 = FUN_00417c50();
                        }
                      }
                      else {
                        bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"Screen3");
                        if (bVar2) {
                          pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                          if (pcVar3 == (char *)0x0) {
                            _DAT_0067bfd8 = 0;
                            DAT_0067bfdc = 0;
                          }
                          else {
                            _DAT_0067bfd8 = FUN_00417c50();
                          }
                        }
                        else {
                          bVar2 = INI_Reader::is_value((INI_Reader *)&stack0x000000fc,"Screen4");
                          if (bVar2) {
                            pcVar3 = INI_Reader::get_value_string((INI_Reader *)&stack0x000000fc);
                            if (pcVar3 == (char *)0x0) {
                              _DAT_0067bf90 = 0;
                              DAT_0067bf94 = 0;
                            }
                            else {
                              _DAT_0067bf90 = FUN_00417c50();
                            }
                          }
                          else {
                            bVar2 = INI_Reader::is_value
                                              ((INI_Reader *)&stack0x000000fc,"bDrawScripts");
                            if (bVar2) {
                              DAT_00614a9c = INI_Reader::get_value_bool
                                                       ((INI_Reader *)&stack0x000000fc,0);
                            }
                            else {
                              INI_Reader::log_link
                                        ((INI_Reader *)&stack0x000000fc,"unknown ini parameter");
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            bVar2 = INI_Reader::read_value((INI_Reader *)&stack0x000000fc);
          } while (bVar2);
        }
        bVar2 = INI_Reader::read_header((INI_Reader *)&stack0x000000fc);
      } while (bVar2);
    }
    uVar5 = 0xffffffff;
    pcVar3 = "FRONT_freelancerlogo.tga";
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _DAT_0067bf48 = ~uVar5 - 1;
    if (0x3f < _DAT_0067bf48) {
      _DAT_0067bf48 = 0x3f;
    }
    pcVar3 = "FRONT_freelancerlogo.tga";
    pcVar6 = (char *)&DAT_0067bf4c;
    for (uVar5 = _DAT_0067bf48 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = _DAT_0067bf48 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(undefined1 *)((int)&DAT_0067bf4c + _DAT_0067bf48) = 0;
    iVar4 = rand();
    DAT_0067bf40 = (int)(iVar4 * 3 + (iVar4 * 3 >> 0x1f & 0x7fffU)) >> 0xf;
  }
  puStack_c = &stack0x00001524;
  FileMap::close((FileMap *)&stack0x00001524);
  if (in_stack_00001528 != 0) {
    cVar1 = *(char *)(in_stack_00001528 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d();
    }
    else {
      *(char *)(in_stack_00001528 + -1) = cVar1 + -1;
    }
  }
  FileMap::close((FileMap *)&stack0x000000fc);
  if (in_stack_00000100 != 0) {
    cVar1 = *(char *)(in_stack_00000100 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(in_stack_00000100 + -1) = cVar1 + -1;
      ExceptionList = in_stack_00001664;
      return;
    }
    FUN_005b7e1d();
  }
  ExceptionList = in_stack_00001664;
  return;
}

