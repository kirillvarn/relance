
undefined1 FUN_0042dae0(INI_Reader *param_1)

{
  bool bVar1;
  char *_Str1;
  int iVar2;
  uint uVar3;
  float fVar4;
  char *local_1c [7];
  
  bVar1 = INI_Reader::read_value(param_1);
  if ((!bVar1) || (bVar1 = INI_Reader::is_value(param_1,"type"), !bVar1)) {
    return 0;
  }
  _Str1 = INI_Reader::get_value_string(param_1);
  local_1c[0] = "none";
  local_1c[1] = "lod_type_trail";
  local_1c[2] = "lod_type_weapon";
  local_1c[3] = "lod_type_small";
  local_1c[4] = "lod_type_medium";
  local_1c[5] = "lod_type_large";
  local_1c[6] = "lod_type_small_distant";
  uVar3 = 1;
  do {
    iVar2 = stricmp(_Str1,local_1c[uVar3]);
    if (iVar2 == 0) {
      if ((float *)(&DAT_00667d90 + uVar3 * 3) != (float *)0x0) {
        bVar1 = INI_Reader::read_value(param_1);
        if (!bVar1) {
          return 1;
        }
        do {
          bVar1 = INI_Reader::is_value(param_1,"max_lod_screen_size");
          if (bVar1) {
            fVar4 = INI_Reader::get_value_float(param_1,0);
            (&DAT_00667d90)[uVar3 * 3] = fVar4;
          }
          else {
            bVar1 = INI_Reader::is_value(param_1,"min_lod_screen_size");
            if (bVar1) {
              fVar4 = INI_Reader::get_value_float(param_1,0);
              (&DAT_00667d94)[uVar3 * 3] = fVar4;
            }
            else {
              bVar1 = INI_Reader::is_value(param_1,"min_screen_size");
              if (bVar1) {
                fVar4 = INI_Reader::get_value_float(param_1,0);
                (&DAT_00667d98)[uVar3 * 3] = fVar4;
              }
            }
          }
          bVar1 = INI_Reader::read_value(param_1);
        } while (bVar1);
        return 1;
      }
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: invalid LOD type (%s)",
             "E:\\FL\\Scratch\\Source\\Client\\cmn\\VisEffectArch.cpp",0x69,_Str1);
  INI_Reader::log_link(param_1,"");
  return 0;
}

