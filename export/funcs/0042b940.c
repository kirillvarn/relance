
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0042b940(int param_1,INI_Reader *param_2)

{
  INI_Reader *this;
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  uint *puVar8;
  float fVar9;
  
  this = param_2;
  bVar1 = INI_Reader::is_value(param_2,"file");
  if (bVar1) {
    pcVar3 = INI_Reader::get_value_string(this);
    CacheString::clear((CacheString *)&param_2);
    pcVar3 = StringAlloc(pcVar3,true);
    *(char **)(param_1 + 8) = pcVar3;
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"attenuation");
  if (bVar1) {
    INI_Reader::get_value_float(this,0);
    uVar2 = ftol();
    *(undefined1 *)(param_1 + 0x18) = uVar2;
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"range");
  if (bVar1) {
    fVar9 = INI_Reader::get_value_float(this,0);
    *(float *)(param_1 + 0x10) = fVar9;
    bVar1 = INI_Reader::is_value_empty(this,1);
    if (bVar1) {
      *(float *)(param_1 + 0x14) = _DAT_00610984 * *(float *)(param_1 + 0x10);
      return 1;
    }
    fVar9 = INI_Reader::get_value_float(this,1);
    *(float *)(param_1 + 0x14) = fVar9;
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"persistent");
  if (bVar1) {
    pcVar3 = INI_Reader::get_value_string(this);
    iVar4 = stricmp("space",pcVar3);
    if (iVar4 == 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xff1fffff | 0x100000;
      return 1;
    }
    iVar4 = stricmp("gameflow",pcVar3);
    if (iVar4 == 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xff2fffff | 0x200000;
      return 1;
    }
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: unknown \'persistent\' value %s.\n",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x2fd,pcVar3);
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"type");
  if (bVar1) {
    pcVar3 = INI_Reader::get_value_string(this);
    ppuVar7 = &PTR_s_normal_00610988;
    uVar6 = 0;
    do {
      if (*ppuVar7 != (char *)0x0) {
        iVar4 = stricmp(pcVar3,*ppuVar7);
        if (iVar4 == 0) {
          *(uint *)(param_1 + 0x18) =
               ((int)ppuVar7[1] << 0x10 ^ *(uint *)(param_1 + 0x18)) & 0xf0000 ^
               *(uint *)(param_1 + 0x18);
          return 1;
        }
      }
      uVar6 = uVar6 + 8;
      ppuVar7 = ppuVar7 + 2;
    } while (uVar6 < 0x28);
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: unknown \'type\' value %s.\n",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x30a,pcVar3);
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"streamer");
  if (bVar1) {
    uVar6 = *(uint *)(param_1 + 0x18);
    bVar1 = INI_Reader::get_value_bool(this,0);
    *(uint *)(param_1 + 0x18) = (uint)bVar1 << 0x1a ^ uVar6 & 0xfbffffff;
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"is_2d");
  if (bVar1) {
    bVar1 = INI_Reader::get_value_bool(this,0);
    *(uint *)(param_1 + 0x18) = (uint)bVar1 << 0x1b ^ *(uint *)(param_1 + 0x18) & 0xf7ffffff;
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"pitch_bendable");
  if (bVar1) {
    uVar6 = *(uint *)(param_1 + 0x18);
    bVar1 = INI_Reader::get_value_bool(this,0);
    *(uint *)(param_1 + 0x18) = (uint)bVar1 << 0x18 ^ uVar6 & 0xfeffffff;
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"crv_pitch");
  if (bVar1) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x3000000;
    INI_Reader::get_value_float(this,0);
    uVar2 = ftol();
    *(undefined1 *)(param_1 + 0x19) = uVar2;
    return 1;
  }
  bVar1 = INI_Reader::is_value(this,"lod1");
  if (bVar1) {
    uVar6 = 0;
  }
  else {
    bVar1 = INI_Reader::is_value(this,"lod2");
    if (!bVar1) {
      pcVar3 = INI_Reader::get_name_ptr(this);
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: unknown [Sound] parameter %s.\n",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x329,pcVar3);
      INI_Reader::log_link(this,"");
      return 0;
    }
    uVar6 = 1;
  }
  pcVar3 = INI_Reader::get_value_string(this);
  uVar5 = CreateID(pcVar3);
  if (uVar6 < 2) {
    puVar8 = (uint *)(param_1 + 0x1c + uVar6 * 4);
    for (iVar4 = 2 - uVar6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = uVar5;
      puVar8 = puVar8 + 1;
    }
  }
  return 1;
}

