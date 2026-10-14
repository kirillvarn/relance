
undefined4 __thiscall FUN_0040a4d0(int param_1,INI_Reader *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  float fVar7;
  
  cVar1 = FUN_00406dc0(param_2);
  if (cVar1 == '\0') {
    bVar2 = INI_Reader::is_value(param_2,"flash_radius");
    if (!bVar2) {
      bVar2 = INI_Reader::is_value(param_2,"light_anim");
      if (!bVar2) {
        bVar2 = INI_Reader::is_value(param_2,"flash_particle_name");
        if (bVar2) {
          pcVar3 = INI_Reader::get_value_string(param_2);
          uVar4 = CreateID(pcVar3);
          *(uint *)(param_1 + 0x54) = uVar4;
          return 1;
        }
        bVar2 = INI_Reader::is_value(param_2,"dry_fire_sound");
        if (bVar2) {
          pcVar3 = INI_Reader::get_value_string(param_2);
          uVar4 = CreateID(pcVar3);
          *(uint *)(param_1 + 0x80) = uVar4;
          return 1;
        }
        return 0;
      }
      pcVar3 = INI_Reader::get_value_string(param_2);
      if (pcVar3 == (char *)0x0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined1 *)(param_1 + 0x60) = 0;
        return 1;
      }
      uVar4 = 0xffffffff;
      pcVar6 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      if (0x1f < uVar4) {
        uVar4 = 0x1f;
      }
      pcVar6 = (char *)(param_1 + 0x60);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *(undefined1 *)(uVar4 + 0x60 + param_1) = 0;
      *(uint *)(param_1 + 0x5c) = uVar4;
      return 1;
    }
    fVar7 = INI_Reader::get_value_float(param_2,0);
    *(float *)(param_1 + 0x58) = fVar7;
  }
  return 1;
}

