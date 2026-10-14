
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004fd5a0(INI_Reader *param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  char *_Str1;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  undefined **ppuVar8;
  code *pcVar9;
  byte *pbVar10;
  undefined *puVar11;
  undefined **local_4;
  
  ppuVar8 = (undefined **)0x0;
  local_4 = (undefined **)0x0;
  bVar2 = INI_Reader::read_value(param_1);
  pcVar9 = get_value_string_exref;
  if (bVar2) {
    do {
      bVar2 = INI_Reader::is_value(param_1,"nickname");
      if (bVar2) {
        pbVar3 = (byte *)(*pcVar9)();
        iVar4 = 0;
        ppuVar8 = &PTR_s_EFT_NONE_00612a68;
        do {
          pbVar6 = *ppuVar8;
          pbVar10 = pbVar3;
          do {
            bVar1 = *pbVar6;
            bVar2 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_004fd61b:
              iVar7 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
              goto LAB_004fd620;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar2 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_004fd61b;
            pbVar6 = pbVar6 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_004fd620:
          if (iVar7 == 0) break;
          ppuVar8 = ppuVar8 + 10;
          iVar4 = iVar4 + 1;
        } while ((int)ppuVar8 < 0x6131c0);
        if (iVar4 < 0x2f) {
          ppuVar8 = &PTR_s_EFT_NONE_00612a68 + iVar4 * 10;
          pcVar9 = get_value_string_exref;
          local_4 = ppuVar8;
        }
        else {
          (**(code **)FDUMP_exref)
                    (0x100002,"%s(%d) : WARNING:General:%s",
                     "E:\\FL\\Scratch\\Source\\Client\\Space\\EffectTypes.cpp",0x4c,
                     "EffectTypes: unknown type");
          INI_Reader::log_link(param_1,"EffectTypes");
          ppuVar8 = local_4;
          pcVar9 = get_value_string_exref;
        }
      }
      else if (ppuVar8 != (undefined **)0x0) {
        bVar2 = INI_Reader::is_value(param_1,"priority");
        if (bVar2) {
          puVar11 = (undefined *)INI_Reader::get_value_float(param_1,0);
          ppuVar8[1] = puVar11;
        }
        else {
          bVar2 = INI_Reader::is_value(param_1,"generic_priority");
          if (bVar2) {
            puVar11 = (undefined *)INI_Reader::get_value_float(param_1,0);
            ppuVar8[2] = puVar11;
          }
          else {
            bVar2 = INI_Reader::is_value(param_1,"lod_type");
            if (bVar2) {
              puVar11 = (undefined *)0x1;
              do {
                pcVar5 = *(char **)((int)puVar11 * 4 + 0x6131e8);
                _Str1 = (char *)(*pcVar9)();
                iVar4 = stricmp(_Str1,pcVar5);
                if (iVar4 == 0) {
                  ppuVar8[3] = puVar11;
                  break;
                }
                puVar11 = puVar11 + 1;
              } while ((int)puVar11 < 7);
            }
            else {
              bVar2 = INI_Reader::is_value(param_1,"radius");
              if (bVar2) {
                puVar11 = (undefined *)INI_Reader::get_value_float(param_1,0);
                if ((float)puVar11 < _DAT_005c7474) {
                  (**(code **)FDUMP_exref)
                            (0x100001,"%s(%d) : *** ERROR: effect type (%s) has negative radius",
                             "E:\\FL\\Scratch\\Source\\Client\\Space\\EffectTypes.cpp",0x7c,*ppuVar8
                            );
                  puVar11 = _DAT_005c75dc;
                }
                ppuVar8[4] = puVar11;
              }
              else {
                bVar2 = INI_Reader::is_value(param_1,"visibility");
                if (bVar2) {
                  pcVar5 = (char *)(*pcVar9)();
                  iVar4 = stricmp(pcVar5,"EXIST_OFFSCREEN");
                  *(char *)(ppuVar8 + 5) = '\x01' - (iVar4 != 0);
                }
                else {
                  bVar2 = INI_Reader::is_value(param_1,"update");
                  if (bVar2) {
                    pcVar5 = (char *)(*pcVar9)();
                    iVar4 = stricmp(pcVar5,"UPDATE_OFFSCREEN");
                    *(char *)((int)ppuVar8 + 0x15) = '\x01' - (iVar4 != 0);
                  }
                  else {
                    bVar2 = INI_Reader::is_value(param_1,"run_time");
                    if (bVar2) {
                      puVar11 = (undefined *)INI_Reader::get_value_float(param_1,0);
                      ppuVar8[6] = puVar11;
                    }
                    else {
                      bVar2 = INI_Reader::is_value(param_1,"fps");
                      if (bVar2) {
                        puVar11 = (undefined *)INI_Reader::get_value_float(param_1,0);
                        ppuVar8[7] = puVar11;
                      }
                      else {
                        bVar2 = INI_Reader::is_value(param_1,"pbubble");
                        if (bVar2) {
                          puVar11 = (undefined *)INI_Reader::get_value_float(param_1,0);
                          ppuVar8[8] = puVar11;
                          puVar11 = (undefined *)INI_Reader::get_value_float(param_1,1);
                          ppuVar8[9] = puVar11;
                          if ((float)puVar11 < (float)ppuVar8[8]) {
                            (**(code **)FDUMP_exref)
                                      (0x100002,"%s(%d) : WARNING:General:%s",
                                       "E:\\FL\\Scratch\\Source\\Client\\Space\\EffectTypes.cpp",
                                       0xc1,"pbubble ranges backwards");
                            INI_Reader::log_link(param_1,"EffectTypes");
                          }
                        }
                        else {
                          pcVar5 = INI_Reader::get_file_name(param_1);
                          (**(code **)FDUMP_exref)
                                    (0x100001,
                                     "%s(%d) : *** ERROR: EffectType (%s) has unknown parameter (%s)"
                                     ,"E:\\FL\\Scratch\\Source\\Client\\Space\\EffectTypes.cpp",199,
                                     *ppuVar8,pcVar5);
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
      bVar2 = INI_Reader::read_value(param_1);
    } while (bVar2);
  }
  return ppuVar8 != (undefined **)0x0;
}

