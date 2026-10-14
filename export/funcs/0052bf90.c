
undefined4 __thiscall FUN_0052bf90(FuseAction *param_1,INI_Reader *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = INI_Reader::read_value(param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    do {
      bVar1 = FuseAction::ReadFuseActionValue(param_1,param_2);
      if (!bVar1) {
        bVar1 = INI_Reader::is_value(param_2,"hardpoint");
        if (bVar1) {
          pcVar2 = INI_Reader::get_value_string(param_2);
          pcVar2 = StringAlloc(pcVar2,false);
          *(char **)(param_1 + 0x28) = pcVar2;
        }
        else {
          bVar1 = INI_Reader::is_value(param_2,"force");
          if (bVar1) {
            fVar4 = INI_Reader::get_value_float(param_2,0);
            *(float *)(param_1 + 0x2c) = fVar4;
          }
          else {
            bVar1 = INI_Reader::is_value(param_2,"radius");
            if (bVar1) {
              fVar4 = INI_Reader::get_value_float(param_2,0);
              *(float *)(param_1 + 0x30) = fVar4;
            }
            else {
              bVar1 = INI_Reader::is_value(param_2,"pos_offset");
              if (bVar1) {
                fVar4 = INI_Reader::get_value_float(param_2,2);
                fVar5 = INI_Reader::get_value_float(param_2,1);
                fVar6 = INI_Reader::get_value_float(param_2,0);
                *(float *)(param_1 + 0x34) = fVar6;
                *(float *)(param_1 + 0x38) = fVar5;
                *(float *)(param_1 + 0x3c) = fVar4;
              }
            }
          }
        }
      }
      bVar1 = INI_Reader::read_value(param_2);
      uVar3 = extraout_var_00;
    } while (bVar1);
  }
  return CONCAT31(uVar3,1);
}

