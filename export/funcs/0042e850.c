
bool FUN_0042e850(INI_Reader *param_1)

{
  INI_Reader *this;
  bool bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  this = param_1;
  puVar3 = (undefined4 *)0x0;
  bVar1 = INI_Reader::read_value(param_1);
  if (bVar1) {
    do {
      bVar1 = INI_Reader::is_value(this,"nickname");
      if (bVar1) {
        CacheString::clear((CacheString *)&param_1);
        pcVar2 = INI_Reader::get_value_string(this);
        param_1 = (INI_Reader *)StringAlloc(pcVar2,false);
        puVar3 = (undefined4 *)FUN_0042ed30(&param_1);
        *puVar3 = param_1;
        bVar1 = INI_Reader::is_header(this,"BeamSpear");
        if (bVar1) {
          puVar3[1] = 0;
        }
        else {
          bVar1 = INI_Reader::is_header(this,"BeamBolt");
          if (bVar1) {
            puVar3[1] = 1;
          }
        }
      }
      else if (puVar3 != (undefined4 *)0x0) {
        FUN_0042e4a0(this);
      }
      bVar1 = INI_Reader::read_value(this);
    } while (bVar1);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_0042e920();
    }
  }
  return puVar3 != (undefined4 *)0x0;
}

