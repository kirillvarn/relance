
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004cd350(undefined4 *param_1,INI_Reader *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined4 *local_5c;
  undefined4 *local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  Vector local_30 [36];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bdb0d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_5c = param_1;
  FUN_004b5150();
  *param_1 = &PTR_FUN_005d5544;
  param_1[4] = 0;
  param_1[0x1c] = 0;
  param_1[0xe] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xf8 | 8;
  DAT_0067dcd4 = DAT_0067dcd4 + 1;
  puVar5 = param_1 + 0x1f;
  local_4 = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  local_58 = puVar5;
  FUN_004c95b0(0);
  *puVar5 = &PTR_FUN_005d6eac;
  param_1[0x2c] = 0;
  local_4._0_1_ = 1;
  if (*(int *)(param_1 + 0x29) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x29),(Watchable *)0x0);
  }
  param_1[0x2b] = 0;
  local_4._0_1_ = 2;
  FUN_004ca690();
  local_4._0_1_ = 3;
  FUN_004ca690();
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)((int)param_1 + 0x461) = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)((int)param_1 + 0x471) = 0;
  param_1[0x11e] = 0xffffffff;
  param_1[0x11d] = 0;
  local_4._0_1_ = 7;
  FUN_0051b2f0();
  local_4 = CONCAT31(local_4._1_3_,8);
  *param_1 = &PTR_FUN_005d764c;
  *puVar5 = &PTR_LAB_005d761c;
  FUN_0059dd00(param_1,0);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfb | 3;
  uVar3 = FUN_00417c50(param_1 + 0x21,0x20,"RadioReceiver");
  param_1[0x20] = uVar3;
  param_1[0x16c] = 0;
  FUN_0040fb60(0x3fb33333,0x42480000);
  bVar1 = INI_Reader::read_value(param_2);
  if (bVar1) {
    do {
      cVar2 = FUN_004ccbd0(param_2);
      if (cVar2 == '\0') {
        bVar1 = INI_Reader::is_value(param_2,"speaker_offset");
        if (bVar1) {
          pcVar4 = INI_Reader::get_file_name(param_2);
          (**(code **)FDUMP_exref)
                    (0x100002,
                     "%s(%d) : *** WARNING: speaker_offset is obsolete in hud ini file %s, use male_speaker_offset or female_speaker_offset instead\n"
                     ,"E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x7e7,pcVar4);
        }
        else {
          bVar1 = INI_Reader::is_value(param_2,"male_speaker_offset");
          if (bVar1) {
            local_54 = INI_Reader::get_value_float(param_2,0);
            local_50 = INI_Reader::get_value_float(param_2,1);
            local_4c = INI_Reader::get_value_float(param_2,2);
            param_1[0x128] = local_54;
            param_1[0x129] = local_50;
            param_1[0x12a] = local_4c;
          }
          else {
            bVar1 = INI_Reader::is_value(param_2,"female_speaker_offset");
            if (bVar1) {
              local_48 = INI_Reader::get_value_float(param_2,0);
              local_44 = INI_Reader::get_value_float(param_2,1);
              local_40 = INI_Reader::get_value_float(param_2,2);
              param_1[299] = local_48;
              param_1[300] = local_44;
              param_1[0x12d] = local_40;
            }
            else {
              bVar1 = INI_Reader::is_value(param_2,"speaker_rotate");
              if (bVar1) {
                local_3c = INI_Reader::get_value_float(param_2,0);
                local_38 = INI_Reader::get_value_float(param_2,1);
                local_34 = INI_Reader::get_value_float(param_2,2);
                puVar5 = (undefined4 *)EulerMatrix(local_30);
                puVar9 = param_1 + 0x11f;
                for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar9 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar9 = puVar9 + 1;
                }
              }
              else {
                bVar1 = INI_Reader::is_value(param_2,"video_fovx");
                if (bVar1) {
                  fVar10 = INI_Reader::get_value_float(param_2,0);
                  FUN_0040f8c0(fVar10);
                }
                else {
                  bVar1 = INI_Reader::is_value(param_2,"backdrop");
                  if (bVar1) {
                    pcVar4 = INI_Reader::get_value_string(param_2);
                    FUN_004255c0(pcVar4);
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = INI_Reader::read_value(param_2);
    } while (bVar1);
  }
  local_60 = 0x80;
  local_5f = 0x80;
  local_5e = 0x80;
  local_3c = 0.23;
  local_38 = 0.31;
  local_34 = -0.92;
  pvVar6 = operator_new(200);
  local_4._0_1_ = 9;
  if (pvVar6 == (void *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_00410ca0(0xffffffff);
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004110c0(1,0);
  FUN_00410ef0(&local_3c);
  FUN_004115b0(&local_60);
  FUN_00411300(0x4e6e6b28);
  cVar2 = (**(code **)(*piVar7 + 4))();
  if (cVar2 == '\0') {
    (**(code **)*piVar7)(1);
    piVar7 = (int *)0x0;
  }
  param_1[0x16c] = piVar7;
  puVar5 = param_1 + 0x11f;
  puVar9 = param_1 + 0x8b;
  for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0x94] = param_1[0x128];
  param_1[0x95] = param_1[0x129];
  param_1[0x96] = param_1[0x12a];
  param_1[0x97] = param_1[299];
  param_1[0x98] = param_1[300];
  param_1[0x99] = param_1[0x12d];
  local_48 = -1.068;
  param_1[0x44] = 0xbf88b439;
  local_44 = 0.65;
  param_1[0x45] = 0x3f266666;
  local_40 = -2.392;
  param_1[0x46] = 0xc0191687;
  param_1[0x116] = param_1 + 0x2d;
  param_1[0x115] = &DAT_00673f48;
  param_1[0x119] = &DAT_006735c0;
  param_1[0x11a] = param_1 + 0xa1;
  DAT_006735a4 = 0;
  DAT_006735a8 = 0;
  _DAT_006735ac = 0xbf800000;
  DAT_006735b0 = 0;
  DAT_006748f8 = param_1;
  param_1[0x16d] = 0;
  iVar8 = FUN_0059db20("LowEndCommButton","ButtonControl",param_1,0);
  param_1[0x16d] = iVar8;
  if (iVar8 != 0) {
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    local_48 = -0.1617;
    local_44 = 0.0986;
    local_40 = -0.362;
    FUN_0055ac30("interface\\HUD\\HUD_genericcomm.3db",0,0,0,&local_48,0,&local_3c,0,0,0,0,0,0,0);
    *(byte *)(param_1[0x16d] + 0x6c) = *(byte *)(param_1[0x16d] + 0x6c) & 0xfc;
  }
  ExceptionList = pvStack_c;
  return param_1;
}

