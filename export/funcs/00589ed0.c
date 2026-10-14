
undefined4 __thiscall FUN_00589ed0(int param_1,int *param_2,INI_Reader *param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  
  FUN_0059dd00(param_1,param_2);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
  if (param_3 != (INI_Reader *)0x0) {
    bVar1 = INI_Reader::read_value(param_3);
    if (bVar1) {
      do {
        bVar1 = INI_Reader::is_value(param_3,"font");
        if (bVar1) {
          pcVar2 = INI_Reader::get_value_string(param_3);
          iVar3 = FUN_004177b0(pcVar2);
          if (iVar3 != 0) {
            FUN_004ea670(iVar3);
          }
        }
        else {
          bVar1 = INI_Reader::is_value(param_3,"offset");
          if (bVar1) {
            fVar6 = INI_Reader::get_value_float(param_3,1);
            fVar7 = INI_Reader::get_value_float(param_3,0);
            fVar8 = INI_Reader::get_value_float(param_3,2);
            *(float *)(param_1 + 0xa8) = fVar7;
            *(float *)(param_1 + 0xac) = fVar6;
            *(float *)(param_1 + 0xb0) = fVar8;
          }
          else {
            bVar1 = INI_Reader::is_value(param_3,"hardpoint");
            if (bVar1) {
              puVar9 = (undefined4 *)(param_1 + 0x2f8);
              *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
              *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
              *puVar9 = 0x3f800000;
              *(undefined4 *)(param_1 + 0x314) = 0;
              *(undefined4 *)(param_1 + 0x310) = 0;
              *(undefined4 *)(param_1 + 0x30c) = 0;
              *(undefined4 *)(param_1 + 0x304) = 0;
              *(undefined4 *)(param_1 + 0x300) = 0;
              *(undefined4 *)(param_1 + 0x2fc) = 0;
              *(undefined4 *)(param_1 + 0x324) = 0;
              *(undefined4 *)(param_1 + 800) = 0;
              *(undefined4 *)(param_1 + 0x31c) = 0;
              if ((param_2 != (int *)0x0) &&
                 (piVar4 = (int *)(**(code **)(*param_2 + 8))(), piVar4 != (int *)0x0)) {
                iVar3 = *piVar4;
                pcVar2 = INI_Reader::get_value_string(param_3);
                (**(code **)(iVar3 + 0x90))(pcVar2,puVar9);
              }
            }
            else {
              bVar1 = INI_Reader::is_value(param_3,"width");
              if (bVar1) {
                fVar6 = INI_Reader::get_value_float(param_3,0);
                *(float *)(param_1 + 0x32c) = fVar6;
              }
              else {
                bVar1 = INI_Reader::is_value(param_3,"height");
                if (bVar1) {
                  fVar6 = INI_Reader::get_value_float(param_3,0);
                  *(float *)(param_1 + 0x330) = fVar6;
                }
                else {
                  bVar1 = INI_Reader::is_value(param_3,"font_scale");
                  if (!bVar1) {
                    bVar1 = INI_Reader::is_value(param_3,"stringID");
                    if (bVar1) {
                      INI_Reader::get_value_float(param_3,0);
                      uVar5 = ftol();
                      FUN_0058a5f0(uVar5);
                    }
                    else {
                      bVar1 = INI_Reader::is_value(param_3,"justification");
                      if (bVar1) {
                        INI_Reader::get_value_float(param_3,0);
                        uVar5 = ftol();
                        *(undefined4 *)(param_1 + 0x358) = uVar5;
                      }
                      else {
                        bVar1 = INI_Reader::is_value(param_3,"tooltip");
                        if (bVar1) {
                          INI_Reader::get_value_float(param_3,0);
                          uVar5 = ftol();
                          *(undefined4 *)(param_1 + 0x344) = uVar5;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        bVar1 = INI_Reader::read_value(param_3);
      } while (bVar1);
    }
  }
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x14))(piVar4 + 0x18);
  }
  return 1;
}

