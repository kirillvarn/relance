
undefined4 FUN_00530a20(INI_Reader *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  uint local_64;
  float local_60;
  char local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint local_4c;
  float local_48 [9];
  float local_24 [3];
  uint local_18;
  uint local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_24[0] = 0.0;
  local_24[1] = 3.4028235e+38;
  local_24[2] = 1.4013e-45;
  ID_String::clear((ID_String *)&local_18);
  ID_String::clear((ID_String *)&local_14);
  local_10 = 0.0;
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  ID_String::clear((ID_String *)&local_64);
  bVar2 = INI_Reader::read_value(param_1);
  if (bVar2) {
    do {
      bVar2 = INI_Reader::is_value(param_1,"nickname");
      if (bVar2) {
        pcVar3 = INI_Reader::get_value_string(param_1);
        local_64 = CreateID(pcVar3);
      }
      else {
        bVar2 = INI_Reader::is_value(param_1,"trail");
        if (bVar2) {
          pcVar3 = INI_Reader::get_value_string(param_1);
          local_14 = CreateID(pcVar3);
        }
        else {
          bVar2 = INI_Reader::is_value(param_1,"lifetime");
          if (bVar2) {
            local_24[0] = INI_Reader::get_value_float(param_1,0);
            bVar2 = INI_Reader::is_value_empty(param_1,1);
            if (bVar2) {
              local_24[1] = local_24[0];
            }
            else {
              fVar8 = INI_Reader::get_value_float(param_1,1);
              if (local_24[0] <= fVar8) {
                local_24[1] = INI_Reader::get_value_float(param_1,1);
              }
              else {
                local_24[1] = local_24[0];
              }
            }
          }
          else {
            bVar2 = INI_Reader::is_value(param_1,"explosion");
            if (bVar2) {
              pcVar3 = INI_Reader::get_value_string(param_1);
              local_18 = CreateID(pcVar3);
            }
            else {
              bVar2 = INI_Reader::is_value(param_1,"death_method");
              if (bVar2) {
                pfVar4 = (float *)INI_Reader::get_value_string(param_1);
                local_4c = 0;
                local_48[0]._0_1_ = 0;
                if (pfVar4 == (float *)0x0) {
                  local_48[0]._0_1_ = 0;
                }
                else {
                  uVar5 = 0xffffffff;
                  pfVar7 = pfVar4;
                  do {
                    if (uVar5 == 0) break;
                    uVar5 = uVar5 - 1;
                    cVar1 = *(char *)pfVar7;
                    pfVar7 = (float *)((int)pfVar7 + 1);
                  } while (cVar1 != '\0');
                  local_4c = ~uVar5 - 1;
                  if (0xf < local_4c) {
                    local_4c = 0xf;
                  }
                  pfVar7 = local_48;
                  for (uVar5 = local_4c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *pfVar7 = *pfVar4;
                    pfVar4 = pfVar4 + 1;
                    pfVar7 = pfVar7 + 1;
                  }
                  for (uVar5 = local_4c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *(char *)pfVar7 = *(char *)pfVar4;
                    pfVar4 = (float *)((int)pfVar4 + 1);
                    pfVar7 = (float *)((int)pfVar7 + 1);
                  }
                  *(undefined1 *)((int)local_48 + local_4c) = 0;
                }
                iVar6 = stricmp((char *)local_48,"exploding");
                if (iVar6 == 0) {
                  local_24[2] = 0.0;
                }
                else {
                  iVar6 = stricmp((char *)local_48,"vanishing");
                  if (iVar6 == 0) {
                    local_24[2] = 1.4013e-45;
                  }
                }
              }
              else {
                bVar2 = INI_Reader::is_value(param_1,"linear_drag");
                if (bVar2) {
                  local_10 = INI_Reader::get_value_float(param_1,0);
                }
                else {
                  bVar2 = INI_Reader::is_value(param_1,"angular_drag");
                  if (bVar2) {
                    local_60 = INI_Reader::get_value_float(param_1,2);
                    fVar8 = INI_Reader::get_value_float(param_1,1);
                    local_58 = INI_Reader::get_value_float(param_1,0);
                    local_50 = local_60;
                    local_4 = local_60;
                    local_54 = fVar8;
                    local_c = local_58;
                    local_8 = fVar8;
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
  bVar2 = ID_String::IsEmpty((ID_String *)&local_64);
  if (!bVar2) {
    local_4c = local_64;
    pfVar4 = local_24;
    pfVar7 = local_48;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar7 = pfVar7 + 1;
    }
    FUN_005310c0(&local_60,&local_4c);
    if (local_5c != '\0') {
      return 1;
    }
    if (param_2 == '\0') {
      pcVar3 = ID_String::get_string((ID_String *)&local_64);
      (**(code **)FDUMP_exref)
                (0x100002,
                 "%s(%d) : *** WARNING: Duplicate [Debris] name(%s).  First overwritten with second!"
                 ,"E:\\FL\\Scratch\\Source\\Client\\space\\Debris.cpp",0xf8,pcVar3);
    }
  }
  return 0;
}

