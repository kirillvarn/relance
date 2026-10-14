
undefined4 __thiscall FUN_00407bd0(int param_1,INI_Reader *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  cVar1 = FUN_00406dc0(param_2);
  if (cVar1 == '\0') {
    bVar2 = INI_Reader::is_value(param_2,"shape_name");
    if (bVar2) {
      pcVar3 = INI_Reader::get_value_string(param_2);
      if (pcVar3 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined1 *)(param_1 + 0x60) = 0;
        return 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = pcVar3;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      if (0x1f < uVar5) {
        uVar5 = 0x1f;
      }
      pcVar7 = (char *)(param_1 + 0x60);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(undefined1 *)(uVar5 + 0x60 + param_1) = 0;
      *(uint *)(param_1 + 0x5c) = uVar5;
      return 1;
    }
    bVar2 = INI_Reader::is_value(param_2,"infocard_ids");
    if (!bVar2) {
      bVar2 = INI_Reader::is_value(param_2,"ids_info");
      if (!bVar2) {
        bVar2 = INI_Reader::is_value(param_2,"open_sound");
        if (bVar2) {
          pcVar3 = INI_Reader::get_value_string(param_2);
          uVar5 = CreateID(pcVar3);
          *(uint *)(param_1 + 0x54) = uVar5;
          return 1;
        }
        bVar2 = INI_Reader::is_value(param_2,"close_sound");
        if (bVar2) {
          pcVar3 = INI_Reader::get_value_string(param_2);
          uVar5 = CreateID(pcVar3);
          *(uint *)(param_1 + 0x58) = uVar5;
          return 1;
        }
        bVar2 = INI_Reader::is_value(param_2,"animated_textures");
        if (bVar2) {
          bVar2 = INI_Reader::get_value_bool(param_2,0);
          *(bool *)(param_1 + 0x84) = bVar2;
          return 1;
        }
        return 0;
      }
    }
    iVar4 = INI_Reader::get_value_int(param_2,0);
    *(int *)(param_1 + 0x80) = iVar4;
  }
  return 1;
}

