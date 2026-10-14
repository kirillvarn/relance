
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0054c630(int *param_1,INI_Reader *param_2,int param_3)

{
  INI_Reader *this;
  bool bVar1;
  char *pcVar2;
  int iVar3;
  INI_Reader *pIVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_1c [28];
  
  this = param_2;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[2] = 0x3f800000;
  param_1[0x16] = 1;
  bVar1 = INI_Reader::read_value(param_2);
  if (bVar1) {
    do {
      bVar1 = INI_Reader::is_value(this,"shape");
      if (bVar1) {
        pcVar2 = INI_Reader::get_value_string(this);
        pIVar4 = (INI_Reader *)0x0;
        FUN_004205c0(pcVar2);
        FUN_00512660(&param_2,local_1c);
        if ((param_2 == *(INI_Reader **)(param_3 + 4)) ||
           (pIVar4 = param_2 + 0x28, pIVar4 == (INI_Reader *)0x0)) {
          (**(code **)FDUMP_exref)
                    (0x100002,"%s(%d) : *** WARNING: ShapeDB: unable to find shape \'%s\'",
                     "cmn\\ShapeDB.h",0xf2,pcVar2);
        }
        *param_1 = (int)pIVar4;
      }
      else {
        bVar1 = INI_Reader::is_value(this,"texture_aspect");
        if (bVar1) {
          fVar5 = INI_Reader::get_value_float(this,0);
          param_1[0x10] = (int)(fVar5 * (float)_DAT_005e0ac0);
        }
        else {
          bVar1 = INI_Reader::is_value(this,"height");
          if (bVar1) {
            fVar5 = INI_Reader::get_value_float(this,0);
            param_1[0x12] = (int)fVar5;
          }
          else {
            bVar1 = INI_Reader::is_value(this,"offset_dist");
            if (bVar1) {
              *(undefined1 *)(param_1 + 0x1d) = 0;
              fVar5 = INI_Reader::get_value_float(this,0);
              param_1[0x1e] = (int)fVar5;
            }
            else {
              bVar1 = INI_Reader::is_value(this,"offset_percent");
              if (bVar1) {
                *(undefined1 *)(param_1 + 0x1d) = 1;
                fVar5 = INI_Reader::get_value_float(this,0);
                param_1[0x1e] = (int)fVar5;
              }
              else {
                bVar1 = INI_Reader::is_value(this,"color_shift");
                if (bVar1) {
                  fVar5 = INI_Reader::get_value_float(this,0);
                  fVar6 = INI_Reader::get_value_float(this,1);
                  fVar7 = INI_Reader::get_value_float(this,2);
                  param_1[9] = (int)fVar5;
                  param_1[10] = (int)fVar6;
                  param_1[0xb] = (int)fVar7;
                }
                else {
                  bVar1 = INI_Reader::is_value(this,"fade");
                  if (bVar1) {
                    fVar5 = INI_Reader::get_value_float(this,0);
                    param_1[0x19] = (int)fVar5;
                    fVar5 = INI_Reader::get_value_float(this,1);
                    param_1[0x1a] = (int)fVar5;
                    fVar5 = INI_Reader::get_value_float(this,2);
                    param_1[0x1b] = (int)fVar5;
                    fVar5 = INI_Reader::get_value_float(this,3);
                    param_1[0x1c] = (int)fVar5;
                  }
                  else {
                    bVar1 = INI_Reader::is_value(this,"vert_increase");
                    if (bVar1) {
                      INI_Reader::get_value_float(this,0);
                      iVar3 = ftol();
                      param_1[0x13] = iVar3;
                      if (iVar3 < 1) {
                        param_1[0x13] = 1;
                      }
                    }
                    else {
                      bVar1 = INI_Reader::is_value(this,"render_parts");
                      if (bVar1) {
                        INI_Reader::get_value_float(this,0);
                        iVar3 = ftol();
                        param_1[0x16] = iVar3;
                        if (iVar3 < 1) {
                          param_1[0x16] = 1;
                        }
                      }
                      else {
                        bVar1 = INI_Reader::is_value(this,"cull_mode");
                        if (bVar1) {
                          INI_Reader::get_value_float(this,0);
                          iVar3 = ftol();
                          param_1[0x14] = iVar3;
                        }
                        else {
                          bVar1 = INI_Reader::is_value(this,"ambient_intensity");
                          if (bVar1) {
                            fVar5 = INI_Reader::get_value_float(this,0);
                            param_1[2] = (int)fVar5;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = INI_Reader::read_value(this);
    } while (bVar1);
  }
  return;
}

