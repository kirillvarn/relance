
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00550240(int param_1,INI_Reader *param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  uint uVar13;
  float10 fVar14;
  float fVar15;
  uint local_bc;
  int *local_b8;
  int local_b4;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined1 local_64 [8];
  undefined4 local_5c;
  undefined1 local_58 [32];
  undefined1 local_38 [28];
  undefined1 local_1c [28];
  
  if (*(char *)(param_1 + 0xec) != '\0') {
    FUN_00550cf0();
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0xec) = 0;
  }
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  local_b4 = 0;
  fVar15 = _DAT_005c75dc /
           SQRT(*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74) +
                *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) +
                *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x6c));
  *(float *)(param_1 + 0x6c) = fVar15 * *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x70) = fVar15 * *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 0x74) = fVar15 * *(float *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0x42480000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f400000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x44bb8000;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar8 = (undefined4 *)(param_1 + 0x48);
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar8 = 0x3f800000;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0x42480000;
  *(undefined4 *)(param_1 + 0xe8) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x104) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x108) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x10c) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  bVar2 = INI_Reader::read_value(param_2);
  pcVar12 = is_value_exref;
  if (bVar2) {
    do {
      cVar3 = (*pcVar12)("puff_count");
      if (cVar3 == '\0') {
        cVar3 = (*pcVar12)("puff_radius");
        if (cVar3 == '\0') {
          cVar3 = (*pcVar12)("puff_colora");
          if ((cVar3 == '\0') && (cVar3 = (*pcVar12)("puff_colorb"), cVar3 == '\0')) {
            cVar3 = (*pcVar12)("puff_shape");
            if (cVar3 == '\0') {
              cVar3 = (*pcVar12)("puff_weights");
              if (cVar3 == '\0') {
                cVar3 = (*pcVar12)("puff_opacity");
                if (cVar3 == '\0') {
                  cVar3 = (*pcVar12)("puff_max_alpha");
                  if (cVar3 == '\0') {
                    cVar3 = (*pcVar12)("puff_drift");
                    if (cVar3 == '\0') {
                      cVar3 = (*pcVar12)("lightning_shape");
                      if (cVar3 == '\0') {
                        cVar3 = (*pcVar12)("lightning_color");
                        if (cVar3 == '\0') {
                          cVar3 = (*pcVar12)("lightning_gap");
                          if (cVar3 == '\0') {
                            cVar3 = (*pcVar12)("lightning_duration");
                            if (cVar3 == '\0') {
                              cVar3 = (*pcVar12)("lightning_size");
                              if (cVar3 == '\0') {
                                cVar3 = (*pcVar12)("llight_range");
                                if (cVar3 == '\0') {
                                  cVar3 = (*pcVar12)("llight_color");
                                  if (cVar3 == '\0') {
                                    cVar3 = (*pcVar12)("lightning_intensity");
                                    if (cVar3 == '\0') {
                                      cVar3 = (*pcVar12)("max_distance");
                                      if (cVar3 == '\0') {
                                        cVar3 = (*pcVar12)("near_fade_distance");
                                        if (cVar3 == '\0') {
                                          cVar3 = (*pcVar12)("no_cloud_blend");
                                          if (cVar3 == '\0') {
                                            cVar3 = (*pcVar12)("zwrite_clouds");
                                            if (cVar3 == '\0') {
                                              cVar3 = (*pcVar12)("disable_clouds");
                                              if (cVar3 == '\0') {
                                                cVar3 = (*pcVar12)("disable_wisps");
                                                if (cVar3 == '\0') {
                                                  cVar3 = (*pcVar12)("disable_lightning_flash");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = (*pcVar12)("disable_lightning_bolts");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = (*pcVar12)("disable_batcher");
                                                      if (cVar3 != '\0') {
                                                        INI_Reader::get_value_float(param_2,0);
                                                        uVar4 = ftol();
                                                        *(undefined4 *)(param_1 + 0x128) = uVar4;
                                                      }
                                                    }
                                                    else {
                                                      INI_Reader::get_value_float(param_2,0);
                                                      uVar4 = ftol();
                                                      *(undefined4 *)(param_1 + 0x120) = uVar4;
                                                    }
                                                  }
                                                  else {
                                                    INI_Reader::get_value_float(param_2,0);
                                                    uVar4 = ftol();
                                                    *(undefined4 *)(param_1 + 0x124) = uVar4;
                                                  }
                                                }
                                                else {
                                                  INI_Reader::get_value_float(param_2,0);
                                                  uVar4 = ftol();
                                                  *(undefined4 *)(param_1 + 0x11c) = uVar4;
                                                }
                                              }
                                              else {
                                                INI_Reader::get_value_float(param_2,0);
                                                uVar4 = ftol();
                                                *(undefined4 *)(param_1 + 0x118) = uVar4;
                                              }
                                            }
                                            else {
                                              INI_Reader::get_value_float(param_2,0);
                                              uVar4 = ftol();
                                              *(undefined4 *)(param_1 + 0x114) = uVar4;
                                            }
                                          }
                                          else {
                                            INI_Reader::get_value_float(param_2,0);
                                            uVar4 = ftol();
                                            *(undefined4 *)(param_1 + 0x110) = uVar4;
                                          }
                                        }
                                        else {
                                          fVar15 = INI_Reader::get_value_float(param_2,0);
                                          *(float *)(param_1 + 0xe4) = fVar15;
                                          fVar15 = INI_Reader::get_value_float(param_2,1);
                                          *(float *)(param_1 + 0xe8) = fVar15;
                                          if (fVar15 < *(float *)(param_1 + 0xe4)) {
                                            (**(code **)FDUMP_exref)
                                                      (0x100002,"%s(%d) : *** WARNING: %s",
                                                                                                              
                                                  "E:\\FL\\Scratch\\Source\\Client\\Space\\SpaceTerrainRenderComp.cpp"
                                                  ,0x555,"near_fade_distances are flipped");
                                            uVar4 = *(undefined4 *)(param_1 + 0xe8);
                                            *(undefined4 *)(param_1 + 0xe8) =
                                                 *(undefined4 *)(param_1 + 0xe4);
                                            *(undefined4 *)(param_1 + 0xe4) = uVar4;
                                          }
                                        }
                                      }
                                      else {
                                        fVar15 = INI_Reader::get_value_float(param_2,0);
                                        *(float *)(param_1 + 0xc0) = fVar15;
                                      }
                                    }
                                    else {
                                      fVar15 = INI_Reader::get_value_float(param_2,0);
                                      *(float *)(param_1 + 0xdc) = fVar15;
                                    }
                                  }
                                  else {
                                    local_94 = INI_Reader::get_value_float(param_2,0);
                                    local_90 = INI_Reader::get_value_float(param_2,1);
                                    fVar15 = INI_Reader::get_value_float(param_2,2);
                                    fVar1 = local_90 * _DAT_005c7f68;
                                    *(float *)(param_1 + 0xcc) = local_94 * _DAT_005c7f68;
                                    fVar15 = fVar15 * _DAT_005c7f68;
                                    *(float *)(param_1 + 0xd0) = fVar1;
                                    *(float *)(param_1 + 0xd4) = fVar15;
                                  }
                                }
                                else {
                                  fVar15 = INI_Reader::get_value_float(param_2,0);
                                  *(float *)(param_1 + 200) = fVar15;
                                }
                              }
                              else {
                                fVar15 = INI_Reader::get_value_float(param_2,0);
                                *(float *)(param_1 + 0xa4) = fVar15;
                              }
                            }
                            else {
                              fVar15 = INI_Reader::get_value_float(param_2,0);
                              *(float *)(param_1 + 0xa0) = fVar15;
                            }
                          }
                          else {
                            fVar15 = INI_Reader::get_value_float(param_2,0);
                            *(float *)(param_1 + 0x9c) = fVar15;
                          }
                        }
                        else {
                          local_70 = INI_Reader::get_value_float(param_2,0);
                          local_6c = INI_Reader::get_value_float(param_2,1);
                          local_98 = INI_Reader::get_value_float(param_2,2);
                          local_a0 = local_70 * _DAT_005c7f68;
                          local_9c = local_6c * _DAT_005c7f68;
                          *(float *)(param_1 + 0x90) = local_a0;
                          local_98 = local_98 * _DAT_005c7f68;
                          *(float *)(param_1 + 0x94) = local_9c;
                          *(float *)(param_1 + 0x98) = local_98;
                        }
                      }
                      else {
                        local_b8 = (int *)(param_1 + 0x18);
                        local_bc = 0;
                        do {
                          local_5c = 0;
                          local_58[0] = 0;
                          pcVar5 = INI_Reader::get_value_string(param_2,local_bc);
                          if (pcVar5 == (char *)0x0) {
                            local_5c = 0;
                            local_58[0] = 0;
                          }
                          else {
                            local_5c = FUN_00417c50(local_58,0x20,pcVar5);
                          }
                          iVar10 = 0;
                          FUN_004205c0(local_58);
                          cVar3 = FUN_00420690(local_38);
                          if (cVar3 == '\0') {
                            piVar7 = (int *)FUN_004206c0(local_64,local_38);
                            iVar11 = *piVar7;
                            *(int *)(param_3 + 0x14) = iVar11;
                          }
                          else {
                            iVar11 = *(int *)(param_3 + 0x14);
                          }
                          if ((iVar11 == *(int *)(param_3 + 4)) ||
                             (iVar10 = iVar11 + 0x28, iVar10 == 0)) {
                            puVar8 = (undefined4 *)FUN_00411c50(0x10000,2);
                            (**(code **)FDUMP_exref)
                                      (*puVar8,
                                       "%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                                       "cmn\\ShapeDB.h",0xf2,local_58);
                          }
                          local_bc = local_bc + 1;
                          *local_b8 = iVar10;
                          local_b8 = local_b8 + 1;
                          pcVar12 = is_value_exref;
                        } while ((int)local_bc < 4);
                      }
                    }
                    else {
                      fVar15 = INI_Reader::get_value_float(param_2,0);
                      *(float *)(param_1 + 0xb0) = fVar15;
                    }
                  }
                  else {
                    fVar15 = INI_Reader::get_value_float(param_2,0);
                    *(float *)(param_1 + 0xb4) = fVar15;
                  }
                }
              }
              else {
                uVar13 = 0;
                if (0 < *(int *)(param_1 + 0x68)) {
                  pfVar9 = (float *)(param_1 + 0x48);
                  do {
                    fVar15 = INI_Reader::get_value_float(param_2,uVar13);
                    *pfVar9 = fVar15;
                    uVar13 = uVar13 + 1;
                    pfVar9 = pfVar9 + 1;
                    pcVar12 = is_value_exref;
                  } while ((int)uVar13 < *(int *)(param_1 + 0x68));
                }
              }
            }
            else if (*(int *)(param_1 + 0x68) < 8) {
              pcVar5 = INI_Reader::get_value_string(param_2);
              iVar10 = 0;
              FUN_004205c0(pcVar5);
              FUN_00512660(&local_a4,local_1c);
              if (((local_a4 == *(int *)(param_3 + 4)) || (iVar10 = local_a4 + 0x28, iVar10 == 0))
                 && ((**(code **)FDUMP_exref)
                               (0x100002,
                                "%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                                "cmn\\ShapeDB.h",0xf2,pcVar5), iVar10 == 0)) {
                pcVar5 = INI_Reader::get_file_name(param_2);
                pcVar6 = INI_Reader::get_value_string(param_2);
                (**(code **)FDUMP_exref)
                          (0x100001,
                           "%s(%d) : *** ERROR: Texture Shape (%s) not found for [Clouds] in file (%s)"
                           ,"E:\\FL\\Scratch\\Source\\Client\\Space\\SpaceTerrainRenderComp.cpp",
                           0x523,pcVar6,pcVar5);
              }
              *(int *)(param_1 + 0x28 + *(int *)(param_1 + 0x68) * 4) = iVar10;
              pcVar12 = is_value_exref;
              *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            }
          }
          else if (local_b4 < 2) {
            local_88 = INI_Reader::get_value_float(param_2,0);
            local_84 = INI_Reader::get_value_float(param_2,1);
            fVar15 = INI_Reader::get_value_float(param_2,2);
            FUN_00422b80(local_88 * _DAT_005c7f68,local_84 * _DAT_005c7f68,fVar15 * _DAT_005c7f68);
            puVar8 = (undefined4 *)(param_1 + (local_b4 * 3 + 0x1e) * 4);
            *puVar8 = local_7c;
            puVar8[1] = local_78;
            puVar8[2] = local_74;
            if (local_b4 == 0) {
              *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x78);
              *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x7c);
              *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x80);
            }
            local_b4 = local_b4 + 1;
          }
        }
        else {
          fVar15 = INI_Reader::get_value_float(param_2,0);
          *(float *)(param_1 + 0xa8) = fVar15;
        }
      }
      else {
        INI_Reader::get_value_float(param_2,0);
        uVar4 = ftol();
        *(undefined4 *)(param_1 + 4) = uVar4;
      }
      bVar2 = INI_Reader::read_value(param_2);
    } while (bVar2);
  }
  fVar15 = _DAT_005c7474;
  iVar10 = *(int *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0xec) = 1;
  if (0 < iVar10) {
    pfVar9 = (float *)(param_1 + 0x48);
    iVar11 = iVar10;
    do {
      fVar15 = fVar15 + *pfVar9;
      pfVar9 = pfVar9 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = 0;
  if (0 < iVar10) {
    fVar15 = _DAT_005c75dc / fVar15;
    pfVar9 = (float *)(param_1 + 0x48);
    do {
      iVar11 = iVar11 + 1;
      *pfVar9 = fVar15 * *pfVar9;
      pfVar9 = pfVar9 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x68));
  }
  fVar15 = *(float *)(param_1 + 0xc0) * _DAT_005c75e0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 4);
  *(float *)(param_1 + 0x100) = fVar15 + *(float *)(param_1 + 0xa8);
  FUN_00550b60();
  if (_DAT_005c7474 < *(float *)(param_1 + 0xe4)) {
    fVar14 = (float10)fptan((float10)_DAT_005e0be0);
    fVar15 = (float)(((float10)*(float *)(param_1 + 0x100) * (float10)_DAT_005d8d40) / fVar14 -
                    (float10)*(float *)(param_1 + 0xe4));
    fVar14 = ((float10)*(float *)(param_1 + 0xa8) * (float10)_DAT_005c9800 +
             fVar14 * (float10)*(float *)(param_1 + 0xe4)) * (float10)_DAT_005c9804;
    if (fVar14 <= (float10)*(float *)(param_1 + 0x100)) {
      fVar14 = SQRT((float10)*(float *)(param_1 + 0x100) * (float10)*(float *)(param_1 + 0x100) -
                    fVar14 * fVar14);
    }
    else {
      fVar14 = (float10)fVar15;
    }
    if ((float10)fVar15 < fVar14) {
      fVar14 = (float10)fVar15;
    }
    fVar14 = (fVar14 + (float10)*(float *)(param_1 + 0xe4)) - (float10)*(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0xbc) = (float)fVar14;
    if ((float10)_DAT_005c8ba8 <= fVar14) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}

