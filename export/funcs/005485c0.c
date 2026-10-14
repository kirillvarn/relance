
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005485c0(undefined4 *param_1,INI_Reader *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  float local_244;
  float local_240;
  float local_23c;
  undefined1 local_22c [32];
  undefined4 local_20c;
  undefined1 local_208 [260];
  char local_104 [260];
  
  FUN_00533e10();
  bVar4 = INI_Reader::read_value(param_2);
  if (bVar4) {
    do {
      bVar4 = INI_Reader::is_value(param_2,"ring");
      if (bVar4) {
        pcVar5 = INI_Reader::get_value_string(param_2,0);
        local_22c[0] = 0;
        if (pcVar5 == (char *)0x0) {
          local_22c[0] = 0;
        }
        else {
          FUN_00417c50(local_22c,0x20,pcVar5);
        }
        pcVar5 = INI_Reader::get_value_string(param_2,1);
        local_20c = 0;
        local_208[0] = 0;
        if (pcVar5 == (char *)0x0) {
          local_20c = 0;
          local_208[0] = 0;
        }
        else {
          local_20c = FUN_00417c50(local_208,0x104,pcVar5);
        }
        piVar6 = (int *)FUN_0050bfa0();
        (**(code **)(*piVar6 + 4))(local_208,local_22c);
      }
      else {
        bVar4 = INI_Reader::is_value(param_2,"burn_color");
        if (bVar4) {
          bVar4 = INI_Reader::is_value(param_2,"burn_color");
          if (bVar4) {
            local_240 = INI_Reader::get_value_float(param_2,1);
            local_244 = INI_Reader::get_value_float(param_2,0);
            local_23c = INI_Reader::get_value_float(param_2,2);
          }
          fVar2 = local_240 * _DAT_005c7f68;
          param_1[0x7d] = local_244 * _DAT_005c7f68;
          fVar3 = local_23c * _DAT_005c7f68;
          param_1[0x7e] = fVar2;
          param_1[0x7f] = fVar3;
        }
        else {
          bVar4 = INI_Reader::is_value(param_2,"dock_script");
          if (bVar4) {
            pcVar5 = INI_Reader::get_value_string(param_2);
            if (pcVar5 == (char *)0x0) {
              param_1[0x3a] = 0;
              *(undefined1 *)(param_1 + 0x3b) = 0;
            }
            else {
              uVar8 = 0xffffffff;
              pcVar11 = pcVar5;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8 - 1;
              if (0x103 < uVar8) {
                uVar8 = 0x103;
              }
              pcVar11 = (char *)(param_1 + 0x3b);
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
                pcVar5 = pcVar5 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *pcVar11 = *pcVar5;
                pcVar5 = pcVar5 + 1;
                pcVar11 = pcVar11 + 1;
              }
              *(undefined1 *)(uVar8 + 0xec + (int)param_1) = 0;
              param_1[0x3a] = uVar8;
            }
          }
          else {
            bVar4 = INI_Reader::is_value(param_2,"voice");
            if (bVar4) {
              pcVar5 = INI_Reader::get_value_string(param_2);
              if ((((param_1 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0xfffffff4)) ||
                  (iVar10 = param_1[4], iVar10 == 0)) ||
                 ((*(uint *)(iVar10 + 0x4c) & 0x303) != 0x303)) {
                iVar10 = 0;
              }
              uVar8 = CreateID(pcVar5);
              *(uint *)(iVar10 + 0x13c) = uVar8;
            }
            else {
              bVar4 = INI_Reader::is_value(param_2,"jump_effect");
              if (bVar4) {
                pcVar5 = INI_Reader::get_value_string(param_2);
                uVar8 = CreateID(pcVar5);
                param_1[0x80] = uVar8;
              }
              else {
                bVar4 = INI_Reader::is_value(param_2,"star");
                if (bVar4) {
                  uVar7 = FUN_0050c630(param_1);
                  param_1[0x39] = uVar7;
                  GetFileSysPath(local_104,"solar\\stararch.ini",*(IFileSystem **)Data_exref);
                  iVar10 = *(int *)param_1[0x39];
                  pcVar5 = INI_Reader::get_value_string(param_2);
                  (**(code **)(iVar10 + 4))(local_104,pcVar5);
                }
              }
            }
          }
        }
      }
      bVar4 = INI_Reader::read_value(param_2);
    } while (bVar4);
  }
  uVar7 = (**(code **)*param_1)(param_1 + 0xf,0);
  uVar7 = FUN_005553b0(uVar7);
  param_1[0xe] = uVar7;
  return;
}

