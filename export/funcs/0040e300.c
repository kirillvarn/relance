
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040e300(void)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *extraout_ECX;
  uint uVar8;
  int *piVar9;
  float fVar10;
  INI_Reader *in_stack_00002008;
  char *pcVar11;
  
  FUN_005b7e90();
  bVar1 = INI_Reader::is_value(in_stack_00002008,"nickname");
  if (bVar1) {
    pcVar3 = INI_Reader::get_value_string(in_stack_00002008);
    uVar4 = CreateID(pcVar3);
    extraout_ECX[1] = uVar4;
    return 1;
  }
  bVar1 = INI_Reader::is_value(in_stack_00002008,"effect_type");
  if (bVar1) {
    pcVar3 = INI_Reader::get_value_string(in_stack_00002008);
    iVar5 = FUN_004fd500(pcVar3);
    *extraout_ECX = iVar5;
    if (iVar5 == 0x2f) {
      INI_Reader::log_link(in_stack_00002008,"");
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : ERROR:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x3a,"unknown effect type");
      return 1;
    }
    iVar5 = FUN_004fd560(iVar5);
    if (iVar5 != 0) {
      if (*(float *)(iVar5 + 0x18) < _DAT_005c7474) {
        *(byte *)(extraout_ECX + 0x14) =
             (*(byte *)(extraout_ECX + 0x14) ^ 1) & 1 ^ *(byte *)(extraout_ECX + 0x14);
        return 1;
      }
      *(byte *)(extraout_ECX + 0x14) =
           *(byte *)(extraout_ECX + 0x14) & 1 ^ *(byte *)(extraout_ECX + 0x14);
      return 1;
    }
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: EffectTypeInfo missing for EffectType (%d)",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x47,*extraout_ECX);
    return 1;
  }
  bVar1 = INI_Reader::is_value(in_stack_00002008,"vis_effect");
  if (bVar1) {
    pcVar3 = INI_Reader::get_value_string(in_stack_00002008);
    pcVar3 = StringAlloc(pcVar3,false);
    piVar6 = (int *)FUN_0042dd20(&stack0x00000000);
    extraout_ECX[2] = (int)piVar6;
    if (piVar6 != (int *)0x0) {
      extraout_ECX[3] = *piVar6;
    }
    iVar5 = extraout_ECX[2];
  }
  else {
    bVar1 = INI_Reader::is_value(in_stack_00002008,"vis_generic");
    if (!bVar1) {
      bVar1 = INI_Reader::is_value(in_stack_00002008,"vis_beam");
      if (bVar1) {
        pcVar3 = INI_Reader::get_value_string(in_stack_00002008);
        pcVar3 = StringAlloc(pcVar3,false);
        iVar5 = FUN_0042e9e0(&stack0x00000000);
        extraout_ECX[5] = iVar5;
        if (iVar5 != 0) {
          return 1;
        }
        pcVar7 = ID_String::get_string((ID_String *)(extraout_ECX + 1));
        pcVar11 = "[Effect] %s couldn\'t find [VisBeam] %s.";
      }
      else {
        bVar1 = INI_Reader::is_value(in_stack_00002008,"snd_effect");
        if (!bVar1) {
          bVar1 = INI_Reader::is_value(in_stack_00002008,"lgt_effect");
          if (!bVar1) {
            bVar1 = INI_Reader::is_value(in_stack_00002008,"lgt_range_scale");
            if (bVar1) {
              fVar10 = INI_Reader::get_value_float(in_stack_00002008,0);
              extraout_ECX[0x10] = (int)fVar10;
              return 1;
            }
            bVar1 = INI_Reader::is_value(in_stack_00002008,"lgt_time_scale");
            if (bVar1) {
              fVar10 = INI_Reader::get_value_float(in_stack_00002008,0);
              extraout_ECX[0x11] = (int)fVar10;
              return 1;
            }
            bVar1 = INI_Reader::is_value(in_stack_00002008,"lgt_radius");
            if (bVar1) {
              fVar10 = INI_Reader::get_value_float(in_stack_00002008,0);
              extraout_ECX[0x12] = (int)fVar10;
              return 1;
            }
            bVar1 = INI_Reader::is_value(in_stack_00002008,"lgt_color");
            if (bVar1) {
              INI_Reader::get_value_float(in_stack_00002008,0);
              uVar2 = ftol();
              *(undefined1 *)(extraout_ECX + 0x13) = uVar2;
              INI_Reader::get_value_float(in_stack_00002008,1);
              uVar2 = ftol();
              *(undefined1 *)((int)extraout_ECX + 0x4d) = uVar2;
              INI_Reader::get_value_float(in_stack_00002008,2);
              uVar2 = ftol();
              *(undefined1 *)((int)extraout_ECX + 0x4e) = uVar2;
              return 1;
            }
            return 0;
          }
          piVar6 = (int *)INI_Reader::get_value_string(in_stack_00002008);
          if (piVar6 == (int *)0x0) {
            extraout_ECX[7] = 0;
            *(undefined1 *)(extraout_ECX + 8) = 0;
            return 1;
          }
          uVar4 = 0xffffffff;
          piVar9 = piVar6;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            iVar5 = *piVar9;
            piVar9 = (int *)((int)piVar9 + 1);
          } while ((char)iVar5 != '\0');
          uVar4 = ~uVar4 - 1;
          if (0x1f < uVar4) {
            uVar4 = 0x1f;
          }
          piVar9 = extraout_ECX + 8;
          for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *piVar9 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
          }
          for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)piVar9 = (char)*piVar6;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar9 = (int *)((int)piVar9 + 1);
          }
          *(undefined1 *)(uVar4 + (int)(extraout_ECX + 8)) = 0;
          extraout_ECX[7] = uVar4;
          return 1;
        }
        pcVar3 = INI_Reader::get_value_string(in_stack_00002008);
        CreateID(pcVar3);
        iVar5 = FUN_0042ae40(&stack0x00000000);
        extraout_ECX[6] = iVar5;
        if (iVar5 != 0) {
          return 1;
        }
        pcVar3 = ID_String::get_string((ID_String *)&stack0x00000000);
        pcVar7 = ID_String::get_string((ID_String *)(extraout_ECX + 1));
        pcVar11 = "[Effect] %s couldn\'t find [Sound] %s.";
      }
      goto LAB_0040e49b;
    }
    pcVar3 = INI_Reader::get_value_string(in_stack_00002008);
    pcVar3 = StringAlloc(pcVar3,false);
    iVar5 = FUN_0042dd20(&stack0x00000000);
    extraout_ECX[4] = iVar5;
  }
  if (iVar5 != 0) {
    return 1;
  }
  pcVar7 = ID_String::get_string((ID_String *)(extraout_ECX + 1));
  pcVar11 = "[Effect] %s couldn\'t find [VisEffect] %s.";
LAB_0040e49b:
  pcVar3 = (char *)FUN_00402180(&stack0x00000004,pcVar11,pcVar7,pcVar3);
  INI_Reader::log_link(in_stack_00002008,pcVar3);
  return 1;
}

