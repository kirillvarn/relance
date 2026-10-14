
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0042e4a0(int param_1,INI_Reader *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  char *pcVar6;
  float fVar7;
  float local_c;
  float local_8;
  
  bVar1 = INI_Reader::is_value(param_2,"tip_color");
  if (bVar1) {
    local_c = INI_Reader::get_value_float(param_2,0);
    local_8 = INI_Reader::get_value_float(param_2,1);
    fVar7 = INI_Reader::get_value_float(param_2,2);
    pfVar4 = (float *)(param_1 + 0x10);
  }
  else {
    bVar1 = INI_Reader::is_value(param_2,"tail_color");
    if (bVar1) {
      local_c = INI_Reader::get_value_float(param_2,0);
      local_8 = INI_Reader::get_value_float(param_2,1);
      fVar7 = INI_Reader::get_value_float(param_2,2);
      pfVar4 = (float *)(param_1 + 0x1c);
    }
    else {
      bVar1 = INI_Reader::is_value(param_2,"core_color");
      if (bVar1) {
        local_c = INI_Reader::get_value_float(param_2,0);
        local_8 = INI_Reader::get_value_float(param_2,1);
        fVar7 = INI_Reader::get_value_float(param_2,2);
        pfVar4 = (float *)(param_1 + 0x28);
      }
      else {
        bVar1 = INI_Reader::is_value(param_2,"sec_core_color");
        if (bVar1) {
          local_c = INI_Reader::get_value_float(param_2,0);
          local_8 = INI_Reader::get_value_float(param_2,1);
          fVar7 = INI_Reader::get_value_float(param_2,2);
          pfVar4 = (float *)(param_1 + 0x34);
        }
        else {
          bVar1 = INI_Reader::is_value(param_2,"outter_color");
          if (bVar1) {
            local_c = INI_Reader::get_value_float(param_2,0);
            local_8 = INI_Reader::get_value_float(param_2,1);
            fVar7 = INI_Reader::get_value_float(param_2,2);
            pfVar4 = (float *)(param_1 + 0x40);
          }
          else {
            bVar1 = INI_Reader::is_value(param_2,"sec_outter_color");
            if (!bVar1) {
              bVar1 = INI_Reader::is_value(param_2,"tip_length");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x60) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"tail_length");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 100) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"core_length");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x68) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"core_width");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x6c) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"sec_core_width");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x70) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"head_brightness");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x58) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"trail_brightness");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x5c) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"flash_size");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x78) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"head_width");
              if (bVar1) {
                fVar7 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x74) = fVar7;
                return 1;
              }
              bVar1 = INI_Reader::is_value(param_2,"head_texture");
              if (!bVar1) {
                bVar1 = INI_Reader::is_value(param_2,"trail_texture");
                if (!bVar1) {
                  return 0;
                }
                pcVar2 = INI_Reader::get_value_string(param_2);
                iVar3 = 5;
                bVar1 = true;
                pcVar5 = pcVar2;
                pcVar6 = "wide";
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar1 = *pcVar5 == *pcVar6;
                  pcVar5 = pcVar5 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (bVar1);
                if (!bVar1) {
                  iVar3 = 5;
                  bVar1 = true;
                  pcVar5 = "thin";
                  do {
                    if (iVar3 == 0) break;
                    iVar3 = iVar3 + -1;
                    bVar1 = *pcVar2 == *pcVar5;
                    pcVar2 = pcVar2 + 1;
                    pcVar5 = pcVar5 + 1;
                  } while (bVar1);
                  if (bVar1) {
                    *(undefined4 *)(param_1 + 0xc) = 1;
                    return 1;
                  }
                }
                *(undefined4 *)(param_1 + 0xc) = 0;
                return 1;
              }
              pcVar2 = INI_Reader::get_value_string(param_2);
              iVar3 = 5;
              bVar1 = true;
              pcVar5 = pcVar2;
              pcVar6 = "star";
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar1 = *pcVar5 == *pcVar6;
                pcVar5 = pcVar5 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar1);
              if (!bVar1) {
                iVar3 = 5;
                bVar1 = true;
                pcVar5 = "ball";
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar1 = *pcVar2 == *pcVar5;
                  pcVar2 = pcVar2 + 1;
                  pcVar5 = pcVar5 + 1;
                } while (bVar1);
                if (bVar1) {
                  *(undefined4 *)(param_1 + 8) = 1;
                  return 1;
                }
              }
              *(undefined4 *)(param_1 + 8) = 0;
              return 1;
            }
            local_c = INI_Reader::get_value_float(param_2,0);
            local_8 = INI_Reader::get_value_float(param_2,1);
            fVar7 = INI_Reader::get_value_float(param_2,2);
            pfVar4 = (float *)(param_1 + 0x4c);
          }
        }
      }
    }
  }
  local_8 = local_8 * _DAT_005c7f68;
  *pfVar4 = local_c * _DAT_005c7f68;
  fVar7 = fVar7 * _DAT_005c7f68;
  pfVar4[1] = local_8;
  pfVar4[2] = fVar7;
  return 1;
}

