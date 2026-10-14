
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_004023f0(INI_Reader *param_1,float *param_2)

{
  bool bVar1;
  float *pfVar2;
  char *pcVar3;
  float fVar4;
  undefined1 local_5;
  float *local_4;
  
  local_5 = 0;
  local_4 = (float *)0x0;
  bVar1 = INI_Reader::read_value(param_1);
  if (bVar1) {
    do {
      bVar1 = INI_Reader::is_value(param_1,"obj");
      if (bVar1) {
        pfVar2 = operator_new(0x34);
        if (pfVar2 == (float *)0x0) {
          pfVar2 = (float *)0x0;
        }
        else {
          pfVar2[9] = 0.0;
          *(undefined1 *)(pfVar2 + 10) = 0;
          pfVar2[0xb] = 1.4013e-45;
          pfVar2[0xc] = 0.0;
          *pfVar2 = -1.0;
        }
        local_4 = pfVar2;
        pcVar3 = INI_Reader::get_value_string(param_1);
        fVar4 = (float)DACOM_CRC::GetCRC32(pcVar3);
        pfVar2[9] = fVar4;
      }
      else {
        local_5 = FUN_00402310(param_1,&local_4);
        pfVar2 = local_4;
      }
      bVar1 = INI_Reader::read_value(param_1);
    } while (bVar1);
    if (pfVar2 != (float *)0x0) {
      if (*pfVar2 < _DAT_005c7474) {
        FUN_005b7e1d(pfVar2);
        return local_5;
      }
      pfVar2[0xc] = *param_2;
      *param_2 = (float)pfVar2;
    }
  }
  return local_5;
}

