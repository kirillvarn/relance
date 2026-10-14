
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054dbe0(int param_1,INI_Reader *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined1 local_30 [8];
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [28];
  
  *(undefined4 *)(param_1 + 0x30) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  bVar1 = INI_Reader::read_value(param_2);
  pcVar8 = is_value_exref;
  if (bVar1) {
    do {
      cVar2 = (*pcVar8)("shape");
      if (cVar2 == '\0') {
        cVar2 = (*pcVar8)("count");
        if (cVar2 == '\0') {
          cVar2 = (*pcVar8)(&DAT_005e0af8);
          if (cVar2 == '\0') {
            cVar2 = (*pcVar8)("start_dist");
            if (cVar2 == '\0') {
              cVar2 = (*pcVar8)("fade_dist_percent");
              if (cVar2 == '\0') {
                cVar2 = (*pcVar8)("ambient_intensity");
                if (cVar2 == '\0') {
                  cVar2 = (*pcVar8)("color_shift");
                  if (cVar2 != '\0') {
                    local_28 = INI_Reader::get_value_float(param_2,0);
                    local_24 = INI_Reader::get_value_float(param_2,1);
                    local_20 = INI_Reader::get_value_float(param_2,2);
                    *(float *)(param_1 + 100) = local_28;
                    *(float *)(param_1 + 0x68) = local_24;
                    *(float *)(param_1 + 0x6c) = local_20;
                  }
                }
                else {
                  fVar9 = INI_Reader::get_value_float(param_2,0);
                  *(float *)(param_1 + 0x70) = fVar9;
                }
              }
              else {
                fVar10 = INI_Reader::get_value_float(param_2,0);
                fVar9 = _DAT_005c75dc;
                *(float *)(param_1 + 0x30) = fVar10;
                if (fVar9 < fVar10) {
                  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
                }
                else if (fVar10 < _DAT_005c7474) {
                  *(undefined4 *)(param_1 + 0x30) = 0;
                }
              }
            }
            else {
              fVar9 = INI_Reader::get_value_float(param_2,0);
              *(float *)(param_1 + 8) = fVar9;
            }
          }
          else {
            fVar9 = INI_Reader::get_value_float(param_2,0);
            *(float *)(param_1 + 0x24) = fVar9;
            fVar9 = INI_Reader::get_value_float(param_2,1);
            *(float *)(param_1 + 0x28) = fVar9;
            if (fVar9 < *(float *)(param_1 + 0x24)) {
              uVar7 = *(undefined4 *)(param_1 + 0x24);
              *(float *)(param_1 + 0x24) = fVar9;
              *(undefined4 *)(param_1 + 0x28) = uVar7;
            }
          }
        }
        else {
          INI_Reader::get_value_float(param_2,0);
          uVar7 = ftol();
          *(undefined4 *)(param_1 + 0x10) = uVar7;
        }
      }
      else {
        pcVar3 = INI_Reader::get_value_string(param_2);
        FUN_004205c0(pcVar3);
        cVar2 = FUN_00420690(local_1c);
        if (cVar2 == '\0') {
          piVar4 = (int *)FUN_004206c0(local_30,local_1c);
          iVar5 = *piVar4;
          *(int *)(param_3 + 0x14) = iVar5;
        }
        else {
          iVar5 = *(int *)(param_3 + 0x14);
        }
        if (iVar5 == *(int *)(param_3 + 4)) {
          iVar5 = 0;
LAB_0054dc88:
          puVar6 = (undefined4 *)FUN_00411c50(0x10000,2);
          (**(code **)FDUMP_exref)
                    (*puVar6,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                     "cmn\\ShapeDB.h",0xf2,pcVar3);
        }
        else {
          iVar5 = iVar5 + 0x28;
          if (iVar5 == 0) goto LAB_0054dc88;
        }
        pcVar8 = is_value_exref;
        *(int *)(param_1 + 0x20) = iVar5;
      }
      bVar1 = INI_Reader::read_value(param_2);
    } while (bVar1);
  }
  return;
}

