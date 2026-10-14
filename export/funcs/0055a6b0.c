
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0055a6b0(int *param_1,int *param_2,INI_Reader *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined1 local_c [12];
  
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfb | 3;
  if (param_3 != (INI_Reader *)0x0) {
    bVar2 = INI_Reader::read_value(param_3);
    if (bVar2) {
      do {
        bVar2 = INI_Reader::is_value(param_3,"mesh");
        if (bVar2) {
          iVar9 = *param_1;
          uVar15 = 0;
          pcVar3 = INI_Reader::get_value_string(param_3);
          (**(code **)(iVar9 + 0x98))(pcVar3,uVar15);
        }
        else {
          bVar2 = INI_Reader::is_value(param_3,"mesh2");
          if (bVar2) {
            pcVar3 = INI_Reader::get_value_string(param_3);
            uVar7 = 0xffffffff;
            pcVar10 = pcVar3;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7 - 1;
            bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               (param_1 + 0xd4),uVar7,true);
            if (bVar2) {
              pcVar10 = (char *)param_1[0xd5];
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
                pcVar3 = pcVar3 + 4;
                pcVar10 = pcVar10 + 4;
              }
              for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar10 = *pcVar3;
                pcVar3 = pcVar3 + 1;
                pcVar10 = pcVar10 + 1;
              }
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (param_1 + 0xd4),uVar7);
            }
          }
          else {
            bVar2 = INI_Reader::is_value(param_3,"button_sound");
            if (bVar2) {
              pcVar3 = INI_Reader::get_value_string(param_3);
              if (*pcVar3 != '\0') {
                uVar7 = 0xffffffff;
                pcVar10 = pcVar3;
                do {
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                uVar7 = ~uVar7 - 1;
                bVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)(param_1 + 0xd8),uVar7,true);
                if (bVar2) {
                  pcVar10 = (char *)param_1[0xd9];
                  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
                    pcVar3 = pcVar3 + 4;
                    pcVar10 = pcVar10 + 4;
                  }
                  for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar10 = *pcVar3;
                    pcVar3 = pcVar3 + 1;
                    pcVar10 = pcVar10 + 1;
                  }
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (param_1 + 0xd8),uVar7);
                }
                pcVar4 = (code *)param_1[0xd9];
                if ((code *)param_1[0xd9] == (code *)0x0) {
                  pcVar4 = _C_exref;
                }
                iVar9 = FUN_00564610(pcVar4);
                param_1[0xdd] = iVar9;
              }
            }
            else {
              bVar2 = INI_Reader::is_value(param_3,"event");
              if (bVar2) {
                pcVar3 = INI_Reader::get_value_string(param_3);
                if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\0')) {
                  FUN_0055a490(pcVar3,param_1 + 0xd3,param_1 + 0x33);
                  if ((param_1[0xd3] != 0) || (param_1[0x33] != 0)) {
                    (**(code **)(*param_1 + 0x8c))();
                  }
                }
              }
              else {
                bVar2 = INI_Reader::is_value(param_3,"offset");
                if (bVar2) {
                  fVar12 = INI_Reader::get_value_float(param_3,1);
                  fVar13 = INI_Reader::get_value_float(param_3,0);
                  fVar14 = INI_Reader::get_value_float(param_3,2);
                  param_1[0x2a] = (int)fVar13;
                  param_1[0x2b] = (int)fVar12;
                  param_1[0x2c] = (int)fVar14;
                  if (param_1[0x21] != -1) {
                    FUN_00422b80((float)param_1[0x18] + (float)param_1[0x2a],
                                 (float)param_1[0x2b] + (float)param_1[0x19],
                                 (float)param_1[0x2c] + (float)param_1[0x1a]);
                    (**(code **)(**(int **)Engine_exref + 0x8c))
                              (*(int **)Engine_exref,param_1[0x21],local_c);
                    (**(code **)(**(int **)Engine_exref + 0x6c))
                              (*(int **)Engine_exref,param_1[0x21],0,0);
                  }
                }
                else {
                  bVar2 = INI_Reader::is_value(param_3,"hardpoint");
                  if (bVar2) {
                    piVar16 = param_1 + 0xbe;
                    param_1[0xc6] = 0x3f800000;
                    param_1[0xc2] = 0x3f800000;
                    *piVar16 = 0x3f800000;
                    param_1[0xc5] = 0;
                    param_1[0xc4] = 0;
                    param_1[0xc3] = 0;
                    param_1[0xc1] = 0;
                    param_1[0xc0] = 0;
                    param_1[0xbf] = 0;
                    param_1[0xc9] = 0;
                    param_1[200] = 0;
                    param_1[199] = 0;
                    if ((param_2 != (int *)0x0) &&
                       (piVar5 = (int *)(**(code **)(*param_2 + 8))(), piVar5 != (int *)0x0)) {
                      iVar9 = *piVar5;
                      pcVar3 = INI_Reader::get_value_string(param_3);
                      (**(code **)(iVar9 + 0x90))(pcVar3,piVar16);
                    }
                  }
                  else {
                    bVar2 = INI_Reader::is_value(param_3,"mouse_size");
                    if (bVar2) {
                      fVar12 = INI_Reader::get_value_float(param_3,1);
                      fVar13 = INI_Reader::get_value_float(param_3,0);
                      fVar14 = INI_Reader::get_value_float(param_3,2);
                      param_1[0x2d] = (int)fVar13;
                      param_1[0x2e] = (int)fVar12;
                      param_1[0x2f] = (int)fVar14;
                    }
                    else {
                      bVar2 = INI_Reader::is_value(param_3,"no_mesh_render");
                      if (bVar2) {
                        fVar12 = INI_Reader::get_value_float(param_3,0);
                        *(byte *)((int)param_1 + 0x331) =
                             (*(byte *)((int)param_1 + 0x331) ^ fVar12 != (float)_DAT_005c8ba8) & 1
                             ^ *(byte *)((int)param_1 + 0x331);
                      }
                      else {
                        bVar2 = INI_Reader::is_value(param_3,"action_button");
                        if (bVar2) {
                          fVar12 = INI_Reader::get_value_float(param_3,0);
                          *(byte *)(param_1 + 0xcc) =
                               ((fVar12 != (float)_DAT_005c8ba8) << 3 ^ *(byte *)(param_1 + 0xcc)) &
                               8 ^ *(byte *)(param_1 + 0xcc);
                        }
                        else {
                          bVar2 = INI_Reader::is_value(param_3,"no_color_change");
                          if (bVar2) {
                            fVar12 = INI_Reader::get_value_float(param_3,0);
                            *(byte *)(param_1 + 0xcc) =
                                 ((fVar12 != (float)_DAT_005c8ba8) << 5 ^ *(byte *)(param_1 + 0xcc))
                                 & 0x20 ^ *(byte *)(param_1 + 0xcc);
                          }
                          else {
                            bVar2 = INI_Reader::is_value(param_3,"no_z_enable");
                            if (bVar2) {
                              fVar12 = INI_Reader::get_value_float(param_3,0);
                              if (fVar12 == (float)_DAT_005c8ba8) {
                                *(undefined1 *)((int)param_1 + 0x2d1) = 0;
                              }
                              else {
                                *(undefined1 *)((int)param_1 + 0x2d1) = 1;
                              }
                            }
                            else {
                              bVar2 = INI_Reader::is_value(param_3,"tooltip");
                              if (bVar2) {
                                INI_Reader::get_value_float(param_3,0);
                                iVar9 = ftol();
                                param_1[0x33] = iVar9;
                              }
                              else {
                                bVar2 = INI_Reader::is_value(param_3,"tooltip2");
                                if (bVar2) {
                                  INI_Reader::get_value_float(param_3,0);
                                  iVar9 = ftol();
                                  param_1[0xcb] = iVar9;
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
        bVar2 = INI_Reader::read_value(param_3);
      } while (bVar2);
    }
    if (DAT_00679af0 == '\0') {
      FUN_00559db0();
    }
    iVar9 = 0;
    param_1[0xce] = 0;
    if (DAT_00679a48 == 0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)((DAT_00679a4c - DAT_00679a48) / 0x24);
    }
    iVar11 = 0;
    if (0 < (int)param_2) {
      do {
        pcVar4 = *(code **)(iVar9 + 4 + DAT_00679a48);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = _C_exref;
        }
        iVar6 = stricmp((char *)pcVar4,(char *)(param_1 + 0x34));
        if (iVar6 == 0) {
          param_1[0xce] = DAT_00679a48 + iVar11 * 0x24;
          break;
        }
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x24;
      } while (iVar11 < (int)param_2);
    }
  }
  piVar16 = (int *)param_1[1];
  if (piVar16 != (int *)0x0) {
    (**(code **)(*piVar16 + 0x14))(piVar16 + 0x18);
  }
  return 1;
}

