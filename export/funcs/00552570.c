
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00552570(float *param_1,INI_Reader *param_2)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x53) != '\0') {
    *(undefined1 *)(param_1 + 0x53) = 0;
  }
  param_1[0x52] = 0.0;
  bVar1 = INI_Reader::read_value(param_2);
  if (bVar1) {
    do {
      bVar1 = INI_Reader::is_value(param_2,"gap");
      if (bVar1) {
        fVar3 = INI_Reader::get_value_float(param_2,0);
        param_1[10] = fVar3;
      }
      else {
        bVar1 = INI_Reader::is_value(param_2,"color");
        if (bVar1) {
          fVar4 = INI_Reader::get_value_float(param_2,0);
          fVar5 = INI_Reader::get_value_float(param_2,1);
          fVar3 = INI_Reader::get_value_float(param_2,2);
          fVar5 = fVar5 * _DAT_005c7f68;
          param_1[7] = fVar4 * _DAT_005c7f68;
          fVar3 = fVar3 * _DAT_005c7f68;
          param_1[8] = fVar5;
          param_1[9] = fVar3;
        }
        else {
          bVar1 = INI_Reader::is_value(param_2,"size");
          if (bVar1) {
            fVar3 = INI_Reader::get_value_float(param_2,0);
            param_1[0xb] = fVar3;
          }
          else {
            bVar1 = INI_Reader::is_value(param_2,"duration");
            if (bVar1) {
              fVar3 = INI_Reader::get_value_float(param_2,0);
              param_1[0xc] = fVar3;
            }
          }
        }
      }
      bVar1 = INI_Reader::read_value(param_2);
    } while (bVar1);
  }
  param_1[6] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  iVar2 = rand();
  *(undefined1 *)(param_1 + 0x53) = 1;
  *param_1 = ((float)_DAT_005e0df8 - (float)iVar2 * _DAT_005caeec * (float)_DAT_005db0b8) *
             param_1[10];
  return;
}

